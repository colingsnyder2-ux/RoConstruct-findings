// roc 2011-06 00a3b990  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b990
//
// 00a3b990  a18cf2cc00           mov eax, dword ptr [0xccf28c]
// 00a3b995  85c0                 test eax, eax
// 00a3b997  7409                 je 0xa3b9a2
// 00a3b999  50                   push eax
// 00a3b99a  e8b9e6dcff           call 0x80a058
// 00a3b99f  83c404               add esp, 4
// 00a3b9a2  c7056cf2cc00e0bea500 mov dword ptr [0xccf26c], 0xa5bee0
// 00a3b9ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
