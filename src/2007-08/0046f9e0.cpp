// from server: 100% by auto
// roc 2007-08 0046f9e0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046f9e0
//
// 0046f9e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046f9e4  83ec10               sub esp, 0x10
// 0046f9e7  81f9e10d0000         cmp ecx, 0xde1
// 0046f9ed  56                   push esi
// 0046f9ee  8b742424             mov esi, dword ptr [esp + 0x24]
// 0046f9f2  57                   push edi
// 0046f9f3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0046f9f7  7418                 je 0x46fa11
// 0046f9f9  81f914850000         cmp ecx, 0x8514
// 0046f9ff  0f8640010000         jbe 0x46fb45
// 0046fa05  81f91a850000         cmp ecx, 0x851a
// 0046fa0b  0f8734010000         ja 0x46fb45
// 0046fa11  d9e8                 fld1 
// 0046fa13  53                   push ebx
// 0046fa14  d944243c             fld dword ptr [esp + 0x3c]
// 0046fa18  32db                 xor bl, bl
// 0046fa1a  dde1                 fucom st(1)
// 0046fa1c  55                   push ebp
// 0046fa1d  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0046fa21  dfe0                 fnstsw ax
// 0046fa23  ddd9                 fstp st(1)
// 0046fa25  f6c444               test ah, 0x44
// 0046fa28  0f8bee000000         jnp 0x46fb1c
// 0046fa2e  db442430             fild dword ptr [esp + 0x30]
// 0046fa32  8bde                 mov ebx, esi
// 0046fa34  d97c2412             fnstcw word ptr [esp + 0x12]
// 0046fa38  897c241c             mov dword ptr [esp + 0x1c], edi
// 0046fa3c  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 0046fa41  d8c9                 fmul st(1)
// 0046fa43  0d000c0000           or eax, 0xc00
// 0046fa48  89442414             mov dword ptr [esp + 0x14], eax
// 0046fa4c  d96c2414             fldcw word ptr [esp + 0x14]
// 0046fa50  df7c2414             fistp qword ptr [esp + 0x14]
// 0046fa54  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046fa58  83e801               sub eax, 1
// 0046fa5b  8bc8                 mov ecx, eax
// 0046fa5d  d96c2412             fldcw word ptr [esp + 0x12]
// 0046fa61  c1e910               shr ecx, 0x10
// 0046fa64  0bc1                 or eax, ecx
// 0046fa66  8bd0                 mov edx, eax
// 0046fa68  c1ea08               shr edx, 8
// 0046fa6b  0bc2                 or eax, edx
// 0046fa6d  8bc8                 mov ecx, eax
// 0046fa6f  c1e904               shr ecx, 4
// 0046fa72  0bc1                 or eax, ecx
// 0046fa74  da4c2434             fimul dword ptr [esp + 0x34]
// 0046fa78  8bd0                 mov edx, eax
// 0046fa7a  c1ea02               shr edx, 2
// 0046fa7d  0bc2                 or eax, edx
// 0046fa7f  8bc8                 mov ecx, eax
// 0046fa81  d97c2412             fnstcw word ptr [esp + 0x12]
// 0046fa85  d1e9                 shr ecx, 1
// 0046fa87  0bc8                 or ecx, eax
// 0046fa89  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 0046fa8e  0d000c0000           or eax, 0xc00
// 0046fa93  89442414             mov dword ptr [esp + 0x14], eax
// 0046fa97  83c101               add ecx, 1
// 0046fa9a  8bf1                 mov esi, ecx
// 0046fa9c  d96c2414             fldcw word ptr [esp + 0x14]
// 0046faa0  df7c2414             fistp qword ptr [esp + 0x14]
// 0046faa4  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046faa8  83e801               sub eax, 1
// 0046faab  8bd0                 mov edx, eax
// 0046faad  c1ea10               shr edx, 0x10
// 0046fab0  d96c2412             fldcw word ptr [esp + 0x12]
// 0046fab4  0bc2                 or eax, edx
// 0046fab6  8bc8                 mov ecx, eax
// 0046fab8  c1e908               shr ecx, 8
// 0046fabb  0bc1                 or eax, ecx
// 0046fabd  8bd0                 mov edx, eax
// 0046fabf  c1ea04               shr edx, 4
// 0046fac2  0bc2                 or eax, edx
// 0046fac4  8bc8                 mov ecx, eax
// 0046fac6  c1e902               shr ecx, 2
// 0046fac9  0bc1                 or eax, ecx
// 0046facb  8bd0                 mov edx, eax
// 0046facd  d1ea                 shr edx, 1
// 0046facf  0bd0                 or edx, eax
// 0046fad1  83c201               add edx, 1
// 0046fad4  8bfa                 mov edi, edx
// 0046fad6  8bc6                 mov eax, esi
// 0046fad8  0fafc7               imul eax, edi
// 0046fadb  0faf44243c           imul eax, dword ptr [esp + 0x3c]
// 0046fae0  50                   push eax
// 0046fae1  e84c041c00           call 0x62ff32
// 0046fae6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0046faea  8b542420             mov edx, dword ptr [esp + 0x20]
// 0046faee  83c404               add esp, 4
// 0046faf1  8be8                 mov ebp, eax
// 0046faf3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0046faf7  55                   push ebp
// 0046faf8  6801140000           push 0x1401
// 0046fafd  57                   push edi
// 0046fafe  56                   push esi
// 0046faff  51                   push ecx
// 0046fb00  6801140000           push 0x1401
// 0046fb05  52                   push edx
// 0046fb06  53                   push ebx
// 0046fb07  50                   push eax
// 0046fb08  c644243601           mov byte ptr [esp + 0x36], 1
// 0046fb0d  e864bb2b00           call 0x72b676
// 0046fb12  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046fb16  8a5c2412             mov bl, byte ptr [esp + 0x12]
// 0046fb1a  eb02                 jmp 0x46fb1e
// 0046fb1c  ddd8                 fstp st(0)
// 0046fb1e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046fb22  8b442438             mov eax, dword ptr [esp + 0x38]
// 0046fb26  55                   push ebp
// 0046fb27  6801140000           push 0x1401
// 0046fb2c  52                   push edx
// 0046fb2d  57                   push edi
// 0046fb2e  56                   push esi
// 0046fb2f  50                   push eax
// 0046fb30  51                   push ecx
// 0046fb31  e846bb2b00           call 0x72b67c
// 0046fb36  84db                 test bl, bl
// 0046fb38  7409                 je 0x46fb43
// 0046fb3a  55                   push ebp
// 0046fb3b  e8e6031c00           call 0x62ff26
// 0046fb40  83c404               add esp, 4
// 0046fb43  5d                   pop ebp
// 0046fb44  5b                   pop ebx
// 0046fb45  5f                   pop edi
// 0046fb46  5e                   pop esi
// 0046fb47  83c410               add esp, 0x10
// 0046fb4a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createMipMapTexture@G3D@@YAXIPBEHHHIIM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
