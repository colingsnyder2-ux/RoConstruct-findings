// roc 2008-06 007fe040  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe040
//
// 007fe040  a138689700           mov eax, dword ptr [0x976838]
// 007fe045  85c0                 test eax, eax
// 007fe047  7409                 je 0x7fe052
// 007fe049  50                   push eax
// 007fe04a  e82b26eaff           call 0x6a067a
// 007fe04f  83c404               add esp, 4
// 007fe052  c7052068970030b78000 mov dword ptr [0x976820], 0x80b730
// 007fe05c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
