// roc 2008-06 007fb120  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb120
//
// 007fb120  a18cfe9600           mov eax, dword ptr [0x96fe8c]
// 007fb125  85c0                 test eax, eax
// 007fb127  7409                 je 0x7fb132
// 007fb129  50                   push eax
// 007fb12a  e84b55eaff           call 0x6a067a
// 007fb12f  83c404               add esp, 4
// 007fb132  c70570fe960030b78000 mov dword ptr [0x96fe70], 0x80b730
// 007fb13c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
