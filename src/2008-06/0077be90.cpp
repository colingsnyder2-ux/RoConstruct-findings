// roc 2008-06 0077be90  unit: CXTPTabManagerItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077be90
//
// 0077be90  8b442404             mov eax, dword ptr [esp + 4]
// 0077be94  56                   push esi
// 0077be95  8bf1                 mov esi, ecx
// 0077be97  6a01                 push 1
// 0077be99  c7460400000000       mov dword ptr [esi + 4], 0
// 0077bea0  c70600000000         mov dword ptr [esi], 0
// 0077bea6  894608               mov dword ptr [esi + 8], eax
// 0077bea9  e862f8ffff           call 0x77b710
// 0077beae  8bc6                 mov eax, esi
// 0077beb0  5e                   pop esi
// 0077beb1  c20400               ret 4
// copied from an identical function in another client (function ?f@CXTPTabManagerItem@ns_ROCX00002f@@QAEHH@Z)

namespace ns_ROCX00002f {
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
