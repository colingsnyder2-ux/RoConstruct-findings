// roc 2011-06 00a3d970  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d970
//
// 00a3d970  a14828cd00           mov eax, dword ptr [0xcd2848]
// 00a3d975  85c0                 test eax, eax
// 00a3d977  7409                 je 0xa3d982
// 00a3d979  50                   push eax
// 00a3d97a  e8d9c6dcff           call 0x80a058
// 00a3d97f  83c404               add esp, 4
// 00a3d982  c7052c28cd00e0bea500 mov dword ptr [0xcd282c], 0xa5bee0
// 00a3d98c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
