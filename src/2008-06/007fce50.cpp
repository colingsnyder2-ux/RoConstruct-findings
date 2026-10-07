// roc 2008-06 007fce50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fce50
//
// 007fce50  a14c469700           mov eax, dword ptr [0x97464c]
// 007fce55  85c0                 test eax, eax
// 007fce57  7409                 je 0x7fce62
// 007fce59  50                   push eax
// 007fce5a  e81b38eaff           call 0x6a067a
// 007fce5f  83c404               add esp, 4
// 007fce62  c7053046970030b78000 mov dword ptr [0x974630], 0x80b730
// 007fce6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
