// roc 2008-06 007ffb50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffb50
//
// 007ffb50  a18cad9700           mov eax, dword ptr [0x97ad8c]
// 007ffb55  85c0                 test eax, eax
// 007ffb57  7409                 je 0x7ffb62
// 007ffb59  50                   push eax
// 007ffb5a  e81b0beaff           call 0x6a067a
// 007ffb5f  83c404               add esp, 4
// 007ffb62  c70574ad970030b78000 mov dword ptr [0x97ad74], 0x80b730
// 007ffb6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
