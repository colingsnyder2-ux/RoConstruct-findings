// roc 2011-06 00a3a730  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a730
//
// 00a3a730  a1b8cecc00           mov eax, dword ptr [0xccceb8]
// 00a3a735  85c0                 test eax, eax
// 00a3a737  7409                 je 0xa3a742
// 00a3a739  50                   push eax
// 00a3a73a  e819f9dcff           call 0x80a058
// 00a3a73f  83c404               add esp, 4
// 00a3a742  c7059ccecc00e0bea500 mov dword ptr [0xccce9c], 0xa5bee0
// 00a3a74c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
