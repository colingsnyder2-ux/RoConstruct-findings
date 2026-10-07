// roc 2008-06 00800170  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800170
//
// 00800170  a1ecb99700           mov eax, dword ptr [0x97b9ec]
// 00800175  85c0                 test eax, eax
// 00800177  7409                 je 0x800182
// 00800179  50                   push eax
// 0080017a  e8fb04eaff           call 0x6a067a
// 0080017f  83c404               add esp, 4
// 00800182  c705d4b9970030b78000 mov dword ptr [0x97b9d4], 0x80b730
// 0080018c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
