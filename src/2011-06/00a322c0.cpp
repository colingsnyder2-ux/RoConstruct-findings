// roc 2011-06 00a322c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a322c0
//
// 00a322c0  a10060cb00           mov eax, dword ptr [0xcb6000]
// 00a322c5  85c0                 test eax, eax
// 00a322c7  7409                 je 0xa322d2
// 00a322c9  50                   push eax
// 00a322ca  e8897dddff           call 0x80a058
// 00a322cf  83c404               add esp, 4
// 00a322d2  c705e05fcb00e0bea500 mov dword ptr [0xcb5fe0], 0xa5bee0
// 00a322dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
