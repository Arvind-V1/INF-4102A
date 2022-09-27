#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(string file_path, string motive)
{
	string file_path2 = "D:/ESIEE/E4/C++/TD1/Project1/test.txt";
	string motive2 = "ok";
	ifstream Fichier_ouvert;
	Fichier_ouvert.open(file_path2);
	int nombre_de_motif = 0;

	if (Fichier_ouvert)
	{
		string ligne;
		while (getline(Fichier_ouvert, ligne))
		{
			istringstream iss(ligne);
			do
			{
				string subs;
				iss >> subs;
				if (subs.find(motive2) != std::string::npos)
				{
					nombre_de_motif++;
				}
			} while (iss);
		}
	}
	else
	{
		cout << "The file " << file_path2 << " could not be opened." << endl;
	}
	Fichier_ouvert.close();
	cout << "The file " << file_path2 << " contains " << nombre_de_motif << " words containing the motive " << motive2 << "." << endl;
	return 0;

}