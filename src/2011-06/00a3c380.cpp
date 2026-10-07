// roc 2011-06 00a3c380  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c380
//
// 00a3c380  a18401cd00           mov eax, dword ptr [0xcd0184]
// 00a3c385  85c0                 test eax, eax
// 00a3c387  7409                 je 0xa3c392
// 00a3c389  50                   push eax
// 00a3c38a  e8c9dcdcff           call 0x80a058
// 00a3c38f  83c404               add esp, 4
// 00a3c392  c7056801cd00e0bea500 mov dword ptr [0xcd0168], 0xa5bee0
// 00a3c39c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
