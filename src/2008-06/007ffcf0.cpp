// roc 2008-06 007ffcf0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffcf0
//
// 007ffcf0  a184b49700           mov eax, dword ptr [0x97b484]
// 007ffcf5  85c0                 test eax, eax
// 007ffcf7  7409                 je 0x7ffd02
// 007ffcf9  50                   push eax
// 007ffcfa  e87b09eaff           call 0x6a067a
// 007ffcff  83c404               add esp, 4
// 007ffd02  c70568b4970030b78000 mov dword ptr [0x97b468], 0x80b730
// 007ffd0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
