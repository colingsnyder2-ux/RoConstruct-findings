// roc 2011-06 00a31240  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31240
//
// 00a31240  a14033cb00           mov eax, dword ptr [0xcb3340]
// 00a31245  85c0                 test eax, eax
// 00a31247  7409                 je 0xa31252
// 00a31249  50                   push eax
// 00a3124a  e8098eddff           call 0x80a058
// 00a3124f  83c404               add esp, 4
// 00a31252  c7052033cb00e0bea500 mov dword ptr [0xcb3320], 0xa5bee0
// 00a3125c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
