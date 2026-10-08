// roc 2008-06 007b80a0  unit: RBX::Render::Material  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b80a0
//
// 007b80a0  6aff                 push -1
// 007b80a2  6848e47e00           push 0x7ee448
// 007b80a7  64a100000000         mov eax, dword ptr fs:[0]
// 007b80ad  50                   push eax
// 007b80ae  64892500000000       mov dword ptr fs:[0], esp
// 007b80b5  51                   push ecx
// 007b80b6  8bc1                 mov eax, ecx
// 007b80b8  33c9                 xor ecx, ecx
// 007b80ba  c700e0e18100         mov dword ptr [eax], 0x81e1e0
// 007b80c0  894804               mov dword ptr [eax + 4], ecx
// 007b80c3  894808               mov dword ptr [eax + 8], ecx
// 007b80c6  c700c45b8700         mov dword ptr [eax], 0x875bc4
// 007b80cc  894810               mov dword ptr [eax + 0x10], ecx
// 007b80cf  894814               mov dword ptr [eax + 0x14], ecx
// 007b80d2  89480c               mov dword ptr [eax + 0xc], ecx
// 007b80d5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007b80d9  64890d00000000       mov dword ptr fs:[0], ecx
// 007b80e0  83c410               add esp, 0x10
// 007b80e3  c3                   ret 
// library rbxgs-render/Material.cpp (function ??0Material@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
