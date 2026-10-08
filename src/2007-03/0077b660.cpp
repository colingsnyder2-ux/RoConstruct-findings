// roc 2007-03 0077b660  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b660
//
// 0077b660  a1d0008c00           mov eax, dword ptr [0x8c00d0]
// 0077b665  50                   push eax
// 0077b666  e8852aeaff           call 0x61e0f0
// 0077b66b  83c404               add esp, 4
// 0077b66e  c705b8008c0064617800 mov dword ptr [0x8c00b8], 0x786164
// 0077b678  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
