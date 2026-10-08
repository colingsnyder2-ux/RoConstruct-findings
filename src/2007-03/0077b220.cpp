// roc 2007-03 0077b220  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b220
//
// 0077b220  a1e8fa8b00           mov eax, dword ptr [0x8bfae8]
// 0077b225  50                   push eax
// 0077b226  e8c52eeaff           call 0x61e0f0
// 0077b22b  83c404               add esp, 4
// 0077b22e  c705ccfa8b0064617800 mov dword ptr [0x8bfacc], 0x786164
// 0077b238  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
