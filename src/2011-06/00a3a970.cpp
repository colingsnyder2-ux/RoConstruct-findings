// roc 2011-06 00a3a970  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a970
//
// 00a3a970  a198d0cc00           mov eax, dword ptr [0xccd098]
// 00a3a975  85c0                 test eax, eax
// 00a3a977  7409                 je 0xa3a982
// 00a3a979  50                   push eax
// 00a3a97a  e8d9f6dcff           call 0x80a058
// 00a3a97f  83c404               add esp, 4
// 00a3a982  c70578d0cc00e0bea500 mov dword ptr [0xccd078], 0xa5bee0
// 00a3a98c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
