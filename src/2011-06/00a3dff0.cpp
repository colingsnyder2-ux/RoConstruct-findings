// roc 2011-06 00a3dff0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dff0
//
// 00a3dff0  a1902fcd00           mov eax, dword ptr [0xcd2f90]
// 00a3dff5  85c0                 test eax, eax
// 00a3dff7  7409                 je 0xa3e002
// 00a3dff9  50                   push eax
// 00a3dffa  e859c0dcff           call 0x80a058
// 00a3dfff  83c404               add esp, 4
// 00a3e002  c705702fcd00e0bea500 mov dword ptr [0xcd2f70], 0xa5bee0
// 00a3e00c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
