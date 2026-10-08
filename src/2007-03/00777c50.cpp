// roc 2007-03 00777c50  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777c50
//
// 00777c50  a17c618b00           mov eax, dword ptr [0x8b617c]
// 00777c55  50                   push eax
// 00777c56  e89564eaff           call 0x61e0f0
// 00777c5b  83c404               add esp, 4
// 00777c5e  c70564618b0064617800 mov dword ptr [0x8b6164], 0x786164
// 00777c68  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
