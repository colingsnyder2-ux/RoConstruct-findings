// roc 2007-03 00779e60  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779e60
//
// 00779e60  a1accb8b00           mov eax, dword ptr [0x8bcbac]
// 00779e65  50                   push eax
// 00779e66  e88542eaff           call 0x61e0f0
// 00779e6b  83c404               add esp, 4
// 00779e6e  c70590cb8b0064617800 mov dword ptr [0x8bcb90], 0x786164
// 00779e78  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
