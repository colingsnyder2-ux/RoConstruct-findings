// roc 2008-06 007fcff0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcff0
//
// 007fcff0  a1c8489700           mov eax, dword ptr [0x9748c8]
// 007fcff5  85c0                 test eax, eax
// 007fcff7  7409                 je 0x7fd002
// 007fcff9  50                   push eax
// 007fcffa  e87b36eaff           call 0x6a067a
// 007fcfff  83c404               add esp, 4
// 007fd002  c705b048970030b78000 mov dword ptr [0x9748b0], 0x80b730
// 007fd00c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
