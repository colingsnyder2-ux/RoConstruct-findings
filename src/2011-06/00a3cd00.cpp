// roc 2011-06 00a3cd00  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cd00
//
// 00a3cd00  a15c11cd00           mov eax, dword ptr [0xcd115c]
// 00a3cd05  85c0                 test eax, eax
// 00a3cd07  7409                 je 0xa3cd12
// 00a3cd09  50                   push eax
// 00a3cd0a  e849d3dcff           call 0x80a058
// 00a3cd0f  83c404               add esp, 4
// 00a3cd12  c7054011cd00e0bea500 mov dword ptr [0xcd1140], 0xa5bee0
// 00a3cd1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
