// roc 2007-03 00626290  unit: seg_00620000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00626290
//
// 00626290  56                   push esi
// 00626291  8bf1                 mov esi, ecx
// 00626293  e8e8ecffff           call 0x624f80
// 00626298  8b442408             mov eax, dword ptr [esp + 8]
// 0062629c  894604               mov dword ptr [esi + 4], eax
// 0062629f  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 006262a6  8bc6                 mov eax, esi
// 006262a8  5e                   pop esi
// 006262a9  c20400               ret 4
// copied from an identical function in another client (function ?f@CXTPCommandBar@ns_ROCX00001b@@QAEHH@Z)

namespace ns_ROCX00001b {
struct CXTPCommandBar {
    int f(int);
    int field0;
    int field4;
    int field8;
    int fieldC;
};

extern "C" void __fastcall sub_648640(CXTPCommandBar*);

int CXTPCommandBar::f(int arg) {
    sub_648640(this);
    field4 = arg;
    fieldC = 1;
    return (int)this;
}
}
