// roc 2011-06 00a31320  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31320
//
// 00a31320  a1d032cb00           mov eax, dword ptr [0xcb32d0]
// 00a31325  85c0                 test eax, eax
// 00a31327  7409                 je 0xa31332
// 00a31329  50                   push eax
// 00a3132a  e8298dddff           call 0x80a058
// 00a3132f  83c404               add esp, 4
// 00a31332  c705b032cb00e0bea500 mov dword ptr [0xcb32b0], 0xa5bee0
// 00a3133c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
