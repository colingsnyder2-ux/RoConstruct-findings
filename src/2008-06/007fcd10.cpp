// roc 2008-06 007fcd10  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcd10
//
// 007fcd10  a1f8469700           mov eax, dword ptr [0x9746f8]
// 007fcd15  85c0                 test eax, eax
// 007fcd17  7409                 je 0x7fcd22
// 007fcd19  50                   push eax
// 007fcd1a  e85b39eaff           call 0x6a067a
// 007fcd1f  83c404               add esp, 4
// 007fcd22  c705e046970030b78000 mov dword ptr [0x9746e0], 0x80b730
// 007fcd2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
