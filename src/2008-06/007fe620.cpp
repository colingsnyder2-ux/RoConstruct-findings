// roc 2008-06 007fe620  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe620
//
// 007fe620  a168779700           mov eax, dword ptr [0x977768]
// 007fe625  85c0                 test eax, eax
// 007fe627  7409                 je 0x7fe632
// 007fe629  50                   push eax
// 007fe62a  e84b20eaff           call 0x6a067a
// 007fe62f  83c404               add esp, 4
// 007fe632  c7055077970030b78000 mov dword ptr [0x977750], 0x80b730
// 007fe63c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
