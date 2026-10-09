// roc 2011-06 008d41d0  unit: CXTPTabManagerItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d41d0
//
// 008d41d0  8b442404             mov eax, dword ptr [esp + 4]
// 008d41d4  56                   push esi
// 008d41d5  8bf1                 mov esi, ecx
// 008d41d7  6a01                 push 1
// 008d41d9  c7460400000000       mov dword ptr [esi + 4], 0
// 008d41e0  c70600000000         mov dword ptr [esi], 0
// 008d41e6  894608               mov dword ptr [esi + 8], eax
// 008d41e9  e812f9ffff           call 0x8d3b00
// 008d41ee  8bc6                 mov eax, esi
// 008d41f0  5e                   pop esi
// 008d41f1  c20400               ret 4
// copied from an identical function in another client (function ?f@CXTPTabManagerItem@ns_ROCX0000dd@@QAEHH@Z)

namespace ns_ROCX0000dd {
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
