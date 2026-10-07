// roc 2008-06 007fe000  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe000
//
// 007fe000  a194689700           mov eax, dword ptr [0x976894]
// 007fe005  85c0                 test eax, eax
// 007fe007  7409                 je 0x7fe012
// 007fe009  50                   push eax
// 007fe00a  e86b26eaff           call 0x6a067a
// 007fe00f  83c404               add esp, 4
// 007fe012  c7057c68970030b78000 mov dword ptr [0x97687c], 0x80b730
// 007fe01c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
