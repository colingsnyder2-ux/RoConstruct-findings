// roc 2012-06 00a5fa30  unit: CXTColorHex  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5fa30
//
// 00a5fa30  c7416000000000       mov dword ptr [ecx + 0x60], 0
// 00a5fa37  e8a22cf2ff           call 0x9826de
// 00a5fa3c  c20c00               ret 0xc
// library xtp-13.2.1/Source\Controls\XTColorPageStandard.cpp (function ?OnLButtonUp@CXTColorHex@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTColorPageStandard.cpp
