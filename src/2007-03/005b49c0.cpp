// roc 2007-03 005b49c0  unit: seg_005b0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b49c0
//
// 005b49c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b49c4  83ec0c               sub esp, 0xc
// 005b49c7  6a02                 push 2
// 005b49c9  8d442404             lea eax, [esp + 4]
// 005b49cd  50                   push eax
// 005b49ce  e81da0f4ff           call 0x4fe9f0
// 005b49d3  50                   push eax
// 005b49d4  e867ffffff           call 0x5b4940
// 005b49d9  83c410               add esp, 0x10
// 005b49dc  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?Matrix3ToNormalId@RBX@@YA?AW4NormalId@1@ABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
