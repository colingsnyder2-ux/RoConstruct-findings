// roc 2011-06 00a34670  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34670
//
// 00a34670  a158b3cb00           mov eax, dword ptr [0xcbb358]
// 00a34675  85c0                 test eax, eax
// 00a34677  7409                 je 0xa34682
// 00a34679  50                   push eax
// 00a3467a  e8d959ddff           call 0x80a058
// 00a3467f  83c404               add esp, 4
// 00a34682  c7053cb3cb00e0bea500 mov dword ptr [0xcbb33c], 0xa5bee0
// 00a3468c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
