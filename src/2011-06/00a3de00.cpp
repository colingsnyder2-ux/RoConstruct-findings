// roc 2011-06 00a3de00  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3de00
//
// 00a3de00  a15c2dcd00           mov eax, dword ptr [0xcd2d5c]
// 00a3de05  85c0                 test eax, eax
// 00a3de07  7409                 je 0xa3de12
// 00a3de09  50                   push eax
// 00a3de0a  e849c2dcff           call 0x80a058
// 00a3de0f  83c404               add esp, 4
// 00a3de12  c705402dcd00e0bea500 mov dword ptr [0xcd2d40], 0xa5bee0
// 00a3de1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
