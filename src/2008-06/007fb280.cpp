// roc 2008-06 007fb280  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb280
//
// 007fb280  a120fe9600           mov eax, dword ptr [0x96fe20]
// 007fb285  85c0                 test eax, eax
// 007fb287  7409                 je 0x7fb292
// 007fb289  50                   push eax
// 007fb28a  e8eb53eaff           call 0x6a067a
// 007fb28f  83c404               add esp, 4
// 007fb292  c70508fe960030b78000 mov dword ptr [0x96fe08], 0x80b730
// 007fb29c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
