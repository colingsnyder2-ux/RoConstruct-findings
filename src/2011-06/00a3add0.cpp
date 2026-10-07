// roc 2011-06 00a3add0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3add0
//
// 00a3add0  a1a0dacc00           mov eax, dword ptr [0xccdaa0]
// 00a3add5  85c0                 test eax, eax
// 00a3add7  7409                 je 0xa3ade2
// 00a3add9  50                   push eax
// 00a3adda  e879f2dcff           call 0x80a058
// 00a3addf  83c404               add esp, 4
// 00a3ade2  c70584dacc00e0bea500 mov dword ptr [0xccda84], 0xa5bee0
// 00a3adec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
