// from server: 65% by colin
// roc 2007-08 007192c0  unit: CXTPRibbonBar  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007192c0
//
// 007192c0  56                   push esi
// 007192c1  8bf1                 mov esi, ecx
// 007192c3  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 007192c6  3b4e58               cmp ecx, dword ptr [esi + 0x58]
// 007192c9  7405                 je 0x7192d0
// 007192cb  8b4678               mov eax, dword ptr [esi + 0x78]
// 007192ce  5e                   pop esi
// 007192cf  c3                   ret 
// 007192d0  e87be7f8ff           call 0x6a7a50
// 007192d5  8bce                 mov ecx, esi
// 007192d7  8bd0                 mov edx, eax
// 007192d9  e892ffffff           call 0x719270
// 007192de  3bd0                 cmp edx, eax
// 007192e0  750d                 jne 0x7192ef
// 007192e2  837e7800             cmp dword ptr [esi + 0x78], 0
// 007192e6  7407                 je 0x7192ef
// 007192e8  b801000000           mov eax, 1
// 007192ed  5e                   pop esi
// 007192ee  c3                   ret 
// 007192ef  33c0                 xor eax, eax
// 007192f1  5e                   pop esi
// 007192f2  c3                   ret 

struct CXTPRibbonBar {
    char pad[0x58];
    int field_58;
    int field_5c;
    char pad2[0x18];
    int field_78;
    int method_719270();
    int method_7192c0();
};

extern "C" int __stdcall sub_6a7a50();

int CXTPRibbonBar::method_7192c0() {
    if (field_5c != field_58) {
        return field_78;
    }
    int edx = sub_6a7a50();
    int eax = method_719270();
    if (edx != eax) {
        return 0;
    }
    if (field_78 == 0) {
        return 0;
    }
    return 1;
}
