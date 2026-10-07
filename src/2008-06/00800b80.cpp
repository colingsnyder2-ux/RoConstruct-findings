// roc 2008-06 00800b80  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800b80
//
// 00800b80  a114d29700           mov eax, dword ptr [0x97d214]
// 00800b85  85c0                 test eax, eax
// 00800b87  7409                 je 0x800b92
// 00800b89  50                   push eax
// 00800b8a  e8ebfae9ff           call 0x6a067a
// 00800b8f  83c404               add esp, 4
// 00800b92  c705fcd1970030b78000 mov dword ptr [0x97d1fc], 0x80b730
// 00800b9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
