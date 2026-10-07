// roc 2008-06 007fccd0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fccd0
//
// 007fccd0  a130479700           mov eax, dword ptr [0x974730]
// 007fccd5  85c0                 test eax, eax
// 007fccd7  7409                 je 0x7fcce2
// 007fccd9  50                   push eax
// 007fccda  e89b39eaff           call 0x6a067a
// 007fccdf  83c404               add esp, 4
// 007fcce2  c7051847970030b78000 mov dword ptr [0x974718], 0x80b730
// 007fccec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
