// roc 2011-06 008ea5b0  unit: CXTColorBase  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ea5b0
//
// 008ea5b0  56                   push esi
// 008ea5b1  8bf1                 mov esi, ecx
// 008ea5b3  ff15401ba400         call dword ptr [0xa41b40]
// 008ea5b9  8bce                 mov ecx, esi
// 008ea5bb  e86e00f2ff           call 0x80a62e
// 008ea5c0  5e                   pop esi
// 008ea5c1  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?OnLButtonUp@CXTPColorBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
