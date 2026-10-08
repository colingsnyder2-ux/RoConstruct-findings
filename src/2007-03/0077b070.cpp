// roc 2007-03 0077b070  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b070
//
// 0077b070  a110f78b00           mov eax, dword ptr [0x8bf710]
// 0077b075  50                   push eax
// 0077b076  e87530eaff           call 0x61e0f0
// 0077b07b  83c404               add esp, 4
// 0077b07e  c705f8f68b0064617800 mov dword ptr [0x8bf6f8], 0x786164
// 0077b088  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
