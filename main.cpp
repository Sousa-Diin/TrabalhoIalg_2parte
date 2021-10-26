/*Segunda parte do trabalho de IALG
 * Algorito Loja de Veiculo
 * 
 * NOME: Wildes Augusto de Sousa - 
 * Matricula: 202020602
 * NOME: Jonatha Levi dos Santos Lustosa 
 * Matricula: 202020161
 * 
 //OBSERVACOES SOBRE O PROGRAMA\\

 * ATE O PRESENTE MOMENTO DIA 21/10/2021 AS 18:30hr 
                              26/10/2021 AS  2:18hr
                              26/10/2021 AS 13:33hr
                              27/10/2021 AS  -----
                              28/10/2021 AS ------
 * O PROGRAMA ESTA FUNCIONANDO PEFEITAMENTO SALVO
 * ALGUMAS FUNCOES QUE AINDA NAO ESTA ESTABELECIDAS 
 * ARQUIVO PRINCIPAL NO GEANY E VERSOES ANTERIORES EM .TXT E  * DOCUMENTO GOOGLE
 */

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include<string>
using std::string;
using std::getline;

#include <iomanip>
using std::setw; // usado para ajustar a largura no modo de exibicao

    struct Carro
    {
        int id; 
        string nome;
        string marca;
        int ano_lancmento;
        string descricao;

    };
    void message();
    void sair ();
    void insert ( )
    {
         const int capacity = 3;
         Carro cadastro[capacity];
         int terminoCadastro = 0;
        
      do{// Precisa tratar do metodo
            for (short i = 0; i < 3; i++){
                cout <<setw(9);
                cout << "ID:  ";
                cin >> cadastro[i].id;
                terminoCadastro =  cadastro[i].id; // Verifica se e valido e procegue cadastro
                if (terminoCadastro != -1){
                
                    cout <<setw(11);
                    cout << "NOME:  ";
                    cin >> cadastro[i].nome;
                    
                    //cout <<"\n\n";
                    cout <<setw(12);
                    cout << "MARCA:  " ;
                    cin >> cadastro[i].marca;
                    cin.ignore();
                    
                   // cout <<"\n\n";
                    cout << "  ";
                    cout << "  ANO DE LANCAMENTO:  ";
                    cin >> cadastro[i].ano_lancmento;
                    cin.ignore();
                    
                    cout <<setw(16);
                    cout << "DESCRICAO:  ";
                    getline(cin, cadastro[i].descricao);
                    
                }else if (terminoCadastro == cadastro[0].id) 
                {
                    cout << "\t\tNenhum dado foi inserido.\n";
                    message();
                }
                else
                    sair();
                    
            cout << "\n\n";
            }
            
        }while(terminoCadastro != -1); // Criterio de parada
    cout << endl <<  "\n" << "\n";
    }
        
    void menu ();
    void alterar ();
    void message()
    {
        cout << "\t\tDigite [s] para sair e,  \n\t\t[c] para continuar. \n";
    
        cout <<"\n"<<setw(10);
        char op;
        cout << "\t";
        cin >> op;
        if (op == 'S' or op == 's')
            sair ();
        else if(op == 'C' or op == 'c')
            menu();
        else{
            //aguarda alguns milisegundos e sai do programa
            for (int tmp = 0; tmp < 100000000;tmp++); 
            cout << "\t";
            cout <<" Opcao invalida\n"; 
            sair();
        }
    }
    
    void menu ()
    {
        cout << "\t\tMENU" << endl;
        cout << "\n" <<"\n";
        
        cout << "\t\tEscolha uma opcao: " << endl << endl;
        cout << "\t\t[1] " << "Cadastrar \n "
                << "\t\t[2] " << "Buscas \n"
                << "\t\t[3] " << "Alterar \n"
                << "\t\t[4] " << "Sair" << "\n\n\n";
        
        char opcao;
        cout << "\t\t";
        cin >> opcao;
        cout << "\n\n";
        switch (opcao)
        {
            case '1' :
                system ("cls");
                cout << "\t\tEntre com os dados para o cadastro."
                        << "\n\t\tPara finalizar o cadastro entre com [-1] no campo identificacao - ID\n";
                insert();
                cout << "\t\tCadastrado com sucesso."<< endl;
                message(); // Opcao para sair ou continuar
                break;
            case '2' : 
                // Se cadastro vazio chama metodo inserir
                // Criar condicao ainda
                    system("cls");
                    cout << "\t\tBase de dados vazia.\n"
                            << "\t\tDeseja inserir dados. " << " [s/n]\n";
                            cout << "\n";
                            char op;
                            cout << "\t\t";
                            cin >> op;
                            switch (op)
                            {
                               case 's' :
                               case 'S' :
                                    insert();
                                    system("cls");
                                    cout << "\t\tExecultado com sucesso."<< "\n";
                                    message();
                                    break;
                                case 'n' :
                                case 'N' :
                                    sair();
                                    break;
                                default :
                                    cout << "\t\tComando invalido." <<"\n"
                                            << "\t\tRetornado ao menu principal" << "\n";
                                for (int tmp = 0; tmp < 100000000; tmp++);
                                system("cls");
                                menu();
                                            
                            }
            case '3' :
                alterar();
                break;
            case '4' :
                sair();
                break;
             default:
                cout << setw(10);
                cout << "\t\tInsira um comando valido." << "\n";
                system("cls");
                message();
        }
        
    }
    
    void mostrar()
    {
        
            Carro cadastro[3];
            for (short i = 0; i < 3 ; i++)
            {
                cout << "ID:  " << cadastro[i].id <<"\n"
                        <<  "  NOME:    " << cadastro[i].nome << "\n"
                        <<  "  MARCA:  "  << cadastro[i].marca << "\n"
                        <<  "  ANO DE LACAMENTO:  " << cadastro[i].ano_lancmento << "\n"
                        <<  "  DESCRICAO:  " << cadastro[i].descricao << "\n";
            //  cout <<cadastro[i].descricao.capacity() << endl;
            }
           cout << "\t";
    }
    
    void alterar ()
    {
        
            Carro cadastro[] = { };
            
          //  cadastro[1].nome = new cadastro[1];// ERRO
          //  cin >> cadastro[1];
            
    }
    void sair ()
    {
        cout <<"\t";
        cout << "saindo...";
        system("cls");
        
    }


    int main()  
    {
            menu();
            return 0;
    }

