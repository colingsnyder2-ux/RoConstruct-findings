// roc 2007-03 0077a060  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a060
//
// 0077a060  a12ccd8b00           mov eax, dword ptr [0x8bcd2c]
// 0077a065  50                   push eax
// 0077a066  e88540eaff           call 0x61e0f0
// 0077a06b  83c404               add esp, 4
// 0077a06e  c70514cd8b0064617800 mov dword ptr [0x8bcd14], 0x786164
// 0077a078  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
