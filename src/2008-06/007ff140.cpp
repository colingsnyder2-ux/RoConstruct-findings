// roc 2008-06 007ff140  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff140
//
// 007ff140  a1a0a09700           mov eax, dword ptr [0x97a0a0]
// 007ff145  85c0                 test eax, eax
// 007ff147  7409                 je 0x7ff152
// 007ff149  50                   push eax
// 007ff14a  e82b15eaff           call 0x6a067a
// 007ff14f  83c404               add esp, 4
// 007ff152  c70588a0970030b78000 mov dword ptr [0x97a088], 0x80b730
// 007ff15c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
