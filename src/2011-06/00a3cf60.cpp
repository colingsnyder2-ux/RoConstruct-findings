// roc 2011-06 00a3cf60  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cf60
//
// 00a3cf60  a1cc17cd00           mov eax, dword ptr [0xcd17cc]
// 00a3cf65  85c0                 test eax, eax
// 00a3cf67  7409                 je 0xa3cf72
// 00a3cf69  50                   push eax
// 00a3cf6a  e8e9d0dcff           call 0x80a058
// 00a3cf6f  83c404               add esp, 4
// 00a3cf72  c705b017cd00e0bea500 mov dword ptr [0xcd17b0], 0xa5bee0
// 00a3cf7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
