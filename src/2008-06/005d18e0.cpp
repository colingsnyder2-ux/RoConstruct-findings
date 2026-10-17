// from server: 89% by colin
namespace RBX {
    struct Instance {
        virtual ~Instance();
        char pad[0x100];
        Instance* next;
    };
    struct ServiceProvider;
}

RBX::ServiceProvider* __cdecl func_00491e50(RBX::Instance*);
void* __cdecl func_0049ac80(void*);
int __cdecl sub_495e80(int, int);

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern char type_Instance[];
extern char type_HopperBin[];
extern char type_Script[];
extern char type_LocalScript[];

struct S {
    void* f(RBX::Instance*);
};

void* S::f(RBX::Instance* object)
{
    RBX::Instance* owner =
        reinterpret_cast<RBX::Instance*>(reinterpret_cast<char*>(this) - 0x168);
    RBX::ServiceProvider* provider = func_00491e50(owner);

    if (provider) {
        void* value = *reinterpret_cast<void**>(
            reinterpret_cast<char*>(this) - 0x64);
        bool equal = value == func_0049ac80(owner);
        unsigned char enabled =
            static_cast<unsigned char>(sub_495e80(reinterpret_cast<int>(owner), 1));

        bool hopper = __RTDynamicCast(
            object, 0, type_Instance, type_HopperBin, 0) != 0;

        object = object->next;
        bool local = __RTDynamicCast(
            object, 0, type_Script, type_LocalScript, 0) != 0;

        if (hopper) {
            if (!equal)
                return 0;
        } else {
            if (!local && !enabled)
                return 0;
            if (local && !equal && !enabled)
                return 0;
        }
        return reinterpret_cast<char*>(provider) + 0x340;
    }
    return 0;
}
