// roc 2011-06 00a3e010  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e010
//
// 00a3e010  a1b030cd00           mov eax, dword ptr [0xcd30b0]
// 00a3e015  85c0                 test eax, eax
// 00a3e017  7409                 je 0xa3e022
// 00a3e019  50                   push eax
// 00a3e01a  e839c0dcff           call 0x80a058
// 00a3e01f  83c404               add esp, 4
// 00a3e022  c7059430cd00e0bea500 mov dword ptr [0xcd3094], 0xa5bee0
// 00a3e02c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
