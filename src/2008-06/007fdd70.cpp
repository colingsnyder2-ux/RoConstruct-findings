// roc 2008-06 007fdd70  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdd70
//
// 007fdd70  a1c45f9700           mov eax, dword ptr [0x975fc4]
// 007fdd75  85c0                 test eax, eax
// 007fdd77  7409                 je 0x7fdd82
// 007fdd79  50                   push eax
// 007fdd7a  e8fb28eaff           call 0x6a067a
// 007fdd7f  83c404               add esp, 4
// 007fdd82  c705ac5f970030b78000 mov dword ptr [0x975fac], 0x80b730
// 007fdd8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
