// roc 2007-08 005a3240  unit: RBX::Teams  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a3240
//
// 005a3240  8b442404             mov eax, dword ptr [esp + 4]
// 005a3244  50                   push eax
// 005a3245  e8e6feffff           call 0x5a3130
// 005a324a  f7d8                 neg eax
// 005a324c  1bc0                 sbb eax, eax
// 005a324e  f7d8                 neg eax
// 005a3250  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTHexEdit.cpp (function ?PreCreateWindow@CXTHexEdit@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTHexEdit.cpp
