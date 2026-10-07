// roc 2011-06 00a3bda0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bda0
//
// 00a3bda0  a134f8cc00           mov eax, dword ptr [0xccf834]
// 00a3bda5  85c0                 test eax, eax
// 00a3bda7  7409                 je 0xa3bdb2
// 00a3bda9  50                   push eax
// 00a3bdaa  e8a9e2dcff           call 0x80a058
// 00a3bdaf  83c404               add esp, 4
// 00a3bdb2  c70518f8cc00e0bea500 mov dword ptr [0xccf818], 0xa5bee0
// 00a3bdbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
