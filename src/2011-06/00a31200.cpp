// roc 2011-06 00a31200  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31200
//
// 00a31200  a14436cb00           mov eax, dword ptr [0xcb3644]
// 00a31205  85c0                 test eax, eax
// 00a31207  7409                 je 0xa31212
// 00a31209  50                   push eax
// 00a3120a  e8498eddff           call 0x80a058
// 00a3120f  83c404               add esp, 4
// 00a31212  c7052436cb00e0bea500 mov dword ptr [0xcb3624], 0xa5bee0
// 00a3121c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
