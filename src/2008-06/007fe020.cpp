// roc 2008-06 007fe020  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe020
//
// 007fe020  a11c689700           mov eax, dword ptr [0x97681c]
// 007fe025  85c0                 test eax, eax
// 007fe027  7409                 je 0x7fe032
// 007fe029  50                   push eax
// 007fe02a  e84b26eaff           call 0x6a067a
// 007fe02f  83c404               add esp, 4
// 007fe032  c7050468970030b78000 mov dword ptr [0x976804], 0x80b730
// 007fe03c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
