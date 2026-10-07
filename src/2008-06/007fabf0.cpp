// roc 2008-06 007fabf0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fabf0
//
// 007fabf0  a19cd39600           mov eax, dword ptr [0x96d39c]
// 007fabf5  85c0                 test eax, eax
// 007fabf7  7409                 je 0x7fac02
// 007fabf9  50                   push eax
// 007fabfa  e87b5aeaff           call 0x6a067a
// 007fabff  83c404               add esp, 4
// 007fac02  c70580d3960030b78000 mov dword ptr [0x96d380], 0x80b730
// 007fac0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
