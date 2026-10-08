// roc 2007-03 00778930  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778930
//
// 00778930  a1b08d8b00           mov eax, dword ptr [0x8b8db0]
// 00778935  50                   push eax
// 00778936  e8b557eaff           call 0x61e0f0
// 0077893b  83c404               add esp, 4
// 0077893e  c705988d8b0064617800 mov dword ptr [0x8b8d98], 0x786164
// 00778948  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
