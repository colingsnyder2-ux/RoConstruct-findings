// roc 2011-06 00a3ed10  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ed10
//
// 00a3ed10  a1c040cd00           mov eax, dword ptr [0xcd40c0]
// 00a3ed15  85c0                 test eax, eax
// 00a3ed17  7409                 je 0xa3ed22
// 00a3ed19  50                   push eax
// 00a3ed1a  e839b3dcff           call 0x80a058
// 00a3ed1f  83c404               add esp, 4
// 00a3ed22  c705a440cd00e0bea500 mov dword ptr [0xcd40a4], 0xa5bee0
// 00a3ed2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
