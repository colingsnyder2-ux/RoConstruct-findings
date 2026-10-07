// roc 2011-06 00a3ce00  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ce00
//
// 00a3ce00  a15815cd00           mov eax, dword ptr [0xcd1558]
// 00a3ce05  85c0                 test eax, eax
// 00a3ce07  7409                 je 0xa3ce12
// 00a3ce09  50                   push eax
// 00a3ce0a  e849d2dcff           call 0x80a058
// 00a3ce0f  83c404               add esp, 4
// 00a3ce12  c7053c15cd00e0bea500 mov dword ptr [0xcd153c], 0xa5bee0
// 00a3ce1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
