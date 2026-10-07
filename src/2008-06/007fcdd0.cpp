// roc 2008-06 007fcdd0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcdd0
//
// 007fcdd0  a1f4459700           mov eax, dword ptr [0x9745f4]
// 007fcdd5  85c0                 test eax, eax
// 007fcdd7  7409                 je 0x7fcde2
// 007fcdd9  50                   push eax
// 007fcdda  e89b38eaff           call 0x6a067a
// 007fcddf  83c404               add esp, 4
// 007fcde2  c705dc45970030b78000 mov dword ptr [0x9745dc], 0x80b730
// 007fcdec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
