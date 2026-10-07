// roc 2011-06 00a3cbe0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cbe0
//
// 00a3cbe0  a1a011cd00           mov eax, dword ptr [0xcd11a0]
// 00a3cbe5  85c0                 test eax, eax
// 00a3cbe7  7409                 je 0xa3cbf2
// 00a3cbe9  50                   push eax
// 00a3cbea  e869d4dcff           call 0x80a058
// 00a3cbef  83c404               add esp, 4
// 00a3cbf2  c7058411cd00e0bea500 mov dword ptr [0xcd1184], 0xa5bee0
// 00a3cbfc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
