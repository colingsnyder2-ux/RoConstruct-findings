// roc 2009-06 007f4550  unit: CXTPTabManagerItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f4550
//
// 007f4550  8b442404             mov eax, dword ptr [esp + 4]
// 007f4554  56                   push esi
// 007f4555  8bf1                 mov esi, ecx
// 007f4557  6a01                 push 1
// 007f4559  c7460400000000       mov dword ptr [esi + 4], 0
// 007f4560  c70600000000         mov dword ptr [esi], 0
// 007f4566  894608               mov dword ptr [esi + 8], eax
// 007f4569  e8f2f8ffff           call 0x7f3e60
// 007f456e  8bc6                 mov eax, esi
// 007f4570  5e                   pop esi
// 007f4571  c20400               ret 4
// copied from an identical function in another client (function ?f@CXTPTabManagerItem@ns_ROCX00000c@@QAEHH@Z)

namespace ns_ROCX00000c {
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
}
