#include <string>
#include <vector>

using std::vector;
using std::string;

class dnd_character
{
private:
    /* data */
    int level{0};
    string classe, name, background, race;
    vector <string> feats;
    int stats[6];

public:
    dnd_character(int level, string classe, string name, int stats[], vector<string> feats, string race);
    ~dnd_character();

    int getLevel(){
        return level;
    }

    string getName()
    {
        return name;
    }

    string getClasse()
    {
        return classe;
    }

    int getStats();

    string getRace()
    {
        return race;
    }

    vector<string> getFeats()
    {
        return feats;
    }

    void setLevel(int level);
    void setName(string name);
    void setClasse(string classe);
    void setStats(int stats[]);
    void setRace(string race);
    void setFeats(vector<string> feats);
};

dnd_character::dnd_character(int level, string classe, string name, int stats[], vector<string> feats, string race)
{
    
}

dnd_character::~dnd_character()
{
}

