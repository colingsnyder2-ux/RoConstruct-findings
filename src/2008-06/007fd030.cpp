// roc 2008-06 007fd030  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd030
//
// 007fd030  a1e4489700           mov eax, dword ptr [0x9748e4]
// 007fd035  85c0                 test eax, eax
// 007fd037  7409                 je 0x7fd042
// 007fd039  50                   push eax
// 007fd03a  e83b36eaff           call 0x6a067a
// 007fd03f  83c404               add esp, 4
// 007fd042  c705cc48970030b78000 mov dword ptr [0x9748cc], 0x80b730
// 007fd04c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
