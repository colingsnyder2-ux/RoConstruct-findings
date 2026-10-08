// roc 2007-03 0077b200  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b200
//
// 0077b200  a140fb8b00           mov eax, dword ptr [0x8bfb40]
// 0077b205  50                   push eax
// 0077b206  e8e52eeaff           call 0x61e0f0
// 0077b20b  83c404               add esp, 4
// 0077b20e  c70528fb8b0064617800 mov dword ptr [0x8bfb28], 0x786164
// 0077b218  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
