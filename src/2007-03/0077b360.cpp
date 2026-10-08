// roc 2007-03 0077b360  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b360
//
// 0077b360  a1c8fa8b00           mov eax, dword ptr [0x8bfac8]
// 0077b365  50                   push eax
// 0077b366  e8852deaff           call 0x61e0f0
// 0077b36b  83c404               add esp, 4
// 0077b36e  c705b0fa8b0064617800 mov dword ptr [0x8bfab0], 0x786164
// 0077b378  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
