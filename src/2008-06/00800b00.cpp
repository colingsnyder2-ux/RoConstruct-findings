// roc 2008-06 00800b00  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800b00
//
// 00800b00  a1dcd19700           mov eax, dword ptr [0x97d1dc]
// 00800b05  85c0                 test eax, eax
// 00800b07  7409                 je 0x800b12
// 00800b09  50                   push eax
// 00800b0a  e86bfbe9ff           call 0x6a067a
// 00800b0f  83c404               add esp, 4
// 00800b12  c705c4d1970030b78000 mov dword ptr [0x97d1c4], 0x80b730
// 00800b1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
