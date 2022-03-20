#include <iostream>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "bib.h"

using namespace std;

void printerror(){
    cout << "error" << endl;
}

void printhelp() {
    setlocale(LC_ALL, "rus");     
    cout << " -a первый аргумент" << endl;
}

// -a первый аргумент
// -b второй аргумент
// -o операции над числами (сложение, вычитание, умножение)
// -h справка
int main(int argc, char *argv[])
{
int rs;
string result = "";
string op = "";
string firstarg = 0;
string secondarg = 0;
while ((rs=getopt(argc, argv, ":a:b:c:o:h")) !=-1){
    switch(rs){
        case 'a': firstarg = atoi(optarg); break;
        case 'b': secondarg = atoi(optarg); break;
        //case 'c': result = (optarg); break;
        case 'o': op.assign(optarg); break;
        case 'h': printhelp(); exit(0);
        case '?': printerror(); exit(1); // не введено значение
        case ':': printerror(); exit(1); // неправильная опция
        default: printerror; exit(1);
    };
}
if ( (result == " ") || (op == " "))
{
    printerror();
    return(1);
}
else {
    if (op == "add") {
        add(firstarg, secondarg);
    }
    else
        if (op == "sub") {
            sub(firstarg, secondarg);
        }
        else
            if (op == "mul") {
                multi(firstarg, secondarg);
            }
            else {
                printerror();
                return 1;
            }
    cout << firstarg << " " << secondarg << " " << result << " " << op << endl;
}
return 0;
}