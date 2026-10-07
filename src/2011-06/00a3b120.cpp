// roc 2011-06 00a3b120  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b120
//
// 00a3b120  a1c4e1cc00           mov eax, dword ptr [0xcce1c4]
// 00a3b125  85c0                 test eax, eax
// 00a3b127  7409                 je 0xa3b132
// 00a3b129  50                   push eax
// 00a3b12a  e829efdcff           call 0x80a058
// 00a3b12f  83c404               add esp, 4
// 00a3b132  c705a8e1cc00e0bea500 mov dword ptr [0xcce1a8], 0xa5bee0
// 00a3b13c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
