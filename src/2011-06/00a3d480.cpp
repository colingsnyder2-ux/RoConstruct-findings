// roc 2011-06 00a3d480  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d480
//
// 00a3d480  a13c1ecd00           mov eax, dword ptr [0xcd1e3c]
// 00a3d485  85c0                 test eax, eax
// 00a3d487  7409                 je 0xa3d492
// 00a3d489  50                   push eax
// 00a3d48a  e8c9cbdcff           call 0x80a058
// 00a3d48f  83c404               add esp, 4
// 00a3d492  c705201ecd00e0bea500 mov dword ptr [0xcd1e20], 0xa5bee0
// 00a3d49c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
