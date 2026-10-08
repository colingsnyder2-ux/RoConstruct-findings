// roc 2007-03 00778570  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778570
//
// 00778570  a1cc878b00           mov eax, dword ptr [0x8b87cc]
// 00778575  50                   push eax
// 00778576  e8755beaff           call 0x61e0f0
// 0077857b  83c404               add esp, 4
// 0077857e  c705b0878b0064617800 mov dword ptr [0x8b87b0], 0x786164
// 00778588  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
