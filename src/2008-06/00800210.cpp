// roc 2008-06 00800210  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800210
//
// 00800210  a154be9700           mov eax, dword ptr [0x97be54]
// 00800215  85c0                 test eax, eax
// 00800217  7409                 je 0x800222
// 00800219  50                   push eax
// 0080021a  e85b04eaff           call 0x6a067a
// 0080021f  83c404               add esp, 4
// 00800222  c70538be970030b78000 mov dword ptr [0x97be38], 0x80b730
// 0080022c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
