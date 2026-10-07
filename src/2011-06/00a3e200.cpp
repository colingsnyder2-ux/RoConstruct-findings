// roc 2011-06 00a3e200  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e200
//
// 00a3e200  a18832cd00           mov eax, dword ptr [0xcd3288]
// 00a3e205  85c0                 test eax, eax
// 00a3e207  7409                 je 0xa3e212
// 00a3e209  50                   push eax
// 00a3e20a  e849bedcff           call 0x80a058
// 00a3e20f  83c404               add esp, 4
// 00a3e212  c7056c32cd00e0bea500 mov dword ptr [0xcd326c], 0xa5bee0
// 00a3e21c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
