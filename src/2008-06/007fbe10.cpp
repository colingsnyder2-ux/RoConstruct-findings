// roc 2008-06 007fbe10  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbe10
//
// 007fbe10  a134139700           mov eax, dword ptr [0x971334]
// 007fbe15  85c0                 test eax, eax
// 007fbe17  7409                 je 0x7fbe22
// 007fbe19  50                   push eax
// 007fbe1a  e85b48eaff           call 0x6a067a
// 007fbe1f  83c404               add esp, 4
// 007fbe22  c7051c13970030b78000 mov dword ptr [0x97131c], 0x80b730
// 007fbe2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
