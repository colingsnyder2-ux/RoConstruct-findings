// roc 2011-06 00a3d780  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d780
//
// 00a3d780  a17824cd00           mov eax, dword ptr [0xcd2478]
// 00a3d785  85c0                 test eax, eax
// 00a3d787  7409                 je 0xa3d792
// 00a3d789  50                   push eax
// 00a3d78a  e8c9c8dcff           call 0x80a058
// 00a3d78f  83c404               add esp, 4
// 00a3d792  c7055c24cd00e0bea500 mov dword ptr [0xcd245c], 0xa5bee0
// 00a3d79c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
