// from server: 100% by auto
// roc 2009-06 0049a4e0  unit: G3D::ReferenceCountedObject  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049a4e0
//
// 0049a4e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049a4e4  83ec10               sub esp, 0x10
// 0049a4e7  56                   push esi
// 0049a4e8  8b742424             mov esi, dword ptr [esp + 0x24]
// 0049a4ec  57                   push edi
// 0049a4ed  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0049a4f1  81f9e10d0000         cmp ecx, 0xde1
// 0049a4f7  7418                 je 0x49a511
// 0049a4f9  81f914850000         cmp ecx, 0x8514
// 0049a4ff  0f8638010000         jbe 0x49a63d
// 0049a505  81f91a850000         cmp ecx, 0x851a
// 0049a50b  0f872c010000         ja 0x49a63d
// 0049a511  d9e8                 fld1 
// 0049a513  53                   push ebx
// 0049a514  d944243c             fld dword ptr [esp + 0x3c]
// 0049a518  32db                 xor bl, bl
// 0049a51a  dde1                 fucom st(1)
// 0049a51c  55                   push ebp
// 0049a51d  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0049a521  dfe0                 fnstsw ax
// 0049a523  ddd9                 fstp st(1)
// 0049a525  f6c444               test ah, 0x44
// 0049a528  0f8be6000000         jnp 0x49a614
// 0049a52e  db442430             fild dword ptr [esp + 0x30]
// 0049a532  8bde                 mov ebx, esi
// 0049a534  d97c2412             fnstcw word ptr [esp + 0x12]
// 0049a538  897c241c             mov dword ptr [esp + 0x1c], edi
// 0049a53c  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 0049a541  d8c9                 fmul st(1)
// 0049a543  0d000c0000           or eax, 0xc00
// 0049a548  89442414             mov dword ptr [esp + 0x14], eax
// 0049a54c  d96c2414             fldcw word ptr [esp + 0x14]
// 0049a550  df7c2414             fistp qword ptr [esp + 0x14]
// 0049a554  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049a558  48                   dec eax
// 0049a559  8bc8                 mov ecx, eax
// 0049a55b  d96c2412             fldcw word ptr [esp + 0x12]
// 0049a55f  c1e910               shr ecx, 0x10
// 0049a562  0bc1                 or eax, ecx
// 0049a564  8bd0                 mov edx, eax
// 0049a566  c1ea08               shr edx, 8
// 0049a569  0bc2                 or eax, edx
// 0049a56b  8bc8                 mov ecx, eax
// 0049a56d  c1e904               shr ecx, 4
// 0049a570  0bc1                 or eax, ecx
// 0049a572  da4c2434             fimul dword ptr [esp + 0x34]
// 0049a576  8bd0                 mov edx, eax
// 0049a578  c1ea02               shr edx, 2
// 0049a57b  0bc2                 or eax, edx
// 0049a57d  8bc8                 mov ecx, eax
// 0049a57f  d97c2412             fnstcw word ptr [esp + 0x12]
// 0049a583  d1e9                 shr ecx, 1
// 0049a585  0bc8                 or ecx, eax
// 0049a587  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 0049a58c  0d000c0000           or eax, 0xc00
// 0049a591  89442414             mov dword ptr [esp + 0x14], eax
// 0049a595  41                   inc ecx
// 0049a596  8bf1                 mov esi, ecx
// 0049a598  d96c2414             fldcw word ptr [esp + 0x14]
// 0049a59c  df7c2414             fistp qword ptr [esp + 0x14]
// 0049a5a0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049a5a4  48                   dec eax
// 0049a5a5  8bd0                 mov edx, eax
// 0049a5a7  c1ea10               shr edx, 0x10
// 0049a5aa  d96c2412             fldcw word ptr [esp + 0x12]
// 0049a5ae  0bc2                 or eax, edx
// 0049a5b0  8bc8                 mov ecx, eax
// 0049a5b2  c1e908               shr ecx, 8
// 0049a5b5  0bc1                 or eax, ecx
// 0049a5b7  8bd0                 mov edx, eax
// 0049a5b9  c1ea04               shr edx, 4
// 0049a5bc  0bc2                 or eax, edx
// 0049a5be  8bc8                 mov ecx, eax
// 0049a5c0  c1e902               shr ecx, 2
// 0049a5c3  0bc1                 or eax, ecx
// 0049a5c5  8bd0                 mov edx, eax
// 0049a5c7  d1ea                 shr edx, 1
// 0049a5c9  0bd0                 or edx, eax
// 0049a5cb  42                   inc edx
// 0049a5cc  8bfa                 mov edi, edx
// 0049a5ce  8bc6                 mov eax, esi
// 0049a5d0  0fafc7               imul eax, edi
// 0049a5d3  0faf44243c           imul eax, dword ptr [esp + 0x3c]
// 0049a5d8  50                   push eax
// 0049a5d9  e83ce72700           call 0x718d1a
// 0049a5de  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0049a5e2  8b542420             mov edx, dword ptr [esp + 0x20]
// 0049a5e6  83c404               add esp, 4
// 0049a5e9  8be8                 mov ebp, eax
// 0049a5eb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0049a5ef  55                   push ebp
// 0049a5f0  6801140000           push 0x1401
// 0049a5f5  57                   push edi
// 0049a5f6  56                   push esi
// 0049a5f7  51                   push ecx
// 0049a5f8  6801140000           push 0x1401
// 0049a5fd  52                   push edx
// 0049a5fe  53                   push ebx
// 0049a5ff  50                   push eax
// 0049a600  c644243601           mov byte ptr [esp + 0x36], 1
// 0049a605  e8c49b3900           call 0x8341ce
// 0049a60a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0049a60e  8a5c2412             mov bl, byte ptr [esp + 0x12]
// 0049a612  eb02                 jmp 0x49a616
// 0049a614  ddd8                 fstp st(0)
// 0049a616  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0049a61a  8b442438             mov eax, dword ptr [esp + 0x38]
// 0049a61e  55                   push ebp
// 0049a61f  6801140000           push 0x1401
// 0049a624  52                   push edx
// 0049a625  57                   push edi
// 0049a626  56                   push esi
// 0049a627  50                   push eax
// 0049a628  51                   push ecx
// 0049a629  e8a69b3900           call 0x8341d4
// 0049a62e  84db                 test bl, bl
// 0049a630  7409                 je 0x49a63b
// 0049a632  55                   push ebp
// 0049a633  e8a6e62700           call 0x718cde
// 0049a638  83c404               add esp, 4
// 0049a63b  5d                   pop ebp
// 0049a63c  5b                   pop ebx
// 0049a63d  5f                   pop edi
// 0049a63e  5e                   pop esi
// 0049a63f  83c410               add esp, 0x10
// 0049a642  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createMipMapTexture@G3D@@YAXIPBEHHHIIM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
