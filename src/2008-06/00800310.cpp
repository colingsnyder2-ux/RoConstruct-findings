// roc 2008-06 00800310  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800310
//
// 00800310  a138bf9700           mov eax, dword ptr [0x97bf38]
// 00800315  85c0                 test eax, eax
// 00800317  7409                 je 0x800322
// 00800319  50                   push eax
// 0080031a  e85b03eaff           call 0x6a067a
// 0080031f  83c404               add esp, 4
// 00800322  c70520bf970030b78000 mov dword ptr [0x97bf20], 0x80b730
// 0080032c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
