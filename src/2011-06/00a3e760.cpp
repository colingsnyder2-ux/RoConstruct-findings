// roc 2011-06 00a3e760  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e760
//
// 00a3e760  a1d438cd00           mov eax, dword ptr [0xcd38d4]
// 00a3e765  85c0                 test eax, eax
// 00a3e767  7409                 je 0xa3e772
// 00a3e769  50                   push eax
// 00a3e76a  e8e9b8dcff           call 0x80a058
// 00a3e76f  83c404               add esp, 4
// 00a3e772  c705b838cd00e0bea500 mov dword ptr [0xcd38b8], 0xa5bee0
// 00a3e77c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
