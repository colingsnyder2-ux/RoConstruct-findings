// roc 2008-06 007ff780  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff780
//
// 007ff780  a170aa9700           mov eax, dword ptr [0x97aa70]
// 007ff785  85c0                 test eax, eax
// 007ff787  7409                 je 0x7ff792
// 007ff789  50                   push eax
// 007ff78a  e8eb0eeaff           call 0x6a067a
// 007ff78f  83c404               add esp, 4
// 007ff792  c70558aa970030b78000 mov dword ptr [0x97aa58], 0x80b730
// 007ff79c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
