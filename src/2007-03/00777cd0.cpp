// roc 2007-03 00777cd0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777cd0
//
// 00777cd0  a17c628b00           mov eax, dword ptr [0x8b627c]
// 00777cd5  50                   push eax
// 00777cd6  e81564eaff           call 0x61e0f0
// 00777cdb  83c404               add esp, 4
// 00777cde  c70564628b0064617800 mov dword ptr [0x8b6264], 0x786164
// 00777ce8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
