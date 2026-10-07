// roc 2011-06 00a3ebc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ebc0
//
// 00a3ebc0  a1d03ccd00           mov eax, dword ptr [0xcd3cd0]
// 00a3ebc5  85c0                 test eax, eax
// 00a3ebc7  7409                 je 0xa3ebd2
// 00a3ebc9  50                   push eax
// 00a3ebca  e889b4dcff           call 0x80a058
// 00a3ebcf  83c404               add esp, 4
// 00a3ebd2  c705b43ccd00e0bea500 mov dword ptr [0xcd3cb4], 0xa5bee0
// 00a3ebdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
