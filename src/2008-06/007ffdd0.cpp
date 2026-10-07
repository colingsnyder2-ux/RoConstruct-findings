// roc 2008-06 007ffdd0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffdd0
//
// 007ffdd0  a15cb29700           mov eax, dword ptr [0x97b25c]
// 007ffdd5  85c0                 test eax, eax
// 007ffdd7  7409                 je 0x7ffde2
// 007ffdd9  50                   push eax
// 007ffdda  e89b08eaff           call 0x6a067a
// 007ffddf  83c404               add esp, 4
// 007ffde2  c70544b2970030b78000 mov dword ptr [0x97b244], 0x80b730
// 007ffdec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
