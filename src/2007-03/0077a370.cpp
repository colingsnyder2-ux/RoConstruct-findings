// roc 2007-03 0077a370  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a370
//
// 0077a370  a150d68b00           mov eax, dword ptr [0x8bd650]
// 0077a375  50                   push eax
// 0077a376  e8753deaff           call 0x61e0f0
// 0077a37b  83c404               add esp, 4
// 0077a37e  c70538d68b0064617800 mov dword ptr [0x8bd638], 0x786164
// 0077a388  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
