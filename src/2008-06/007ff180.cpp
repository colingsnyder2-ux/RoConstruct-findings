// roc 2008-06 007ff180  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff180
//
// 007ff180  a14ca09700           mov eax, dword ptr [0x97a04c]
// 007ff185  85c0                 test eax, eax
// 007ff187  7409                 je 0x7ff192
// 007ff189  50                   push eax
// 007ff18a  e8eb14eaff           call 0x6a067a
// 007ff18f  83c404               add esp, 4
// 007ff192  c70534a0970030b78000 mov dword ptr [0x97a034], 0x80b730
// 007ff19c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
