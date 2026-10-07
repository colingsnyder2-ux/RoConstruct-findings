// roc 2011-06 00a3bc00  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bc00
//
// 00a3bc00  a170f6cc00           mov eax, dword ptr [0xccf670]
// 00a3bc05  85c0                 test eax, eax
// 00a3bc07  7409                 je 0xa3bc12
// 00a3bc09  50                   push eax
// 00a3bc0a  e849e4dcff           call 0x80a058
// 00a3bc0f  83c404               add esp, 4
// 00a3bc12  c70550f6cc00e0bea500 mov dword ptr [0xccf650], 0xa5bee0
// 00a3bc1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
