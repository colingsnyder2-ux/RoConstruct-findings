// roc 2011-06 00a3c500  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c500
//
// 00a3c500  a1e801cd00           mov eax, dword ptr [0xcd01e8]
// 00a3c505  85c0                 test eax, eax
// 00a3c507  7409                 je 0xa3c512
// 00a3c509  50                   push eax
// 00a3c50a  e849dbdcff           call 0x80a058
// 00a3c50f  83c404               add esp, 4
// 00a3c512  c705c801cd00e0bea500 mov dword ptr [0xcd01c8], 0xa5bee0
// 00a3c51c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
