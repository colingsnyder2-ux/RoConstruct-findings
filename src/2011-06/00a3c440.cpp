// roc 2011-06 00a3c440  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c440
//
// 00a3c440  a1d400cd00           mov eax, dword ptr [0xcd00d4]
// 00a3c445  85c0                 test eax, eax
// 00a3c447  7409                 je 0xa3c452
// 00a3c449  50                   push eax
// 00a3c44a  e809dcdcff           call 0x80a058
// 00a3c44f  83c404               add esp, 4
// 00a3c452  c705b800cd00e0bea500 mov dword ptr [0xcd00b8], 0xa5bee0
// 00a3c45c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
