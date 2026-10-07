// roc 2011-06 00a3a910  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a910
//
// 00a3a910  a120cfcc00           mov eax, dword ptr [0xcccf20]
// 00a3a915  85c0                 test eax, eax
// 00a3a917  7409                 je 0xa3a922
// 00a3a919  50                   push eax
// 00a3a91a  e839f7dcff           call 0x80a058
// 00a3a91f  83c404               add esp, 4
// 00a3a922  c70504cfcc00e0bea500 mov dword ptr [0xcccf04], 0xa5bee0
// 00a3a92c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
