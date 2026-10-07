// roc 2008-06 007fb180  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb180
//
// 007fb180  a1e8fd9600           mov eax, dword ptr [0x96fde8]
// 007fb185  85c0                 test eax, eax
// 007fb187  7409                 je 0x7fb192
// 007fb189  50                   push eax
// 007fb18a  e8eb54eaff           call 0x6a067a
// 007fb18f  83c404               add esp, 4
// 007fb192  c705d0fd960030b78000 mov dword ptr [0x96fdd0], 0x80b730
// 007fb19c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
