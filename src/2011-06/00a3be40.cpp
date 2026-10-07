// roc 2011-06 00a3be40  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3be40
//
// 00a3be40  a178f8cc00           mov eax, dword ptr [0xccf878]
// 00a3be45  85c0                 test eax, eax
// 00a3be47  7409                 je 0xa3be52
// 00a3be49  50                   push eax
// 00a3be4a  e809e2dcff           call 0x80a058
// 00a3be4f  83c404               add esp, 4
// 00a3be52  c7055cf8cc00e0bea500 mov dword ptr [0xccf85c], 0xa5bee0
// 00a3be5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
