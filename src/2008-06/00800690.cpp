// roc 2008-06 00800690  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800690
//
// 00800690  a194c99700           mov eax, dword ptr [0x97c994]
// 00800695  85c0                 test eax, eax
// 00800697  7409                 je 0x8006a2
// 00800699  50                   push eax
// 0080069a  e8dbffe9ff           call 0x6a067a
// 0080069f  83c404               add esp, 4
// 008006a2  c7057cc9970030b78000 mov dword ptr [0x97c97c], 0x80b730
// 008006ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
