// roc 2007-03 007788f0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007788f0
//
// 007788f0  a1ac8e8b00           mov eax, dword ptr [0x8b8eac]
// 007788f5  50                   push eax
// 007788f6  e8f557eaff           call 0x61e0f0
// 007788fb  83c404               add esp, 4
// 007788fe  c705948e8b0064617800 mov dword ptr [0x8b8e94], 0x786164
// 00778908  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
