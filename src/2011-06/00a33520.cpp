// roc 2011-06 00a33520  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33520
//
// 00a33520  a1887ccb00           mov eax, dword ptr [0xcb7c88]
// 00a33525  85c0                 test eax, eax
// 00a33527  7409                 je 0xa33532
// 00a33529  50                   push eax
// 00a3352a  e8296bddff           call 0x80a058
// 00a3352f  83c404               add esp, 4
// 00a33532  c7056c7ccb00e0bea500 mov dword ptr [0xcb7c6c], 0xa5bee0
// 00a3353c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
