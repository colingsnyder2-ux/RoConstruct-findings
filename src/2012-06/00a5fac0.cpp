// roc 2012-06 00a5fac0  unit: CXTColorPageStandard  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5fac0
//
// 00a5fac0  8b442404             mov eax, dword ptr [esp + 4]
// 00a5fac4  81c188000000         add ecx, 0x88
// 00a5faca  51                   push ecx
// 00a5facb  6a67                 push 0x67
// 00a5facd  50                   push eax
// 00a5face  e8592ff2ff           call 0x982a2c
// 00a5fad3  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageStandard.cpp (function ?DoDataExchange@CXTPColorPageStandard@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageStandard.cpp
