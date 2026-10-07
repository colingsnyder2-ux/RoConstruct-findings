// roc 2011-06 00a3ec60  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ec60
//
// 00a3ec60  a1c43fcd00           mov eax, dword ptr [0xcd3fc4]
// 00a3ec65  85c0                 test eax, eax
// 00a3ec67  7409                 je 0xa3ec72
// 00a3ec69  50                   push eax
// 00a3ec6a  e8e9b3dcff           call 0x80a058
// 00a3ec6f  83c404               add esp, 4
// 00a3ec72  c705a83fcd00e0bea500 mov dword ptr [0xcd3fa8], 0xa5bee0
// 00a3ec7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
