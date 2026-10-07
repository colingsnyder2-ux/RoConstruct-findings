// roc 2011-06 0048d6f0  unit: CObjectBrowser  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048d6f0
//
// 0048d6f0  8b442404             mov eax, dword ptr [esp + 4]
// 0048d6f4  50                   push eax
// 0048d6f5  e8b8d23700           call 0x80a9b2
// 0048d6fa  f7d8                 neg eax
// 0048d6fc  1bc0                 sbb eax, eax
// 0048d6fe  f7d8                 neg eax
// 0048d700  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Edit\XTPHexEdit.cpp (function ?PreCreateWindow@CXTPHexEdit@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Edit/XTPHexEdit.cpp
