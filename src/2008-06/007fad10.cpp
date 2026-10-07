// roc 2008-06 007fad10  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fad10
//
// 007fad10  a160d49600           mov eax, dword ptr [0x96d460]
// 007fad15  85c0                 test eax, eax
// 007fad17  7409                 je 0x7fad22
// 007fad19  50                   push eax
// 007fad1a  e85b59eaff           call 0x6a067a
// 007fad1f  83c404               add esp, 4
// 007fad22  c70548d4960030b78000 mov dword ptr [0x96d448], 0x80b730
// 007fad2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
