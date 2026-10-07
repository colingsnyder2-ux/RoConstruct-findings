// roc 2008-06 008006b0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008006b0
//
// 008006b0  a1ccc99700           mov eax, dword ptr [0x97c9cc]
// 008006b5  85c0                 test eax, eax
// 008006b7  7409                 je 0x8006c2
// 008006b9  50                   push eax
// 008006ba  e8bbffe9ff           call 0x6a067a
// 008006bf  83c404               add esp, 4
// 008006c2  c705b4c9970030b78000 mov dword ptr [0x97c9b4], 0x80b730
// 008006cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
