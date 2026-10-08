// roc 2007-03 00777cb0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777cb0
//
// 00777cb0  a1ec618b00           mov eax, dword ptr [0x8b61ec]
// 00777cb5  50                   push eax
// 00777cb6  e83564eaff           call 0x61e0f0
// 00777cbb  83c404               add esp, 4
// 00777cbe  c705d4618b0064617800 mov dword ptr [0x8b61d4], 0x786164
// 00777cc8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
