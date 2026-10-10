// from server: 95% by colin
struct RBX_Instance;

struct RBX_Instance {
    char pad[0xbc];
    RBX_Instance* next;
};

extern "C" int __cdecl func_00630d36(RBX_Instance*, int, const char*, const char*, int);
extern "C" int __cdecl func_0040e750();

int __cdecl func_005d12d0(RBX_Instance* inst)
{
    while (inst != 0) {
        int result = func_00630d36(inst, 0, (const char*)0x881f4c, (const char*)0x884e04, 0);
        if (result != 0) {
            return func_0040e750();
        }
        inst = inst->next;
    }
    return 0;
}
