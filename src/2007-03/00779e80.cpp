// roc 2007-03 00779e80  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779e80
//
// 00779e80  a114cb8b00           mov eax, dword ptr [0x8bcb14]
// 00779e85  50                   push eax
// 00779e86  e86542eaff           call 0x61e0f0
// 00779e8b  83c404               add esp, 4
// 00779e8e  c705fcca8b0064617800 mov dword ptr [0x8bcafc], 0x786164
// 00779e98  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
