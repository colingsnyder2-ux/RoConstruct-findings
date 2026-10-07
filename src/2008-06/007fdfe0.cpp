// roc 2008-06 007fdfe0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdfe0
//
// 007fdfe0  a174689700           mov eax, dword ptr [0x976874]
// 007fdfe5  85c0                 test eax, eax
// 007fdfe7  7409                 je 0x7fdff2
// 007fdfe9  50                   push eax
// 007fdfea  e88b26eaff           call 0x6a067a
// 007fdfef  83c404               add esp, 4
// 007fdff2  c7055868970030b78000 mov dword ptr [0x976858], 0x80b730
// 007fdffc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
