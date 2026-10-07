// roc 2008-06 007fbdb0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbdb0
//
// 007fbdb0  a1f8139700           mov eax, dword ptr [0x9713f8]
// 007fbdb5  85c0                 test eax, eax
// 007fbdb7  7409                 je 0x7fbdc2
// 007fbdb9  50                   push eax
// 007fbdba  e8bb48eaff           call 0x6a067a
// 007fbdbf  83c404               add esp, 4
// 007fbdc2  c705e013970030b78000 mov dword ptr [0x9713e0], 0x80b730
// 007fbdcc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
