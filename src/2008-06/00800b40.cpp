// roc 2008-06 00800b40  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800b40
//
// 00800b40  a1e8d39700           mov eax, dword ptr [0x97d3e8]
// 00800b45  85c0                 test eax, eax
// 00800b47  7409                 je 0x800b52
// 00800b49  50                   push eax
// 00800b4a  e82bfbe9ff           call 0x6a067a
// 00800b4f  83c404               add esp, 4
// 00800b52  c705d0d3970030b78000 mov dword ptr [0x97d3d0], 0x80b730
// 00800b5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
