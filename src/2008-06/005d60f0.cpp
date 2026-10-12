// from server: 98% by king_originala
namespace RBX {
    struct Instance {
        virtual ~Instance();
        char pad[0x100];
        Instance* next;
    };

    struct ChildEntry {
        Instance* object;
        void* owner;
    };

    struct Children {
        char pad[0x0c];
        ChildEntry* first;
        ChildEntry* last;
    };

    struct ServiceProvider : Instance {
        Children* children;
        unsigned int size();
    };

    namespace Network {
        struct Player : Instance {
            char pad[0x70];
            volatile int value;
            bool flag;
        };
    }

    struct VTeams : Instance {
        int count(int value);
    };
}

RBX::ServiceProvider* __cdecl func_00491d50(RBX::Instance*);
extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern char instanceTypeDescriptor;
extern char playerTypeDescriptor;

int RBX::VTeams::count(int value)
{
    int result = 0;
    ServiceProvider* provider = func_00491d50(this);
    for (unsigned int i = 0; i < provider->size(); ++i) {
        Children* children = provider->children;
        if (i >= static_cast<unsigned int>(children->last - children->first))
            invalid_parameter_noinfo();

        Network::Player* player = static_cast<Network::Player*>(
            __RTDynamicCast(children->first[i].object, 0,
                            &instanceTypeDescriptor, &playerTypeDescriptor, 0));

        if (player && !player->flag && player->value == value)
            ++result;
    }
    return result;
}
