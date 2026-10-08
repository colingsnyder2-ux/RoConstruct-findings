// roc 2007-03 0077af30  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077af30
//
// 0077af30  a10cf48b00           mov eax, dword ptr [0x8bf40c]
// 0077af35  50                   push eax
// 0077af36  e8b531eaff           call 0x61e0f0
// 0077af3b  83c404               add esp, 4
// 0077af3e  c705f0f38b0064617800 mov dword ptr [0x8bf3f0], 0x786164
// 0077af48  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
