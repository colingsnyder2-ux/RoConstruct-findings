// roc 2008-06 007fcfd0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcfd0
//
// 007fcfd0  a100499700           mov eax, dword ptr [0x974900]
// 007fcfd5  85c0                 test eax, eax
// 007fcfd7  7409                 je 0x7fcfe2
// 007fcfd9  50                   push eax
// 007fcfda  e89b36eaff           call 0x6a067a
// 007fcfdf  83c404               add esp, 4
// 007fcfe2  c705e848970030b78000 mov dword ptr [0x9748e8], 0x80b730
// 007fcfec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
