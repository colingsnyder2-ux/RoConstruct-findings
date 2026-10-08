// roc 2007-03 00779450  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779450
//
// 00779450  a118b48b00           mov eax, dword ptr [0x8bb418]
// 00779455  50                   push eax
// 00779456  e8954ceaff           call 0x61e0f0
// 0077945b  83c404               add esp, 4
// 0077945e  c70500b48b0064617800 mov dword ptr [0x8bb400], 0x786164
// 00779468  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
