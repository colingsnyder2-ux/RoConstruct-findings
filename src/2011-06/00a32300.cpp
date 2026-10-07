// roc 2011-06 00a32300  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32300
//
// 00a32300  a1dc5acb00           mov eax, dword ptr [0xcb5adc]
// 00a32305  85c0                 test eax, eax
// 00a32307  7409                 je 0xa32312
// 00a32309  50                   push eax
// 00a3230a  e8497dddff           call 0x80a058
// 00a3230f  83c404               add esp, 4
// 00a32312  c705c05acb00e0bea500 mov dword ptr [0xcb5ac0], 0xa5bee0
// 00a3231c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
