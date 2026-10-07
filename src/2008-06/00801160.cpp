// roc 2008-06 00801160  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801160
//
// 00801160  a180d79700           mov eax, dword ptr [0x97d780]
// 00801165  85c0                 test eax, eax
// 00801167  7409                 je 0x801172
// 00801169  50                   push eax
// 0080116a  e80bf5e9ff           call 0x6a067a
// 0080116f  83c404               add esp, 4
// 00801172  c70568d7970030b78000 mov dword ptr [0x97d768], 0x80b730
// 0080117c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
