// roc 2011-06 00a3e720  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e720
//
// 00a3e720  a1b438cd00           mov eax, dword ptr [0xcd38b4]
// 00a3e725  85c0                 test eax, eax
// 00a3e727  7409                 je 0xa3e732
// 00a3e729  50                   push eax
// 00a3e72a  e829b9dcff           call 0x80a058
// 00a3e72f  83c404               add esp, 4
// 00a3e732  c7059838cd00e0bea500 mov dword ptr [0xcd3898], 0xa5bee0
// 00a3e73c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
