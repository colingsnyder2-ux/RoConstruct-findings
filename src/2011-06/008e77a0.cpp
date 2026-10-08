// from server: 100% by auto
// roc 2011-06 008e77a0  unit: CXTColorPageStandard  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e77a0
//
// 008e77a0  8b442404             mov eax, dword ptr [esp + 4]
// 008e77a4  81c188000000         add ecx, 0x88
// 008e77aa  51                   push ecx
// 008e77ab  6a67                 push 0x67
// 008e77ad  50                   push eax
// 008e77ae  e8f931f2ff           call 0x80a9ac
// 008e77b3  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageStandard.cpp (function ?DoDataExchange@CXTPColorPageStandard@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageStandard.cpp
