// roc 2008-06 00800b60  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800b60
//
// 00800b60  a124d49700           mov eax, dword ptr [0x97d424]
// 00800b65  85c0                 test eax, eax
// 00800b67  7409                 je 0x800b72
// 00800b69  50                   push eax
// 00800b6a  e80bfbe9ff           call 0x6a067a
// 00800b6f  83c404               add esp, 4
// 00800b72  c7050cd4970030b78000 mov dword ptr [0x97d40c], 0x80b730
// 00800b7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
