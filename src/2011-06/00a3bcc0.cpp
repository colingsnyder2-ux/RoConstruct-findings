// roc 2011-06 00a3bcc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bcc0
//
// 00a3bcc0  a100f7cc00           mov eax, dword ptr [0xccf700]
// 00a3bcc5  85c0                 test eax, eax
// 00a3bcc7  7409                 je 0xa3bcd2
// 00a3bcc9  50                   push eax
// 00a3bcca  e889e3dcff           call 0x80a058
// 00a3bccf  83c404               add esp, 4
// 00a3bcd2  c705e4f6cc00e0bea500 mov dword ptr [0xccf6e4], 0xa5bee0
// 00a3bcdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
