// roc 2008-06 00800290  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800290
//
// 00800290  a1b4be9700           mov eax, dword ptr [0x97beb4]
// 00800295  85c0                 test eax, eax
// 00800297  7409                 je 0x8002a2
// 00800299  50                   push eax
// 0080029a  e8db03eaff           call 0x6a067a
// 0080029f  83c404               add esp, 4
// 008002a2  c7059cbe970030b78000 mov dword ptr [0x97be9c], 0x80b730
// 008002ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
