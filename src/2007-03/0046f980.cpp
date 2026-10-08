// roc 2007-03 0046f980  unit: seg_00460000  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046f980
//
// 0046f980  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046f984  83ec10               sub esp, 0x10
// 0046f987  81f9e10d0000         cmp ecx, 0xde1
// 0046f98d  56                   push esi
// 0046f98e  8b742424             mov esi, dword ptr [esp + 0x24]
// 0046f992  57                   push edi
// 0046f993  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0046f997  7418                 je 0x46f9b1
// 0046f999  81f914850000         cmp ecx, 0x8514
// 0046f99f  0f8640010000         jbe 0x46fae5
// 0046f9a5  81f91a850000         cmp ecx, 0x851a
// 0046f9ab  0f8734010000         ja 0x46fae5
// 0046f9b1  d9e8                 fld1 
// 0046f9b3  53                   push ebx
// 0046f9b4  d944243c             fld dword ptr [esp + 0x3c]
// 0046f9b8  32db                 xor bl, bl
// 0046f9ba  dde1                 fucom st(1)
// 0046f9bc  55                   push ebp
// 0046f9bd  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0046f9c1  dfe0                 fnstsw ax
// 0046f9c3  ddd9                 fstp st(1)
// 0046f9c5  f6c444               test ah, 0x44
// 0046f9c8  0f8bee000000         jnp 0x46fabc
// 0046f9ce  db442430             fild dword ptr [esp + 0x30]
// 0046f9d2  8bde                 mov ebx, esi
// 0046f9d4  d97c2412             fnstcw word ptr [esp + 0x12]
// 0046f9d8  897c241c             mov dword ptr [esp + 0x1c], edi
// 0046f9dc  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 0046f9e1  d8c9                 fmul st(1)
// 0046f9e3  0d000c0000           or eax, 0xc00
// 0046f9e8  89442414             mov dword ptr [esp + 0x14], eax
// 0046f9ec  d96c2414             fldcw word ptr [esp + 0x14]
// 0046f9f0  df7c2414             fistp qword ptr [esp + 0x14]
// 0046f9f4  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046f9f8  83e801               sub eax, 1
// 0046f9fb  8bc8                 mov ecx, eax
// 0046f9fd  d96c2412             fldcw word ptr [esp + 0x12]
// 0046fa01  c1e910               shr ecx, 0x10
// 0046fa04  0bc1                 or eax, ecx
// 0046fa06  8bd0                 mov edx, eax
// 0046fa08  c1ea08               shr edx, 8
// 0046fa0b  0bc2                 or eax, edx
// 0046fa0d  8bc8                 mov ecx, eax
// 0046fa0f  c1e904               shr ecx, 4
// 0046fa12  0bc1                 or eax, ecx
// 0046fa14  da4c2434             fimul dword ptr [esp + 0x34]
// 0046fa18  8bd0                 mov edx, eax
// 0046fa1a  c1ea02               shr edx, 2
// 0046fa1d  0bc2                 or eax, edx
// 0046fa1f  8bc8                 mov ecx, eax
// 0046fa21  d97c2412             fnstcw word ptr [esp + 0x12]
// 0046fa25  d1e9                 shr ecx, 1
// 0046fa27  0bc8                 or ecx, eax
// 0046fa29  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 0046fa2e  0d000c0000           or eax, 0xc00
// 0046fa33  89442414             mov dword ptr [esp + 0x14], eax
// 0046fa37  83c101               add ecx, 1
// 0046fa3a  8bf1                 mov esi, ecx
// 0046fa3c  d96c2414             fldcw word ptr [esp + 0x14]
// 0046fa40  df7c2414             fistp qword ptr [esp + 0x14]
// 0046fa44  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046fa48  83e801               sub eax, 1
// 0046fa4b  8bd0                 mov edx, eax
// 0046fa4d  c1ea10               shr edx, 0x10
// 0046fa50  d96c2412             fldcw word ptr [esp + 0x12]
// 0046fa54  0bc2                 or eax, edx
// 0046fa56  8bc8                 mov ecx, eax
// 0046fa58  c1e908               shr ecx, 8
// 0046fa5b  0bc1                 or eax, ecx
// 0046fa5d  8bd0                 mov edx, eax
// 0046fa5f  c1ea04               shr edx, 4
// 0046fa62  0bc2                 or eax, edx
// 0046fa64  8bc8                 mov ecx, eax
// 0046fa66  c1e902               shr ecx, 2
// 0046fa69  0bc1                 or eax, ecx
// 0046fa6b  8bd0                 mov edx, eax
// 0046fa6d  d1ea                 shr edx, 1
// 0046fa6f  0bd0                 or edx, eax
// 0046fa71  83c201               add edx, 1
// 0046fa74  8bfa                 mov edi, edx
// 0046fa76  8bc6                 mov eax, esi
// 0046fa78  0fafc7               imul eax, edi
// 0046fa7b  0faf44243c           imul eax, dword ptr [esp + 0x3c]
// 0046fa80  50                   push eax
// 0046fa81  e83ae91a00           call 0x61e3c0
// 0046fa86  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0046fa8a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0046fa8e  83c404               add esp, 4
// 0046fa91  8be8                 mov ebp, eax
// 0046fa93  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0046fa97  55                   push ebp
// 0046fa98  6801140000           push 0x1401
// 0046fa9d  57                   push edi
// 0046fa9e  56                   push esi
// 0046fa9f  51                   push ecx
// 0046faa0  6801140000           push 0x1401
// 0046faa5  52                   push edx
// 0046faa6  53                   push ebx
// 0046faa7  50                   push eax
// 0046faa8  c644243601           mov byte ptr [esp + 0x36], 1
// 0046faad  e854c22b00           call 0x72bd06
// 0046fab2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046fab6  8a5c2412             mov bl, byte ptr [esp + 0x12]
// 0046faba  eb02                 jmp 0x46fabe
// 0046fabc  ddd8                 fstp st(0)
// 0046fabe  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046fac2  8b442438             mov eax, dword ptr [esp + 0x38]
// 0046fac6  55                   push ebp
// 0046fac7  6801140000           push 0x1401
// 0046facc  52                   push edx
// 0046facd  57                   push edi
// 0046face  56                   push esi
// 0046facf  50                   push eax
// 0046fad0  51                   push ecx
// 0046fad1  e836c22b00           call 0x72bd0c
// 0046fad6  84db                 test bl, bl
// 0046fad8  7409                 je 0x46fae3
// 0046fada  55                   push ebp
// 0046fadb  e8d4e81a00           call 0x61e3b4
// 0046fae0  83c404               add esp, 4
// 0046fae3  5d                   pop ebp
// 0046fae4  5b                   pop ebx
// 0046fae5  5f                   pop edi
// 0046fae6  5e                   pop esi
// 0046fae7  83c410               add esp, 0x10
// 0046faea  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Texture.cpp (function ?createMipMapTexture@G3D@@YAXIPBEHHHIIM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Texture.cpp
