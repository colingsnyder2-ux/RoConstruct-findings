// roc 2011-06 00a3ed30  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ed30
//
// 00a3ed30  a19c40cd00           mov eax, dword ptr [0xcd409c]
// 00a3ed35  85c0                 test eax, eax
// 00a3ed37  7409                 je 0xa3ed42
// 00a3ed39  50                   push eax
// 00a3ed3a  e819b3dcff           call 0x80a058
// 00a3ed3f  83c404               add esp, 4
// 00a3ed42  c7058040cd00e0bea500 mov dword ptr [0xcd4080], 0xa5bee0
// 00a3ed4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
