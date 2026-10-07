// roc 2011-06 00a39d60  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39d60
//
// 00a39d60  a180c1cc00           mov eax, dword ptr [0xccc180]
// 00a39d65  85c0                 test eax, eax
// 00a39d67  7409                 je 0xa39d72
// 00a39d69  50                   push eax
// 00a39d6a  e8e902ddff           call 0x80a058
// 00a39d6f  83c404               add esp, 4
// 00a39d72  c70564c1cc00e0bea500 mov dword ptr [0xccc164], 0xa5bee0
// 00a39d7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
