// roc 2008-06 007fcc30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcc30
//
// 007fcc30  a1d4449700           mov eax, dword ptr [0x9744d4]
// 007fcc35  85c0                 test eax, eax
// 007fcc37  7409                 je 0x7fcc42
// 007fcc39  50                   push eax
// 007fcc3a  e83b3aeaff           call 0x6a067a
// 007fcc3f  83c404               add esp, 4
// 007fcc42  c705bc44970030b78000 mov dword ptr [0x9744bc], 0x80b730
// 007fcc4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
