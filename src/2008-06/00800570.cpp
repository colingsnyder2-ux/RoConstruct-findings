// roc 2008-06 00800570  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800570
//
// 00800570  a1acc69700           mov eax, dword ptr [0x97c6ac]
// 00800575  85c0                 test eax, eax
// 00800577  7409                 je 0x800582
// 00800579  50                   push eax
// 0080057a  e8fb00eaff           call 0x6a067a
// 0080057f  83c404               add esp, 4
// 00800582  c70594c6970030b78000 mov dword ptr [0x97c694], 0x80b730
// 0080058c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
