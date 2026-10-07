// roc 2008-06 007fab90  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fab90
//
// 007fab90  a108d49600           mov eax, dword ptr [0x96d408]
// 007fab95  85c0                 test eax, eax
// 007fab97  7409                 je 0x7faba2
// 007fab99  50                   push eax
// 007fab9a  e8db5aeaff           call 0x6a067a
// 007fab9f  83c404               add esp, 4
// 007faba2  c705ecd3960030b78000 mov dword ptr [0x96d3ec], 0x80b730
// 007fabac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
