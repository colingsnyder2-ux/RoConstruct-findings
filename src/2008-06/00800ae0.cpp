// roc 2008-06 00800ae0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800ae0
//
// 00800ae0  a108d49700           mov eax, dword ptr [0x97d408]
// 00800ae5  85c0                 test eax, eax
// 00800ae7  7409                 je 0x800af2
// 00800ae9  50                   push eax
// 00800aea  e88bfbe9ff           call 0x6a067a
// 00800aef  83c404               add esp, 4
// 00800af2  c705f0d3970030b78000 mov dword ptr [0x97d3f0], 0x80b730
// 00800afc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
