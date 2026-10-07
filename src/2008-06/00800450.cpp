// roc 2008-06 00800450  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800450
//
// 00800450  a1acc09700           mov eax, dword ptr [0x97c0ac]
// 00800455  85c0                 test eax, eax
// 00800457  7409                 je 0x800462
// 00800459  50                   push eax
// 0080045a  e81b02eaff           call 0x6a067a
// 0080045f  83c404               add esp, 4
// 00800462  c70594c0970030b78000 mov dword ptr [0x97c094], 0x80b730
// 0080046c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
