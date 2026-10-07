// roc 2008-06 007fe200  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe200
//
// 007fe200  a11c6d9700           mov eax, dword ptr [0x976d1c]
// 007fe205  85c0                 test eax, eax
// 007fe207  7409                 je 0x7fe212
// 007fe209  50                   push eax
// 007fe20a  e86b24eaff           call 0x6a067a
// 007fe20f  83c404               add esp, 4
// 007fe212  c705046d970030b78000 mov dword ptr [0x976d04], 0x80b730
// 007fe21c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
