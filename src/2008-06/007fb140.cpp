// roc 2008-06 007fb140  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb140
//
// 007fb140  a124fd9600           mov eax, dword ptr [0x96fd24]
// 007fb145  85c0                 test eax, eax
// 007fb147  7409                 je 0x7fb152
// 007fb149  50                   push eax
// 007fb14a  e82b55eaff           call 0x6a067a
// 007fb14f  83c404               add esp, 4
// 007fb152  c7050cfd960030b78000 mov dword ptr [0x96fd0c], 0x80b730
// 007fb15c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
