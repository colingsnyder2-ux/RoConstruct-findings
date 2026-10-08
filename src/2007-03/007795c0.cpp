// roc 2007-03 007795c0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007795c0
//
// 007795c0  a18cb88b00           mov eax, dword ptr [0x8bb88c]
// 007795c5  50                   push eax
// 007795c6  e8254beaff           call 0x61e0f0
// 007795cb  83c404               add esp, 4
// 007795ce  c70574b88b0064617800 mov dword ptr [0x8bb874], 0x786164
// 007795d8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
