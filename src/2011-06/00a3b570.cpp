// roc 2011-06 00a3b570  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b570
//
// 00a3b570  a1c8eecc00           mov eax, dword ptr [0xcceec8]
// 00a3b575  85c0                 test eax, eax
// 00a3b577  7409                 je 0xa3b582
// 00a3b579  50                   push eax
// 00a3b57a  e8d9eadcff           call 0x80a058
// 00a3b57f  83c404               add esp, 4
// 00a3b582  c705a8eecc00e0bea500 mov dword ptr [0xcceea8], 0xa5bee0
// 00a3b58c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
