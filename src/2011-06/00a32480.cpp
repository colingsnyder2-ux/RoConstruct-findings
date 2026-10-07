// roc 2011-06 00a32480  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32480
//
// 00a32480  a13c62cb00           mov eax, dword ptr [0xcb623c]
// 00a32485  85c0                 test eax, eax
// 00a32487  7409                 je 0xa32492
// 00a32489  50                   push eax
// 00a3248a  e8c97bddff           call 0x80a058
// 00a3248f  83c404               add esp, 4
// 00a32492  c7052062cb00e0bea500 mov dword ptr [0xcb6220], 0xa5bee0
// 00a3249c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
