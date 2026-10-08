// roc 2007-03 00777bf0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777bf0
//
// 00777bf0  a160628b00           mov eax, dword ptr [0x8b6260]
// 00777bf5  50                   push eax
// 00777bf6  e8f564eaff           call 0x61e0f0
// 00777bfb  83c404               add esp, 4
// 00777bfe  c70548628b0064617800 mov dword ptr [0x8b6248], 0x786164
// 00777c08  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
