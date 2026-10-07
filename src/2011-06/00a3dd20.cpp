// roc 2011-06 00a3dd20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dd20
//
// 00a3dd20  a1f42acd00           mov eax, dword ptr [0xcd2af4]
// 00a3dd25  85c0                 test eax, eax
// 00a3dd27  7409                 je 0xa3dd32
// 00a3dd29  50                   push eax
// 00a3dd2a  e829c3dcff           call 0x80a058
// 00a3dd2f  83c404               add esp, 4
// 00a3dd32  c705d82acd00e0bea500 mov dword ptr [0xcd2ad8], 0xa5bee0
// 00a3dd3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
