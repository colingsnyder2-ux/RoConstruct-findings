// roc 2011-06 00a3c360  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c360
//
// 00a3c360  a12c04cd00           mov eax, dword ptr [0xcd042c]
// 00a3c365  85c0                 test eax, eax
// 00a3c367  7409                 je 0xa3c372
// 00a3c369  50                   push eax
// 00a3c36a  e8e9dcdcff           call 0x80a058
// 00a3c36f  83c404               add esp, 4
// 00a3c372  c7051004cd00e0bea500 mov dword ptr [0xcd0410], 0xa5bee0
// 00a3c37c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
