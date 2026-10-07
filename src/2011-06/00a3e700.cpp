// roc 2011-06 00a3e700  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e700
//
// 00a3e700  a15839cd00           mov eax, dword ptr [0xcd3958]
// 00a3e705  85c0                 test eax, eax
// 00a3e707  7409                 je 0xa3e712
// 00a3e709  50                   push eax
// 00a3e70a  e849b9dcff           call 0x80a058
// 00a3e70f  83c404               add esp, 4
// 00a3e712  c7053c39cd00e0bea500 mov dword ptr [0xcd393c], 0xa5bee0
// 00a3e71c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
