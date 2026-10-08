// roc 2008-06 007ad960  unit: RBX::RenderNew::Material  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ad960
//
// 007ad960  6aff                 push -1
// 007ad962  6848e47e00           push 0x7ee448
// 007ad967  64a100000000         mov eax, dword ptr fs:[0]
// 007ad96d  50                   push eax
// 007ad96e  64892500000000       mov dword ptr fs:[0], esp
// 007ad975  51                   push ecx
// 007ad976  8bc1                 mov eax, ecx
// 007ad978  33c9                 xor ecx, ecx
// 007ad97a  c700e0e18100         mov dword ptr [eax], 0x81e1e0
// 007ad980  894804               mov dword ptr [eax + 4], ecx
// 007ad983  894808               mov dword ptr [eax + 8], ecx
// 007ad986  c700c04a8700         mov dword ptr [eax], 0x874ac0
// 007ad98c  894810               mov dword ptr [eax + 0x10], ecx
// 007ad98f  894814               mov dword ptr [eax + 0x14], ecx
// 007ad992  89480c               mov dword ptr [eax + 0xc], ecx
// 007ad995  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007ad999  64890d00000000       mov dword ptr fs:[0], ecx
// 007ad9a0  83c410               add esp, 0x10
// 007ad9a3  c3                   ret 
// library rbxgs-render/Material.cpp (function ??0Material@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
