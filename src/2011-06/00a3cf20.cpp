// roc 2011-06 00a3cf20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cf20
//
// 00a3cf20  a14416cd00           mov eax, dword ptr [0xcd1644]
// 00a3cf25  85c0                 test eax, eax
// 00a3cf27  7409                 je 0xa3cf32
// 00a3cf29  50                   push eax
// 00a3cf2a  e829d1dcff           call 0x80a058
// 00a3cf2f  83c404               add esp, 4
// 00a3cf32  c7052816cd00e0bea500 mov dword ptr [0xcd1628], 0xa5bee0
// 00a3cf3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
