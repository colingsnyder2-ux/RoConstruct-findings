// roc 2012-06 004a03f0  unit: CObjectBrowser  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a03f0
//
// 004a03f0  8b442404             mov eax, dword ptr [esp + 4]
// 004a03f4  50                   push eax
// 004a03f5  e838264e00           call 0x982a32
// 004a03fa  f7d8                 neg eax
// 004a03fc  1bc0                 sbb eax, eax
// 004a03fe  f7d8                 neg eax
// 004a0400  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Edit\XTPHexEdit.cpp (function ?PreCreateWindow@CXTPHexEdit@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Edit/XTPHexEdit.cpp
