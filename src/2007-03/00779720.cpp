// roc 2007-03 00779720  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779720
//
// 00779720  a1bcbb8b00           mov eax, dword ptr [0x8bbbbc]
// 00779725  50                   push eax
// 00779726  e8c549eaff           call 0x61e0f0
// 0077972b  83c404               add esp, 4
// 0077972e  c705a4bb8b0064617800 mov dword ptr [0x8bbba4], 0x786164
// 00779738  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
