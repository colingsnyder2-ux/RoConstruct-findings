// roc 2008-06 007fff10  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fff10
//
// 007fff10  a198b59700           mov eax, dword ptr [0x97b598]
// 007fff15  85c0                 test eax, eax
// 007fff17  7409                 je 0x7fff22
// 007fff19  50                   push eax
// 007fff1a  e85b07eaff           call 0x6a067a
// 007fff1f  83c404               add esp, 4
// 007fff22  c7057cb5970030b78000 mov dword ptr [0x97b57c], 0x80b730
// 007fff2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
