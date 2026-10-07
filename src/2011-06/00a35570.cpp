// roc 2011-06 00a35570  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35570
//
// 00a35570  a144d9cb00           mov eax, dword ptr [0xcbd944]
// 00a35575  85c0                 test eax, eax
// 00a35577  7409                 je 0xa35582
// 00a35579  50                   push eax
// 00a3557a  e8d94addff           call 0x80a058
// 00a3557f  83c404               add esp, 4
// 00a35582  c70528d9cb00e0bea500 mov dword ptr [0xcbd928], 0xa5bee0
// 00a3558c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
