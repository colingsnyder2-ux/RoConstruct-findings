// roc 2007-03 00779430  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779430
//
// 00779430  a1fcb38b00           mov eax, dword ptr [0x8bb3fc]
// 00779435  50                   push eax
// 00779436  e8b54ceaff           call 0x61e0f0
// 0077943b  83c404               add esp, 4
// 0077943e  c705e0b38b0064617800 mov dword ptr [0x8bb3e0], 0x786164
// 00779448  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
