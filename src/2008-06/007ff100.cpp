// roc 2008-06 007ff100  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff100
//
// 007ff100  a1f4a09700           mov eax, dword ptr [0x97a0f4]
// 007ff105  85c0                 test eax, eax
// 007ff107  7409                 je 0x7ff112
// 007ff109  50                   push eax
// 007ff10a  e86b15eaff           call 0x6a067a
// 007ff10f  83c404               add esp, 4
// 007ff112  c705dca0970030b78000 mov dword ptr [0x97a0dc], 0x80b730
// 007ff11c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
