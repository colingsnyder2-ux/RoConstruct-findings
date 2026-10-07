// roc 2008-06 00800710  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800710
//
// 00800710  a1e4c69700           mov eax, dword ptr [0x97c6e4]
// 00800715  85c0                 test eax, eax
// 00800717  7409                 je 0x800722
// 00800719  50                   push eax
// 0080071a  e85bffe9ff           call 0x6a067a
// 0080071f  83c404               add esp, 4
// 00800722  c705ccc6970030b78000 mov dword ptr [0x97c6cc], 0x80b730
// 0080072c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
