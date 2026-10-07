// roc 2011-06 00a3d720  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d720
//
// 00a3d720  a13825cd00           mov eax, dword ptr [0xcd2538]
// 00a3d725  85c0                 test eax, eax
// 00a3d727  7409                 je 0xa3d732
// 00a3d729  50                   push eax
// 00a3d72a  e829c9dcff           call 0x80a058
// 00a3d72f  83c404               add esp, 4
// 00a3d732  c7051c25cd00e0bea500 mov dword ptr [0xcd251c], 0xa5bee0
// 00a3d73c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
