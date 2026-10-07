// roc 2008-06 007fbe50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbe50
//
// 007fbe50  a1b8129700           mov eax, dword ptr [0x9712b8]
// 007fbe55  85c0                 test eax, eax
// 007fbe57  7409                 je 0x7fbe62
// 007fbe59  50                   push eax
// 007fbe5a  e81b48eaff           call 0x6a067a
// 007fbe5f  83c404               add esp, 4
// 007fbe62  c7059c12970030b78000 mov dword ptr [0x97129c], 0x80b730
// 007fbe6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
