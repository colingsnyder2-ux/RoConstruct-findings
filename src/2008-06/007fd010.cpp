// roc 2008-06 007fd010  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd010
//
// 007fd010  a11c499700           mov eax, dword ptr [0x97491c]
// 007fd015  85c0                 test eax, eax
// 007fd017  7409                 je 0x7fd022
// 007fd019  50                   push eax
// 007fd01a  e85b36eaff           call 0x6a067a
// 007fd01f  83c404               add esp, 4
// 007fd022  c7050449970030b78000 mov dword ptr [0x974904], 0x80b730
// 007fd02c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
