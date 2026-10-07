// roc 2008-06 007ff400  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff400
//
// 007ff400  a100a59700           mov eax, dword ptr [0x97a500]
// 007ff405  85c0                 test eax, eax
// 007ff407  7409                 je 0x7ff412
// 007ff409  50                   push eax
// 007ff40a  e86b12eaff           call 0x6a067a
// 007ff40f  83c404               add esp, 4
// 007ff412  c705e8a4970030b78000 mov dword ptr [0x97a4e8], 0x80b730
// 007ff41c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
