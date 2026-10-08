// roc 2007-03 0077ba30  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ba30
//
// 0077ba30  a1800e8c00           mov eax, dword ptr [0x8c0e80]
// 0077ba35  50                   push eax
// 0077ba36  e8b526eaff           call 0x61e0f0
// 0077ba3b  83c404               add esp, 4
// 0077ba3e  c705680e8c0064617800 mov dword ptr [0x8c0e68], 0x786164
// 0077ba48  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
