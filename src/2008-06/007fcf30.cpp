// roc 2008-06 007fcf30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcf30
//
// 007fcf30  a1f0449700           mov eax, dword ptr [0x9744f0]
// 007fcf35  85c0                 test eax, eax
// 007fcf37  7409                 je 0x7fcf42
// 007fcf39  50                   push eax
// 007fcf3a  e83b37eaff           call 0x6a067a
// 007fcf3f  83c404               add esp, 4
// 007fcf42  c705d844970030b78000 mov dword ptr [0x9744d8], 0x80b730
// 007fcf4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
