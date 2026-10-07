// roc 2008-06 007fee50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fee50
//
// 007fee50  a1cc9a9700           mov eax, dword ptr [0x979acc]
// 007fee55  85c0                 test eax, eax
// 007fee57  7409                 je 0x7fee62
// 007fee59  50                   push eax
// 007fee5a  e81b18eaff           call 0x6a067a
// 007fee5f  83c404               add esp, 4
// 007fee62  c705b09a970030b78000 mov dword ptr [0x979ab0], 0x80b730
// 007fee6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
