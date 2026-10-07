// roc 2011-06 00a3ed50  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ed50
//
// 00a3ed50  a1ec40cd00           mov eax, dword ptr [0xcd40ec]
// 00a3ed55  85c0                 test eax, eax
// 00a3ed57  7409                 je 0xa3ed62
// 00a3ed59  50                   push eax
// 00a3ed5a  e8f9b2dcff           call 0x80a058
// 00a3ed5f  83c404               add esp, 4
// 00a3ed62  c705d040cd00e0bea500 mov dword ptr [0xcd40d0], 0xa5bee0
// 00a3ed6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
