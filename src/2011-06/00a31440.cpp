// roc 2011-06 00a31440  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31440
//
// 00a31440  a12434cb00           mov eax, dword ptr [0xcb3424]
// 00a31445  85c0                 test eax, eax
// 00a31447  7409                 je 0xa31452
// 00a31449  50                   push eax
// 00a3144a  e8098cddff           call 0x80a058
// 00a3144f  83c404               add esp, 4
// 00a31452  c7050834cb00e0bea500 mov dword ptr [0xcb3408], 0xa5bee0
// 00a3145c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
