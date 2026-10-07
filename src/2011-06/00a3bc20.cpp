// roc 2011-06 00a3bc20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bc20
//
// 00a3bc20  a1f0f5cc00           mov eax, dword ptr [0xccf5f0]
// 00a3bc25  85c0                 test eax, eax
// 00a3bc27  7409                 je 0xa3bc32
// 00a3bc29  50                   push eax
// 00a3bc2a  e829e4dcff           call 0x80a058
// 00a3bc2f  83c404               add esp, 4
// 00a3bc32  c705d0f5cc00e0bea500 mov dword ptr [0xccf5d0], 0xa5bee0
// 00a3bc3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
