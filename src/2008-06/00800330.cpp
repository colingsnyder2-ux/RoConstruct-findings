// roc 2008-06 00800330  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800330
//
// 00800330  a1ccbf9700           mov eax, dword ptr [0x97bfcc]
// 00800335  85c0                 test eax, eax
// 00800337  7409                 je 0x800342
// 00800339  50                   push eax
// 0080033a  e83b03eaff           call 0x6a067a
// 0080033f  83c404               add esp, 4
// 00800342  c705b4bf970030b78000 mov dword ptr [0x97bfb4], 0x80b730
// 0080034c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
