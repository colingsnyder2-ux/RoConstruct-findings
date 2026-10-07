// roc 2011-06 00a31520  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31520
//
// 00a31520  a18c34cb00           mov eax, dword ptr [0xcb348c]
// 00a31525  85c0                 test eax, eax
// 00a31527  7409                 je 0xa31532
// 00a31529  50                   push eax
// 00a3152a  e8298bddff           call 0x80a058
// 00a3152f  83c404               add esp, 4
// 00a31532  c7057034cb00e0bea500 mov dword ptr [0xcb3470], 0xa5bee0
// 00a3153c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
