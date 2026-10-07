// roc 2008-06 007fcc90  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcc90
//
// 007fcc90  a110469700           mov eax, dword ptr [0x974610]
// 007fcc95  85c0                 test eax, eax
// 007fcc97  7409                 je 0x7fcca2
// 007fcc99  50                   push eax
// 007fcc9a  e8db39eaff           call 0x6a067a
// 007fcc9f  83c404               add esp, 4
// 007fcca2  c705f845970030b78000 mov dword ptr [0x9745f8], 0x80b730
// 007fccac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
