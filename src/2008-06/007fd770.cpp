// roc 2008-06 007fd770  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd770
//
// 007fd770  a150549700           mov eax, dword ptr [0x975450]
// 007fd775  85c0                 test eax, eax
// 007fd777  7409                 je 0x7fd782
// 007fd779  50                   push eax
// 007fd77a  e8fb2eeaff           call 0x6a067a
// 007fd77f  83c404               add esp, 4
// 007fd782  c7053454970030b78000 mov dword ptr [0x975434], 0x80b730
// 007fd78c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
