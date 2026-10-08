// roc 2007-03 0077afd0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077afd0
//
// 0077afd0  a164f48b00           mov eax, dword ptr [0x8bf464]
// 0077afd5  50                   push eax
// 0077afd6  e81531eaff           call 0x61e0f0
// 0077afdb  83c404               add esp, 4
// 0077afde  c7054cf48b0064617800 mov dword ptr [0x8bf44c], 0x786164
// 0077afe8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
