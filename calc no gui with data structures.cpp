#include<iostream>
#include<stack>
#include<cmath>

using namespace std;

int prior(char c){
    if(c=='-' || c=='+')
        return 1;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='^')
        return 3;
cout<<endl<<"done"<<endl;
return 0;
}

float evaluatePostfix(string exp){
    stack<float> stack;
    for(long long unsigned int i=0;i<exp.length(); i++){
        if(isdigit(exp[i])){
            int num=0;
            while (isdigit(exp[i])){
                num = num *10 +(int)(exp[i] - '0');
                i++;
            }
            i--;
            stack.push((float)num);
        }
        else{
            float val1 = stack.top();
            stack.pop();
            float val2 = stack.top();
            stack.pop();

            switch(exp[i]){
            case '+':
                stack.push(val2+val1);
                break;
            case '-':
                stack.push(val2-val1);
                break;
            case '*':
                stack.push(val2 * val1);
                break;
            case '/':
                stack.push(val2 / val1);
                break;
            case '^':
                stack.push(pow(val2,val1));
                break;
            case 's':
                stack.push(sin(val1));
                break;
            case 'c':
                stack.push(cos(val1));
                break;
            case 't':
                stack.push(tan(val1));
                break;
            case 'l':
                stack.push(log10(val1));
                break;
            case 'r':
                stack.push(sqrt(val1));
                break;
            }
        }
    }
    return stack.top();
}

string infixToPostfix(string x){
    stack<char> st;
    string out;
    for(long long unsigned int i=0;i<x.length() ; i++){
        if(x[i]==' ') continue;
        else if(x[i]=='(')st.push('(');
        else if (x[i]==')'){
            while(st.top() != '('){out+= st.top(); st.pop();}
            st.pop();
        }
        else if(x[i]=='*' || x[i]=='/' || x[i]=='+' || x[i]=='-' || x[i] =='^'){
            while(!st.empty() && prior(x[i] <= prior(st.top()))){out+=st.top();st.pop();}
            st.push(x[i]);
        }
        else out+= x[i];
    }
    while(!st.empty()){out+=st.top();st.pop();}
    return out;
    }



int main(){
    string expression;
    cout<<"Enter an infix expression: ";
    getline(cin,expression);
    string post = infixToPostfix(expression);
    float result = evaluatePostfix(post);
    cout<<"Result "<<result<<endl;

    return 0;
}
