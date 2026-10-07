// roc 2008-06 007fbdf0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbdf0
//
// 007fbdf0  a16c139700           mov eax, dword ptr [0x97136c]
// 007fbdf5  85c0                 test eax, eax
// 007fbdf7  7409                 je 0x7fbe02
// 007fbdf9  50                   push eax
// 007fbdfa  e87b48eaff           call 0x6a067a
// 007fbdff  83c404               add esp, 4
// 007fbe02  c7055413970030b78000 mov dword ptr [0x971354], 0x80b730
// 007fbe0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
