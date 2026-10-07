// roc 2011-06 00a3e800  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e800
//
// 00a3e800  a1e839cd00           mov eax, dword ptr [0xcd39e8]
// 00a3e805  85c0                 test eax, eax
// 00a3e807  7409                 je 0xa3e812
// 00a3e809  50                   push eax
// 00a3e80a  e849b8dcff           call 0x80a058
// 00a3e80f  83c404               add esp, 4
// 00a3e812  c705cc39cd00e0bea500 mov dword ptr [0xcd39cc], 0xa5bee0
// 00a3e81c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
