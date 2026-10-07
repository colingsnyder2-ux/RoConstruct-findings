// roc 2011-06 00a3dce0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dce0
//
// 00a3dce0  a1942bcd00           mov eax, dword ptr [0xcd2b94]
// 00a3dce5  85c0                 test eax, eax
// 00a3dce7  7409                 je 0xa3dcf2
// 00a3dce9  50                   push eax
// 00a3dcea  e869c3dcff           call 0x80a058
// 00a3dcef  83c404               add esp, 4
// 00a3dcf2  c705782bcd00e0bea500 mov dword ptr [0xcd2b78], 0xa5bee0
// 00a3dcfc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
