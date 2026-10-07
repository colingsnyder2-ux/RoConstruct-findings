// roc 2011-06 00a3efc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3efc0
//
// 00a3efc0  a1ac46cd00           mov eax, dword ptr [0xcd46ac]
// 00a3efc5  85c0                 test eax, eax
// 00a3efc7  7409                 je 0xa3efd2
// 00a3efc9  50                   push eax
// 00a3efca  e889b0dcff           call 0x80a058
// 00a3efcf  83c404               add esp, 4
// 00a3efd2  c7059046cd00e0bea500 mov dword ptr [0xcd4690], 0xa5bee0
// 00a3efdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
