// from server: 93% by colin
extern "C" int (__stdcall *ClientToScreen)(void*, void*);
extern int __cdecl func_00474f20();
extern int __cdecl func_0068bde0();

struct CXTPTabClientWnd
{
    char pad0[0x20];
    int field_0x20;
    char pad1[0x90];
    int field_0xb4;
    void SetWindowPos(int);
};

void CXTPTabClientWnd::SetWindowPos(int param)
{
    if (field_0xb4 != 0)
    {
        ClientToScreen((void*)field_0x20, (void*)param);
        return;
    }
    if (func_00474f20() != 0)
    {
        int obj = func_0068bde0();
        int v = (*(int (__thiscall**)(int))(*(int*)obj + 0x80))(obj);
        ClientToScreen((void*)*(int*)(v + 0x20), (void*)param);
    }
}
