// roc 2007-03 00779fc0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779fc0
//
// 00779fc0  a1bccd8b00           mov eax, dword ptr [0x8bcdbc]
// 00779fc5  50                   push eax
// 00779fc6  e82541eaff           call 0x61e0f0
// 00779fcb  83c404               add esp, 4
// 00779fce  c705a4cd8b0064617800 mov dword ptr [0x8bcda4], 0x786164
// 00779fd8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
