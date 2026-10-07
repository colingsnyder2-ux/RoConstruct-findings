// roc 2011-06 00a344b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a344b0
//
// 00a344b0  a1f0b5cb00           mov eax, dword ptr [0xcbb5f0]
// 00a344b5  85c0                 test eax, eax
// 00a344b7  7409                 je 0xa344c2
// 00a344b9  50                   push eax
// 00a344ba  e8995bddff           call 0x80a058
// 00a344bf  83c404               add esp, 4
// 00a344c2  c705d4b5cb00e0bea500 mov dword ptr [0xcbb5d4], 0xa5bee0
// 00a344cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
