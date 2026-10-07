// roc 2011-06 00a3f200  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f200
//
// 00a3f200  a1fc4acd00           mov eax, dword ptr [0xcd4afc]
// 00a3f205  85c0                 test eax, eax
// 00a3f207  7409                 je 0xa3f212
// 00a3f209  50                   push eax
// 00a3f20a  e849aedcff           call 0x80a058
// 00a3f20f  83c404               add esp, 4
// 00a3f212  c705e04acd00e0bea500 mov dword ptr [0xcd4ae0], 0xa5bee0
// 00a3f21c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
