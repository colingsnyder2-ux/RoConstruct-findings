// roc 2011-06 00a30370  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30370
//
// 00a30370  a17422cb00           mov eax, dword ptr [0xcb2274]
// 00a30375  85c0                 test eax, eax
// 00a30377  7409                 je 0xa30382
// 00a30379  50                   push eax
// 00a3037a  e8d99cddff           call 0x80a058
// 00a3037f  83c404               add esp, 4
// 00a30382  c7055822cb00e0bea500 mov dword ptr [0xcb2258], 0xa5bee0
// 00a3038c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
