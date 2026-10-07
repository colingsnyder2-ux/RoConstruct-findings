// roc 2008-06 007fe640  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe640
//
// 007fe640  a1f8769700           mov eax, dword ptr [0x9776f8]
// 007fe645  85c0                 test eax, eax
// 007fe647  7409                 je 0x7fe652
// 007fe649  50                   push eax
// 007fe64a  e82b20eaff           call 0x6a067a
// 007fe64f  83c404               add esp, 4
// 007fe652  c705e076970030b78000 mov dword ptr [0x9776e0], 0x80b730
// 007fe65c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
