// roc 2008-06 007fe220  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe220
//
// 007fe220  a1546d9700           mov eax, dword ptr [0x976d54]
// 007fe225  85c0                 test eax, eax
// 007fe227  7409                 je 0x7fe232
// 007fe229  50                   push eax
// 007fe22a  e84b24eaff           call 0x6a067a
// 007fe22f  83c404               add esp, 4
// 007fe232  c7053c6d970030b78000 mov dword ptr [0x976d3c], 0x80b730
// 007fe23c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
