// roc 2008-06 007feef0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007feef0
//
// 007feef0  a1d49c9700           mov eax, dword ptr [0x979cd4]
// 007feef5  85c0                 test eax, eax
// 007feef7  7409                 je 0x7fef02
// 007feef9  50                   push eax
// 007feefa  e87b17eaff           call 0x6a067a
// 007feeff  83c404               add esp, 4
// 007fef02  c705bc9c970030b78000 mov dword ptr [0x979cbc], 0x80b730
// 007fef0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
