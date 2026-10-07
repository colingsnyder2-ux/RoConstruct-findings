// roc 2011-06 00a39650  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39650
//
// 00a39650  a144b1cc00           mov eax, dword ptr [0xccb144]
// 00a39655  85c0                 test eax, eax
// 00a39657  7409                 je 0xa39662
// 00a39659  50                   push eax
// 00a3965a  e8f909ddff           call 0x80a058
// 00a3965f  83c404               add esp, 4
// 00a39662  c70528b1cc00e0bea500 mov dword ptr [0xccb128], 0xa5bee0
// 00a3966c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
