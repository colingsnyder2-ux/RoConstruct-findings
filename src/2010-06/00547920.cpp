// roc 2010-06 00547920  unit: RBX::RbxG3D::Material  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00547920
//
// 00547920  6aff                 push -1
// 00547922  68085c9800           push 0x985c08
// 00547927  64a100000000         mov eax, dword ptr fs:[0]
// 0054792d  50                   push eax
// 0054792e  64892500000000       mov dword ptr fs:[0], esp
// 00547935  51                   push ecx
// 00547936  8bc1                 mov eax, ecx
// 00547938  33c9                 xor ecx, ecx
// 0054793a  c7005032a100         mov dword ptr [eax], 0xa13250
// 00547940  894804               mov dword ptr [eax + 4], ecx
// 00547943  894808               mov dword ptr [eax + 8], ecx
// 00547946  c700c4f3a100         mov dword ptr [eax], 0xa1f3c4
// 0054794c  894810               mov dword ptr [eax + 0x10], ecx
// 0054794f  894814               mov dword ptr [eax + 0x14], ecx
// 00547952  89480c               mov dword ptr [eax + 0xc], ecx
// 00547955  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00547959  64890d00000000       mov dword ptr fs:[0], ecx
// 00547960  83c410               add esp, 0x10
// 00547963  c3                   ret 
// library rbxgs-render/Material.cpp (function ??0Material@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
