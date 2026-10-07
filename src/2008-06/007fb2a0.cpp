// roc 2008-06 007fb2a0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb2a0
//
// 007fb2a0  a180fd9600           mov eax, dword ptr [0x96fd80]
// 007fb2a5  85c0                 test eax, eax
// 007fb2a7  7409                 je 0x7fb2b2
// 007fb2a9  50                   push eax
// 007fb2aa  e8cb53eaff           call 0x6a067a
// 007fb2af  83c404               add esp, 4
// 007fb2b2  c70568fd960030b78000 mov dword ptr [0x96fd68], 0x80b730
// 007fb2bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
