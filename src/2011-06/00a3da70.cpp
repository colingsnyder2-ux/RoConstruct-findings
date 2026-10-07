// roc 2011-06 00a3da70  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3da70
//
// 00a3da70  a13429cd00           mov eax, dword ptr [0xcd2934]
// 00a3da75  85c0                 test eax, eax
// 00a3da77  7409                 je 0xa3da82
// 00a3da79  50                   push eax
// 00a3da7a  e8d9c5dcff           call 0x80a058
// 00a3da7f  83c404               add esp, 4
// 00a3da82  c7051829cd00e0bea500 mov dword ptr [0xcd2918], 0xa5bee0
// 00a3da8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
