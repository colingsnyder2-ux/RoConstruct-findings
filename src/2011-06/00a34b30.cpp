// roc 2011-06 00a34b30  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34b30
//
// 00a34b30  a168b5cb00           mov eax, dword ptr [0xcbb568]
// 00a34b35  85c0                 test eax, eax
// 00a34b37  7409                 je 0xa34b42
// 00a34b39  50                   push eax
// 00a34b3a  e81955ddff           call 0x80a058
// 00a34b3f  83c404               add esp, 4
// 00a34b42  c7054cb5cb00e0bea500 mov dword ptr [0xcbb54c], 0xa5bee0
// 00a34b4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
