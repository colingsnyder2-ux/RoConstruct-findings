// roc 2011-06 00a313c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a313c0
//
// 00a313c0  a12032cb00           mov eax, dword ptr [0xcb3220]
// 00a313c5  85c0                 test eax, eax
// 00a313c7  7409                 je 0xa313d2
// 00a313c9  50                   push eax
// 00a313ca  e8898cddff           call 0x80a058
// 00a313cf  83c404               add esp, 4
// 00a313d2  c7050032cb00e0bea500 mov dword ptr [0xcb3200], 0xa5bee0
// 00a313dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
