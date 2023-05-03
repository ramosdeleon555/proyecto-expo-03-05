//Parte del adivinador
//Anderson Ixcoy - 202208019
//Jeffersson Daniel Ramos - 202308085

//duo Adivinador de películas

#include <iostream>
using namespace std;

int main()
{
    int respuesta;
    bool valor = false;

    //MENSAJE DE BIENVENIDA
    do {
        cout << "BIENVENIDO AL ADIVINADOR DE PELICULAS" << endl;
        cout << "| - A continuacion se le hara una serie de preguntas de Si y No." << endl;
        cout << " Responder con 1 = Si o 2 = No para adivinar. - |" << endl;
        cout << "\nEstas peliculas vienen de: " << endl;
        cout << "- Netflix." << endl;
        cout << "- HBO MAX." << endl;
        cout << "- Disney+." << endl;
        cout << "- Amazon Prime Video." << endl;
        cout << "- Otros." << endl;
        cout << endl;

        cout << "Esta pensando en una pelicula de comedia?" << endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cin >> respuesta;
        system("cls");

        if (respuesta == 1) {
            cout << "Es de la decada del 2000 al 2009?" << endl;
            cout << "1. Si" << endl;
            cout << "2. No" << endl;
            cin >> respuesta;
            system("cls");

            switch (respuesta) {
            case 1:
                cout << "Esta en Netflix?" << endl;
                cout << "1. Si" << endl;
                cout << "2. No" << endl;
                cin >> respuesta;
                system("cls");

                if (respuesta == 1) {
                    cout << "Es una pelicula donde dos policias se hacen pasar por dos rubias?" << endl;
                    cout << "1. Si" << endl;
                    cout << "2. No" << endl;
                    cin >> respuesta;
                    system("cls");

                    switch (respuesta) {
                    case 1:
                        cout << "Adivine! La pelicula es: Y donde estan las rubias?" << endl;
                        break;

                    case 2:
                        cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                        break;

                    default:
                        cout << "Inserte un numero valido" << endl;
                        break;
                    }
                }

                else if (respuesta == 2) {
                    cout << "Esta en Amazon Prime Video?" << endl;
                    cout << "1. Si" << endl;
                    cout << "2. No" << endl;
                    cin >> respuesta;
                    system("cls");

                    switch (respuesta) {
                    case 1:
                        cout << "Es una pelicula donde participa Morgan Freeman y representa a Dios?" << endl;
                        cout << "1. Si" << endl;
                        cout << "2. No" << endl;
                        cin >> respuesta;
                        system("cls");


                        if (respuesta == 1) {
                            cout << "Adivine! La pelicula es Todopoderoso" << endl;
                        }

                        else if (respuesta == 2) {
                            cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion." << endl;
                        }

                        else {
                            cout << "Inserte un numero valido" << endl;
                        }
                        break;

                    case 2:
                        cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion." << endl;
                        break;

                    default:
                        cout << "Inserte un numero valido" << endl;
                        break;
                    }
                }

                else {
                    cout << "Inserte un numero valido." << endl;
                }
                break;

            case 2:
                cout << "Es de la decada del 2010 al 2019?" << endl;
                cout << "1. Si" << endl;
                cout << "2. No" << endl;
                cin >> respuesta;
                system("cls");

                if (respuesta == 1) {
                    cout << "Esta en Amazon Prime Video?" << endl;
                    cout << "1. Si" << endl;
                    cout << "2. No" << endl;
                    cin >> respuesta;
                    system("cls");

                    switch (respuesta) {
                    case 1:
                        cout << "Es una pelicula de comedia policial?" << endl;
                        cout << "1. Si" << endl;
                        cout << "2. No" << endl;
                        cin >> respuesta;
                        system("cls");

                        if (respuesta == 1) {
                            cout << "Adivine! La pelicula es: Un espia y medio" << endl;
                        }

                        else if (respuesta == 2) {
                            cout << "Es una pelicula sobre cuatro personas y simulan ser una familia que tiene como mision traer un cargamento de droga de Mexico?" << endl;
                            cout << "1. Si" << endl;
                            cout << "2. No" << endl;
                            cin >> respuesta;
                            system("cls");

                            switch (respuesta) {
                            case 1:
                                cout << "Adivine! La pelicula es: Quienes son los Millers?" << endl;
                                break;

                            case 2:
                                cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                                break;

                            default:
                                cout << "Inserte un numero valido" << endl;
                                break;

                            }
                        }

                        else {
                            cout << "Inserte un numero valido" << endl;
                        }
                        break;

                    default:
                        cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                        break;
                    }
                }

                else if (respuesta == 2) {
                    cout << "Es de los anhos del 2020 al 2023?" << endl;
                    cout << "1. Si" << endl;
                    cout << "2. No" << endl;
                    cin >> respuesta;
                    system("cls");

                    if (respuesta == 1) {
                        cout << "Esta disponible en Netflix?" << endl;
                        cout << "1. Si" << endl;
                        cout << "2. No" << endl;
                        cin >> respuesta;
                        system("cls");

                        switch (respuesta) {
                        case 1:
                            cout << "Es una pelicula donde participa Jennifer Anniston y Adam Sandler?" << endl;
                            cout << "1. Si" << endl;
                            cout << "2. No" << endl;
                            cin >> respuesta;
                            system("cls");

                            if (respuesta == 1) {
                                cout << "Adivine! La pelicula es: Misterio a la vista 2" << endl;
                            }

                            else if (respuesta == 2) {
                                cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                            }

                            else {
                                cout << "Inserte un numero valido" << endl;
                            }
                            break;

                        case 2:
                            cout << "Está disponible en Amazon Prime Video?" << endl;
                            cout << "1. Si" << endl;
                            cout << "2. No" << endl;
                            cin >> respuesta;
                            system("cls");

                            if (respuesta == 1) {
                                cout << "Es una pelicula donde los personajes cazan fantasmas?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cin >> respuesta;
                                system("cls");

                                switch (respuesta) {
                                case 1:
                                    cout << "Adivine! La pelicula es: Cazafantasmas: El legado" << endl;
                                    break;

                                case 2:
                                    cout << "Lo siento, no pude adivinar su pelicula" << endl;
                                    break;

                                default:
                                    cout << "Inserte un numero valido" << endl;
                                    break;
                                }
                            }

                            else if (respuesta == 2) {
                                cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                            }

                            else {
                                cout << "Inserte un numero valido" << endl;
                            }
                            break;

                        default:
                            cout << "Inserte un numero valido" << endl;
                            break;
                        }
                    }
                    else if (respuesta == 2) {
                        cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                    }

                    else {
                        cout << "Inserte un numero valido" << endl;
                    }
                }
                else {
                    cout << "Inserte un numero valido" << endl;
                }
                break;

            default:
                cout << "Inserte un numero valido" << endl;
                break;
            }
        }

        if (respuesta == 2) {
            cout << "Esta pensando en una pelicula de accion?" << endl;
            cout << "1. Si" << endl;
            cout << "2. No" << endl;
            cin >> respuesta;
            system("cls");

            switch (respuesta) {
            case 1:
                cout << "Es de la decada del 2010 al 2019?" << endl;
                cout << "1. Si" << endl;
                cout << "2. No" << endl;
                cin >> respuesta;
                system("cls");

                switch (respuesta) {
                case 1:
                    cout << "Esta disponible en Disney+?" << endl;
                    cout << "1. Si" << endl;
                    cout << "2. No" << endl;
                    cin >> respuesta;
                    system("cls");

                    if (respuesta == 1) {
                        cout << "Es una pelicula donde aparece Thanos y superheroes?" << endl;
                        cout << "1. Si" << endl;
                        cout << "2. No" << endl;
                        cin >> respuesta;
                        system("cls");

                        switch (respuesta) {
                        case 1:
                            cout << "Adivine! La pelicula es: Los Vengadores/Avengers: Infinity War" << endl;
                            break;

                        case 2:
                            cout << "Es una pelicula donde participa Groot?" << endl;
                            cout << "1. Si" << endl;
                            cout << "2. No" << endl;
                            cin >> respuesta;
                            system("cls");

                            if (respuesta == 1) {
                                cout << "Adivine! La pelicula es: Guardianes de la Galaxia" << endl;
                            }

                            else if (respuesta == 2) {
                                cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion." << endl;
                            }

                            else {
                                cout << "Inserte un numero valido" << endl;
                            }
                            break;

                        default:
                            cout << "Inserte un numero valido" << endl;
                            break;
                        }
                    }

                    else if (respuesta == 2) {
                        cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                    }

                    else {
                        cout << "Inserte un numero valido" << endl;
                    }
                    break;

                case 2:
                    cout << "Es de la decada del 2000 al 2009" << endl;
                    cout << "1. Si" << endl;
                    cout << "2. No" << endl;
                    cin >> respuesta;
                    system("cls");

                    switch (respuesta) {
                    case 1:
                        cout << "Esta disponible en Disney+?" << endl;
                        cout << "1. Si" << endl;
                        cout << "2. No" << endl;
                        cin >> respuesta;
                        system("cls");

                        if (respuesta == 1) {
                            cout << "Es una pelicula donde participa Johnny Depp como pirata?" << endl;
                            cout << "1. Si" << endl;
                            cout << "2. No" << endl;
                            cin >> respuesta;
                            system("cls");

                            switch (respuesta) {
                            case 1:
                                cout << "Adivine! La pelicula es: Piratas del Caribe: La maldicion del Perla Negra" << endl;
                                break;

                            case 2:
                                cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion." << endl;
                                break;

                            default:
                                cout << "Inserte un numero valido" << endl;
                                break;

                            }
                        }

                        else if (respuesta == 2) {
                            cout << "Esta disponible en Netflix?" << endl;
                            cout << "1. Si" << endl;
                            cout << "2. No" << endl;
                            cin >> respuesta;
                            system("cls");

                            switch (respuesta) {
                            case 1:
                                cout << "Es una pelicula donde participa Tobey Maguire?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cin >> respuesta;
                                system("cls");

                                if (respuesta == 1) {
                                    cout << "Adivine! La pelicula es: Spider Man/El hombre aranha" << endl;
                                }

                                else if (respuesta == 2) {
                                    cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                                }

                                else {
                                    cout << "Inserte un numero valido" << endl;
                                }
                                break;

                            case 2:
                                cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;

                                break;

                            default:
                                cout << "Inserte un numero valido" << endl;

                                break;
                            }
                        }

                        else {
                            cout << "Inserte un valor valido" << endl;
                        }
                        break;

                    case 2:
                        cout << "Es de la decada de 1990 a 1999?" << endl;
                        cout << "1. Si" << endl;
                        cout << "2. No" << endl;
                        cin >> respuesta;
                        system("cls");

                        if (respuesta == 1) {
                            cout << "Esta disponible en HBO Max?" << endl;
                            cout << "1. Si" << endl;
                            cout << "2. No" << endl;
                            cin >> respuesta;
                            system("cls");

                            switch (respuesta) {
                            case 1:
                                cout << "Es una pelicula donde participa Kenav Reeves?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cin >> respuesta;
                                system("cls");

                                if (respuesta == 1) {
                                    cout << "Adivine! La pelicula es: Matrix" << endl;
                                }

                                else if (respuesta == 2) {
                                    cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion." << endl;
                                }

                                else {
                                    cout << "Inserte un numero valido" << endl;
                                }

                                break;

                            case 2:
                                cout << "Esta disponible en Amazon Prime Video?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cin >> respuesta;
                                system("cls");

                                if (respuesta == 1) {
                                    cout << "Es una pelicula donde participa Arnold Shwarzenegger?" << endl;
                                    cout << "1. Si" << endl;
                                    cout << "2. No" << endl;
                                    cin >> respuesta;
                                    system("cls");

                                    switch (respuesta) {
                                    case 1:
                                        cout << "Adivine! La pelicula es: Terminator 2: El juicio final" << endl;
                                        break;

                                    case 2:
                                        cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                                        break;

                                    default:
                                        cout << "Inserte un numero valido" << endl;
                                        break;
                                    }
                                }

                                else if (respuesta == 2) {
                                    cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                                }

                                else {
                                    cout << "Inserte un numero valido" << endl;
                                }

                                break;

                            default:
                                cout << "Inserte un numero valido" << endl;
                                break;
                            }
                        }

                        else if (respuesta == 2) {
                            cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion." << endl;
                        }

                        else {
                            cout << "Inserte un numero valido" << endl;
                        }

                    default:
                        cout << "Inserte un numero valido" << endl;
                        break;
                    }

                    break;

                default:
                    cout << "Inserte un numero valido" << endl;
                    break;
                }
                break;

            case 2:
                cout << "Esta pensando en una pelicula animada?" << endl;
                cout << "1. Si" << endl;
                cout << "2. No" << endl;
                cin >> respuesta;
                system("cls");

                switch (respuesta) {
                case 1:
                    cout << "Es de la decada del 2000 al 2009?" << endl;
                    cout << "1. Si" << endl;
                    cout << "2. No" << endl;
                    cin >> respuesta;
                    system("cls");

                    switch (respuesta) {
                    case 1:
                        cout << "Esta disponible en Disney+?" << endl;
                        cout << "1. Si" << endl;
                        cout << "2. No" << endl;
                        cin >> respuesta;
                        system("cls");

                        if (respuesta == 1) {
                            cout << "Es una pelicula sobre dos robots y la destruccion del mundo?" << endl;
                            cout << "1. Si" << endl;
                            cout << "2. No" << endl;
                            cin >> respuesta;
                            system("cls");

                            switch (respuesta) {
                            case 1:
                                cout << "Adivine! La pelicula es: Wall-e" << endl;
                                break;

                            case 2:
                                cout << "Es una pelicula donde participa Edna Moda, Elastigirl y Mr. Increible?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cin >> respuesta;

                                if (respuesta == 1) {
                                    cout << "Adivine! La pelicula es: Los Increibles" << endl;
                                }

                                else if (respuesta == 2) {
                                    cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion." << endl;
                                }

                                else {
                                    cout << "Inserte un numero valido" << endl;
                                }
                                break;

                            default:
                                cout << "Inserte un numero valido" << endl;
                                break;
                            }
                        }

                        else if (respuesta == 2) {
                            cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion." << endl;
                        }

                        else {
                            cout << "Inserte un numero valido" << endl;
                        }

                    case 2:
                        cout << "Es de la decada del 2010 al 2019?" << endl;
                        cout << "1. Si" << endl;
                        cout << "2. No" << endl;
                        cin >> respuesta;
                        system("cls");

                        switch (respuesta) {
                        case 1:
                            cout << "Esta disponible en Disney+?" << endl;
                            cout << "1. Si" << endl;
                            cout << "2. No" << endl;
                            cin >> respuesta;
                            system("cls");

                            if (respuesta == 1) {
                                cout << "Es una pelicula donde se enfoca en el día de los Muertos en Mexico y sale Mama Coco?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cin >> respuesta;
                                system("cls");

                                switch (respuesta) {
                                case 1:
                                    cout << "Adivine! La pelicula es: Coco" << endl;
                                    break;

                                case 2:
                                    cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion." << endl;
                                    break;

                                default:
                                    cout << "Inserte un numero valido" << endl;
                                    break;

                                }
                            }

                            else if (respuesta == 2) {
                                cout << "Esta disponible en HBO Max?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cin >> respuesta;
                                system("cls");

                                switch (respuesta) {
                                case 1:
                                    cout << "Es una pelicula donde salen los Minions?" << endl;
                                    cout << "1. Si" << endl;
                                    cout << "2. No" << endl;
                                    cin >> respuesta;
                                    system("cls");

                                    if (respuesta == 1) {
                                        cout << "Adivine! La pelicula es: Mi Villano Favorito" << endl;
                                    }

                                    else if (respuesta == 2) {
                                        cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                                    }

                                    else {
                                        cout << "Inserte un valor valido" << endl;
                                    }
                                    break;

                                case 2:
                                    cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                                    break;

                                default:
                                    cout << "Inserte un numero valido" << endl;
                                    break;
                                }
                            }

                            else {
                                cout << "Inserte un numero valido" << endl;
                            }
                            break;

                        case 2:
                            cout << "Es de los anhos 2020 al 2023?" << endl;
                            cout << "1. Si" << endl;
                            cout << "2. No" << endl;
                            cin >> respuesta;
                            system("cls");

                            if (respuesta == 1) {
                                cout << "Es una pelicula recien salida del cine?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cin >> respuesta;
                                system("cls");

                                switch (respuesta) {
                                case 1:
                                    cout << "Es una pelicula donde aparece el Gato con Botas?" << endl;
                                    cout << "1. Si" << endl;
                                    cout << "2. No" << endl;
                                    cin >> respuesta;
                                    system("cls");

                                    if (respuesta == 1) {
                                        cout << "Adivine! La pelicula es: El gato con botas: El utlimo deseo" << endl;
                                    }

                                    else if (respuesta == 2) {
                                        cout << "Es una pelicula donde aparece Mario, Luigi y Browser" << endl;
                                        cout << "1. Si" << endl;
                                        cout << "2. No" << endl;
                                        cin >> respuesta;
                                        system("cls");

                                        switch (respuesta) {
                                        case 1:
                                            cout << "Adivine! La pelicula es: Supermario Bros: La pelicula" << endl;
                                            break;

                                        case 2:
                                            cout << "Lo siento, no pude adivinar su pelicula" << endl;
                                            break;

                                        default:
                                            cout << "Inserte un numero valido" << endl;
                                            break;
                                        }

                                    }

                                    else {
                                        cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                                    }

                                    break;

                                case 2:
                                    cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                                    break;

                                default:
                                    cout << "Inserte un numero valido" << endl;
                                    break;
                                }
                            }

                            else if (respuesta == 2) {
                                cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                            }

                            else {
                                cout << "Inserte un numero valido" << endl;
                            }

                            break;

                        default:
                            cout << "Inserte un numero valido" << endl;
                            break;
                        }


                        break;

                    default:
                        cout << "Inserte un numero valido" << endl;
                        break;
                    }

                    break;

                case 2:
                    cout << "\nEsta pensando en una pelicula de ciencia ficcion?" << endl;
                    cout << "1. Si" << endl;
                    cout << "2. No" << endl;
                    cout << "-. ";
                    cin >> respuesta;
                    system("cls");

                    if (respuesta == 1) {
                        cout << "Es de los anios de 1980 al 2000?" << endl;
                        cout << "1. Si" << endl;
                        cout << "2. No" << endl;
                        cout << "\n-. ";
                        cin >> respuesta;
                        system("cls");

                        switch (respuesta) {
                        case 1:
                            cout << "Se encuentra en Disney+?" << endl;
                            cout << "1. Si" << endl;
                            cout << "2. No" << endl;
                            cout << "\n-. ";
                            cin >> respuesta;
                            system("cls");

                            if (respuesta == 1) {
                                cout << "Hay escenas donde pelean en el espacio?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cout << "\n-. ";
                                cin >> respuesta;
                                system("cls");

                                switch (respuesta) {
                                case 1:

                                    cout << "Adivine! La pelicula es: Star Wars - El imperio Contraataca." << endl;
                                    cout << "Esta pelicula fue estrenada en el anio 1980." << endl;

                                    break;
                                case 2:

                                    cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                                    break;

                                default:
                                    cout << "Inserte un numero valido" << endl;
                                    break;
                                }

                            }
                            else if (respuesta == 2) {
                                cout << "Se encuentra en Netflix?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cout << "\n-. ";
                                cin >> respuesta;
                                system("cls");

                                switch (respuesta) {
                                case 1:
                                    cout << "Hay viajes en el tiempo?" << endl;
                                    cout << "1. Si" << endl;
                                    cout << "2. No" << endl;
                                    cout << "\n-. ";
                                    cin >> respuesta;
                                    system("cls");

                                    if (respuesta == 1) {
                                        cout << "Adivine! La pelicula es: Volver al futuro." << endl;
                                        cout << "Esta pelicula salio en el anio 1985." << endl;
                                    }
                                    else if (respuesta == 2) {
                                        cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion." << endl;
                                    }
                                    else {
                                        cout << "Inserte un numero valido" << endl;
                                    }
                                    break;
                                case 2:
                                    cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion." << endl;
                                    break;
                                default:
                                    cout << "Inserte un numero valido" << endl;
                                    break;
                                }
                            }
                            else {
                                cout << "Inserte un numero valido." << endl;
                            }
                            break;


                        case 2:
                            cout << "Es de la decada del 2000 al 2010?" << endl;
                            cout << "1. Si" << endl;
                            cout << "2. No" << endl;
                            cout << "\n-. ";
                            cin >> respuesta;
                            system("cls");

                            if (respuesta == 1) {
                                cout << "La pelicula se encuentra en Disney+?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cout << "\n-. ";
                                cin >> respuesta;
                                system("cls");

                                switch (respuesta) {
                                case 1:
                                    cout << "Aparecen personajes azules con trenzas?" << endl;
                                    cout << "1. Si" << endl;
                                    cout << "2. No" << endl;
                                    cout << "\n-. ";
                                    cin >> respuesta;
                                    system("cls");

                                    if (respuesta == 1) {
                                        cout << "Adivine! La pelicula es: Avatar" << endl;
                                        cout << "Pelicula estrenada en el anio 2009." << endl;
                                    }
                                    else if (respuesta == 2) {
                                        cout << "Aparece un super heroe con traje rojo y azul que trepa paredes?" << endl;
                                        cout << "1. Si" << endl;
                                        cout << "2. No" << endl;
                                        cout << "\n-. ";
                                        cin >> respuesta;
                                        system("cls");

                                        switch (respuesta) {
                                        case 1:
                                            cout << "Adivine! La pelicula es: El hombre arania?" << endl;
                                            cout << "Pelicula estrenada en el anio 2002." << endl;
                                            break;
                                        case 2:
                                            cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                                            break;
                                        default:
                                            cout << "Inserte un numero valido" << endl;
                                            break;
                                        }
                                    }
                                    else {
                                        cout << "Inserte un numero valido" << endl;
                                    }
                                    break;
                                default:
                                    cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                                    break;
                                }
                            }
                            else if (respuesta == 2) {
                                cout << "Es de los anios del 2011 al 2023?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cout << "\n-. ";
                                cin >> respuesta;
                                system("cls");

                                if (respuesta == 1) {
                                    cout << "La puedes ver en HBO MAX?" << endl;
                                    cout << "1. Si" << endl;
                                    cout << "2. No" << endl;
                                    cout << "\n-. ";
                                    cin >> respuesta;
                                    system("cls");

                                    switch (respuesta) {
                                    case 1:
                                        cout << "Hay varios crossovers de videojuegos?" << endl;
                                        cout << "1. Si" << endl;
                                        cout << "2. No" << endl;
                                        cout << "\n-. ";
                                        cin >> respuesta;
                                        system("cls");

                                        if (respuesta == 1) {
                                            cout << "Adivine! La pelicula es: Ready Player One." << endl;
                                            cout << "Pelicula estrenada en el anio 2018." << endl;
                                        }

                                        else if (respuesta == 2) {
                                            cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                                        }

                                        else {
                                            cout << "Inserte un numero valido" << endl;
                                        }
                                        break;

                                    case 2:
                                        cout << "Se encuentra en HBO MAX O Amazon Prime?" << endl;
                                        cout << "1. Si" << endl;
                                        cout << "2. No" << endl;
                                        cout << "\n-. ";
                                        cin >> respuesta;
                                        system("cls");

                                        if (respuesta == 1) {
                                            cout << "Hay astronautas y cientificos que viajan en un agujero de gusano?" << endl;
                                            cout << "1. Si" << endl;
                                            cout << "2. No" << endl;
                                            cout << "\n-. ";
                                            cin >> respuesta;
                                            system("cls");

                                            switch (respuesta) {
                                            case 1:
                                                cout << "Adivine! La pelicula es: Interestelar." << endl;
                                                cout << "Estrenada en el anio 2014." << endl;
                                                break;
                                            case 2:
                                                cout << "Lo siento, no pude adivinar su pelicula" << endl;
                                                break;
                                            default:
                                                cout << "Inserte un numero valido" << endl;
                                                break;
                                            }
                                        }
                                        else if (respuesta == 2) {
                                            cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                                        }
                                        else {
                                            cout << "Inserte un numero valido" << endl;
                                        }
                                        break;
                                    default:
                                        cout << "Inserte un numero valido" << endl;
                                        break;
                                    }
                                }
                                else if (respuesta == 2) {
                                    cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                                }

                                else {
                                    cout << "Inserte un numero valido" << endl;
                                }
                            }
                            else {
                                cout << "Inserte un numero valido" << endl;
                            }
                            break;

                        default:
                            cout << "Inserte un numero valido" << endl;
                            break;
                        }
                    }  // Aquí para abajo van los de terror si no es de ficcion
                    else if (respuesta == 2) {
                        cout << "Esta pensando en una pelicula de terror?" << endl;
                        cout << "1. Si" << endl;
                        cout << "2. No" << endl;
                        cout << "-. ";
                        cin >> respuesta;
                        system("cls");

                        if (respuesta == 1) {
                            cout << "Es de los anios de 1980 al 2000?" << endl;
                            cout << "1. Si" << endl;
                            cout << "2. No" << endl;
                            cout << "\n-. ";
                            cin >> respuesta;
                            system("cls");
                            switch (respuesta) {
                            case 1:
                                cout << "Se encuentra en otra plataforma anteriormente no mensionada?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cout << "\n-. ";
                                cin >> respuesta;
                                system("cls");

                                if (respuesta == 1) {
                                    cout << "Aparece un payaso que asesinaba niños?" << endl;
                                    cout << "1. Si" << endl;
                                    cout << "2. No" << endl;
                                    cout << "\n-. ";
                                    cin >> respuesta;
                                    system("cls");

                                    switch (respuesta) {
                                    case 1:
                                        cout << "Adivine! La pelicula es: Eso - De Stephen King" << endl;
                                        cout << "Esta pelicula fue estrenada en 1990." << endl;
                                        break;
                                    case 2:
                                        cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                                        break;
                                    default:
                                        cout << "Inserte un numero valido" << endl;
                                        break;
                                    }
                                }
                                else if (respuesta == 2) {
                                    cout << "Se encuentra en HBO MAX?" << endl;
                                    cout << "1. Si" << endl;
                                    cout << "2. No" << endl;
                                    cout << "\n-. ";
                                    cin >> respuesta;
                                    system("cls");

                                    switch (respuesta) {
                                    case 1:
                                        cout << "Hay un asesino con mascara de hockey?" << endl;
                                        cout << "1. Si" << endl;
                                        cout << "2. No" << endl;
                                        cout << "\n-. ";
                                        cin >> respuesta;
                                        system("cls");

                                        if (respuesta == 1) {
                                            cout << "Adivine! La pelicula es: Viernes 13 - Parte I" << endl;
                                            cout << "Esta pelicula estreno en el anio 1980." << endl;
                                        }
                                        else if (respuesta == 2) {
                                            cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion." << endl;
                                        }
                                        else {
                                            cout << "Inserte un numero valido" << endl;
                                        }
                                        break;
                                    case 2:
                                        cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion." << endl;
                                        break;
                                    default:
                                        cout << "Inserte un numero valido" << endl;
                                        break;
                                    }
                                }
                                else {
                                    cout << "Inserte un numero valido." << endl;
                                }
                                break;

                            case 2:
                                cout << "Es de los anios del 2001 al 2011?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cout << "\n-. ";
                                cin >> respuesta;
                                system("cls");

                                if (respuesta == 1) {
                                    cout << "Se encuentra en la plataforma de Netflix?" << endl;
                                    cout << "1. Si" << endl;
                                    cout << "2. No" << endl;
                                    cout << "\n-. ";
                                    cin >> respuesta;
                                    system("cls");

                                    switch (respuesta) {
                                    case 1:
                                        cout << "Es un munieco asesino, muy muy loco?" << endl;
                                        cout << "1. Si" << endl;
                                        cout << "2. No" << endl;
                                        cout << "\n-. ";
                                        cin >> respuesta;
                                        system("cls");

                                        if (respuesta == 1) {
                                            cout << "Adivine! La pelicula es: El hijo de Chucky." << endl;
                                            cout << "Estrenada en el anio 2004." << endl;
                                        }
                                        else if (respuesta == 2) {
                                            cout << "Es un crossover del aterrador con la mascara de hockey y de la cara desfigurada con jersey a rayas y guantes de cuchillas?" << endl;
                                            cout << "1. Si" << endl;
                                            cout << "2. No" << endl;
                                            cout << "\n-. ";
                                            cin >> respuesta;
                                            system("cls");

                                            switch (respuesta) {
                                            case 1:
                                                cout << "Adivine! La pelicula es: Freddy contra Jason " << endl;
                                                cout << "Estrenada en el anio 2003." << endl;
                                                break;
                                            case 2:
                                                cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                                                break;
                                            default:
                                                cout << "Inserte un numero valido" << endl;
                                                break;
                                            }
                                        }
                                        else {
                                            cout << "Inserte un numero valido" << endl;
                                        }
                                        break;
                                    default:
                                        cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                                        break;
                                    }
                                }
                                else if (respuesta == 2) {
                                    cout << "Es de los anios del 2011 al 2023?" << endl;
                                    cout << "1. Si" << endl;
                                    cout << "2. No" << endl;
                                    cout << "\n-. ";
                                    cin >> respuesta;
                                    system("cls");

                                    if (respuesta == 1) {
                                        cout << "La puedes ver en Netflix?" << endl;
                                        cout << "1. Si" << endl;
                                        cout << "2. No" << endl;
                                        cout << "\n-. ";
                                        cin >> respuesta;
                                        system("cls");

                                        switch (respuesta) {
                                        case 1:
                                            cout << "Malezas de hierba acechan confundiendo a los protagonistas y esta basado en la novela de Stephen king y Joe Hill?" << endl;
                                            cout << "1. Si" << endl;
                                            cout << "2. No" << endl;
                                            cout << "\n-. ";
                                            cin >> respuesta;
                                            system("cls");

                                            if (respuesta == 1) {
                                                cout << "Adivine! La pelicula es: En la hierba alta." << endl;
                                                cout << "Estrenada en el anio 2019." << endl;
                                            }

                                            else if (respuesta == 2) {
                                                cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                                            }

                                            else {
                                                cout << "Inserte un numero valido" << endl;
                                            }
                                            break;

                                        case 2:
                                            cout << "Se encuentra en HBO MAX?" << endl;
                                            cout << "1. Si" << endl;
                                            cout << "2. No" << endl;
                                            cout << "\n-. ";
                                            cin >> respuesta;
                                            system("cls");

                                            if (respuesta == 1) {
                                                cout << "Una enfermera descarga una aplicacion que informa al usuario sobre cuando morira?" << endl;
                                                cout << "1. Si" << endl;
                                                cout << "2. No" << endl;
                                                cout << "\n-. ";
                                                cin >> respuesta;
                                                system("cls");

                                                switch (respuesta) {
                                                case 1:
                                                    cout << "Adivine! La pelicula es: La hora de tu muerte " << endl;
                                                    cout << "Estrenada en el anio 2019." << endl;
                                                    break;
                                                case 2:
                                                    cout << "Lo siento, no pude adivinar su pelicula" << endl;
                                                    break;
                                                default:
                                                    cout << "Inserte un numero valido" << endl;
                                                    break;
                                                }
                                            }
                                            else if (respuesta == 2) {
                                                cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                                            }
                                            else {
                                                cout << "Inserte un numero valido" << endl;
                                            }
                                            break;
                                        default:
                                            cout << "Inserte un numero valido" << endl;
                                            break;
                                        }
                                    }
                                    else if (respuesta == 2) {
                                        cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                                    }

                                    else {
                                        cout << "Inserte un numero valido" << endl;
                                    }
                                }
                                else {
                                    cout << "Inserte un numero valido" << endl;
                                }
                                break;

                            default:
                                cout << "Inserte un numero valido" << endl;
                                break;
                            }
                        } //De aquí para abajo esta el siguiente genero que es Drama
                        else if (respuesta == 2) {
                            cout << "Esta pensando en una pelicula dramatica?" << endl;
                            cout << "1. Si" << endl;
                            cout << "2. No" << endl;
                            cout << "-. ";
                            cin >> respuesta;
                            system("cls");

                            if (respuesta == 1) {
                                cout << "Es de los anios de 1980 al 2000?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cout << "\n-. ";
                                cin >> respuesta;
                                system("cls");
                                switch (respuesta) {
                                case 1:
                                    cout << "Se encuentra en HBO MAX?" << endl;
                                    cout << "1. Si" << endl;
                                    cout << "2. No" << endl;
                                    cout << "\n-. ";
                                    cin >> respuesta;
                                    system("cls");

                                    if (respuesta == 1) {
                                        cout << "Cuenta la vida de una cantante mexicana?" << endl;
                                        cout << "1. Si" << endl;
                                        cout << "2. No" << endl;
                                        cout << "\n-. ";
                                        cin >> respuesta;
                                        system("cls");

                                        switch (respuesta) {
                                        case 1:
                                            cout << "Adivine! La pelicula es: Selena" << endl;
                                            cout << "Esta pelicula estreno en el anio 1997." << endl;
                                            break;
                                        case 2:
                                            cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                                            break;
                                        default:
                                            cout << "Inserte un numero valido" << endl;
                                            break;
                                        }
                                    }
                                    else if (respuesta == 2) {
                                        cout << "Se encuentra en Netflix?" << endl;
                                        cout << "1. Si" << endl;
                                        cout << "2. No" << endl;
                                        cout << "\n-. ";
                                        cin >> respuesta;
                                        system("cls");

                                        switch (respuesta) {
                                        case 1:
                                            cout << "Cuenta sobre un extraterrestre que queda abandonado en el planeta tierra ?" << endl;
                                            cout << "1. Si" << endl;
                                            cout << "2. No" << endl;
                                            cout << "\n-. ";
                                            cin >> respuesta;
                                            system("cls");

                                            if (respuesta == 1) {
                                                cout << "Adivine! La pelicula es: E.T." << endl;
                                                cout << "Esta pelicula se estreno en el anio 1982." << endl;
                                            }
                                            else if (respuesta == 2) {
                                                cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion." << endl;
                                            }
                                            else {
                                                cout << "Inserte un numero valido" << endl;
                                            }
                                            break;
                                        case 2:
                                            cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion." << endl;
                                            break;
                                        default:
                                            cout << "Inserte un numero valido" << endl;
                                            break;
                                        }
                                    }
                                    else {
                                        cout << "Inserte un numero valido." << endl;
                                    }
                                    break;

                                case 2:
                                    cout << "Es de los anios del 2001 al 2010?" << endl;
                                    cout << "1. Si" << endl;
                                    cout << "2. No" << endl;
                                    cout << "\n-. ";
                                    cin >> respuesta;
                                    system("cls");

                                    if (respuesta == 1) {
                                        cout << "Se encuentra en la plataforma de Netflix?" << endl;
                                        cout << "1. Si" << endl;
                                        cout << "2. No" << endl;
                                        cout << "\n-. ";
                                        cin >> respuesta;
                                        system("cls");

                                        switch (respuesta) {
                                        case 1:
                                            cout << "Aparece Will Smith con su hijo Jaden Smith?" << endl;
                                            cout << "1. Si" << endl;
                                            cout << "2. No" << endl;
                                            cout << "\n-. ";
                                            cin >> respuesta;
                                            system("cls");

                                            if (respuesta == 1) {
                                                cout << "Adivine! La pelicula es: En busca de la felicidad." << endl;
                                                cout << "Estrenada en el anio 2006." << endl;
                                            }
                                            else if (respuesta == 2) {
                                                cout << "Es una pelicula que representa el holocausto judio?" << endl;
                                                cout << "1. Si" << endl;
                                                cout << "2. No" << endl;
                                                cout << "\n-. ";
                                                cin >> respuesta;
                                                system("cls");

                                                switch (respuesta) {
                                                case 1:
                                                    cout << "Adivine! La pelicula es: El niño con la pijama de rayas?" << endl;
                                                    cout << "Estrenada en el anio 2008." << endl;
                                                    break;
                                                case 2:
                                                    cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                                                    break;
                                                default:
                                                    cout << "Inserte un numero valido" << endl;
                                                    break;
                                                }
                                            }
                                            else {
                                                cout << "Inserte un numero valido" << endl;
                                            }
                                            break;
                                        default:
                                            cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                                            break;
                                        }
                                    }
                                    else if (respuesta == 2) {
                                        cout << "Es de los anios del 2011 al 2023?" << endl;
                                        cout << "1. Si" << endl;
                                        cout << "2. No" << endl;
                                        cout << "\n-. ";
                                        cin >> respuesta;
                                        system("cls");

                                        if (respuesta == 1) {
                                            cout << "La puedes encontrar en la plataforma de HBO MAX?" << endl;
                                            cout << "1. Si" << endl;
                                            cout << "2. No" << endl;
                                            cout << "\n-. ";
                                            cin >> respuesta;
                                            system("cls");

                                            switch (respuesta) {
                                            case 1:
                                                cout << "Cuenta la historia de una abogada que defendio los derechos de la mujer?" << endl;
                                                cout << "1. Si" << endl;
                                                cout << "2. No" << endl;
                                                cout << "\n-. ";
                                                cin >> respuesta;
                                                system("cls");

                                                if (respuesta == 1) {
                                                    cout << "Adivine! La pelicula es: La voz de la igualdad." << endl;
                                                    cout << "Estrenada en el anio 2018." << endl;
                                                }

                                                else if (respuesta == 2) {
                                                    cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                                                }

                                                else {
                                                    cout << "Inserte un numero valido" << endl;
                                                }
                                                break;

                                            case 2:
                                                cout << "Se encuentra en HBO MAX?" << endl;
                                                cout << "1. Si" << endl;
                                                cout << "2. No" << endl;
                                                cout << "\n-. ";
                                                cin >> respuesta;
                                                system("cls");

                                                if (respuesta == 1) {
                                                    cout << "Es el enemigo No. 1 de Batman?" << endl;
                                                    cout << "1. Si" << endl;
                                                    cout << "2. No" << endl;
                                                    cout << "\n-. ";
                                                    cin >> respuesta;
                                                    system("cls");

                                                    switch (respuesta) {
                                                    case 1:
                                                        cout << "Adivine! La pelicula es: Guason. " << endl;
                                                        cout << "Estrenada en el anio 2019." << endl;
                                                        break;
                                                    case 2:
                                                        cout << "Lo siento, no pude adivinar su pelicula" << endl;
                                                        break;
                                                    default:
                                                        cout << "Inserte un numero valido" << endl;
                                                        break;
                                                    }
                                                }
                                                else if (respuesta == 2) {
                                                    cout << "Lo siento, no pude adivinar su pelicula. Intente con otra opcion" << endl;
                                                }
                                                else {
                                                    cout << "Inserte un numero valido" << endl;
                                                }
                                                break;
                                            default:
                                                cout << "Inserte un numero valido" << endl;
                                                break;
                                            }
                                        }
                                        else if (respuesta == 2) {
                                            cout << "Lo siento, no pude adivinar su pelicula. Intente otra opcion" << endl;
                                        }

                                        else {
                                            cout << "Inserte un numero valido" << endl;
                                        }
                                    }
                                    else {
                                        cout << "Inserte un numero valido" << endl;
                                    }
                                    break;

                                default:
                                    cout << "Inserte un numero valido" << endl;
                                    break;
                                }
                            }

                            else if (respuesta == 2) {
                                cout << "Lo siento, no he podido adivinar su pelicula. Intente otra opcion" << endl;
                            }

                            else {
                                cout << "Inserte un numero valido" << endl;
                            }
                        }
                        else {
                            cout << "Inserte un numero valido" << endl;
                        }
                    }
                    else {
                        cout << "Inserte un numero valido" << endl;
                    }
                }

                break;

            default:
                cout << "Inserte un numero valido" << endl;
                break;
            }


        }

        else {
            cout << "Inserte un numero valido" << endl;
        }
        cout << "Desea ejecutar nuevamente el adivinador?" << endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cin >> respuesta;
        system("cls");
        switch (respuesta) {
        case 1:
            valor = true;
            break;

        case 2:
            cout << "Gracias por utilizar nuestros servicios";
            valor = false;
            break;
        }
    }
    while (valor == true);
}
