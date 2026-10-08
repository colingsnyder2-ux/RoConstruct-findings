// roc 2007-03 0077b4f0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b4f0
//
// 0077b4f0  a1f4fe8b00           mov eax, dword ptr [0x8bfef4]
// 0077b4f5  50                   push eax
// 0077b4f6  e8f52beaff           call 0x61e0f0
// 0077b4fb  83c404               add esp, 4
// 0077b4fe  c705d8fe8b0064617800 mov dword ptr [0x8bfed8], 0x786164
// 0077b508  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
