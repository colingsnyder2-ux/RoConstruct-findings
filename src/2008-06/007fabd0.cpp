// roc 2008-06 007fabd0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fabd0
//
// 007fabd0  a1c0d39600           mov eax, dword ptr [0x96d3c0]
// 007fabd5  85c0                 test eax, eax
// 007fabd7  7409                 je 0x7fabe2
// 007fabd9  50                   push eax
// 007fabda  e89b5aeaff           call 0x6a067a
// 007fabdf  83c404               add esp, 4
// 007fabe2  c705a4d3960030b78000 mov dword ptr [0x96d3a4], 0x80b730
// 007fabec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
