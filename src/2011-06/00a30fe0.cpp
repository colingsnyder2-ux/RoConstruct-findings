// roc 2011-06 00a30fe0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30fe0
//
// 00a30fe0  a1a429cb00           mov eax, dword ptr [0xcb29a4]
// 00a30fe5  85c0                 test eax, eax
// 00a30fe7  7409                 je 0xa30ff2
// 00a30fe9  50                   push eax
// 00a30fea  e86990ddff           call 0x80a058
// 00a30fef  83c404               add esp, 4
// 00a30ff2  c7058829cb00e0bea500 mov dword ptr [0xcb2988], 0xa5bee0
// 00a30ffc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
