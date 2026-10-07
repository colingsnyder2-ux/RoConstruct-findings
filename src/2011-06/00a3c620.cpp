// roc 2011-06 00a3c620  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c620
//
// 00a3c620  a1a405cd00           mov eax, dword ptr [0xcd05a4]
// 00a3c625  85c0                 test eax, eax
// 00a3c627  7409                 je 0xa3c632
// 00a3c629  50                   push eax
// 00a3c62a  e829dadcff           call 0x80a058
// 00a3c62f  83c404               add esp, 4
// 00a3c632  c7058805cd00e0bea500 mov dword ptr [0xcd0588], 0xa5bee0
// 00a3c63c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
