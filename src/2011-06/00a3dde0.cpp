// roc 2011-06 00a3dde0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dde0
//
// 00a3dde0  a1b42acd00           mov eax, dword ptr [0xcd2ab4]
// 00a3dde5  85c0                 test eax, eax
// 00a3dde7  7409                 je 0xa3ddf2
// 00a3dde9  50                   push eax
// 00a3ddea  e869c2dcff           call 0x80a058
// 00a3ddef  83c404               add esp, 4
// 00a3ddf2  c705982acd00e0bea500 mov dword ptr [0xcd2a98], 0xa5bee0
// 00a3ddfc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
