// roc 2007-03 0077afb0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077afb0
//
// 0077afb0  a19cf48b00           mov eax, dword ptr [0x8bf49c]
// 0077afb5  50                   push eax
// 0077afb6  e83531eaff           call 0x61e0f0
// 0077afbb  83c404               add esp, 4
// 0077afbe  c70584f48b0064617800 mov dword ptr [0x8bf484], 0x786164
// 0077afc8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
