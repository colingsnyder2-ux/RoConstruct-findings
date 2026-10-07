// roc 2011-06 00a3d700  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d700
//
// 00a3d700  a1b824cd00           mov eax, dword ptr [0xcd24b8]
// 00a3d705  85c0                 test eax, eax
// 00a3d707  7409                 je 0xa3d712
// 00a3d709  50                   push eax
// 00a3d70a  e849c9dcff           call 0x80a058
// 00a3d70f  83c404               add esp, 4
// 00a3d712  c7059c24cd00e0bea500 mov dword ptr [0xcd249c], 0xa5bee0
// 00a3d71c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
