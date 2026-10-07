// roc 2008-06 007fab20  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fab20
//
// 007fab20  a150d39600           mov eax, dword ptr [0x96d350]
// 007fab25  85c0                 test eax, eax
// 007fab27  7409                 je 0x7fab32
// 007fab29  50                   push eax
// 007fab2a  e84b5beaff           call 0x6a067a
// 007fab2f  83c404               add esp, 4
// 007fab32  c70538d3960030b78000 mov dword ptr [0x96d338], 0x80b730
// 007fab3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
