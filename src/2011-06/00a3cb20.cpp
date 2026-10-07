// roc 2011-06 00a3cb20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cb20
//
// 00a3cb20  a1240fcd00           mov eax, dword ptr [0xcd0f24]
// 00a3cb25  85c0                 test eax, eax
// 00a3cb27  7409                 je 0xa3cb32
// 00a3cb29  50                   push eax
// 00a3cb2a  e829d5dcff           call 0x80a058
// 00a3cb2f  83c404               add esp, 4
// 00a3cb32  c705080fcd00e0bea500 mov dword ptr [0xcd0f08], 0xa5bee0
// 00a3cb3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
