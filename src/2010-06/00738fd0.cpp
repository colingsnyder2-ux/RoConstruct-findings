// roc 2010-06 00738fd0  unit: seg_00730000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00738fd0
//
// 00738fd0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00738fd4  83ec0c               sub esp, 0xc
// 00738fd7  6a02                 push 2
// 00738fd9  8d442404             lea eax, [esp + 4]
// 00738fdd  50                   push eax
// 00738fde  e81dd1e1ff           call 0x556100
// 00738fe3  50                   push eax
// 00738fe4  e867ffffff           call 0x738f50
// 00738fe9  83c410               add esp, 0x10
// 00738fec  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?Matrix3ToNormalId@RBX@@YA?AW4NormalId@1@ABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
