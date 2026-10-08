// from server: 77% by colinlaptop
// roc 2007-08 00412300  unit: VCContent::?$CComObject  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412300
//
// 00412300  83c408               add esp, 8
// 00412303  b809234100           mov eax, 0x412309
// 00412308  c3                   ret 

extern "C" __declspec(dllimport) void __stdcall sub_412309();

int __stdcall sub_412300() {
    sub_412309();
    return 0;
}
