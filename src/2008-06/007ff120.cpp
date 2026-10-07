// roc 2008-06 007ff120  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff120
//
// 007ff120  a1bca09700           mov eax, dword ptr [0x97a0bc]
// 007ff125  85c0                 test eax, eax
// 007ff127  7409                 je 0x7ff132
// 007ff129  50                   push eax
// 007ff12a  e84b15eaff           call 0x6a067a
// 007ff12f  83c404               add esp, 4
// 007ff132  c705a4a0970030b78000 mov dword ptr [0x97a0a4], 0x80b730
// 007ff13c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
