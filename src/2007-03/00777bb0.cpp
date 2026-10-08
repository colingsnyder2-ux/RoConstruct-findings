// roc 2007-03 00777bb0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777bb0
//
// 00777bb0  a10c628b00           mov eax, dword ptr [0x8b620c]
// 00777bb5  50                   push eax
// 00777bb6  e83565eaff           call 0x61e0f0
// 00777bbb  83c404               add esp, 4
// 00777bbe  c705f0618b0064617800 mov dword ptr [0x8b61f0], 0x786164
// 00777bc8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
