// roc 2008-06 007ffeb0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffeb0
//
// 007ffeb0  a1ecb29700           mov eax, dword ptr [0x97b2ec]
// 007ffeb5  85c0                 test eax, eax
// 007ffeb7  7409                 je 0x7ffec2
// 007ffeb9  50                   push eax
// 007ffeba  e8bb07eaff           call 0x6a067a
// 007ffebf  83c404               add esp, 4
// 007ffec2  c705d4b2970030b78000 mov dword ptr [0x97b2d4], 0x80b730
// 007ffecc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
