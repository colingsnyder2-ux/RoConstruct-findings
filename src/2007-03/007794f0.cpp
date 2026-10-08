// roc 2007-03 007794f0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007794f0
//
// 007794f0  a110b88b00           mov eax, dword ptr [0x8bb810]
// 007794f5  50                   push eax
// 007794f6  e8f54beaff           call 0x61e0f0
// 007794fb  83c404               add esp, 4
// 007794fe  c705f8b78b0064617800 mov dword ptr [0x8bb7f8], 0x786164
// 00779508  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
