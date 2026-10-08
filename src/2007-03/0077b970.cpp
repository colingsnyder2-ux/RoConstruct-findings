// roc 2007-03 0077b970  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b970
//
// 0077b970  a1f00d8c00           mov eax, dword ptr [0x8c0df0]
// 0077b975  50                   push eax
// 0077b976  e87527eaff           call 0x61e0f0
// 0077b97b  83c404               add esp, 4
// 0077b97e  c705d80d8c0064617800 mov dword ptr [0x8c0dd8], 0x786164
// 0077b988  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
