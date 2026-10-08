// roc 2007-03 0077b1a0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b1a0
//
// 0077b1a0  a140f98b00           mov eax, dword ptr [0x8bf940]
// 0077b1a5  50                   push eax
// 0077b1a6  e8452feaff           call 0x61e0f0
// 0077b1ab  83c404               add esp, 4
// 0077b1ae  c70524f98b0064617800 mov dword ptr [0x8bf924], 0x786164
// 0077b1b8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
