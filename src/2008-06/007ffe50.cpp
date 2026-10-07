// roc 2008-06 007ffe50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffe50
//
// 007ffe50  a140b29700           mov eax, dword ptr [0x97b240]
// 007ffe55  85c0                 test eax, eax
// 007ffe57  7409                 je 0x7ffe62
// 007ffe59  50                   push eax
// 007ffe5a  e81b08eaff           call 0x6a067a
// 007ffe5f  83c404               add esp, 4
// 007ffe62  c70528b2970030b78000 mov dword ptr [0x97b228], 0x80b730
// 007ffe6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
