// roc 2007-03 0077ac20  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ac20
//
// 0077ac20  a190ef8b00           mov eax, dword ptr [0x8bef90]
// 0077ac25  50                   push eax
// 0077ac26  e8c534eaff           call 0x61e0f0
// 0077ac2b  83c404               add esp, 4
// 0077ac2e  c70578ef8b0064617800 mov dword ptr [0x8bef78], 0x786164
// 0077ac38  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
