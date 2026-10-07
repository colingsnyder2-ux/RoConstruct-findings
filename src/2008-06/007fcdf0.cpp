// roc 2008-06 007fcdf0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcdf0
//
// 007fcdf0  a1c4479700           mov eax, dword ptr [0x9747c4]
// 007fcdf5  85c0                 test eax, eax
// 007fcdf7  7409                 je 0x7fce02
// 007fcdf9  50                   push eax
// 007fcdfa  e87b38eaff           call 0x6a067a
// 007fcdff  83c404               add esp, 4
// 007fce02  c705ac47970030b78000 mov dword ptr [0x9747ac], 0x80b730
// 007fce0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
