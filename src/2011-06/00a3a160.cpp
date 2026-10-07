// roc 2011-06 00a3a160  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a160
//
// 00a3a160  a1fcc5cc00           mov eax, dword ptr [0xccc5fc]
// 00a3a165  85c0                 test eax, eax
// 00a3a167  7409                 je 0xa3a172
// 00a3a169  50                   push eax
// 00a3a16a  e8e9fedcff           call 0x80a058
// 00a3a16f  83c404               add esp, 4
// 00a3a172  c705e0c5cc00e0bea500 mov dword ptr [0xccc5e0], 0xa5bee0
// 00a3a17c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
