// roc 2011-06 00a3eee0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3eee0
//
// 00a3eee0  a16847cd00           mov eax, dword ptr [0xcd4768]
// 00a3eee5  85c0                 test eax, eax
// 00a3eee7  7409                 je 0xa3eef2
// 00a3eee9  50                   push eax
// 00a3eeea  e869b1dcff           call 0x80a058
// 00a3eeef  83c404               add esp, 4
// 00a3eef2  c7054847cd00e0bea500 mov dword ptr [0xcd4748], 0xa5bee0
// 00a3eefc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
