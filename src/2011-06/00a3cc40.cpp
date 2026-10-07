// roc 2011-06 00a3cc40  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cc40
//
// 00a3cc40  a1d410cd00           mov eax, dword ptr [0xcd10d4]
// 00a3cc45  85c0                 test eax, eax
// 00a3cc47  7409                 je 0xa3cc52
// 00a3cc49  50                   push eax
// 00a3cc4a  e809d4dcff           call 0x80a058
// 00a3cc4f  83c404               add esp, 4
// 00a3cc52  c705b810cd00e0bea500 mov dword ptr [0xcd10b8], 0xa5bee0
// 00a3cc5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
