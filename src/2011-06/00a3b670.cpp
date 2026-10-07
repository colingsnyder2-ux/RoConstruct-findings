// roc 2011-06 00a3b670  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b670
//
// 00a3b670  a19ceccc00           mov eax, dword ptr [0xccec9c]
// 00a3b675  85c0                 test eax, eax
// 00a3b677  7409                 je 0xa3b682
// 00a3b679  50                   push eax
// 00a3b67a  e8d9e9dcff           call 0x80a058
// 00a3b67f  83c404               add esp, 4
// 00a3b682  c70580eccc00e0bea500 mov dword ptr [0xccec80], 0xa5bee0
// 00a3b68c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
