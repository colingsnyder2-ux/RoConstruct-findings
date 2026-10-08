// roc 2008-06 005038a0  unit: RBX::Render::RenderScene  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005038a0
//
// 005038a0  6aff                 push -1
// 005038a2  68feb47c00           push 0x7cb4fe
// 005038a7  64a100000000         mov eax, dword ptr fs:[0]
// 005038ad  50                   push eax
// 005038ae  64892500000000       mov dword ptr fs:[0], esp
// 005038b5  51                   push ecx
// 005038b6  53                   push ebx
// 005038b7  56                   push esi
// 005038b8  8bf1                 mov esi, ecx
// 005038ba  89742408             mov dword ptr [esp + 8], esi
// 005038be  8b464c               mov eax, dword ptr [esi + 0x4c]
// 005038c1  50                   push eax
// 005038c2  c744241802000000     mov dword ptr [esp + 0x18], 2
// 005038ca  e851440000           call 0x507d20
// 005038cf  33db                 xor ebx, ebx
// 005038d1  895e4c               mov dword ptr [esi + 0x4c], ebx
// 005038d4  895e50               mov dword ptr [esi + 0x50], ebx
// 005038d7  895e54               mov dword ptr [esi + 0x54], ebx
// 005038da  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005038dd  51                   push ecx
// 005038de  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005038e3  e838440000           call 0x507d20
// 005038e8  895e40               mov dword ptr [esi + 0x40], ebx
// 005038eb  895e44               mov dword ptr [esi + 0x44], ebx
// 005038ee  895e48               mov dword ptr [esi + 0x48], ebx
// 005038f1  8b4630               mov eax, dword ptr [esi + 0x30]
// 005038f4  83c408               add esp, 8
// 005038f7  885c2414             mov byte ptr [esp + 0x14], bl
// 005038fb  3bc3                 cmp eax, ebx
// 005038fd  7428                 je 0x503927
// 005038ff  83c004               add eax, 4
// 00503902  50                   push eax
// 00503903  ff15ac218000         call dword ptr [0x8021ac]
// 00503909  85c0                 test eax, eax
// 0050390b  7517                 jne 0x503924
// 0050390d  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00503910  e87b74f5ff           call 0x45ad90
// 00503915  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00503918  3bcb                 cmp ecx, ebx
// 0050391a  7408                 je 0x503924
// 0050391c  8b11                 mov edx, dword ptr [ecx]
// 0050391e  8b02                 mov eax, dword ptr [edx]
// 00503920  6a01                 push 1
// 00503922  ffd0                 call eax
// 00503924  895e30               mov dword ptr [esi + 0x30], ebx
// 00503927  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050392b  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 00503931  5e                   pop esi
// 00503932  5b                   pop ebx
// 00503933  64890d00000000       mov dword ptr fs:[0], ecx
// 0050393a  83c410               add esp, 0x10
// 0050393d  c3                   ret 
// library rbxgs-render/RenderScene.cpp (function ??1Lighting@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
