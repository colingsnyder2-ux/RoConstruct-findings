// roc 2008-06 00800b20  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800b20
//
// 00800b20  a1f8d19700           mov eax, dword ptr [0x97d1f8]
// 00800b25  85c0                 test eax, eax
// 00800b27  7409                 je 0x800b32
// 00800b29  50                   push eax
// 00800b2a  e84bfbe9ff           call 0x6a067a
// 00800b2f  83c404               add esp, 4
// 00800b32  c705e0d1970030b78000 mov dword ptr [0x97d1e0], 0x80b730
// 00800b3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
