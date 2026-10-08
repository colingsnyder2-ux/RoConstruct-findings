// roc 2007-03 0077bed0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077bed0
//
// 0077bed0  a1e4118c00           mov eax, dword ptr [0x8c11e4]
// 0077bed5  50                   push eax
// 0077bed6  e81522eaff           call 0x61e0f0
// 0077bedb  83c404               add esp, 4
// 0077bede  c705cc118c0064617800 mov dword ptr [0x8c11cc], 0x786164
// 0077bee8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
