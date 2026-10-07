// roc 2008-06 007fe390  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe390
//
// 007fe390  a114719700           mov eax, dword ptr [0x977114]
// 007fe395  85c0                 test eax, eax
// 007fe397  7409                 je 0x7fe3a2
// 007fe399  50                   push eax
// 007fe39a  e8db22eaff           call 0x6a067a
// 007fe39f  83c404               add esp, 4
// 007fe3a2  c705fc70970030b78000 mov dword ptr [0x9770fc], 0x80b730
// 007fe3ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
