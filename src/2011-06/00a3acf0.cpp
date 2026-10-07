// roc 2011-06 00a3acf0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3acf0
//
// 00a3acf0  a1dcd9cc00           mov eax, dword ptr [0xccd9dc]
// 00a3acf5  85c0                 test eax, eax
// 00a3acf7  7409                 je 0xa3ad02
// 00a3acf9  50                   push eax
// 00a3acfa  e859f3dcff           call 0x80a058
// 00a3acff  83c404               add esp, 4
// 00a3ad02  c705c0d9cc00e0bea500 mov dword ptr [0xccd9c0], 0xa5bee0
// 00a3ad0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
