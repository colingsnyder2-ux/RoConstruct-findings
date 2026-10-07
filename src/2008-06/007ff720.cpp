// roc 2008-06 007ff720  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff720
//
// 007ff720  a18caa9700           mov eax, dword ptr [0x97aa8c]
// 007ff725  85c0                 test eax, eax
// 007ff727  7409                 je 0x7ff732
// 007ff729  50                   push eax
// 007ff72a  e84b0feaff           call 0x6a067a
// 007ff72f  83c404               add esp, 4
// 007ff732  c70574aa970030b78000 mov dword ptr [0x97aa74], 0x80b730
// 007ff73c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
