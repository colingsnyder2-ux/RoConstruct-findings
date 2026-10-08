// roc 2007-03 0077b9f0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b9f0
//
// 0077b9f0  a1800c8c00           mov eax, dword ptr [0x8c0c80]
// 0077b9f5  50                   push eax
// 0077b9f6  e8f526eaff           call 0x61e0f0
// 0077b9fb  83c404               add esp, 4
// 0077b9fe  c705680c8c0064617800 mov dword ptr [0x8c0c68], 0x786164
// 0077ba08  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
