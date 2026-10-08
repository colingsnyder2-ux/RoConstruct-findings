// roc 2007-03 00779740  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779740
//
// 00779740  a180bd8b00           mov eax, dword ptr [0x8bbd80]
// 00779745  50                   push eax
// 00779746  e8a549eaff           call 0x61e0f0
// 0077974b  83c404               add esp, 4
// 0077974e  c70568bd8b0064617800 mov dword ptr [0x8bbd68], 0x786164
// 00779758  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
