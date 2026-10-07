// roc 2011-06 00a3dbe0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dbe0
//
// 00a3dbe0  a11c2dcd00           mov eax, dword ptr [0xcd2d1c]
// 00a3dbe5  85c0                 test eax, eax
// 00a3dbe7  7409                 je 0xa3dbf2
// 00a3dbe9  50                   push eax
// 00a3dbea  e869c4dcff           call 0x80a058
// 00a3dbef  83c404               add esp, 4
// 00a3dbf2  c705002dcd00e0bea500 mov dword ptr [0xcd2d00], 0xa5bee0
// 00a3dbfc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
