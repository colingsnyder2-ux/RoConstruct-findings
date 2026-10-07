// roc 2008-06 007fb220  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb220
//
// 007fb220  a19cfc9600           mov eax, dword ptr [0x96fc9c]
// 007fb225  85c0                 test eax, eax
// 007fb227  7409                 je 0x7fb232
// 007fb229  50                   push eax
// 007fb22a  e84b54eaff           call 0x6a067a
// 007fb22f  83c404               add esp, 4
// 007fb232  c70584fc960030b78000 mov dword ptr [0x96fc84], 0x80b730
// 007fb23c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
