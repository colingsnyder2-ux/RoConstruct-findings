// roc 2007-03 0077b030  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b030
//
// 0077b030  a1f4f68b00           mov eax, dword ptr [0x8bf6f4]
// 0077b035  50                   push eax
// 0077b036  e8b530eaff           call 0x61e0f0
// 0077b03b  83c404               add esp, 4
// 0077b03e  c705dcf68b0064617800 mov dword ptr [0x8bf6dc], 0x786164
// 0077b048  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
