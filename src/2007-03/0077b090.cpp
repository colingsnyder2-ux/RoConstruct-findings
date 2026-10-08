// roc 2007-03 0077b090  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b090
//
// 0077b090  a1bcf68b00           mov eax, dword ptr [0x8bf6bc]
// 0077b095  50                   push eax
// 0077b096  e85530eaff           call 0x61e0f0
// 0077b09b  83c404               add esp, 4
// 0077b09e  c705a4f68b0064617800 mov dword ptr [0x8bf6a4], 0x786164
// 0077b0a8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
