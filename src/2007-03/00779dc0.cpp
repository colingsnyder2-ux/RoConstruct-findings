// roc 2007-03 00779dc0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779dc0
//
// 00779dc0  a10cca8b00           mov eax, dword ptr [0x8bca0c]
// 00779dc5  50                   push eax
// 00779dc6  e82543eaff           call 0x61e0f0
// 00779dcb  83c404               add esp, 4
// 00779dce  c705f4c98b0064617800 mov dword ptr [0x8bc9f4], 0x786164
// 00779dd8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
