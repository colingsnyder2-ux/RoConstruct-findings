// roc 2008-06 007fe060  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe060
//
// 007fe060  a154689700           mov eax, dword ptr [0x976854]
// 007fe065  85c0                 test eax, eax
// 007fe067  7409                 je 0x7fe072
// 007fe069  50                   push eax
// 007fe06a  e80b26eaff           call 0x6a067a
// 007fe06f  83c404               add esp, 4
// 007fe072  c7053c68970030b78000 mov dword ptr [0x97683c], 0x80b730
// 007fe07c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
