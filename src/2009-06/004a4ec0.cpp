// roc 2009-06 004a4ec0  unit: G3D::TextureManager::TextureArgs  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a4ec0
//
// 004a4ec0  55                   push ebp
// 004a4ec1  8bec                 mov ebp, esp
// 004a4ec3  83e4f8               and esp, 0xfffffff8
// 004a4ec6  6aff                 push -1
// 004a4ec8  6808758500           push 0x857508
// 004a4ecd  64a100000000         mov eax, dword ptr fs:[0]
// 004a4ed3  50                   push eax
// 004a4ed4  64892500000000       mov dword ptr fs:[0], esp
// 004a4edb  83ec44               sub esp, 0x44
// 004a4ede  53                   push ebx
// 004a4edf  55                   push ebp
// 004a4ee0  56                   push esi
// 004a4ee1  8bf1                 mov esi, ecx
// 004a4ee3  57                   push edi
// 004a4ee4  89742410             mov dword ptr [esp + 0x10], esi
// 004a4ee8  33ff                 xor edi, edi
// 004a4eea  8d4c241c             lea ecx, [esp + 0x1c]
// 004a4eee  897c245c             mov dword ptr [esp + 0x5c], edi
// 004a4ef2  c744241828a18b00     mov dword ptr [esp + 0x18], 0x8ba128
// 004a4efa  ff15c0e48900         call dword ptr [0x89e4c0]
// 004a4f00  897c2438             mov dword ptr [esp + 0x38], edi
// 004a4f04  8b6e04               mov ebp, dword ptr [esi + 4]
// 004a4f07  4d                   dec ebp
// 004a4f08  3bef                 cmp ebp, edi
// 004a4f0a  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 004a4f12  0f8cf4000000         jl 0x4a500c
// 004a4f18  8d1ced00000000       lea ebx, [ebp*8]
// 004a4f1f  2bdd                 sub ebx, ebp
// 004a4f21  03db                 add ebx, ebx
// 004a4f23  03db                 add ebx, ebx
// 004a4f25  03db                 add ebx, ebx
// 004a4f27  eb0b                 jmp 0x4a4f34
// 004a4f29  8da42400000000       lea esp, [esp]
// 004a4f30  8b742410             mov esi, dword ptr [esp + 0x10]
// 004a4f34  55                   push ebp
// 004a4f35  6a00                 push 0
// 004a4f37  e824540d00           call 0x57a360
// 004a4f3c  8b36                 mov esi, dword ptr [esi]
// 004a4f3e  8bf8                 mov edi, eax
// 004a4f40  03f3                 add esi, ebx
// 004a4f42  83c408               add esp, 8
// 004a4f45  8d4604               lea eax, [esi + 4]
// 004a4f48  50                   push eax
// 004a4f49  8d4c2420             lea ecx, [esp + 0x20]
// 004a4f4d  897c2418             mov dword ptr [esp + 0x18], edi
// 004a4f51  ff1564e48900         call dword ptr [0x89e464]
// 004a4f57  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 004a4f5a  03ff                 add edi, edi
// 004a4f5c  894c2438             mov dword ptr [esp + 0x38], ecx
// 004a4f60  8b5624               mov edx, dword ptr [esi + 0x24]
// 004a4f63  03ff                 add edi, edi
// 004a4f65  8954243c             mov dword ptr [esp + 0x3c], edx
// 004a4f69  8b4628               mov eax, dword ptr [esi + 0x28]
// 004a4f6c  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a4f70  03ff                 add edi, edi
// 004a4f72  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 004a4f76  89442440             mov dword ptr [esp + 0x40], eax
// 004a4f7a  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 004a4f7d  03ff                 add edi, edi
// 004a4f7f  894c2444             mov dword ptr [esp + 0x44], ecx
// 004a4f83  dd4630               fld qword ptr [esi + 0x30]
// 004a4f86  8b32                 mov esi, dword ptr [edx]
// 004a4f88  dd5c2448             fstp qword ptr [esp + 0x48]
// 004a4f8c  03ff                 add edi, edi
// 004a4f8e  03ff                 add edi, edi
// 004a4f90  8d443704             lea eax, [edi + esi + 4]
// 004a4f94  50                   push eax
// 004a4f95  8d4c3304             lea ecx, [ebx + esi + 4]
// 004a4f99  ff1564e48900         call dword ptr [0x89e464]
// 004a4f9f  8b4c3720             mov ecx, dword ptr [edi + esi + 0x20]
// 004a4fa3  894c3320             mov dword ptr [ebx + esi + 0x20], ecx
// 004a4fa7  8b543724             mov edx, dword ptr [edi + esi + 0x24]
// 004a4fab  89543324             mov dword ptr [ebx + esi + 0x24], edx
// 004a4faf  8b443728             mov eax, dword ptr [edi + esi + 0x28]
// 004a4fb3  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a4fb7  89443328             mov dword ptr [ebx + esi + 0x28], eax
// 004a4fbb  8b4c372c             mov ecx, dword ptr [edi + esi + 0x2c]
// 004a4fbf  894c332c             mov dword ptr [ebx + esi + 0x2c], ecx
// 004a4fc3  dd443730             fld qword ptr [edi + esi + 0x30]
// 004a4fc7  dd5c3330             fstp qword ptr [ebx + esi + 0x30]
// 004a4fcb  8b32                 mov esi, dword ptr [edx]
// 004a4fcd  8d44241c             lea eax, [esp + 0x1c]
// 004a4fd1  03f7                 add esi, edi
// 004a4fd3  50                   push eax
// 004a4fd4  8d4e04               lea ecx, [esi + 4]
// 004a4fd7  ff1564e48900         call dword ptr [0x89e464]
// 004a4fdd  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004a4fe1  894e20               mov dword ptr [esi + 0x20], ecx
// 004a4fe4  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 004a4fe8  895624               mov dword ptr [esi + 0x24], edx
// 004a4feb  8b442440             mov eax, dword ptr [esp + 0x40]
// 004a4fef  894628               mov dword ptr [esi + 0x28], eax
// 004a4ff2  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004a4ff6  894e2c               mov dword ptr [esi + 0x2c], ecx
// 004a4ff9  dd442448             fld qword ptr [esp + 0x48]
// 004a4ffd  4d                   dec ebp
// 004a4ffe  dd5e30               fstp qword ptr [esi + 0x30]
// 004a5001  83eb38               sub ebx, 0x38
// 004a5004  85ed                 test ebp, ebp
// 004a5006  0f8d24ffffff         jge 0x4a4f30
// 004a500c  c744241828a18b00     mov dword ptr [esp + 0x18], 0x8ba128
// 004a5014  8d4c241c             lea ecx, [esp + 0x1c]
// 004a5018  c744245c02000000     mov dword ptr [esp + 0x5c], 2
// 004a5020  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a5026  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004a502a  5f                   pop edi
// 004a502b  64890d00000000       mov dword ptr fs:[0], ecx
// 004a5032  5e                   pop esi
// 004a5033  5d                   pop ebp
// 004a5034  5b                   pop ebx
// 004a5035  8be5                 mov esp, ebp
// 004a5037  5d                   pop ebp
// 004a5038  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?randomize@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
