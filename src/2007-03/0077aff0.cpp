// roc 2007-03 0077aff0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077aff0
//
// 0077aff0  a180f48b00           mov eax, dword ptr [0x8bf480]
// 0077aff5  50                   push eax
// 0077aff6  e8f530eaff           call 0x61e0f0
// 0077affb  83c404               add esp, 4
// 0077affe  c70568f48b0064617800 mov dword ptr [0x8bf468], 0x786164
// 0077b008  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
