// roc 2008-06 007ff0a0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff0a0
//
// 007ff0a0  a168a09700           mov eax, dword ptr [0x97a068]
// 007ff0a5  85c0                 test eax, eax
// 007ff0a7  7409                 je 0x7ff0b2
// 007ff0a9  50                   push eax
// 007ff0aa  e8cb15eaff           call 0x6a067a
// 007ff0af  83c404               add esp, 4
// 007ff0b2  c70550a0970030b78000 mov dword ptr [0x97a050], 0x80b730
// 007ff0bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
