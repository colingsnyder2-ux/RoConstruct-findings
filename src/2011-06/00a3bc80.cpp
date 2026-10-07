// roc 2011-06 00a3bc80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bc80
//
// 00a3bc80  a1b4f6cc00           mov eax, dword ptr [0xccf6b4]
// 00a3bc85  85c0                 test eax, eax
// 00a3bc87  7409                 je 0xa3bc92
// 00a3bc89  50                   push eax
// 00a3bc8a  e8c9e3dcff           call 0x80a058
// 00a3bc8f  83c404               add esp, 4
// 00a3bc92  c70598f6cc00e0bea500 mov dword ptr [0xccf698], 0xa5bee0
// 00a3bc9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
