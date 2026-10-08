// roc 2007-03 0077b9d0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b9d0
//
// 0077b9d0  a1640c8c00           mov eax, dword ptr [0x8c0c64]
// 0077b9d5  50                   push eax
// 0077b9d6  e81527eaff           call 0x61e0f0
// 0077b9db  83c404               add esp, 4
// 0077b9de  c7054c0c8c0064617800 mov dword ptr [0x8c0c4c], 0x786164
// 0077b9e8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
