// roc 2011-06 00a3d370  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d370
//
// 00a3d370  a1141dcd00           mov eax, dword ptr [0xcd1d14]
// 00a3d375  85c0                 test eax, eax
// 00a3d377  7409                 je 0xa3d382
// 00a3d379  50                   push eax
// 00a3d37a  e8d9ccdcff           call 0x80a058
// 00a3d37f  83c404               add esp, 4
// 00a3d382  c705f81ccd00e0bea500 mov dword ptr [0xcd1cf8], 0xa5bee0
// 00a3d38c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
