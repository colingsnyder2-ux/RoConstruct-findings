// roc 2007-03 00779560  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779560
//
// 00779560  a1dcb88b00           mov eax, dword ptr [0x8bb8dc]
// 00779565  50                   push eax
// 00779566  e8854beaff           call 0x61e0f0
// 0077956b  83c404               add esp, 4
// 0077956e  c705c0b88b0064617800 mov dword ptr [0x8bb8c0], 0x786164
// 00779578  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
