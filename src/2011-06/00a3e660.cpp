// roc 2011-06 00a3e660  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e660
//
// 00a3e660  a1c437cd00           mov eax, dword ptr [0xcd37c4]
// 00a3e665  85c0                 test eax, eax
// 00a3e667  7409                 je 0xa3e672
// 00a3e669  50                   push eax
// 00a3e66a  e8e9b9dcff           call 0x80a058
// 00a3e66f  83c404               add esp, 4
// 00a3e672  c705a837cd00e0bea500 mov dword ptr [0xcd37a8], 0xa5bee0
// 00a3e67c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
