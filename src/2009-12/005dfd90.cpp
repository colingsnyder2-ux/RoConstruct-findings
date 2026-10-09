// roc 2009-12 005dfd90  unit: RBX::RbxG3D::Material  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005dfd90
//
// 005dfd90  6aff                 push -1
// 005dfd92  6818e09300           push 0x93e018
// 005dfd97  64a100000000         mov eax, dword ptr fs:[0]
// 005dfd9d  50                   push eax
// 005dfd9e  64892500000000       mov dword ptr fs:[0], esp
// 005dfda5  51                   push ecx
// 005dfda6  56                   push esi
// 005dfda7  8bf1                 mov esi, ecx
// 005dfda9  89742404             mov dword ptr [esp + 4], esi
// 005dfdad  c70688169c00         mov dword ptr [esi], 0x9c1688
// 005dfdb3  8d4e0c               lea ecx, [esi + 0xc]
// 005dfdb6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005dfdbe  e84df8ffff           call 0x5df610
// 005dfdc3  f644241801           test byte ptr [esp + 0x18], 1
// 005dfdc8  c706a0559b00         mov dword ptr [esi], 0x9b55a0
// 005dfdce  7409                 je 0x5dfdd9
// 005dfdd0  56                   push esi
// 005dfdd1  e8843a2100           call 0x7f385a
// 005dfdd6  83c404               add esp, 4
// 005dfdd9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005dfddd  8bc6                 mov eax, esi
// 005dfddf  5e                   pop esi
// 005dfde0  64890d00000000       mov dword ptr fs:[0], ecx
// 005dfde7  83c410               add esp, 0x10
// 005dfdea  c20400               ret 4
// library rbxgs-render/Material.cpp (function ??_GMaterial@Render@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
