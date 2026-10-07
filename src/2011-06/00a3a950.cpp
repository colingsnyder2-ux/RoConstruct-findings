// roc 2011-06 00a3a950  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a950
//
// 00a3a950  a1c0d1cc00           mov eax, dword ptr [0xccd1c0]
// 00a3a955  85c0                 test eax, eax
// 00a3a957  7409                 je 0xa3a962
// 00a3a959  50                   push eax
// 00a3a95a  e8f9f6dcff           call 0x80a058
// 00a3a95f  83c404               add esp, 4
// 00a3a962  c705a0d1cc00e0bea500 mov dword ptr [0xccd1a0], 0xa5bee0
// 00a3a96c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
