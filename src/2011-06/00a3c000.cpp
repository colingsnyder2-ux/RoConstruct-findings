// roc 2011-06 00a3c000  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c000
//
// 00a3c000  a1b4fdcc00           mov eax, dword ptr [0xccfdb4]
// 00a3c005  85c0                 test eax, eax
// 00a3c007  7409                 je 0xa3c012
// 00a3c009  50                   push eax
// 00a3c00a  e849e0dcff           call 0x80a058
// 00a3c00f  83c404               add esp, 4
// 00a3c012  c70598fdcc00e0bea500 mov dword ptr [0xccfd98], 0xa5bee0
// 00a3c01c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
