// roc 2009-12 005e1b20  unit: RBX::RbxG3D::RenderScene  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e1b20
//
// 005e1b20  6aff                 push -1
// 005e1b22  680ee19300           push 0x93e10e
// 005e1b27  64a100000000         mov eax, dword ptr fs:[0]
// 005e1b2d  50                   push eax
// 005e1b2e  64892500000000       mov dword ptr fs:[0], esp
// 005e1b35  51                   push ecx
// 005e1b36  56                   push esi
// 005e1b37  8bf1                 mov esi, ecx
// 005e1b39  57                   push edi
// 005e1b3a  33ff                 xor edi, edi
// 005e1b3c  c706a0559b00         mov dword ptr [esi], 0x9b55a0
// 005e1b42  897e04               mov dword ptr [esi + 4], edi
// 005e1b45  89742408             mov dword ptr [esp + 8], esi
// 005e1b49  897e08               mov dword ptr [esi + 8], edi
// 005e1b4c  897c2414             mov dword ptr [esp + 0x14], edi
// 005e1b50  c706cc169c00         mov dword ptr [esi], 0x9c16cc
// 005e1b56  e835540100           call 0x5f6f90
// 005e1b5b  d900                 fld dword ptr [eax]
// 005e1b5d  d95e0c               fstp dword ptr [esi + 0xc]
// 005e1b60  897e30               mov dword ptr [esi + 0x30], edi
// 005e1b63  d94004               fld dword ptr [eax + 4]
// 005e1b66  d95e10               fstp dword ptr [esi + 0x10]
// 005e1b69  d94008               fld dword ptr [eax + 8]
// 005e1b6c  d95e14               fstp dword ptr [esi + 0x14]
// 005e1b6f  897e44               mov dword ptr [esi + 0x44], edi
// 005e1b72  897e48               mov dword ptr [esi + 0x48], edi
// 005e1b75  897e40               mov dword ptr [esi + 0x40], edi
// 005e1b78  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e1b7c  897e50               mov dword ptr [esi + 0x50], edi
// 005e1b7f  897e54               mov dword ptr [esi + 0x54], edi
// 005e1b82  897e4c               mov dword ptr [esi + 0x4c], edi
// 005e1b85  5f                   pop edi
// 005e1b86  8bc6                 mov eax, esi
// 005e1b88  5e                   pop esi
// 005e1b89  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1b90  83c410               add esp, 0x10
// 005e1b93  c3                   ret 
// library rbxgs-render/RenderScene.cpp (function ??0Lighting@G3D@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
