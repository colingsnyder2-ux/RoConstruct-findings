// roc 2011-06 00a3ebe0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ebe0
//
// 00a3ebe0  a13c3dcd00           mov eax, dword ptr [0xcd3d3c]
// 00a3ebe5  85c0                 test eax, eax
// 00a3ebe7  7409                 je 0xa3ebf2
// 00a3ebe9  50                   push eax
// 00a3ebea  e869b4dcff           call 0x80a058
// 00a3ebef  83c404               add esp, 4
// 00a3ebf2  c7051c3dcd00e0bea500 mov dword ptr [0xcd3d1c], 0xa5bee0
// 00a3ebfc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
