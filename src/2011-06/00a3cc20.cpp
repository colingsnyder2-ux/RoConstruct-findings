// roc 2011-06 00a3cc20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cc20
//
// 00a3cc20  a1f811cd00           mov eax, dword ptr [0xcd11f8]
// 00a3cc25  85c0                 test eax, eax
// 00a3cc27  7409                 je 0xa3cc32
// 00a3cc29  50                   push eax
// 00a3cc2a  e829d4dcff           call 0x80a058
// 00a3cc2f  83c404               add esp, 4
// 00a3cc32  c705d811cd00e0bea500 mov dword ptr [0xcd11d8], 0xa5bee0
// 00a3cc3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
