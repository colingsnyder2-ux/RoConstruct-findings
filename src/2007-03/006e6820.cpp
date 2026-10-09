// roc 2007-03 006e6820  unit: seg_006e0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e6820
//
// 006e6820  8b442404             mov eax, dword ptr [esp + 4]
// 006e6824  56                   push esi
// 006e6825  8bf1                 mov esi, ecx
// 006e6827  6a01                 push 1
// 006e6829  c7460400000000       mov dword ptr [esi + 4], 0
// 006e6830  c70600000000         mov dword ptr [esi], 0
// 006e6836  894608               mov dword ptr [esi + 8], eax
// 006e6839  e802faffff           call 0x6e6240
// 006e683e  8bc6                 mov eax, esi
// 006e6840  5e                   pop esi
// 006e6841  c20400               ret 4
// copied from an identical function in another client (function ?f@CXTPTabManagerItem@ns_ROCX00009d@@QAEHH@Z)

namespace ns_ROCX00009d {
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
