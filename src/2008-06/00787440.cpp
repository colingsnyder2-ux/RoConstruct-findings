// roc 2008-06 00787440  unit: CXTColorHex  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00787440
//
// 00787440  c7416000000000       mov dword ptr [ecx + 0x60], 0
// 00787447  e81c98f1ff           call 0x6a0c68
// 0078744c  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?OnLButtonUp@CXTColorHex@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp
