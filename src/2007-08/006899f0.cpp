// from server: 82% by colin
// roc 2007-08 006899f0  unit: CXTPControlTabWorkspace  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006899f0
//
// 006899f0  83b9f401000000       cmp dword ptr [ecx + 0x1f4], 0
// 006899f7  741f                 je 0x689a18
// 006899f9  8b442408             mov eax, dword ptr [esp + 8]
// 006899fd  8b542404             mov edx, dword ptr [esp + 4]
// 00689a01  50                   push eax
// 00689a02  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 00689a08  52                   push edx
// 00689a09  8b5020               mov edx, dword ptr [eax + 0x20]
// 00689a0c  52                   push edx
// 00689a0d  81c168010000         add ecx, 0x168
// 00689a13  e8d8510700           call 0x6febf0
// 00689a18  c20800               ret 8

struct CXTPControlTabWorkspace {
    void m(int, int);
};

extern "C" void __stdcall func_006febf0(int, int, int);

void CXTPControlTabWorkspace::m(int a, int b)
{
    if (*(int*)((char*)this + 0x1f4) != 0)
    {
        int v = *(int*)((char*)this + 0xfc);
        func_006febf0(*(int*)((char*)v + 0x20), a, b);
    }
}
