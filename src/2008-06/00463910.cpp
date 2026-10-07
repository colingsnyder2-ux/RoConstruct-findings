// roc 2008-06 00463910  unit: CObjectBrowser  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463910
//
// 00463910  8b442404             mov eax, dword ptr [esp + 4]
// 00463914  50                   push eax
// 00463915  e8e8d52300           call 0x6a0f02
// 0046391a  f7d8                 neg eax
// 0046391c  1bc0                 sbb eax, eax
// 0046391e  f7d8                 neg eax
// 00463920  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTHexEdit.cpp (function ?PreCreateWindow@CXTHexEdit@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTHexEdit.cpp
