// roc 2007-08 0047a310  unit: G3D::TextureManager::TextureArgs  size: 402 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047a310
//
// 0047a310  55                   push ebp
// 0047a311  8bec                 mov ebp, esp
// 0047a313  83e4f8               and esp, 0xfffffff8
// 0047a316  6aff                 push -1
// 0047a318  6800557400           push 0x745500
// 0047a31d  64a100000000         mov eax, dword ptr fs:[0]
// 0047a323  50                   push eax
// 0047a324  83ec50               sub esp, 0x50
// 0047a327  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047a32c  33c4                 xor eax, esp
// 0047a32e  89442448             mov dword ptr [esp + 0x48], eax
// 0047a332  53                   push ebx
// 0047a333  56                   push esi
// 0047a334  57                   push edi
// 0047a335  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047a33a  33c4                 xor eax, esp
// 0047a33c  50                   push eax
// 0047a33d  8d442460             lea eax, [esp + 0x60]
// 0047a341  64a300000000         mov dword ptr fs:[0], eax
// 0047a347  8bf1                 mov esi, ecx
// 0047a349  8d4c241c             lea ecx, [esp + 0x1c]
// 0047a34d  89742414             mov dword ptr [esp + 0x14], esi
// 0047a351  e80afcffff           call 0x479f60
// 0047a356  8b4604               mov eax, dword ptr [esi + 4]
// 0047a359  83c0ff               add eax, -1
// 0047a35c  c744246800000000     mov dword ptr [esp + 0x68], 0
// 0047a364  89442410             mov dword ptr [esp + 0x10], eax
// 0047a368  0f88fc000000         js 0x47a46a
// 0047a36e  8d1cc500000000       lea ebx, [eax*8]
// 0047a375  2bd8                 sub ebx, eax
// 0047a377  03db                 add ebx, ebx
// 0047a379  03db                 add ebx, ebx
// 0047a37b  03db                 add ebx, ebx
// 0047a37d  eb09                 jmp 0x47a388
// 0047a37f  90                   nop 
// 0047a380  8b742414             mov esi, dword ptr [esp + 0x14]
// 0047a384  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047a388  50                   push eax
// 0047a389  6a00                 push 0
// 0047a38b  e8e0180900           call 0x50bc70
// 0047a390  8b36                 mov esi, dword ptr [esi]
// 0047a392  8bf8                 mov edi, eax
// 0047a394  03f3                 add esi, ebx
// 0047a396  83c408               add esp, 8
// 0047a399  8d4604               lea eax, [esi + 4]
// 0047a39c  50                   push eax
// 0047a39d  8d4c2424             lea ecx, [esp + 0x24]
// 0047a3a1  897c241c             mov dword ptr [esp + 0x1c], edi
// 0047a3a5  ff1590e67700         call dword ptr [0x77e690]
// 0047a3ab  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0047a3ae  03ff                 add edi, edi
// 0047a3b0  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0047a3b4  8b5624               mov edx, dword ptr [esi + 0x24]
// 0047a3b7  03ff                 add edi, edi
// 0047a3b9  89542440             mov dword ptr [esp + 0x40], edx
// 0047a3bd  8b4628               mov eax, dword ptr [esi + 0x28]
// 0047a3c0  8b542414             mov edx, dword ptr [esp + 0x14]
// 0047a3c4  03ff                 add edi, edi
// 0047a3c6  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 0047a3ca  89442444             mov dword ptr [esp + 0x44], eax
// 0047a3ce  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0047a3d1  03ff                 add edi, edi
// 0047a3d3  894c2448             mov dword ptr [esp + 0x48], ecx
// 0047a3d7  dd4630               fld qword ptr [esi + 0x30]
// 0047a3da  8b32                 mov esi, dword ptr [edx]
// 0047a3dc  dd5c244c             fstp qword ptr [esp + 0x4c]
// 0047a3e0  03ff                 add edi, edi
// 0047a3e2  03ff                 add edi, edi
// 0047a3e4  8d443704             lea eax, [edi + esi + 4]
// 0047a3e8  50                   push eax
// 0047a3e9  8d4c3304             lea ecx, [ebx + esi + 4]
// 0047a3ed  ff1590e67700         call dword ptr [0x77e690]
// 0047a3f3  8b4c3720             mov ecx, dword ptr [edi + esi + 0x20]
// 0047a3f7  894c3320             mov dword ptr [ebx + esi + 0x20], ecx
// 0047a3fb  8b543724             mov edx, dword ptr [edi + esi + 0x24]
// 0047a3ff  89543324             mov dword ptr [ebx + esi + 0x24], edx
// 0047a403  8b443728             mov eax, dword ptr [edi + esi + 0x28]
// 0047a407  8b542414             mov edx, dword ptr [esp + 0x14]
// 0047a40b  89443328             mov dword ptr [ebx + esi + 0x28], eax
// 0047a40f  8b4c372c             mov ecx, dword ptr [edi + esi + 0x2c]
// 0047a413  894c332c             mov dword ptr [ebx + esi + 0x2c], ecx
// 0047a417  dd443730             fld qword ptr [edi + esi + 0x30]
// 0047a41b  dd5c3330             fstp qword ptr [ebx + esi + 0x30]
// 0047a41f  8b32                 mov esi, dword ptr [edx]
// 0047a421  8d442420             lea eax, [esp + 0x20]
// 0047a425  03f7                 add esi, edi
// 0047a427  50                   push eax
// 0047a428  8d4e04               lea ecx, [esi + 4]
// 0047a42b  ff1590e67700         call dword ptr [0x77e690]
// 0047a431  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0047a435  894e20               mov dword ptr [esi + 0x20], ecx
// 0047a438  8b542440             mov edx, dword ptr [esp + 0x40]
// 0047a43c  895624               mov dword ptr [esi + 0x24], edx
// 0047a43f  8b442444             mov eax, dword ptr [esp + 0x44]
// 0047a443  894628               mov dword ptr [esi + 0x28], eax
// 0047a446  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0047a44a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047a44e  83e801               sub eax, 1
// 0047a451  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0047a454  dd44244c             fld qword ptr [esp + 0x4c]
// 0047a458  83eb38               sub ebx, 0x38
// 0047a45b  dd5e30               fstp qword ptr [esi + 0x30]
// 0047a45e  85c0                 test eax, eax
// 0047a460  89442410             mov dword ptr [esp + 0x10], eax
// 0047a464  0f8d16ffffff         jge 0x47a380
// 0047a46a  c744241ca4317900     mov dword ptr [esp + 0x1c], 0x7931a4
// 0047a472  8d4c2420             lea ecx, [esp + 0x20]
// 0047a476  c744246801000000     mov dword ptr [esp + 0x68], 1
// 0047a47e  ff15ace67700         call dword ptr [0x77e6ac]
// 0047a484  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0047a488  64890d00000000       mov dword ptr fs:[0], ecx
// 0047a48f  59                   pop ecx
// 0047a490  5f                   pop edi
// 0047a491  5e                   pop esi
// 0047a492  5b                   pop ebx
// 0047a493  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0047a497  33cc                 xor ecx, esp
// 0047a499  e880651b00           call 0x630a1e
// 0047a49e  8be5                 mov esp, ebp
// 0047a4a0  5d                   pop ebp
// 0047a4a1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?randomize@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
