// roc 2011-06 00a39690  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39690
//
// 00a39690  a174aecc00           mov eax, dword ptr [0xccae74]
// 00a39695  85c0                 test eax, eax
// 00a39697  7409                 je 0xa396a2
// 00a39699  50                   push eax
// 00a3969a  e8b909ddff           call 0x80a058
// 00a3969f  83c404               add esp, 4
// 00a396a2  c70558aecc00e0bea500 mov dword ptr [0xccae58], 0xa5bee0
// 00a396ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
