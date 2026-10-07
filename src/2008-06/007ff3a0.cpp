// roc 2008-06 007ff3a0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff3a0
//
// 007ff3a0  a1c8a49700           mov eax, dword ptr [0x97a4c8]
// 007ff3a5  85c0                 test eax, eax
// 007ff3a7  7409                 je 0x7ff3b2
// 007ff3a9  50                   push eax
// 007ff3aa  e8cb12eaff           call 0x6a067a
// 007ff3af  83c404               add esp, 4
// 007ff3b2  c705b0a4970030b78000 mov dword ptr [0x97a4b0], 0x80b730
// 007ff3bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
