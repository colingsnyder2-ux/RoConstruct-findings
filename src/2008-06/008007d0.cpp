// roc 2008-06 008007d0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008007d0
//
// 008007d0  a170c79700           mov eax, dword ptr [0x97c770]
// 008007d5  85c0                 test eax, eax
// 008007d7  7409                 je 0x8007e2
// 008007d9  50                   push eax
// 008007da  e89bfee9ff           call 0x6a067a
// 008007df  83c404               add esp, 4
// 008007e2  c70558c7970030b78000 mov dword ptr [0x97c758], 0x80b730
// 008007ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
