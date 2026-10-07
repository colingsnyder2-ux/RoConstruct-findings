// roc 2011-06 00a3e640  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e640
//
// 00a3e640  a1b436cd00           mov eax, dword ptr [0xcd36b4]
// 00a3e645  85c0                 test eax, eax
// 00a3e647  7409                 je 0xa3e652
// 00a3e649  50                   push eax
// 00a3e64a  e809badcff           call 0x80a058
// 00a3e64f  83c404               add esp, 4
// 00a3e652  c7059836cd00e0bea500 mov dword ptr [0xcd3698], 0xa5bee0
// 00a3e65c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
