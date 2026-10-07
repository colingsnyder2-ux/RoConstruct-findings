// roc 2008-06 007fffc0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fffc0
//
// 007fffc0  a1c0b79700           mov eax, dword ptr [0x97b7c0]
// 007fffc5  85c0                 test eax, eax
// 007fffc7  7409                 je 0x7fffd2
// 007fffc9  50                   push eax
// 007fffca  e8ab06eaff           call 0x6a067a
// 007fffcf  83c404               add esp, 4
// 007fffd2  c705a8b7970030b78000 mov dword ptr [0x97b7a8], 0x80b730
// 007fffdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
