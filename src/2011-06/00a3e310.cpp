// roc 2011-06 00a3e310  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e310
//
// 00a3e310  a1b833cd00           mov eax, dword ptr [0xcd33b8]
// 00a3e315  85c0                 test eax, eax
// 00a3e317  7409                 je 0xa3e322
// 00a3e319  50                   push eax
// 00a3e31a  e839bddcff           call 0x80a058
// 00a3e31f  83c404               add esp, 4
// 00a3e322  c7059c33cd00e0bea500 mov dword ptr [0xcd339c], 0xa5bee0
// 00a3e32c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
