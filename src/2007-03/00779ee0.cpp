// roc 2007-03 00779ee0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779ee0
//
// 00779ee0  a140cc8b00           mov eax, dword ptr [0x8bcc40]
// 00779ee5  50                   push eax
// 00779ee6  e80542eaff           call 0x61e0f0
// 00779eeb  83c404               add esp, 4
// 00779eee  c70528cc8b0064617800 mov dword ptr [0x8bcc28], 0x786164
// 00779ef8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
