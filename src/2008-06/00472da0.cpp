// from server: 100% by auto
// roc 2008-06 00472da0  unit: G3D::ReferenceCountedObject  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00472da0
//
// 00472da0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00472da4  83ec10               sub esp, 0x10
// 00472da7  56                   push esi
// 00472da8  8b742424             mov esi, dword ptr [esp + 0x24]
// 00472dac  57                   push edi
// 00472dad  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00472db1  81f9e10d0000         cmp ecx, 0xde1
// 00472db7  7418                 je 0x472dd1
// 00472db9  81f914850000         cmp ecx, 0x8514
// 00472dbf  0f8638010000         jbe 0x472efd
// 00472dc5  81f91a850000         cmp ecx, 0x851a
// 00472dcb  0f872c010000         ja 0x472efd
// 00472dd1  d9e8                 fld1 
// 00472dd3  53                   push ebx
// 00472dd4  d944243c             fld dword ptr [esp + 0x3c]
// 00472dd8  32db                 xor bl, bl
// 00472dda  dde1                 fucom st(1)
// 00472ddc  55                   push ebp
// 00472ddd  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00472de1  dfe0                 fnstsw ax
// 00472de3  ddd9                 fstp st(1)
// 00472de5  f6c444               test ah, 0x44
// 00472de8  0f8be6000000         jnp 0x472ed4
// 00472dee  db442430             fild dword ptr [esp + 0x30]
// 00472df2  8bde                 mov ebx, esi
// 00472df4  d97c2412             fnstcw word ptr [esp + 0x12]
// 00472df8  897c241c             mov dword ptr [esp + 0x1c], edi
// 00472dfc  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 00472e01  d8c9                 fmul st(1)
// 00472e03  0d000c0000           or eax, 0xc00
// 00472e08  89442414             mov dword ptr [esp + 0x14], eax
// 00472e0c  d96c2414             fldcw word ptr [esp + 0x14]
// 00472e10  df7c2414             fistp qword ptr [esp + 0x14]
// 00472e14  8b442414             mov eax, dword ptr [esp + 0x14]
// 00472e18  48                   dec eax
// 00472e19  8bc8                 mov ecx, eax
// 00472e1b  d96c2412             fldcw word ptr [esp + 0x12]
// 00472e1f  c1e910               shr ecx, 0x10
// 00472e22  0bc1                 or eax, ecx
// 00472e24  8bd0                 mov edx, eax
// 00472e26  c1ea08               shr edx, 8
// 00472e29  0bc2                 or eax, edx
// 00472e2b  8bc8                 mov ecx, eax
// 00472e2d  c1e904               shr ecx, 4
// 00472e30  0bc1                 or eax, ecx
// 00472e32  da4c2434             fimul dword ptr [esp + 0x34]
// 00472e36  8bd0                 mov edx, eax
// 00472e38  c1ea02               shr edx, 2
// 00472e3b  0bc2                 or eax, edx
// 00472e3d  8bc8                 mov ecx, eax
// 00472e3f  d97c2412             fnstcw word ptr [esp + 0x12]
// 00472e43  d1e9                 shr ecx, 1
// 00472e45  0bc8                 or ecx, eax
// 00472e47  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 00472e4c  0d000c0000           or eax, 0xc00
// 00472e51  89442414             mov dword ptr [esp + 0x14], eax
// 00472e55  41                   inc ecx
// 00472e56  8bf1                 mov esi, ecx
// 00472e58  d96c2414             fldcw word ptr [esp + 0x14]
// 00472e5c  df7c2414             fistp qword ptr [esp + 0x14]
// 00472e60  8b442414             mov eax, dword ptr [esp + 0x14]
// 00472e64  48                   dec eax
// 00472e65  8bd0                 mov edx, eax
// 00472e67  c1ea10               shr edx, 0x10
// 00472e6a  d96c2412             fldcw word ptr [esp + 0x12]
// 00472e6e  0bc2                 or eax, edx
// 00472e70  8bc8                 mov ecx, eax
// 00472e72  c1e908               shr ecx, 8
// 00472e75  0bc1                 or eax, ecx
// 00472e77  8bd0                 mov edx, eax
// 00472e79  c1ea04               shr edx, 4
// 00472e7c  0bc2                 or eax, edx
// 00472e7e  8bc8                 mov ecx, eax
// 00472e80  c1e902               shr ecx, 2
// 00472e83  0bc1                 or eax, ecx
// 00472e85  8bd0                 mov edx, eax
// 00472e87  d1ea                 shr edx, 1
// 00472e89  0bd0                 or edx, eax
// 00472e8b  42                   inc edx
// 00472e8c  8bfa                 mov edi, edx
// 00472e8e  8bc6                 mov eax, esi
// 00472e90  0fafc7               imul eax, edi
// 00472e93  0faf44243c           imul eax, dword ptr [esp + 0x3c]
// 00472e98  50                   push eax
// 00472e99  e8b8da2200           call 0x6a0956
// 00472e9e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00472ea2  8b542420             mov edx, dword ptr [esp + 0x20]
// 00472ea6  83c404               add esp, 4
// 00472ea9  8be8                 mov ebp, eax
// 00472eab  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00472eaf  55                   push ebp
// 00472eb0  6801140000           push 0x1401
// 00472eb5  57                   push edi
// 00472eb6  56                   push esi
// 00472eb7  51                   push ecx
// 00472eb8  6801140000           push 0x1401
// 00472ebd  52                   push edx
// 00472ebe  53                   push ebx
// 00472ebf  50                   push eax
// 00472ec0  c644243601           mov byte ptr [esp + 0x36], 1
// 00472ec5  e8bc343300           call 0x7a6386
// 00472eca  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00472ece  8a5c2412             mov bl, byte ptr [esp + 0x12]
// 00472ed2  eb02                 jmp 0x472ed6
// 00472ed4  ddd8                 fstp st(0)
// 00472ed6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00472eda  8b442438             mov eax, dword ptr [esp + 0x38]
// 00472ede  55                   push ebp
// 00472edf  6801140000           push 0x1401
// 00472ee4  52                   push edx
// 00472ee5  57                   push edi
// 00472ee6  56                   push esi
// 00472ee7  50                   push eax
// 00472ee8  51                   push ecx
// 00472ee9  e89e343300           call 0x7a638c
// 00472eee  84db                 test bl, bl
// 00472ef0  7409                 je 0x472efb
// 00472ef2  55                   push ebp
// 00472ef3  e852da2200           call 0x6a094a
// 00472ef8  83c404               add esp, 4
// 00472efb  5d                   pop ebp
// 00472efc  5b                   pop ebx
// 00472efd  5f                   pop edi
// 00472efe  5e                   pop esi
// 00472eff  83c410               add esp, 0x10
// 00472f02  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createMipMapTexture@G3D@@YAXIPBEHHHIIM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
