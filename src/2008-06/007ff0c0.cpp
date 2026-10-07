// roc 2008-06 007ff0c0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff0c0
//
// 007ff0c0  a184a09700           mov eax, dword ptr [0x97a084]
// 007ff0c5  85c0                 test eax, eax
// 007ff0c7  7409                 je 0x7ff0d2
// 007ff0c9  50                   push eax
// 007ff0ca  e8ab15eaff           call 0x6a067a
// 007ff0cf  83c404               add esp, 4
// 007ff0d2  c7056ca0970030b78000 mov dword ptr [0x97a06c], 0x80b730
// 007ff0dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
