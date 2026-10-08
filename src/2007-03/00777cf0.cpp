// roc 2007-03 00777cf0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777cf0
//
// 00777cf0  a144628b00           mov eax, dword ptr [0x8b6244]
// 00777cf5  50                   push eax
// 00777cf6  e8f563eaff           call 0x61e0f0
// 00777cfb  83c404               add esp, 4
// 00777cfe  c7052c628b0064617800 mov dword ptr [0x8b622c], 0x786164
// 00777d08  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
