// roc 2008-06 007fdd50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdd50
//
// 007fdd50  a144639700           mov eax, dword ptr [0x976344]
// 007fdd55  85c0                 test eax, eax
// 007fdd57  7409                 je 0x7fdd62
// 007fdd59  50                   push eax
// 007fdd5a  e81b29eaff           call 0x6a067a
// 007fdd5f  83c404               add esp, 4
// 007fdd62  c7052c63970030b78000 mov dword ptr [0x97632c], 0x80b730
// 007fdd6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
