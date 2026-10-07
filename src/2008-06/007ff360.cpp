// roc 2008-06 007ff360  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff360
//
// 007ff360  a1e8a39700           mov eax, dword ptr [0x97a3e8]
// 007ff365  85c0                 test eax, eax
// 007ff367  7409                 je 0x7ff372
// 007ff369  50                   push eax
// 007ff36a  e80b13eaff           call 0x6a067a
// 007ff36f  83c404               add esp, 4
// 007ff372  c705d0a3970030b78000 mov dword ptr [0x97a3d0], 0x80b730
// 007ff37c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
