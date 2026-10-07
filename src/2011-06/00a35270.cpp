// roc 2011-06 00a35270  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35270
//
// 00a35270  a174cfcb00           mov eax, dword ptr [0xcbcf74]
// 00a35275  85c0                 test eax, eax
// 00a35277  7409                 je 0xa35282
// 00a35279  50                   push eax
// 00a3527a  e8d94dddff           call 0x80a058
// 00a3527f  83c404               add esp, 4
// 00a35282  c70558cfcb00e0bea500 mov dword ptr [0xcbcf58], 0xa5bee0
// 00a3528c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
