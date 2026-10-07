// roc 2011-06 00a3bc60  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bc60
//
// 00a3bc60  a194f6cc00           mov eax, dword ptr [0xccf694]
// 00a3bc65  85c0                 test eax, eax
// 00a3bc67  7409                 je 0xa3bc72
// 00a3bc69  50                   push eax
// 00a3bc6a  e8e9e3dcff           call 0x80a058
// 00a3bc6f  83c404               add esp, 4
// 00a3bc72  c70578f6cc00e0bea500 mov dword ptr [0xccf678], 0xa5bee0
// 00a3bc7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
