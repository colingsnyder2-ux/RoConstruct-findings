// roc 2008-06 007ffcd0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffcd0
//
// 007ffcd0  a1b8b29700           mov eax, dword ptr [0x97b2b8]
// 007ffcd5  85c0                 test eax, eax
// 007ffcd7  7409                 je 0x7ffce2
// 007ffcd9  50                   push eax
// 007ffcda  e89b09eaff           call 0x6a067a
// 007ffcdf  83c404               add esp, 4
// 007ffce2  c705a0b2970030b78000 mov dword ptr [0x97b2a0], 0x80b730
// 007ffcec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
