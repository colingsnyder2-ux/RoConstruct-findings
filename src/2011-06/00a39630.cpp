// roc 2011-06 00a39630  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39630
//
// 00a39630  a1f0accc00           mov eax, dword ptr [0xccacf0]
// 00a39635  85c0                 test eax, eax
// 00a39637  7409                 je 0xa39642
// 00a39639  50                   push eax
// 00a3963a  e8190addff           call 0x80a058
// 00a3963f  83c404               add esp, 4
// 00a39642  c705d0accc00e0bea500 mov dword ptr [0xccacd0], 0xa5bee0
// 00a3964c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
