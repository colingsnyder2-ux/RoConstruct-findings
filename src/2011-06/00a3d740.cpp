// roc 2011-06 00a3d740  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d740
//
// 00a3d740  a11825cd00           mov eax, dword ptr [0xcd2518]
// 00a3d745  85c0                 test eax, eax
// 00a3d747  7409                 je 0xa3d752
// 00a3d749  50                   push eax
// 00a3d74a  e809c9dcff           call 0x80a058
// 00a3d74f  83c404               add esp, 4
// 00a3d752  c705fc24cd00e0bea500 mov dword ptr [0xcd24fc], 0xa5bee0
// 00a3d75c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
