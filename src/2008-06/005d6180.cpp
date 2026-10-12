// from server: 90% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Team {
    int func_005d5f40() const;
};

struct TeamColor {
    int value;
    Vector3 func_005b6270() const;
};

namespace RBX {
    struct Instance {
        virtual ~Instance();
        char padding[0x100];
        Instance* next;
    };

    struct Entry {
        Instance* object;
        void* owner;
    };

    struct Children {
        char padding[12];
        Entry* begin;
        Entry* end;
    };

    struct ServiceProvider : Instance {
        Children* children;
        unsigned int func_0048ae20() const;
    };

    struct VTeams : Instance {
        Vector3 func_005d6180(int teamId);
    };
}

namespace Network {
    struct Player : RBX::Instance {
        char padding[0x68];
        Team* team;
        int reserved;
        TeamColor color;
        bool neutral;
    };
}

extern RBX::ServiceProvider* __cdecl func_00491d50(RBX::Instance*);
extern const Vector3& __cdecl func_00514a60();
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

Vector3 RBX::VTeams::func_005d6180(int teamId)
{
    ServiceProvider* provider = func_00491d50(this);
    for (unsigned int i = 0; i < provider->func_0048ae20(); ++i) {
        Children* children = provider->children;
        if (i >= static_cast<unsigned int>(children->end - children->begin))
            _invalid_parameter_noinfo();

        Network::Player* player =
            dynamic_cast<Network::Player*>(children->begin[i].object);

        if (player && !player->neutral && player->team &&
            player->team->func_005d5f40() == teamId) {
            TeamColor color = player->color;
            return color.func_005b6270();
        }
    }
    return func_00514a60();
}
