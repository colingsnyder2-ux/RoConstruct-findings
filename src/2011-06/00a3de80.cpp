// roc 2011-06 00a3de80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3de80
//
// 00a3de80  a1cc2ccd00           mov eax, dword ptr [0xcd2ccc]
// 00a3de85  85c0                 test eax, eax
// 00a3de87  7409                 je 0xa3de92
// 00a3de89  50                   push eax
// 00a3de8a  e8c9c1dcff           call 0x80a058
// 00a3de8f  83c404               add esp, 4
// 00a3de92  c705b02ccd00e0bea500 mov dword ptr [0xcd2cb0], 0xa5bee0
// 00a3de9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
