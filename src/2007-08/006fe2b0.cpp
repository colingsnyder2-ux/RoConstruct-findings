// from server: 100% by colin
// roc 2007-08 006fe2b0  unit: CXTPTabManagerItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fe2b0
//
// 006fe2b0  8b442404             mov eax, dword ptr [esp + 4]
// 006fe2b4  56                   push esi
// 006fe2b5  8bf1                 mov esi, ecx
// 006fe2b7  6a01                 push 1
// 006fe2b9  c7460400000000       mov dword ptr [esi + 4], 0
// 006fe2c0  c70600000000         mov dword ptr [esi], 0
// 006fe2c6  894608               mov dword ptr [esi + 8], eax
// 006fe2c9  e8f2f8ffff           call 0x6fdbc0
// 006fe2ce  8bc6                 mov eax, esi
// 006fe2d0  5e                   pop esi
// 006fe2d1  c20400               ret 4

struct CXTPTabManagerItem {
    int f(int);
};

extern void __stdcall g_006fdbc0(int);

int CXTPTabManagerItem::f(int a)
{
    *(int*)((char*)this + 4) = 0;
    *(int*)this = 0;
    *(int*)((char*)this + 8) = a;
    g_006fdbc0(1);
    return (int)this;
}
