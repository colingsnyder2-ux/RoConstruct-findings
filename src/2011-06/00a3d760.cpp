// roc 2011-06 00a3d760  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d760
//
// 00a3d760  a1b023cd00           mov eax, dword ptr [0xcd23b0]
// 00a3d765  85c0                 test eax, eax
// 00a3d767  7409                 je 0xa3d772
// 00a3d769  50                   push eax
// 00a3d76a  e8e9c8dcff           call 0x80a058
// 00a3d76f  83c404               add esp, 4
// 00a3d772  c7059423cd00e0bea500 mov dword ptr [0xcd2394], 0xa5bee0
// 00a3d77c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
