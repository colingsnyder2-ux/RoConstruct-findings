// roc 2008-06 007fad50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fad50
//
// 007fad50  a110d59600           mov eax, dword ptr [0x96d510]
// 007fad55  85c0                 test eax, eax
// 007fad57  7409                 je 0x7fad62
// 007fad59  50                   push eax
// 007fad5a  e81b59eaff           call 0x6a067a
// 007fad5f  83c404               add esp, 4
// 007fad62  c705f8d4960030b78000 mov dword ptr [0x96d4f8], 0x80b730
// 007fad6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
