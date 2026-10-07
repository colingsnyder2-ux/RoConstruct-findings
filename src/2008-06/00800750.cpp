// roc 2008-06 00800750  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800750
//
// 00800750  a138c79700           mov eax, dword ptr [0x97c738]
// 00800755  85c0                 test eax, eax
// 00800757  7409                 je 0x800762
// 00800759  50                   push eax
// 0080075a  e81bffe9ff           call 0x6a067a
// 0080075f  83c404               add esp, 4
// 00800762  c70520c7970030b78000 mov dword ptr [0x97c720], 0x80b730
// 0080076c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
