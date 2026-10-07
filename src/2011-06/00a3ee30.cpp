// roc 2011-06 00a3ee30  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ee30
//
// 00a3ee30  a19c43cd00           mov eax, dword ptr [0xcd439c]
// 00a3ee35  85c0                 test eax, eax
// 00a3ee37  7409                 je 0xa3ee42
// 00a3ee39  50                   push eax
// 00a3ee3a  e819b2dcff           call 0x80a058
// 00a3ee3f  83c404               add esp, 4
// 00a3ee42  c7057c43cd00e0bea500 mov dword ptr [0xcd437c], 0xa5bee0
// 00a3ee4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
