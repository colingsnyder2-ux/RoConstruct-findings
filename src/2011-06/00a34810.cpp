// roc 2011-06 00a34810  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34810
//
// 00a34810  a118b3cb00           mov eax, dword ptr [0xcbb318]
// 00a34815  85c0                 test eax, eax
// 00a34817  7409                 je 0xa34822
// 00a34819  50                   push eax
// 00a3481a  e83958ddff           call 0x80a058
// 00a3481f  83c404               add esp, 4
// 00a34822  c705fcb2cb00e0bea500 mov dword ptr [0xcbb2fc], 0xa5bee0
// 00a3482c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
