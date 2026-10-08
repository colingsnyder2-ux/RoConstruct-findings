// roc 2007-03 0077a3d0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a3d0
//
// 0077a3d0  a128d58b00           mov eax, dword ptr [0x8bd528]
// 0077a3d5  50                   push eax
// 0077a3d6  e8153deaff           call 0x61e0f0
// 0077a3db  83c404               add esp, 4
// 0077a3de  c70510d58b0064617800 mov dword ptr [0x8bd510], 0x786164
// 0077a3e8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
