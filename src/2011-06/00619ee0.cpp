// from server: 77% by atomic.potato
// roc 2011-06 00619ee0  unit: RBX::VScriptContext::?$FactoryProduct  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619ee0
//
// 00619ee0  56                   push esi
// 00619ee1  8b742408             mov esi, dword ptr [esp + 8]
// 00619ee5  57                   push edi
// 00619ee6  68e09e6100           push 0x619ee0
// 00619eeb  56                   push esi
// 00619eec  e83f8c1400           call 0x762b30
// 00619ef1  68f0d8ffff           push 0xffffd8f0
// 00619ef6  56                   push esi
// 00619ef7  e8148d1400           call 0x762c10
// 00619efc  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00619f00  57                   push edi
// 00619f01  56                   push esi
// 00619f02  e8298c1400           call 0x762b30
// 00619f07  6afe                 push -2
// 00619f09  56                   push esi
// 00619f0a  e8018d1400           call 0x762c10
// 00619f0f  6aff                 push -1
// 00619f11  56                   push esi
// 00619f12  e839861400           call 0x762550
// 00619f17  83c428               add esp, 0x28
// 00619f1a  85c0                 test eax, eax
// 00619f1c  7529                 jne 0x619f47
// 00619f1e  6afe                 push -2
// 00619f20  56                   push esi
// 00619f21  e84a841400           call 0x762370
// 00619f26  57                   push edi
// 00619f27  56                   push esi
// 00619f28  e843e8ffff           call 0x618770
// 00619f2d  57                   push edi
// 00619f2e  56                   push esi
// 00619f2f  e8fc8b1400           call 0x762b30
// 00619f34  6afe                 push -2
// 00619f36  56                   push esi
// 00619f37  e8e4851400           call 0x762520
// 00619f3c  6afc                 push -4
// 00619f3e  56                   push esi
// 00619f3f  e80c8f1400           call 0x762e50
// 00619f44  83c428               add esp, 0x28
// 00619f47  6afe                 push -2
// 00619f49  56                   push esi
// 00619f4a  e871841400           call 0x7623c0
// 00619f4f  83c408               add esp, 8
// 00619f52  5f                   pop edi
// 00619f53  5e                   pop esi
// 00619f54  c3                   ret 

extern "C" {
int __stdcall sub_762b30(int, int);
int __stdcall sub_762c10(int, int);
int __stdcall sub_762550(int, int);
int __stdcall sub_762370(int, int);
int __stdcall sub_762520(int, int);
int __stdcall sub_762e50(int, int);
int __stdcall sub_7623c0(int, int);
int __stdcall sub_618770(int, int);
}

struct S {
};

int __cdecl f(int a, int b) {
    int esi = a;
    int edi = b;
    sub_762b30(esi, 0x619ee0);
    sub_762c10(esi, 0xffffd8f0);
    sub_762b30(esi, edi);
    sub_762c10(esi, -2);
    if (sub_762550(esi, -1) == 0) {
        sub_762370(esi, -2);
        sub_618770(esi, edi);
        sub_762b30(esi, edi);
        sub_762520(esi, -2);
        sub_762e50(esi, -4);
    }
    sub_7623c0(esi, -2);
    return 0;
}
