// roc 2011-06 00a34570  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34570
//
// 00a34570  a11cb2cb00           mov eax, dword ptr [0xcbb21c]
// 00a34575  85c0                 test eax, eax
// 00a34577  7409                 je 0xa34582
// 00a34579  50                   push eax
// 00a3457a  e8d95addff           call 0x80a058
// 00a3457f  83c404               add esp, 4
// 00a34582  c70500b2cb00e0bea500 mov dword ptr [0xcbb200], 0xa5bee0
// 00a3458c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
