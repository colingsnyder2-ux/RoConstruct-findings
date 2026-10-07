// roc 2008-06 007ffa70  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffa70
//
// 007ffa70  a1e0ad9700           mov eax, dword ptr [0x97ade0]
// 007ffa75  85c0                 test eax, eax
// 007ffa77  7409                 je 0x7ffa82
// 007ffa79  50                   push eax
// 007ffa7a  e8fb0beaff           call 0x6a067a
// 007ffa7f  83c404               add esp, 4
// 007ffa82  c705c8ad970030b78000 mov dword ptr [0x97adc8], 0x80b730
// 007ffa8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
