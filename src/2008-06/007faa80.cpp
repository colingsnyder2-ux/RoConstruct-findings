// roc 2008-06 007faa80  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007faa80
//
// 007faa80  a1fcd29600           mov eax, dword ptr [0x96d2fc]
// 007faa85  85c0                 test eax, eax
// 007faa87  7409                 je 0x7faa92
// 007faa89  50                   push eax
// 007faa8a  e8eb5beaff           call 0x6a067a
// 007faa8f  83c404               add esp, 4
// 007faa92  c705e4d2960030b78000 mov dword ptr [0x96d2e4], 0x80b730
// 007faa9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
