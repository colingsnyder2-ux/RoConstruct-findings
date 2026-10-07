// roc 2008-06 007ffed0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffed0
//
// 007ffed0  a1ccb19700           mov eax, dword ptr [0x97b1cc]
// 007ffed5  85c0                 test eax, eax
// 007ffed7  7409                 je 0x7ffee2
// 007ffed9  50                   push eax
// 007ffeda  e89b07eaff           call 0x6a067a
// 007ffedf  83c404               add esp, 4
// 007ffee2  c705b4b1970030b78000 mov dword ptr [0x97b1b4], 0x80b730
// 007ffeec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
