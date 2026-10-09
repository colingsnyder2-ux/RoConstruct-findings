// roc 2010-06 008832e0  unit: CXTPTabManagerItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008832e0
//
// 008832e0  8b442404             mov eax, dword ptr [esp + 4]
// 008832e4  56                   push esi
// 008832e5  8bf1                 mov esi, ecx
// 008832e7  6a01                 push 1
// 008832e9  c7460400000000       mov dword ptr [esi + 4], 0
// 008832f0  c70600000000         mov dword ptr [esi], 0
// 008832f6  894608               mov dword ptr [esi + 8], eax
// 008832f9  e8f2f8ffff           call 0x882bf0
// 008832fe  8bc6                 mov eax, esi
// 00883300  5e                   pop esi
// 00883301  c20400               ret 4
// copied from an identical function in another client (function ?f@CXTPTabManagerItem@ns_ROCX000016@@QAEHH@Z)

namespace ns_ROCX000016 {
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
