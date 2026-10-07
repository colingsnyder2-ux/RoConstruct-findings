// roc 2011-06 00a3d9f0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d9f0
//
// 00a3d9f0  a12428cd00           mov eax, dword ptr [0xcd2824]
// 00a3d9f5  85c0                 test eax, eax
// 00a3d9f7  7409                 je 0xa3da02
// 00a3d9f9  50                   push eax
// 00a3d9fa  e859c6dcff           call 0x80a058
// 00a3d9ff  83c404               add esp, 4
// 00a3da02  c7050428cd00e0bea500 mov dword ptr [0xcd2804], 0xa5bee0
// 00a3da0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
