// roc 2011-06 00a34850  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34850
//
// 00a34850  a144b7cb00           mov eax, dword ptr [0xcbb744]
// 00a34855  85c0                 test eax, eax
// 00a34857  7409                 je 0xa34862
// 00a34859  50                   push eax
// 00a3485a  e8f957ddff           call 0x80a058
// 00a3485f  83c404               add esp, 4
// 00a34862  c70528b7cb00e0bea500 mov dword ptr [0xcbb728], 0xa5bee0
// 00a3486c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
