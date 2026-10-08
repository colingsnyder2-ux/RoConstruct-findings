// roc 2007-03 00777c10  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777c10
//
// 00777c10  a144618b00           mov eax, dword ptr [0x8b6144]
// 00777c15  50                   push eax
// 00777c16  e8d564eaff           call 0x61e0f0
// 00777c1b  83c404               add esp, 4
// 00777c1e  c7052c618b0064617800 mov dword ptr [0x8b612c], 0x786164
// 00777c28  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
