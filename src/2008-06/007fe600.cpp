// roc 2008-06 007fe600  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe600
//
// 007fe600  a14c779700           mov eax, dword ptr [0x97774c]
// 007fe605  85c0                 test eax, eax
// 007fe607  7409                 je 0x7fe612
// 007fe609  50                   push eax
// 007fe60a  e86b20eaff           call 0x6a067a
// 007fe60f  83c404               add esp, 4
// 007fe612  c7053477970030b78000 mov dword ptr [0x977734], 0x80b730
// 007fe61c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
