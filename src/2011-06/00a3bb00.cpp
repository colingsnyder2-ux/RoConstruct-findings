// roc 2011-06 00a3bb00  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bb00
//
// 00a3bb00  a1ecf4cc00           mov eax, dword ptr [0xccf4ec]
// 00a3bb05  85c0                 test eax, eax
// 00a3bb07  7409                 je 0xa3bb12
// 00a3bb09  50                   push eax
// 00a3bb0a  e849e5dcff           call 0x80a058
// 00a3bb0f  83c404               add esp, 4
// 00a3bb12  c705d0f4cc00e0bea500 mov dword ptr [0xccf4d0], 0xa5bee0
// 00a3bb1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
