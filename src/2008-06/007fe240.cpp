// roc 2008-06 007fe240  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe240
//
// 007fe240  a1006d9700           mov eax, dword ptr [0x976d00]
// 007fe245  85c0                 test eax, eax
// 007fe247  7409                 je 0x7fe252
// 007fe249  50                   push eax
// 007fe24a  e82b24eaff           call 0x6a067a
// 007fe24f  83c404               add esp, 4
// 007fe252  c705e86c970030b78000 mov dword ptr [0x976ce8], 0x80b730
// 007fe25c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
