// roc 2011-06 00a3de60  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3de60
//
// 00a3de60  a19c2dcd00           mov eax, dword ptr [0xcd2d9c]
// 00a3de65  85c0                 test eax, eax
// 00a3de67  7409                 je 0xa3de72
// 00a3de69  50                   push eax
// 00a3de6a  e8e9c1dcff           call 0x80a058
// 00a3de6f  83c404               add esp, 4
// 00a3de72  c705802dcd00e0bea500 mov dword ptr [0xcd2d80], 0xa5bee0
// 00a3de7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
