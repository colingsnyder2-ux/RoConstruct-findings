// roc 2008-06 007fff80  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fff80
//
// 007fff80  a1d0b69700           mov eax, dword ptr [0x97b6d0]
// 007fff85  85c0                 test eax, eax
// 007fff87  7409                 je 0x7fff92
// 007fff89  50                   push eax
// 007fff8a  e8eb06eaff           call 0x6a067a
// 007fff8f  83c404               add esp, 4
// 007fff92  c705b8b6970030b78000 mov dword ptr [0x97b6b8], 0x80b730
// 007fff9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
