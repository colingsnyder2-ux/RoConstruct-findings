// roc 2011-06 00a3ca00  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ca00
//
// 00a3ca00  a1940ecd00           mov eax, dword ptr [0xcd0e94]
// 00a3ca05  85c0                 test eax, eax
// 00a3ca07  7409                 je 0xa3ca12
// 00a3ca09  50                   push eax
// 00a3ca0a  e849d6dcff           call 0x80a058
// 00a3ca0f  83c404               add esp, 4
// 00a3ca12  c705780ecd00e0bea500 mov dword ptr [0xcd0e78], 0xa5bee0
// 00a3ca1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
