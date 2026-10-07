// roc 2008-06 007fddd0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fddd0
//
// 007fddd0  a140619700           mov eax, dword ptr [0x976140]
// 007fddd5  85c0                 test eax, eax
// 007fddd7  7409                 je 0x7fdde2
// 007fddd9  50                   push eax
// 007fddda  e89b28eaff           call 0x6a067a
// 007fdddf  83c404               add esp, 4
// 007fdde2  c7052861970030b78000 mov dword ptr [0x976128], 0x80b730
// 007fddec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
