// roc 2011-06 00a34790  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34790
//
// 00a34790  a15cb9cb00           mov eax, dword ptr [0xcbb95c]
// 00a34795  85c0                 test eax, eax
// 00a34797  7409                 je 0xa347a2
// 00a34799  50                   push eax
// 00a3479a  e8b958ddff           call 0x80a058
// 00a3479f  83c404               add esp, 4
// 00a347a2  c70540b9cb00e0bea500 mov dword ptr [0xcbb940], 0xa5bee0
// 00a347ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
