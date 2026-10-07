// roc 2011-06 00a3e840  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e840
//
// 00a3e840  a1683acd00           mov eax, dword ptr [0xcd3a68]
// 00a3e845  85c0                 test eax, eax
// 00a3e847  7409                 je 0xa3e852
// 00a3e849  50                   push eax
// 00a3e84a  e809b8dcff           call 0x80a058
// 00a3e84f  83c404               add esp, 4
// 00a3e852  c705483acd00e0bea500 mov dword ptr [0xcd3a48], 0xa5bee0
// 00a3e85c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
