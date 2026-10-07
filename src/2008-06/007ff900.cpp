// roc 2008-06 007ff900  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff900
//
// 007ff900  a118ab9700           mov eax, dword ptr [0x97ab18]
// 007ff905  85c0                 test eax, eax
// 007ff907  7409                 je 0x7ff912
// 007ff909  50                   push eax
// 007ff90a  e86b0deaff           call 0x6a067a
// 007ff90f  83c404               add esp, 4
// 007ff912  c705fcaa970030b78000 mov dword ptr [0x97aafc], 0x80b730
// 007ff91c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
