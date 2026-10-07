// roc 2011-06 00a3a560  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a560
//
// 00a3a560  a1bccacc00           mov eax, dword ptr [0xcccabc]
// 00a3a565  85c0                 test eax, eax
// 00a3a567  7409                 je 0xa3a572
// 00a3a569  50                   push eax
// 00a3a56a  e8e9fadcff           call 0x80a058
// 00a3a56f  83c404               add esp, 4
// 00a3a572  c705a0cacc00e0bea500 mov dword ptr [0xcccaa0], 0xa5bee0
// 00a3a57c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
