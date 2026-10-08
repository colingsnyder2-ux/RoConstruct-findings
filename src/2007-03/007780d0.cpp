// roc 2007-03 007780d0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007780d0
//
// 007780d0  a1dc838b00           mov eax, dword ptr [0x8b83dc]
// 007780d5  50                   push eax
// 007780d6  e81560eaff           call 0x61e0f0
// 007780db  83c404               add esp, 4
// 007780de  c705c4838b0064617800 mov dword ptr [0x8b83c4], 0x786164
// 007780e8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
