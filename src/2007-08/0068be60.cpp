// from server: 85% by colin
// roc 2007-08 0068be60  unit: CXTPTabClientWnd  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068be60
//
// 0068be60  83b9b400000000       cmp dword ptr [ecx + 0xb4], 0
// 0068be67  7412                 je 0x68be7b
// 0068be69  8b442404             mov eax, dword ptr [esp + 4]
// 0068be6d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0068be70  50                   push eax
// 0068be71  51                   push ecx
// 0068be72  ff15f0ed7700         call dword ptr [0x77edf0]
// 0068be78  c20400               ret 4
// 0068be7b  e8a090deff           call 0x474f20
// 0068be80  85c0                 test eax, eax
// 0068be82  7422                 je 0x68bea6
// 0068be84  6a00                 push 0
// 0068be86  e855ffffff           call 0x68bde0
// 0068be8b  8b10                 mov edx, dword ptr [eax]
// 0068be8d  8bc8                 mov ecx, eax
// 0068be8f  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0068be95  ffd0                 call eax
// 0068be97  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0068be9b  8b5020               mov edx, dword ptr [eax + 0x20]
// 0068be9e  51                   push ecx
// 0068be9f  52                   push edx
// 0068bea0  ff15f0ed7700         call dword ptr [0x77edf0]
// 0068bea6  c20400               ret 4

extern "C" int __stdcall ClientToScreen(void*, void*);
extern int __cdecl func_00474f20();
extern int __cdecl func_0068bde0(int);

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
        int obj = func_0068bde0(0);
        int v = (*(int (__thiscall**)(int))(*(int*)obj + 0x80))(obj);
        ClientToScreen((void*)*(int*)(v + 0x20), (void*)param);
    }
}
