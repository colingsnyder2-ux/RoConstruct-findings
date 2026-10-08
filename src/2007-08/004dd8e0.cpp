// roc 2007-08 004dd8e0  unit: seg_004d0000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004dd8e0
//
// 004dd8e0  6aff                 push -1
// 004dd8e2  68e8c27400           push 0x74c2e8
// 004dd8e7  64a100000000         mov eax, dword ptr fs:[0]
// 004dd8ed  50                   push eax
// 004dd8ee  64892500000000       mov dword ptr fs:[0], esp
// 004dd8f5  51                   push ecx
// 004dd8f6  8bc1                 mov eax, ecx
// 004dd8f8  33c9                 xor ecx, ecx
// 004dd8fa  c70084797900         mov dword ptr [eax], 0x797984
// 004dd900  894804               mov dword ptr [eax + 4], ecx
// 004dd903  894808               mov dword ptr [eax + 8], ecx
// 004dd906  c70004f37900         mov dword ptr [eax], 0x79f304
// 004dd90c  894810               mov dword ptr [eax + 0x10], ecx
// 004dd90f  894814               mov dword ptr [eax + 0x14], ecx
// 004dd912  89480c               mov dword ptr [eax + 0xc], ecx
// 004dd915  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004dd919  894818               mov dword ptr [eax + 0x18], ecx
// 004dd91c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004dd920  64890d00000000       mov dword ptr fs:[0], ecx
// 004dd927  83c410               add esp, 0x10
// 004dd92a  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ??0Level@Mesh@Render@RBX@@QAE@W4Primitive@RenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
