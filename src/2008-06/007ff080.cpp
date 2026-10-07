// roc 2008-06 007ff080  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff080
//
// 007ff080  a130a09700           mov eax, dword ptr [0x97a030]
// 007ff085  85c0                 test eax, eax
// 007ff087  7409                 je 0x7ff092
// 007ff089  50                   push eax
// 007ff08a  e8eb15eaff           call 0x6a067a
// 007ff08f  83c404               add esp, 4
// 007ff092  c70518a0970030b78000 mov dword ptr [0x97a018], 0x80b730
// 007ff09c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
