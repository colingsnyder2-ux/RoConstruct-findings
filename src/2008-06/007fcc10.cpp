// roc 2008-06 007fcc10  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcc10
//
// 007fcc10  a1a0459700           mov eax, dword ptr [0x9745a0]
// 007fcc15  85c0                 test eax, eax
// 007fcc17  7409                 je 0x7fcc22
// 007fcc19  50                   push eax
// 007fcc1a  e85b3aeaff           call 0x6a067a
// 007fcc1f  83c404               add esp, 4
// 007fcc22  c7058845970030b78000 mov dword ptr [0x974588], 0x80b730
// 007fcc2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
