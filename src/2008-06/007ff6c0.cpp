// roc 2008-06 007ff6c0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff6c0
//
// 007ff6c0  a198a99700           mov eax, dword ptr [0x97a998]
// 007ff6c5  85c0                 test eax, eax
// 007ff6c7  7409                 je 0x7ff6d2
// 007ff6c9  50                   push eax
// 007ff6ca  e8ab0feaff           call 0x6a067a
// 007ff6cf  83c404               add esp, 4
// 007ff6d2  c70580a9970030b78000 mov dword ptr [0x97a980], 0x80b730
// 007ff6dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
