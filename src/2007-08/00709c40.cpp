// roc 2007-08 00709c40  unit: CXTColorPageStandard  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00709c40
//
// 00709c40  8b442404             mov eax, dword ptr [esp + 4]
// 00709c44  81c188000000         add ecx, 0x88
// 00709c4a  51                   push ecx
// 00709c4b  6a67                 push 0x67
// 00709c4d  50                   push eax
// 00709c4e  e8c7eb0200           call 0x73881a
// 00709c53  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTColorPageStandard.cpp (function ?DoDataExchange@CXTColorPageStandard@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPageStandard.cpp
