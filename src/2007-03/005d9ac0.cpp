// roc 2007-03 005d9ac0  unit: seg_005d0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d9ac0
//
// 005d9ac0  8bc1                 mov eax, ecx
// 005d9ac2  33c9                 xor ecx, ecx
// 005d9ac4  c7006cbf7a00         mov dword ptr [eax], 0x7abf6c
// 005d9aca  894804               mov dword ptr [eax + 4], ecx
// 005d9acd  894808               mov dword ptr [eax + 8], ecx
// 005d9ad0  c3                   ret 
// library rbxgs/v8datamodel\UserController.cpp (function ??0ReferenceCountedObject@G3D@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
