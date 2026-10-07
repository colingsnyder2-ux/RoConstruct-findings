// roc 2011-06 00a3eaa0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3eaa0
//
// 00a3eaa0  a1d03bcd00           mov eax, dword ptr [0xcd3bd0]
// 00a3eaa5  85c0                 test eax, eax
// 00a3eaa7  7409                 je 0xa3eab2
// 00a3eaa9  50                   push eax
// 00a3eaaa  e8a9b5dcff           call 0x80a058
// 00a3eaaf  83c404               add esp, 4
// 00a3eab2  c705b43bcd00e0bea500 mov dword ptr [0xcd3bb4], 0xa5bee0
// 00a3eabc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
