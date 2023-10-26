#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Superhero {
public:
    string name;
    string power;
    string description;

    Superhero(string name, string power, string description) {
        this->name = name;
        this->power = power;
        this->description = description;
    }
};

class Catalogue {
public:
    vector<Superhero> superheroes;

    void addSuperhero(Superhero superhero) {
        superheroes.push_back(superhero);
    }

    void modifySuperhero(int index, Superhero superhero) {
        superheroes[index] = superhero;
    }

    void deleteSuperhero(int index) {
        superheroes.erase(superheroes.begin() + index);
    }
};

class CatalogueManager {
public:
    Catalogue catalogue;

    void addSuperhero(string name, string power, string description) {
        Superhero superhero(name, power, description);
        catalogue.addSuperhero(superhero);
    }

    void modifySuperhero(int index, string name, string power, string description) {
        Superhero superhero(name, power, description);
        catalogue.modifySuperhero(index, superhero);
    }

    void deleteSuperhero(int index) {
        catalogue.deleteSuperhero(index);
    }
};

int main() {
    CatalogueManager catalogueManager;

    // Add a new superhero
    catalogueManager.addSuperhero("Batman", "Intelligence", "The Dark Knight");

    // Modify an existing superhero
    catalogueManager.modifySuperhero(0, "Spiderman", "Web-slinging", "Friendly neighborhood Spiderman");

    // Delete an existing superhero
    catalogueManager.deleteSuperhero(0);

    return 0;
}
