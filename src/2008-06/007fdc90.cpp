// roc 2008-06 007fdc90  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdc90
//
// 007fdc90  a168629700           mov eax, dword ptr [0x976268]
// 007fdc95  85c0                 test eax, eax
// 007fdc97  7409                 je 0x7fdca2
// 007fdc99  50                   push eax
// 007fdc9a  e8db29eaff           call 0x6a067a
// 007fdc9f  83c404               add esp, 4
// 007fdca2  c7055062970030b78000 mov dword ptr [0x976250], 0x80b730
// 007fdcac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
