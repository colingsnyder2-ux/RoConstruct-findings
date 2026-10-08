// roc 2007-03 00779fa0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779fa0
//
// 00779fa0  a1c0ca8b00           mov eax, dword ptr [0x8bcac0]
// 00779fa5  50                   push eax
// 00779fa6  e84541eaff           call 0x61e0f0
// 00779fab  83c404               add esp, 4
// 00779fae  c705a8ca8b0064617800 mov dword ptr [0x8bcaa8], 0x786164
// 00779fb8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
