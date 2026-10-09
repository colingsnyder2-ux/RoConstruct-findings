// roc 2009-12 008cf100  unit: CXTPTabManagerItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cf100
//
// 008cf100  8b442404             mov eax, dword ptr [esp + 4]
// 008cf104  56                   push esi
// 008cf105  8bf1                 mov esi, ecx
// 008cf107  6a01                 push 1
// 008cf109  c7460400000000       mov dword ptr [esi + 4], 0
// 008cf110  c70600000000         mov dword ptr [esi], 0
// 008cf116  894608               mov dword ptr [esi + 8], eax
// 008cf119  e8f2f8ffff           call 0x8cea10
// 008cf11e  8bc6                 mov eax, esi
// 008cf120  5e                   pop esi
// 008cf121  c20400               ret 4
// copied from an identical function in another client (function ?f@CXTPTabManagerItem@ns_ROCX000097@@QAEHH@Z)

namespace ns_ROCX000097 {
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
