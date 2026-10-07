// roc 2011-06 00a3eb20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3eb20
//
// 00a3eb20  a1b83dcd00           mov eax, dword ptr [0xcd3db8]
// 00a3eb25  85c0                 test eax, eax
// 00a3eb27  7409                 je 0xa3eb32
// 00a3eb29  50                   push eax
// 00a3eb2a  e829b5dcff           call 0x80a058
// 00a3eb2f  83c404               add esp, 4
// 00a3eb32  c7059c3dcd00e0bea500 mov dword ptr [0xcd3d9c], 0xa5bee0
// 00a3eb3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
