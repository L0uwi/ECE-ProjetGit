
#include <iostream>
#include <map>

int main()
{

    int choix;

    std::map<std::string, std::string> tab;
    std::map<std::string, std::string>::iterator it;
    std::string str;


    tab["Mario"]= "Rouge";
    tab["Luigi"]= "Vert";
    tab["Peach"]= "Jaune";
    tab["Daisy"]= "Rose";


    do
    {
        std::cout << "Choisissez une option" << std::endl;
        std::cout << "1. Retrouver votre mot de passe grace a votre login" << std::endl;
        std::cout << "2. Retrouver votre login grace a votre mot de passe" << std::endl;
        std::cout << "3. Quitter" << std::endl;

        std::cin >> choix;

        switch (choix)
        {
            case 1:
                std::cout << "Veuillez entrer votre login" << std::endl;

                std::cin >> str;

                it = tab.find(str);
                 if (it!= tab.end())
                 {
                     std::cout << "Le login " << str  << " correspond au mot de passe " << tab[str] << std::endl;
                 }
                else
                    std::cout << "Login introuvable..." << std::endl;

                break;


            case 2:
                std::cout << "Veuillez entrer votre mot de passe" <<std::endl;

                std::cin >> str;

                for (const auto &elem : tab)
                {
                    if (str== elem.second)
                    {
                        std::cout << "Le mot de passe " << str << " correspond au login " << elem.first << std::endl;
                    }
                }

                break;

        }

    }while (choix!=3);






    return 0;
}
