// roc 2008-06 00800a80  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800a80
//
// 00800a80  a180d39700           mov eax, dword ptr [0x97d380]
// 00800a85  85c0                 test eax, eax
// 00800a87  7409                 je 0x800a92
// 00800a89  50                   push eax
// 00800a8a  e8ebfbe9ff           call 0x6a067a
// 00800a8f  83c404               add esp, 4
// 00800a92  c70564d3970030b78000 mov dword ptr [0x97d364], 0x80b730
// 00800a9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
