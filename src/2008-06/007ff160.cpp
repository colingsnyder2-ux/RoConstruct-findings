// roc 2008-06 007ff160  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff160
//
// 007ff160  a1dc9f9700           mov eax, dword ptr [0x979fdc]
// 007ff165  85c0                 test eax, eax
// 007ff167  7409                 je 0x7ff172
// 007ff169  50                   push eax
// 007ff16a  e80b15eaff           call 0x6a067a
// 007ff16f  83c404               add esp, 4
// 007ff172  c705c49f970030b78000 mov dword ptr [0x979fc4], 0x80b730
// 007ff17c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
