// roc 2008-06 007fccb0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fccb0
//
// 007fccb0  a14c459700           mov eax, dword ptr [0x97454c]
// 007fccb5  85c0                 test eax, eax
// 007fccb7  7409                 je 0x7fccc2
// 007fccb9  50                   push eax
// 007fccba  e8bb39eaff           call 0x6a067a
// 007fccbf  83c404               add esp, 4
// 007fccc2  c7053445970030b78000 mov dword ptr [0x974534], 0x80b730
// 007fcccc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
