// roc 2012-06 007d3430  unit: RBX::Teams  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d3430
//
// 007d3430  8b442404             mov eax, dword ptr [esp + 4]
// 007d3434  50                   push eax
// 007d3435  e8f6f9ffff           call 0x7d2e30
// 007d343a  f7d8                 neg eax
// 007d343c  1bc0                 sbb eax, eax
// 007d343e  f7d8                 neg eax
// 007d3440  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Edit\XTPHexEdit.cpp (function ?PreCreateWindow@CXTPHexEdit@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Edit/XTPHexEdit.cpp
