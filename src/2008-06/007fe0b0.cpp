// roc 2008-06 007fe0b0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe0b0
//
// 007fe0b0  a1f4699700           mov eax, dword ptr [0x9769f4]
// 007fe0b5  85c0                 test eax, eax
// 007fe0b7  7409                 je 0x7fe0c2
// 007fe0b9  50                   push eax
// 007fe0ba  e8bb25eaff           call 0x6a067a
// 007fe0bf  83c404               add esp, 4
// 007fe0c2  c705d869970030b78000 mov dword ptr [0x9769d8], 0x80b730
// 007fe0cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
