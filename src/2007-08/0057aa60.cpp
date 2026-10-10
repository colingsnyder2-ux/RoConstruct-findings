// from server: 92% by colin
struct RBX_IScriptOwner;

extern "C" void* __cdecl func_00630d36(void*, void*, void*, void*, void*);
extern "C" void __cdecl func_005bd420();

struct RBX_IScriptOwner
{
    void m(void*);
};

void RBX_IScriptOwner::m(void* a)
{
    void* p = func_00630d36(a, 0, (void*)0x881f4c, (void*)0x898ee8, 0);
    if (p)
    {
        func_005bd420();
    }
}
