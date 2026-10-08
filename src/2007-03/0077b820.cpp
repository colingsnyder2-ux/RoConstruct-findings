// roc 2007-03 0077b820  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b820
//
// 0077b820  a140068c00           mov eax, dword ptr [0x8c0640]
// 0077b825  50                   push eax
// 0077b826  e8c528eaff           call 0x61e0f0
// 0077b82b  83c404               add esp, 4
// 0077b82e  c70528068c0064617800 mov dword ptr [0x8c0628], 0x786164
// 0077b838  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
