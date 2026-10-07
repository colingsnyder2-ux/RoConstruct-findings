// roc 2008-06 007fb200  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb200
//
// 007fb200  a1fcfe9600           mov eax, dword ptr [0x96fefc]
// 007fb205  85c0                 test eax, eax
// 007fb207  7409                 je 0x7fb212
// 007fb209  50                   push eax
// 007fb20a  e86b54eaff           call 0x6a067a
// 007fb20f  83c404               add esp, 4
// 007fb212  c705e4fe960030b78000 mov dword ptr [0x96fee4], 0x80b730
// 007fb21c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
