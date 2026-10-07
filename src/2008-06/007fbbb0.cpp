// roc 2008-06 007fbbb0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbbb0
//
// 007fbbb0  a1900f9700           mov eax, dword ptr [0x970f90]
// 007fbbb5  85c0                 test eax, eax
// 007fbbb7  7409                 je 0x7fbbc2
// 007fbbb9  50                   push eax
// 007fbbba  e8bb4aeaff           call 0x6a067a
// 007fbbbf  83c404               add esp, 4
// 007fbbc2  c705780f970030b78000 mov dword ptr [0x970f78], 0x80b730
// 007fbbcc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
