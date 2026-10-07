// roc 2012-06 00a62990  unit: CXTColorBase  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a62990
//
// 00a62990  56                   push esi
// 00a62991  8bf1                 mov esi, ecx
// 00a62993  ff15743ab200         call dword ptr [0xb23a74]
// 00a62999  8bce                 mov ecx, esi
// 00a6299b  e83efdf1ff           call 0x9826de
// 00a629a0  5e                   pop esi
// 00a629a1  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?OnLButtonUp@CXTPColorBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
