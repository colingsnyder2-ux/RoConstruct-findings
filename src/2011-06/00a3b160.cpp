// roc 2011-06 00a3b160  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b160
//
// 00a3b160  a134e3cc00           mov eax, dword ptr [0xcce334]
// 00a3b165  85c0                 test eax, eax
// 00a3b167  7409                 je 0xa3b172
// 00a3b169  50                   push eax
// 00a3b16a  e8e9eedcff           call 0x80a058
// 00a3b16f  83c404               add esp, 4
// 00a3b172  c70518e3cc00e0bea500 mov dword ptr [0xcce318], 0xa5bee0
// 00a3b17c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
