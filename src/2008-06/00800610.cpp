// roc 2008-06 00800610  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800610
//
// 00800610  a1a8c79700           mov eax, dword ptr [0x97c7a8]
// 00800615  85c0                 test eax, eax
// 00800617  7409                 je 0x800622
// 00800619  50                   push eax
// 0080061a  e85b00eaff           call 0x6a067a
// 0080061f  83c404               add esp, 4
// 00800622  c70590c7970030b78000 mov dword ptr [0x97c790], 0x80b730
// 0080062c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
