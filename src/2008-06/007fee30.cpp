// roc 2008-06 007fee30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fee30
//
// 007fee30  a1ac9a9700           mov eax, dword ptr [0x979aac]
// 007fee35  85c0                 test eax, eax
// 007fee37  7409                 je 0x7fee42
// 007fee39  50                   push eax
// 007fee3a  e83b18eaff           call 0x6a067a
// 007fee3f  83c404               add esp, 4
// 007fee42  c705909a970030b78000 mov dword ptr [0x979a90], 0x80b730
// 007fee4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
