// roc 2009-12 005e02b0  unit: RBX::RbxG3D::Material  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e02b0
//
// 005e02b0  6aff                 push -1
// 005e02b2  6818e09300           push 0x93e018
// 005e02b7  64a100000000         mov eax, dword ptr fs:[0]
// 005e02bd  50                   push eax
// 005e02be  64892500000000       mov dword ptr fs:[0], esp
// 005e02c5  51                   push ecx
// 005e02c6  8bc1                 mov eax, ecx
// 005e02c8  33c9                 xor ecx, ecx
// 005e02ca  c700a0559b00         mov dword ptr [eax], 0x9b55a0
// 005e02d0  894804               mov dword ptr [eax + 4], ecx
// 005e02d3  894808               mov dword ptr [eax + 8], ecx
// 005e02d6  c70088169c00         mov dword ptr [eax], 0x9c1688
// 005e02dc  894810               mov dword ptr [eax + 0x10], ecx
// 005e02df  894814               mov dword ptr [eax + 0x14], ecx
// 005e02e2  89480c               mov dword ptr [eax + 0xc], ecx
// 005e02e5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e02e9  64890d00000000       mov dword ptr fs:[0], ecx
// 005e02f0  83c410               add esp, 0x10
// 005e02f3  c3                   ret 
// library rbxgs-render/Material.cpp (function ??0Material@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
