// roc 2011-06 00a3cf00  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cf00
//
// 00a3cf00  a18416cd00           mov eax, dword ptr [0xcd1684]
// 00a3cf05  85c0                 test eax, eax
// 00a3cf07  7409                 je 0xa3cf12
// 00a3cf09  50                   push eax
// 00a3cf0a  e849d1dcff           call 0x80a058
// 00a3cf0f  83c404               add esp, 4
// 00a3cf12  c7056816cd00e0bea500 mov dword ptr [0xcd1668], 0xa5bee0
// 00a3cf1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
