// roc 2008-06 007ff920  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff920
//
// 007ff920  a138ab9700           mov eax, dword ptr [0x97ab38]
// 007ff925  85c0                 test eax, eax
// 007ff927  7409                 je 0x7ff932
// 007ff929  50                   push eax
// 007ff92a  e84b0deaff           call 0x6a067a
// 007ff92f  83c404               add esp, 4
// 007ff932  c7051cab970030b78000 mov dword ptr [0x97ab1c], 0x80b730
// 007ff93c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
