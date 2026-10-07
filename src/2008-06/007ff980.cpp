// roc 2008-06 007ff980  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff980
//
// 007ff980  a1a8ab9700           mov eax, dword ptr [0x97aba8]
// 007ff985  85c0                 test eax, eax
// 007ff987  7409                 je 0x7ff992
// 007ff989  50                   push eax
// 007ff98a  e8eb0ceaff           call 0x6a067a
// 007ff98f  83c404               add esp, 4
// 007ff992  c70590ab970030b78000 mov dword ptr [0x97ab90], 0x80b730
// 007ff99c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
