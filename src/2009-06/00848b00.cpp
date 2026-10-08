// roc 2009-06 00848b00  unit: RBX::RbxG3D::Material  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00848b00
//
// 00848b00  6aff                 push -1
// 00848b02  68b8f08500           push 0x85f0b8
// 00848b07  64a100000000         mov eax, dword ptr fs:[0]
// 00848b0d  50                   push eax
// 00848b0e  64892500000000       mov dword ptr fs:[0], esp
// 00848b15  51                   push ecx
// 00848b16  8bc1                 mov eax, ecx
// 00848b18  33c9                 xor ecx, ecx
// 00848b1a  c700a8fc8b00         mov dword ptr [eax], 0x8bfca8
// 00848b20  894804               mov dword ptr [eax + 4], ecx
// 00848b23  894808               mov dword ptr [eax + 8], ecx
// 00848b26  c700504b9200         mov dword ptr [eax], 0x924b50
// 00848b2c  894810               mov dword ptr [eax + 0x10], ecx
// 00848b2f  894814               mov dword ptr [eax + 0x14], ecx
// 00848b32  89480c               mov dword ptr [eax + 0xc], ecx
// 00848b35  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00848b39  64890d00000000       mov dword ptr fs:[0], ecx
// 00848b40  83c410               add esp, 0x10
// 00848b43  c3                   ret 
// library rbxgs-render/Material.cpp (function ??0Material@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
