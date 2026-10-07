// roc 2011-06 00a3d020  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d020
//
// 00a3d020  a1a416cd00           mov eax, dword ptr [0xcd16a4]
// 00a3d025  85c0                 test eax, eax
// 00a3d027  7409                 je 0xa3d032
// 00a3d029  50                   push eax
// 00a3d02a  e829d0dcff           call 0x80a058
// 00a3d02f  83c404               add esp, 4
// 00a3d032  c7058816cd00e0bea500 mov dword ptr [0xcd1688], 0xa5bee0
// 00a3d03c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
