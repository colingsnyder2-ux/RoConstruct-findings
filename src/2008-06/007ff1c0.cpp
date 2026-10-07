// roc 2008-06 007ff1c0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff1c0
//
// 007ff1c0  a1f89f9700           mov eax, dword ptr [0x979ff8]
// 007ff1c5  85c0                 test eax, eax
// 007ff1c7  7409                 je 0x7ff1d2
// 007ff1c9  50                   push eax
// 007ff1ca  e8ab14eaff           call 0x6a067a
// 007ff1cf  83c404               add esp, 4
// 007ff1d2  c705e09f970030b78000 mov dword ptr [0x979fe0], 0x80b730
// 007ff1dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
