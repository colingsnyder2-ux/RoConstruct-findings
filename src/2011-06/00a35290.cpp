// roc 2011-06 00a35290  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35290
//
// 00a35290  a1e4cfcb00           mov eax, dword ptr [0xcbcfe4]
// 00a35295  85c0                 test eax, eax
// 00a35297  7409                 je 0xa352a2
// 00a35299  50                   push eax
// 00a3529a  e8b94dddff           call 0x80a058
// 00a3529f  83c404               add esp, 4
// 00a352a2  c705c8cfcb00e0bea500 mov dword ptr [0xcbcfc8], 0xa5bee0
// 00a352ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
