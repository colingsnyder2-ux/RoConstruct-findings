// roc 2011-06 00a34690  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34690
//
// 00a34690  a1bcb1cb00           mov eax, dword ptr [0xcbb1bc]
// 00a34695  85c0                 test eax, eax
// 00a34697  7409                 je 0xa346a2
// 00a34699  50                   push eax
// 00a3469a  e8b959ddff           call 0x80a058
// 00a3469f  83c404               add esp, 4
// 00a346a2  c705a0b1cb00e0bea500 mov dword ptr [0xcbb1a0], 0xa5bee0
// 00a346ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
