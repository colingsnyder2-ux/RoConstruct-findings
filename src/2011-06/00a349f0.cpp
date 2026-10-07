// roc 2011-06 00a349f0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a349f0
//
// 00a349f0  a1e8b7cb00           mov eax, dword ptr [0xcbb7e8]
// 00a349f5  85c0                 test eax, eax
// 00a349f7  7409                 je 0xa34a02
// 00a349f9  50                   push eax
// 00a349fa  e85956ddff           call 0x80a058
// 00a349ff  83c404               add esp, 4
// 00a34a02  c705c8b7cb00e0bea500 mov dword ptr [0xcbb7c8], 0xa5bee0
// 00a34a0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
