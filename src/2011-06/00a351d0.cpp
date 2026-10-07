// roc 2011-06 00a351d0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a351d0
//
// 00a351d0  a154cfcb00           mov eax, dword ptr [0xcbcf54]
// 00a351d5  85c0                 test eax, eax
// 00a351d7  7409                 je 0xa351e2
// 00a351d9  50                   push eax
// 00a351da  e8794eddff           call 0x80a058
// 00a351df  83c404               add esp, 4
// 00a351e2  c70538cfcb00e0bea500 mov dword ptr [0xcbcf38], 0xa5bee0
// 00a351ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
