// roc 2008-06 007ff010  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff010
//
// 007ff010  a1a49e9700           mov eax, dword ptr [0x979ea4]
// 007ff015  85c0                 test eax, eax
// 007ff017  7409                 je 0x7ff022
// 007ff019  50                   push eax
// 007ff01a  e85b16eaff           call 0x6a067a
// 007ff01f  83c404               add esp, 4
// 007ff022  c7058c9e970030b78000 mov dword ptr [0x979e8c], 0x80b730
// 007ff02c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
