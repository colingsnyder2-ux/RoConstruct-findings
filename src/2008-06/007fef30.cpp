// roc 2008-06 007fef30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fef30
//
// 007fef30  a1f09c9700           mov eax, dword ptr [0x979cf0]
// 007fef35  85c0                 test eax, eax
// 007fef37  7409                 je 0x7fef42
// 007fef39  50                   push eax
// 007fef3a  e83b17eaff           call 0x6a067a
// 007fef3f  83c404               add esp, 4
// 007fef42  c705d89c970030b78000 mov dword ptr [0x979cd8], 0x80b730
// 007fef4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
