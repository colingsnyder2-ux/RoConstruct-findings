// roc 2011-06 00a34890  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34890
//
// 00a34890  a190b6cb00           mov eax, dword ptr [0xcbb690]
// 00a34895  85c0                 test eax, eax
// 00a34897  7409                 je 0xa348a2
// 00a34899  50                   push eax
// 00a3489a  e8b957ddff           call 0x80a058
// 00a3489f  83c404               add esp, 4
// 00a348a2  c70574b6cb00e0bea500 mov dword ptr [0xcbb674], 0xa5bee0
// 00a348ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
