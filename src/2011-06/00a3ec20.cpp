// roc 2011-06 00a3ec20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ec20
//
// 00a3ec20  a1983dcd00           mov eax, dword ptr [0xcd3d98]
// 00a3ec25  85c0                 test eax, eax
// 00a3ec27  7409                 je 0xa3ec32
// 00a3ec29  50                   push eax
// 00a3ec2a  e829b4dcff           call 0x80a058
// 00a3ec2f  83c404               add esp, 4
// 00a3ec32  c7057c3dcd00e0bea500 mov dword ptr [0xcd3d7c], 0xa5bee0
// 00a3ec3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
