// roc 2011-06 00a3d400  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d400
//
// 00a3d400  a1c81dcd00           mov eax, dword ptr [0xcd1dc8]
// 00a3d405  85c0                 test eax, eax
// 00a3d407  7409                 je 0xa3d412
// 00a3d409  50                   push eax
// 00a3d40a  e849ccdcff           call 0x80a058
// 00a3d40f  83c404               add esp, 4
// 00a3d412  c705ac1dcd00e0bea500 mov dword ptr [0xcd1dac], 0xa5bee0
// 00a3d41c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
