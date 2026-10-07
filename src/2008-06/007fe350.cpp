// roc 2008-06 007fe350  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe350
//
// 007fe350  a1b0719700           mov eax, dword ptr [0x9771b0]
// 007fe355  85c0                 test eax, eax
// 007fe357  7409                 je 0x7fe362
// 007fe359  50                   push eax
// 007fe35a  e81b23eaff           call 0x6a067a
// 007fe35f  83c404               add esp, 4
// 007fe362  c7059471970030b78000 mov dword ptr [0x977194], 0x80b730
// 007fe36c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
