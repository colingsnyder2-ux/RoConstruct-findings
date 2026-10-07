// roc 2008-06 005d5f20  unit: RBX::Teams  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5f20
//
// 005d5f20  8b442404             mov eax, dword ptr [esp + 4]
// 005d5f24  50                   push eax
// 005d5f25  e8e6feffff           call 0x5d5e10
// 005d5f2a  f7d8                 neg eax
// 005d5f2c  1bc0                 sbb eax, eax
// 005d5f2e  f7d8                 neg eax
// 005d5f30  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTHexEdit.cpp (function ?PreCreateWindow@CXTHexEdit@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTHexEdit.cpp
