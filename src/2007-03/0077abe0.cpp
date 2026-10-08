// roc 2007-03 0077abe0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077abe0
//
// 0077abe0  a174ef8b00           mov eax, dword ptr [0x8bef74]
// 0077abe5  50                   push eax
// 0077abe6  e80535eaff           call 0x61e0f0
// 0077abeb  83c404               add esp, 4
// 0077abee  c7055cef8b0064617800 mov dword ptr [0x8bef5c], 0x786164
// 0077abf8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
