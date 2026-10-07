// roc 2008-06 007fde30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fde30
//
// 007fde30  a1fc5f9700           mov eax, dword ptr [0x975ffc]
// 007fde35  85c0                 test eax, eax
// 007fde37  7409                 je 0x7fde42
// 007fde39  50                   push eax
// 007fde3a  e83b28eaff           call 0x6a067a
// 007fde3f  83c404               add esp, 4
// 007fde42  c705e45f970030b78000 mov dword ptr [0x975fe4], 0x80b730
// 007fde4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
