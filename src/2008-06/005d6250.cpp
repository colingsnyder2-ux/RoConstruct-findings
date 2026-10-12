// from server: 94% by king_originala
struct BrickColor {
    int value;
};

struct Team {
    char autoAssignable();
    BrickColor getTeamColor() const;
};

struct Player {
    void setTeamColor(BrickColor color);
    void setNeutral(bool neutral);
};

struct Entry {
    void* object;
    void* control;
};

struct Children {
    char padding[12];
    Entry* first;
    Entry* last;
};

extern "C" void (__cdecl* _invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

struct S {
    char padding[264];
    Children* children;

    unsigned int childCount();
    int teamPopulation(BrickColor color);
    void assignTeam(Player* player);
};

void S::assignTeam(Player* player)
{
    BrickColor selected;
    selected.value = 28;
    int minimum = 10000;
    bool found = false;

    for (unsigned int i = 0; i < childCount(); ++i) {
        Children* list = children;
        if (i >= static_cast<unsigned int>(list->last - list->first))
            _invalid_parameter_noinfo();

        Team* team = static_cast<Team*>(
            __RTDynamicCast(list->first[i].object, 0,
                            reinterpret_cast<void*>(0x92907c),
                            reinterpret_cast<void*>(0x9457ec), 0));

        if (team && team->autoAssignable() == 1) {
            int population = teamPopulation(team->getTeamColor());
            if (population < minimum) {
                selected = team->getTeamColor();
                minimum = population;
                found = true;
            }
        }
    }

    if (found) {
        player->setTeamColor(selected);
        player->setNeutral(false);
    }
}
