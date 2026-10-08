// roc 2007-03 0077b950  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b950
//
// 0077b950  a1d40d8c00           mov eax, dword ptr [0x8c0dd4]
// 0077b955  50                   push eax
// 0077b956  e89527eaff           call 0x61e0f0
// 0077b95b  83c404               add esp, 4
// 0077b95e  c705b80d8c0064617800 mov dword ptr [0x8c0db8], 0x786164
// 0077b968  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
