// roc 2008-06 007ff2c0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff2c0
//
// 007ff2c0  a144a39700           mov eax, dword ptr [0x97a344]
// 007ff2c5  85c0                 test eax, eax
// 007ff2c7  7409                 je 0x7ff2d2
// 007ff2c9  50                   push eax
// 007ff2ca  e8ab13eaff           call 0x6a067a
// 007ff2cf  83c404               add esp, 4
// 007ff2d2  c70528a3970030b78000 mov dword ptr [0x97a328], 0x80b730
// 007ff2dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
