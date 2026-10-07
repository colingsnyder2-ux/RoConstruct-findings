// roc 2011-06 00a3de40  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3de40
//
// 00a3de40  a1842ccd00           mov eax, dword ptr [0xcd2c84]
// 00a3de45  85c0                 test eax, eax
// 00a3de47  7409                 je 0xa3de52
// 00a3de49  50                   push eax
// 00a3de4a  e809c2dcff           call 0x80a058
// 00a3de4f  83c404               add esp, 4
// 00a3de52  c705682ccd00e0bea500 mov dword ptr [0xcd2c68], 0xa5bee0
// 00a3de5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
