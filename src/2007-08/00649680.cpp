// from server: 100% by colin
// roc 2007-08 00649680  unit: CXTPCommandBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00649680
//
// 00649680  56                   push esi
// 00649681  8bf1                 mov esi, ecx
// 00649683  e8b8efffff           call 0x648640
// 00649688  8b442408             mov eax, dword ptr [esp + 8]
// 0064968c  894604               mov dword ptr [esi + 4], eax
// 0064968f  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 00649696  8bc6                 mov eax, esi
// 00649698  5e                   pop esi
// 00649699  c20400               ret 4

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
