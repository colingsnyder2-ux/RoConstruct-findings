// roc 2008-06 007feff0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007feff0
//
// 007feff0  a1889e9700           mov eax, dword ptr [0x979e88]
// 007feff5  85c0                 test eax, eax
// 007feff7  7409                 je 0x7ff002
// 007feff9  50                   push eax
// 007feffa  e87b16eaff           call 0x6a067a
// 007fefff  83c404               add esp, 4
// 007ff002  c705709e970030b78000 mov dword ptr [0x979e70], 0x80b730
// 007ff00c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
