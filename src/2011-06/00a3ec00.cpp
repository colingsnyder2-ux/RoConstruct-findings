// roc 2011-06 00a3ec00  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ec00
//
// 00a3ec00  a1b03bcd00           mov eax, dword ptr [0xcd3bb0]
// 00a3ec05  85c0                 test eax, eax
// 00a3ec07  7409                 je 0xa3ec12
// 00a3ec09  50                   push eax
// 00a3ec0a  e849b4dcff           call 0x80a058
// 00a3ec0f  83c404               add esp, 4
// 00a3ec12  c705903bcd00e0bea500 mov dword ptr [0xcd3b90], 0xa5bee0
// 00a3ec1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
