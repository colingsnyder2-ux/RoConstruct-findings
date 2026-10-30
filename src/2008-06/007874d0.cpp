// from server: 100% by auto
// roc 2008-06 007874d0  unit: CXTColorPageStandard  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007874d0
//
// 007874d0  8b442404             mov eax, dword ptr [esp + 4]
// 007874d4  81c188000000         add ecx, 0x88
// 007874da  51                   push ecx
// 007874db  6a67                 push 0x67
// 007874dd  50                   push eax
// 007874de  e80d9af1ff           call 0x6a0ef0
// 007874e3  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?DoDataExchange@CXTColorPageStandard@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp
