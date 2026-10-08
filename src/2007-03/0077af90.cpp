// roc 2007-03 0077af90  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077af90
//
// 0077af90  a148f48b00           mov eax, dword ptr [0x8bf448]
// 0077af95  50                   push eax
// 0077af96  e85531eaff           call 0x61e0f0
// 0077af9b  83c404               add esp, 4
// 0077af9e  c70530f48b0064617800 mov dword ptr [0x8bf430], 0x786164
// 0077afa8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
