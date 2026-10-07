// roc 2008-06 007fbef0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbef0
//
// 007fbef0  a198129700           mov eax, dword ptr [0x971298]
// 007fbef5  85c0                 test eax, eax
// 007fbef7  7409                 je 0x7fbf02
// 007fbef9  50                   push eax
// 007fbefa  e87b47eaff           call 0x6a067a
// 007fbeff  83c404               add esp, 4
// 007fbf02  c7058012970030b78000 mov dword ptr [0x971280], 0x80b730
// 007fbf0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
