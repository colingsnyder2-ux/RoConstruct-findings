// roc 2008-06 007fcdb0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcdb0
//
// 007fcdb0  a12c469700           mov eax, dword ptr [0x97462c]
// 007fcdb5  85c0                 test eax, eax
// 007fcdb7  7409                 je 0x7fcdc2
// 007fcdb9  50                   push eax
// 007fcdba  e8bb38eaff           call 0x6a067a
// 007fcdbf  83c404               add esp, 4
// 007fcdc2  c7051446970030b78000 mov dword ptr [0x974614], 0x80b730
// 007fcdcc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
