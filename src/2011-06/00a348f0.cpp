// roc 2011-06 00a348f0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a348f0
//
// 00a348f0  a194bacb00           mov eax, dword ptr [0xcbba94]
// 00a348f5  85c0                 test eax, eax
// 00a348f7  7409                 je 0xa34902
// 00a348f9  50                   push eax
// 00a348fa  e85957ddff           call 0x80a058
// 00a348ff  83c404               add esp, 4
// 00a34902  c70578bacb00e0bea500 mov dword ptr [0xcbba78], 0xa5bee0
// 00a3490c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
