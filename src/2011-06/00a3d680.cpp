// roc 2011-06 00a3d680  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d680
//
// 00a3d680  a16c23cd00           mov eax, dword ptr [0xcd236c]
// 00a3d685  85c0                 test eax, eax
// 00a3d687  7409                 je 0xa3d692
// 00a3d689  50                   push eax
// 00a3d68a  e8c9c9dcff           call 0x80a058
// 00a3d68f  83c404               add esp, 4
// 00a3d692  c7055023cd00e0bea500 mov dword ptr [0xcd2350], 0xa5bee0
// 00a3d69c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
