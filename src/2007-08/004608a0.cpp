// from server: 44% by colin
struct CScriptDoc
{
    void* vtable;
    char pad[0x50];
    int field54;
    int field58;
};

extern "C" void* __cdecl func_0062fef6(unsigned int size);
extern "C" void __cdecl func_0062ff5c(CScriptDoc* self);

CScriptDoc* __cdecl func_004608a0()
{
    CScriptDoc* p = (CScriptDoc*)func_0062fef6(0x5c);
    if (p != 0)
    {
        func_0062ff5c(p);
        p->vtable = (void*)0x794aa4;
        p->field54 = 0;
        p->field58 = 0;
        return p;
    }
    return 0;
}
