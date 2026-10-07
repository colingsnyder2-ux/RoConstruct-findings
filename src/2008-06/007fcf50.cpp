// roc 2008-06 007fcf50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcf50
//
// 007fcf50  a16c469700           mov eax, dword ptr [0x97466c]
// 007fcf55  85c0                 test eax, eax
// 007fcf57  7409                 je 0x7fcf62
// 007fcf59  50                   push eax
// 007fcf5a  e81b37eaff           call 0x6a067a
// 007fcf5f  83c404               add esp, 4
// 007fcf62  c7055446970030b78000 mov dword ptr [0x974654], 0x80b730
// 007fcf6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
