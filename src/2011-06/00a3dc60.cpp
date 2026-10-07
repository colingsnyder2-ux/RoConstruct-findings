// roc 2011-06 00a3dc60  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dc60
//
// 00a3dc60  a1342ccd00           mov eax, dword ptr [0xcd2c34]
// 00a3dc65  85c0                 test eax, eax
// 00a3dc67  7409                 je 0xa3dc72
// 00a3dc69  50                   push eax
// 00a3dc6a  e8e9c3dcff           call 0x80a058
// 00a3dc6f  83c404               add esp, 4
// 00a3dc72  c705182ccd00e0bea500 mov dword ptr [0xcd2c18], 0xa5bee0
// 00a3dc7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
