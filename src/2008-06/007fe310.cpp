// roc 2008-06 007fe310  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe310
//
// 007fe310  a1f8709700           mov eax, dword ptr [0x9770f8]
// 007fe315  85c0                 test eax, eax
// 007fe317  7409                 je 0x7fe322
// 007fe319  50                   push eax
// 007fe31a  e85b23eaff           call 0x6a067a
// 007fe31f  83c404               add esp, 4
// 007fe322  c705e070970030b78000 mov dword ptr [0x9770e0], 0x80b730
// 007fe32c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
