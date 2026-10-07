// roc 2009-06 004a69f0  unit: G3D::TextureManager::TextureArgs  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a69f0
//
// 004a69f0  6aff                 push -1
// 004a69f2  6867778500           push 0x857767
// 004a69f7  64a100000000         mov eax, dword ptr fs:[0]
// 004a69fd  50                   push eax
// 004a69fe  64892500000000       mov dword ptr fs:[0], esp
// 004a6a05  51                   push ecx
// 004a6a06  53                   push ebx
// 004a6a07  56                   push esi
// 004a6a08  8bf1                 mov esi, ecx
// 004a6a0a  89742408             mov dword ptr [esp + 8], esi
// 004a6a0e  8d4e54               lea ecx, [esi + 0x54]
// 004a6a11  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004a6a19  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a6a1f  8b4628               mov eax, dword ptr [esi + 0x28]
// 004a6a22  33db                 xor ebx, ebx
// 004a6a24  50                   push eax
// 004a6a25  885c2418             mov byte ptr [esp + 0x18], bl
// 004a6a29  e862480c00           call 0x56b290
// 004a6a2e  83c404               add esp, 4
// 004a6a31  8d4e0c               lea ecx, [esi + 0xc]
// 004a6a34  895e28               mov dword ptr [esi + 0x28], ebx
// 004a6a37  895e2c               mov dword ptr [esi + 0x2c], ebx
// 004a6a3a  895e30               mov dword ptr [esi + 0x30], ebx
// 004a6a3d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004a6a45  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a6a4b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a6a4f  5e                   pop esi
// 004a6a50  5b                   pop ebx
// 004a6a51  64890d00000000       mov dword ptr fs:[0], ecx
// 004a6a58  83c410               add esp, 0x10
// 004a6a5b  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ??1TextOutput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
