// roc 2011-06 00a3e980  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e980
//
// 00a3e980  a1203ecd00           mov eax, dword ptr [0xcd3e20]
// 00a3e985  85c0                 test eax, eax
// 00a3e987  7409                 je 0xa3e992
// 00a3e989  50                   push eax
// 00a3e98a  e8c9b6dcff           call 0x80a058
// 00a3e98f  83c404               add esp, 4
// 00a3e992  c705003ecd00e0bea500 mov dword ptr [0xcd3e00], 0xa5bee0
// 00a3e99c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
