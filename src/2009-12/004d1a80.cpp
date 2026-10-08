// roc 2009-12 004d1a80  unit: G3D::TextureManager::TextureArgs  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d1a80
//
// 004d1a80  55                   push ebp
// 004d1a81  8bec                 mov ebp, esp
// 004d1a83  83e4f8               and esp, 0xfffffff8
// 004d1a86  6aff                 push -1
// 004d1a88  68e8339300           push 0x9333e8
// 004d1a8d  64a100000000         mov eax, dword ptr fs:[0]
// 004d1a93  50                   push eax
// 004d1a94  64892500000000       mov dword ptr fs:[0], esp
// 004d1a9b  83ec44               sub esp, 0x44
// 004d1a9e  53                   push ebx
// 004d1a9f  55                   push ebp
// 004d1aa0  56                   push esi
// 004d1aa1  8bf1                 mov esi, ecx
// 004d1aa3  57                   push edi
// 004d1aa4  89742410             mov dword ptr [esp + 0x10], esi
// 004d1aa8  33ff                 xor edi, edi
// 004d1aaa  8d4c241c             lea ecx, [esp + 0x1c]
// 004d1aae  897c245c             mov dword ptr [esp + 0x5c], edi
// 004d1ab2  c744241820e69a00     mov dword ptr [esp + 0x18], 0x9ae620
// 004d1aba  ff15e8b69800         call dword ptr [0x98b6e8]
// 004d1ac0  897c2438             mov dword ptr [esp + 0x38], edi
// 004d1ac4  8b6e04               mov ebp, dword ptr [esi + 4]
// 004d1ac7  4d                   dec ebp
// 004d1ac8  3bef                 cmp ebp, edi
// 004d1aca  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 004d1ad2  0f8cf4000000         jl 0x4d1bcc
// 004d1ad8  8d1ced00000000       lea ebx, [ebp*8]
// 004d1adf  2bdd                 sub ebx, ebp
// 004d1ae1  03db                 add ebx, ebx
// 004d1ae3  03db                 add ebx, ebx
// 004d1ae5  03db                 add ebx, ebx
// 004d1ae7  eb0b                 jmp 0x4d1af4
// 004d1ae9  8da42400000000       lea esp, [esp]
// 004d1af0  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d1af4  55                   push ebp
// 004d1af5  6a00                 push 0
// 004d1af7  e8f48d1200           call 0x5fa8f0
// 004d1afc  8b36                 mov esi, dword ptr [esi]
// 004d1afe  8bf8                 mov edi, eax
// 004d1b00  03f3                 add esi, ebx
// 004d1b02  83c408               add esp, 8
// 004d1b05  8d4604               lea eax, [esi + 4]
// 004d1b08  50                   push eax
// 004d1b09  8d4c2420             lea ecx, [esp + 0x20]
// 004d1b0d  897c2418             mov dword ptr [esp + 0x18], edi
// 004d1b11  ff159cb69800         call dword ptr [0x98b69c]
// 004d1b17  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 004d1b1a  03ff                 add edi, edi
// 004d1b1c  894c2438             mov dword ptr [esp + 0x38], ecx
// 004d1b20  8b5624               mov edx, dword ptr [esi + 0x24]
// 004d1b23  03ff                 add edi, edi
// 004d1b25  8954243c             mov dword ptr [esp + 0x3c], edx
// 004d1b29  8b4628               mov eax, dword ptr [esi + 0x28]
// 004d1b2c  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d1b30  03ff                 add edi, edi
// 004d1b32  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 004d1b36  89442440             mov dword ptr [esp + 0x40], eax
// 004d1b3a  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 004d1b3d  03ff                 add edi, edi
// 004d1b3f  894c2444             mov dword ptr [esp + 0x44], ecx
// 004d1b43  dd4630               fld qword ptr [esi + 0x30]
// 004d1b46  8b32                 mov esi, dword ptr [edx]
// 004d1b48  dd5c2448             fstp qword ptr [esp + 0x48]
// 004d1b4c  03ff                 add edi, edi
// 004d1b4e  03ff                 add edi, edi
// 004d1b50  8d443704             lea eax, [edi + esi + 4]
// 004d1b54  50                   push eax
// 004d1b55  8d4c3304             lea ecx, [ebx + esi + 4]
// 004d1b59  ff159cb69800         call dword ptr [0x98b69c]
// 004d1b5f  8b4c3720             mov ecx, dword ptr [edi + esi + 0x20]
// 004d1b63  894c3320             mov dword ptr [ebx + esi + 0x20], ecx
// 004d1b67  8b543724             mov edx, dword ptr [edi + esi + 0x24]
// 004d1b6b  89543324             mov dword ptr [ebx + esi + 0x24], edx
// 004d1b6f  8b443728             mov eax, dword ptr [edi + esi + 0x28]
// 004d1b73  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d1b77  89443328             mov dword ptr [ebx + esi + 0x28], eax
// 004d1b7b  8b4c372c             mov ecx, dword ptr [edi + esi + 0x2c]
// 004d1b7f  894c332c             mov dword ptr [ebx + esi + 0x2c], ecx
// 004d1b83  dd443730             fld qword ptr [edi + esi + 0x30]
// 004d1b87  dd5c3330             fstp qword ptr [ebx + esi + 0x30]
// 004d1b8b  8b32                 mov esi, dword ptr [edx]
// 004d1b8d  8d44241c             lea eax, [esp + 0x1c]
// 004d1b91  03f7                 add esi, edi
// 004d1b93  50                   push eax
// 004d1b94  8d4e04               lea ecx, [esi + 4]
// 004d1b97  ff159cb69800         call dword ptr [0x98b69c]
// 004d1b9d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004d1ba1  894e20               mov dword ptr [esi + 0x20], ecx
// 004d1ba4  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 004d1ba8  895624               mov dword ptr [esi + 0x24], edx
// 004d1bab  8b442440             mov eax, dword ptr [esp + 0x40]
// 004d1baf  894628               mov dword ptr [esi + 0x28], eax
// 004d1bb2  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004d1bb6  894e2c               mov dword ptr [esi + 0x2c], ecx
// 004d1bb9  dd442448             fld qword ptr [esp + 0x48]
// 004d1bbd  4d                   dec ebp
// 004d1bbe  dd5e30               fstp qword ptr [esi + 0x30]
// 004d1bc1  83eb38               sub ebx, 0x38
// 004d1bc4  85ed                 test ebp, ebp
// 004d1bc6  0f8d24ffffff         jge 0x4d1af0
// 004d1bcc  c744241820e69a00     mov dword ptr [esp + 0x18], 0x9ae620
// 004d1bd4  8d4c241c             lea ecx, [esp + 0x1c]
// 004d1bd8  c744245c02000000     mov dword ptr [esp + 0x5c], 2
// 004d1be0  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d1be6  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004d1bea  5f                   pop edi
// 004d1beb  64890d00000000       mov dword ptr fs:[0], ecx
// 004d1bf2  5e                   pop esi
// 004d1bf3  5d                   pop ebp
// 004d1bf4  5b                   pop ebx
// 004d1bf5  8be5                 mov esp, ebp
// 004d1bf7  5d                   pop ebp
// 004d1bf8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?randomize@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
