// roc 2008-06 007fab00  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fab00
//
// 007fab00  a1c4d29600           mov eax, dword ptr [0x96d2c4]
// 007fab05  85c0                 test eax, eax
// 007fab07  7409                 je 0x7fab12
// 007fab09  50                   push eax
// 007fab0a  e86b5beaff           call 0x6a067a
// 007fab0f  83c404               add esp, 4
// 007fab12  c705acd2960030b78000 mov dword ptr [0x96d2ac], 0x80b730
// 007fab1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
