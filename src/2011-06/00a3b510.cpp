// roc 2011-06 00a3b510  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b510
//
// 00a3b510  a150f0cc00           mov eax, dword ptr [0xccf050]
// 00a3b515  85c0                 test eax, eax
// 00a3b517  7409                 je 0xa3b522
// 00a3b519  50                   push eax
// 00a3b51a  e839ebdcff           call 0x80a058
// 00a3b51f  83c404               add esp, 4
// 00a3b522  c70530f0cc00e0bea500 mov dword ptr [0xccf030], 0xa5bee0
// 00a3b52c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
