// roc 2007-03 007796e0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007796e0
//
// 007796e0  a168bb8b00           mov eax, dword ptr [0x8bbb68]
// 007796e5  50                   push eax
// 007796e6  e8054aeaff           call 0x61e0f0
// 007796eb  83c404               add esp, 4
// 007796ee  c70550bb8b0064617800 mov dword ptr [0x8bbb50], 0x786164
// 007796f8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
