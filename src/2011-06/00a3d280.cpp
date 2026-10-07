// roc 2011-06 00a3d280  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d280
//
// 00a3d280  a1f81bcd00           mov eax, dword ptr [0xcd1bf8]
// 00a3d285  85c0                 test eax, eax
// 00a3d287  7409                 je 0xa3d292
// 00a3d289  50                   push eax
// 00a3d28a  e8c9cddcff           call 0x80a058
// 00a3d28f  83c404               add esp, 4
// 00a3d292  c705dc1bcd00e0bea500 mov dword ptr [0xcd1bdc], 0xa5bee0
// 00a3d29c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
