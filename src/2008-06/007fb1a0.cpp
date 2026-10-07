// roc 2008-06 007fb1a0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb1a0
//
// 007fb1a0  a108fd9600           mov eax, dword ptr [0x96fd08]
// 007fb1a5  85c0                 test eax, eax
// 007fb1a7  7409                 je 0x7fb1b2
// 007fb1a9  50                   push eax
// 007fb1aa  e8cb54eaff           call 0x6a067a
// 007fb1af  83c404               add esp, 4
// 007fb1b2  c705f0fc960030b78000 mov dword ptr [0x96fcf0], 0x80b730
// 007fb1bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
