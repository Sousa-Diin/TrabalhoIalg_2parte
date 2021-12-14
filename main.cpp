/*Segunda parte do trabalho de IALG
 * Tema do trabalho: " Carro "
 * Identificador : placa
 * 
 * NOME: Wildes Augusto de Sousa -                       Matricula: 202020602    Turma:  22A
 * NOME: Jonatha Levi dos Santos Lustosa -           Matricula: 202020161    Turma:  22A
 * 
 // OBSERVACOES SOBRE O PROGRAMA \\
 * 
 * No presente algorito não foi possivel desenvolver algumas funcoes, devido a falta de gestao de tempo
 * motivos esses que, culminou na finalizacao do mesmo, e na  entregar um algoritmo potencialmente utilizável.
 */

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include<cstring>
using std::string;
using std::getline;
using std::strcpy;

#include<stdlib.h>

#include <iomanip>
// usado para ajustar a largura no modo de exibicao
using std::setw; 

//Capacidade de amarzenamento do vetor cadastro
#define capacity 100 

    struct Carro
    {
        char placa[10]; 
        string modelo;
        string marca;
        short ano_lancmento;
        string descricao;

    };

    /*********PROTOTIPO DAS FUNCOES***********/
    void menu();
    void insert ();
    void exibir();
    void alterar ();
    void sair ();
    void delay();
    
    
    /*************FUNCAO PRINCIPAL****************/
      int main()  
    {
            menu();
            return 0;
    } 
    
    
    /*******FUNCAO DE ATRASO DELAY************/
    void delay(long int tmp) 
    {
        for (int time = 0; time < tmp;time++ );
    }
    /***********FUNCAO INSERIR*********************/
    void insert ()
    {

         Carro cadastro[capacity];
        
        //Inicializa os campos do vetor cadastro
        for (int i = 0; i < capacity;i++)
        {
            strcpy (cadastro[i].placa, "NULL");
            cadastro[i].modelo = " NULL";
            cadastro[i].marca = "NULL";
            cadastro[i].ano_lancmento = 0;
            cadastro[i].descricao = "NULL";
        }
        
        char op, aux;
        do{
                for (short i = 0; i < capacity; i++){
                    cout << " \tEntre com " << i+1  <<  "o  cadastro.\n";
                    cout <<setw(10);
                    cout << "PLACA:  ";
                    cin >> cadastro[i].placa;
                    
                    cin.ignore();
                    cout <<setw(13);
                    cout << "MODELO:  ";
                    getline(cin,cadastro[i].modelo);
                            
                    //cout <<"\n\n";
                    cout <<setw(12);
                    cout << "MARCA:  " ;
                    getline(cin,cadastro[i].marca);
                            
                    // cout <<"\n\n";
                    cout << "  ";
                    cout << "  ANO DE LANCAMENTO:  ";
                    cin >> cadastro[i].ano_lancmento;
                            
                    cin.ignore();
                    cout <<setw(16);
                    cout << "DESCRICAO:  ";
                    getline(cin, cadastro[i].descricao);
                     
                    cout << "\n\n";
                    cout << "Digite [1] para continuar e ou valor para sair.\n";
                    cin >> op;
                    aux = i;
                }
                
                
        }while(cin >> op and aux < capacity or op != 1 ); // Criterio de parada  
        cout << endl 
                <<  "\n\n";
    
    }    
    /********************FUNCAO MENU*************************/
    void menu ()
    {
        
         char opcao;
        do{
                system("cls");
                cout << "\t\tMENU" << endl;
                cout << "\n\n";
                
                cout << "\t\tEscolha uma opcao: " << endl << endl;
                cout << "\t\t[1] " << "Cadastrar \n "
                        << "\t\t[2] " << "Buscar \n"
                        << "\t\t[3] " << "Alterar \n"
                        << "\t\t[4] " << "Excluir \n"
                        << "\t\t[0] " << "Sair" << "\n\n\n";
                
                cout << "\t\t";  cin >> opcao; cout << "\n\n";
                switch (opcao)
                {
                    case '1' :
                        insert();
                        break;
                    case '2' : 
                        do{
                                system("cls");
                                cout << "\t\t[1]  Listar todos. \n"
                                        << "\t\t[2]  Buscar por item. \n";
                                        cout << "\n";
                                        
                                        cout << "\t\t"; cin >> opcao;
                                        switch (opcao)
                                        {
                                           case '1' :
                                                cout <<"Listando...\n";
                                                delay(2000000);
                                                system("cls");
                                                break;
                                            case '2' :
                                    
                                                do{
                                                                system("cls");
                                                                cout << "\t\t[1]  Buscar por marca.  \n"
                                                                        << "\t\t[2]  Buscar por modelo. \n"
                                                                        << "\t\t[3]  Buscar por ano. \n";
                                                                cout << "\t\t\n";  cin >> opcao;
                                                                switch (opcao) // MENU DE BUSCA POR ITENS
                                                                {
                                                                    case '1' :
                                                                        cout << "comando1" ;
                                                                        break;
                                                                    case '2' :
                                                                        cout << "comando2" ;
                                                                        break;
                                                                    case '3' :
                                                                        cout << "comando3" ;
                                                                        break;
                                                                        
                                                                    default :
                                                                        cout << " \t\tOpcao invalida.\n";
                                                                        delay(2000000);
                                                                        menu();
                                                                }
                                                    }while (opcao);
                                                        
                                        }
                        }while (opcao > 0 and opcao <= 2);
                    case '3' :
                    
                        //exibir();
                        break;
                    case '4' :
                        cout << "Funcao indisponivel no momento. \n"
                                << "Situacao: < em desenvovimento.... > " <<endl;
                        delay (200000000); 
                        break;
                        
                    case '5' :
                        system("exit");
                        break;
                     default:
                        cout << setw(10);
                        cout << "\t\tInsira um comando valido.\n";
                        delay(200000000);
                }
        } while (opcao > 0 and opcao <= 5);
    }
    /****************FUNCAO EXIBIR****************/
    void exibir()
    {
        
            Carro cadastro[capacity];
            cout << setw(15) << " PLACA" 
                    << setw(15) << " MODELO" 
                    << setw(15) << " MARCA" 
                    << setw(21) << " ANO DE LACAMENTO" 
                    << setw(15) << " DESCRICAO" <<"\n\n";
                    
            for (short i = 0; i < capacity ; i++)
            {
                cout <<  setw(15) << cadastro[i].placa 
                        <<  setw(15) << cadastro[i].modelo 
                        <<  setw(15)  << cadastro[i].marca 
                        <<  setw(21) << cadastro[i].ano_lancmento 
                        <<  setw(15) << cadastro[i].descricao << endl;
            //  cout <<cadastro[i].descricao.capacity() << endl;
            }
           
    }
    /***************FUCAO ALTERAR******************/
    // PROCEDIMENTO IMCOMPLETO
    void alterar ()
    {
        
            Carro cadastro[] = { };
            
          //  cadastro[1].nome = new cadastro[1];// ERRO
          //  cin >> cadastro[1];
            
    }
    /***************FUNCAO SAIR*****************/
    void sair ()
    {
        cout <<"\t";
        system("exit");
        cout << "Finalizado.";
        
    }
