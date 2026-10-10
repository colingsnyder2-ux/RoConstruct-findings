// from server: 51% by colin
struct CXTPDockingPane {
    int sub_68F620(int, int, int, int, int);
};

extern "C" int __stdcall sub_6713D0(void*);
extern "C" void* __stdcall sub_77E124(void*);
extern "C" void __stdcall sub_77DDBC(void*);

int CXTPDockingPane::sub_68F620(int a1, int a2, int a3, int a4, int a5)
{
    int local;
    if (sub_6713D0(&local) != 0)
        return (int)0x80070057;
    void* p = (void*)((char*)this - 0x58);
    void* (__thiscall *fn)(void*, void*) = *(void* (__thiscall **)(void*, void*))((*(int*)p) + 0x60);
    void* r;
    fn(p, &r);
    *(int*)a5 = (int)sub_77E124(r);
    sub_77DDBC(&r);
    return 0;
}
