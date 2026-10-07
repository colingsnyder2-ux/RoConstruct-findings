// roc 2011-06 00a3bd00  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bd00
//
// 00a3bd00  a1f4f7cc00           mov eax, dword ptr [0xccf7f4]
// 00a3bd05  85c0                 test eax, eax
// 00a3bd07  7409                 je 0xa3bd12
// 00a3bd09  50                   push eax
// 00a3bd0a  e849e3dcff           call 0x80a058
// 00a3bd0f  83c404               add esp, 4
// 00a3bd12  c705d8f7cc00e0bea500 mov dword ptr [0xccf7d8], 0xa5bee0
// 00a3bd1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
