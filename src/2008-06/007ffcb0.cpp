// roc 2008-06 007ffcb0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffcb0
//
// 007ffcb0  a144b39700           mov eax, dword ptr [0x97b344]
// 007ffcb5  85c0                 test eax, eax
// 007ffcb7  7409                 je 0x7ffcc2
// 007ffcb9  50                   push eax
// 007ffcba  e8bb09eaff           call 0x6a067a
// 007ffcbf  83c404               add esp, 4
// 007ffcc2  c7052cb3970030b78000 mov dword ptr [0x97b32c], 0x80b730
// 007ffccc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
