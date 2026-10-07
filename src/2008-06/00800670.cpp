// roc 2008-06 00800670  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800670
//
// 00800670  a1e4ca9700           mov eax, dword ptr [0x97cae4]
// 00800675  85c0                 test eax, eax
// 00800677  7409                 je 0x800682
// 00800679  50                   push eax
// 0080067a  e8fbffe9ff           call 0x6a067a
// 0080067f  83c404               add esp, 4
// 00800682  c705ccca970030b78000 mov dword ptr [0x97cacc], 0x80b730
// 0080068c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
