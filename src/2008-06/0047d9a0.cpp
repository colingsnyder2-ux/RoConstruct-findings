// roc 2008-06 0047d9a0  unit: G3D::TextureManager::TextureArgs  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047d9a0
//
// 0047d9a0  55                   push ebp
// 0047d9a1  8bec                 mov ebp, esp
// 0047d9a3  83e4f8               and esp, 0xfffffff8
// 0047d9a6  6aff                 push -1
// 0047d9a8  68d84e7c00           push 0x7c4ed8
// 0047d9ad  64a100000000         mov eax, dword ptr fs:[0]
// 0047d9b3  50                   push eax
// 0047d9b4  64892500000000       mov dword ptr fs:[0], esp
// 0047d9bb  83ec44               sub esp, 0x44
// 0047d9be  53                   push ebx
// 0047d9bf  55                   push ebp
// 0047d9c0  56                   push esi
// 0047d9c1  8bf1                 mov esi, ecx
// 0047d9c3  57                   push edi
// 0047d9c4  89742410             mov dword ptr [esp + 0x10], esi
// 0047d9c8  33ff                 xor edi, edi
// 0047d9ca  8d4c241c             lea ecx, [esp + 0x1c]
// 0047d9ce  897c245c             mov dword ptr [esp + 0x5c], edi
// 0047d9d2  c744241870978100     mov dword ptr [esp + 0x18], 0x819770
// 0047d9da  ff1560248000         call dword ptr [0x802460]
// 0047d9e0  897c2438             mov dword ptr [esp + 0x38], edi
// 0047d9e4  8b6e04               mov ebp, dword ptr [esi + 4]
// 0047d9e7  4d                   dec ebp
// 0047d9e8  3bef                 cmp ebp, edi
// 0047d9ea  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 0047d9f2  0f8cf4000000         jl 0x47daec
// 0047d9f8  8d1ced00000000       lea ebx, [ebp*8]
// 0047d9ff  2bdd                 sub ebx, ebp
// 0047da01  03db                 add ebx, ebx
// 0047da03  03db                 add ebx, ebx
// 0047da05  03db                 add ebx, ebx
// 0047da07  eb0b                 jmp 0x47da14
// 0047da09  8da42400000000       lea esp, [esp]
// 0047da10  8b742410             mov esi, dword ptr [esp + 0x10]
// 0047da14  55                   push ebp
// 0047da15  6a00                 push 0
// 0047da17  e8647d0900           call 0x515780
// 0047da1c  8b36                 mov esi, dword ptr [esi]
// 0047da1e  8bf8                 mov edi, eax
// 0047da20  03f3                 add esi, ebx
// 0047da22  83c408               add esp, 8
// 0047da25  8d4604               lea eax, [esi + 4]
// 0047da28  50                   push eax
// 0047da29  8d4c2420             lea ecx, [esp + 0x20]
// 0047da2d  897c2418             mov dword ptr [esp + 0x18], edi
// 0047da31  ff150c248000         call dword ptr [0x80240c]
// 0047da37  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0047da3a  03ff                 add edi, edi
// 0047da3c  894c2438             mov dword ptr [esp + 0x38], ecx
// 0047da40  8b5624               mov edx, dword ptr [esi + 0x24]
// 0047da43  03ff                 add edi, edi
// 0047da45  8954243c             mov dword ptr [esp + 0x3c], edx
// 0047da49  8b4628               mov eax, dword ptr [esi + 0x28]
// 0047da4c  8b542410             mov edx, dword ptr [esp + 0x10]
// 0047da50  03ff                 add edi, edi
// 0047da52  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0047da56  89442440             mov dword ptr [esp + 0x40], eax
// 0047da5a  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0047da5d  03ff                 add edi, edi
// 0047da5f  894c2444             mov dword ptr [esp + 0x44], ecx
// 0047da63  dd4630               fld qword ptr [esi + 0x30]
// 0047da66  8b32                 mov esi, dword ptr [edx]
// 0047da68  dd5c2448             fstp qword ptr [esp + 0x48]
// 0047da6c  03ff                 add edi, edi
// 0047da6e  03ff                 add edi, edi
// 0047da70  8d443704             lea eax, [edi + esi + 4]
// 0047da74  50                   push eax
// 0047da75  8d4c3304             lea ecx, [ebx + esi + 4]
// 0047da79  ff150c248000         call dword ptr [0x80240c]
// 0047da7f  8b4c3720             mov ecx, dword ptr [edi + esi + 0x20]
// 0047da83  894c3320             mov dword ptr [ebx + esi + 0x20], ecx
// 0047da87  8b543724             mov edx, dword ptr [edi + esi + 0x24]
// 0047da8b  89543324             mov dword ptr [ebx + esi + 0x24], edx
// 0047da8f  8b443728             mov eax, dword ptr [edi + esi + 0x28]
// 0047da93  8b542410             mov edx, dword ptr [esp + 0x10]
// 0047da97  89443328             mov dword ptr [ebx + esi + 0x28], eax
// 0047da9b  8b4c372c             mov ecx, dword ptr [edi + esi + 0x2c]
// 0047da9f  894c332c             mov dword ptr [ebx + esi + 0x2c], ecx
// 0047daa3  dd443730             fld qword ptr [edi + esi + 0x30]
// 0047daa7  dd5c3330             fstp qword ptr [ebx + esi + 0x30]
// 0047daab  8b32                 mov esi, dword ptr [edx]
// 0047daad  8d44241c             lea eax, [esp + 0x1c]
// 0047dab1  03f7                 add esi, edi
// 0047dab3  50                   push eax
// 0047dab4  8d4e04               lea ecx, [esi + 4]
// 0047dab7  ff150c248000         call dword ptr [0x80240c]
// 0047dabd  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0047dac1  894e20               mov dword ptr [esi + 0x20], ecx
// 0047dac4  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0047dac8  895624               mov dword ptr [esi + 0x24], edx
// 0047dacb  8b442440             mov eax, dword ptr [esp + 0x40]
// 0047dacf  894628               mov dword ptr [esi + 0x28], eax
// 0047dad2  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0047dad6  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0047dad9  dd442448             fld qword ptr [esp + 0x48]
// 0047dadd  4d                   dec ebp
// 0047dade  dd5e30               fstp qword ptr [esi + 0x30]
// 0047dae1  83eb38               sub ebx, 0x38
// 0047dae4  85ed                 test ebp, ebp
// 0047dae6  0f8d24ffffff         jge 0x47da10
// 0047daec  c744241870978100     mov dword ptr [esp + 0x18], 0x819770
// 0047daf4  8d4c241c             lea ecx, [esp + 0x1c]
// 0047daf8  c744245c02000000     mov dword ptr [esp + 0x5c], 2
// 0047db00  ff1568248000         call dword ptr [0x802468]
// 0047db06  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0047db0a  5f                   pop edi
// 0047db0b  64890d00000000       mov dword ptr fs:[0], ecx
// 0047db12  5e                   pop esi
// 0047db13  5d                   pop ebp
// 0047db14  5b                   pop ebx
// 0047db15  8be5                 mov esp, ebp
// 0047db17  5d                   pop ebp
// 0047db18  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?randomize@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
