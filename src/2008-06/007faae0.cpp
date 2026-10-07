// roc 2008-06 007faae0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007faae0
//
// 007faae0  a1e0d29600           mov eax, dword ptr [0x96d2e0]
// 007faae5  85c0                 test eax, eax
// 007faae7  7409                 je 0x7faaf2
// 007faae9  50                   push eax
// 007faaea  e88b5beaff           call 0x6a067a
// 007faaef  83c404               add esp, 4
// 007faaf2  c705c8d2960030b78000 mov dword ptr [0x96d2c8], 0x80b730
// 007faafc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
