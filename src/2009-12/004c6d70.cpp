// roc 2009-12 004c6d70  unit: G3D::ReferenceCountedObject  size: 359 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c6d70
//
// 004c6d70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004c6d74  83ec10               sub esp, 0x10
// 004c6d77  56                   push esi
// 004c6d78  8b742424             mov esi, dword ptr [esp + 0x24]
// 004c6d7c  57                   push edi
// 004c6d7d  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004c6d81  81f9e10d0000         cmp ecx, 0xde1
// 004c6d87  7418                 je 0x4c6da1
// 004c6d89  81f914850000         cmp ecx, 0x8514
// 004c6d8f  0f863c010000         jbe 0x4c6ed1
// 004c6d95  81f91a850000         cmp ecx, 0x851a
// 004c6d9b  0f8730010000         ja 0x4c6ed1
// 004c6da1  f30f10442438         movss xmm0, dword ptr [esp + 0x38]
// 004c6da7  53                   push ebx
// 004c6da8  32db                 xor bl, bl
// 004c6daa  0f2e0518ea9a00       ucomiss xmm0, dword ptr [0x9aea18]
// 004c6db1  9f                   lahf 
// 004c6db2  55                   push ebp
// 004c6db3  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 004c6db7  f6c444               test ah, 0x44
// 004c6dba  0f8bea000000         jnp 0x4c6eaa
// 004c6dc0  db442430             fild dword ptr [esp + 0x30]
// 004c6dc4  8bde                 mov ebx, esi
// 004c6dc6  d9442440             fld dword ptr [esp + 0x40]
// 004c6dca  897c241c             mov dword ptr [esp + 0x1c], edi
// 004c6dce  d97c2412             fnstcw word ptr [esp + 0x12]
// 004c6dd2  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 004c6dd7  dcc9                 fmul st(1), st(0)
// 004c6dd9  0d000c0000           or eax, 0xc00
// 004c6dde  d9c9                 fxch st(1)
// 004c6de0  89442414             mov dword ptr [esp + 0x14], eax
// 004c6de4  d96c2414             fldcw word ptr [esp + 0x14]
// 004c6de8  df7c2414             fistp qword ptr [esp + 0x14]
// 004c6dec  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c6df0  48                   dec eax
// 004c6df1  8bc8                 mov ecx, eax
// 004c6df3  d96c2412             fldcw word ptr [esp + 0x12]
// 004c6df7  c1e910               shr ecx, 0x10
// 004c6dfa  0bc1                 or eax, ecx
// 004c6dfc  8bd0                 mov edx, eax
// 004c6dfe  c1ea08               shr edx, 8
// 004c6e01  0bc2                 or eax, edx
// 004c6e03  8bc8                 mov ecx, eax
// 004c6e05  c1e904               shr ecx, 4
// 004c6e08  0bc1                 or eax, ecx
// 004c6e0a  da4c2434             fimul dword ptr [esp + 0x34]
// 004c6e0e  8bd0                 mov edx, eax
// 004c6e10  c1ea02               shr edx, 2
// 004c6e13  0bc2                 or eax, edx
// 004c6e15  8bc8                 mov ecx, eax
// 004c6e17  d97c2412             fnstcw word ptr [esp + 0x12]
// 004c6e1b  d1e9                 shr ecx, 1
// 004c6e1d  0bc8                 or ecx, eax
// 004c6e1f  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 004c6e24  0d000c0000           or eax, 0xc00
// 004c6e29  89442414             mov dword ptr [esp + 0x14], eax
// 004c6e2d  41                   inc ecx
// 004c6e2e  8bf1                 mov esi, ecx
// 004c6e30  d96c2414             fldcw word ptr [esp + 0x14]
// 004c6e34  df7c2414             fistp qword ptr [esp + 0x14]
// 004c6e38  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c6e3c  48                   dec eax
// 004c6e3d  8bd0                 mov edx, eax
// 004c6e3f  c1ea10               shr edx, 0x10
// 004c6e42  d96c2412             fldcw word ptr [esp + 0x12]
// 004c6e46  0bc2                 or eax, edx
// 004c6e48  8bc8                 mov ecx, eax
// 004c6e4a  c1e908               shr ecx, 8
// 004c6e4d  0bc1                 or eax, ecx
// 004c6e4f  8bd0                 mov edx, eax
// 004c6e51  c1ea04               shr edx, 4
// 004c6e54  0bc2                 or eax, edx
// 004c6e56  8bc8                 mov ecx, eax
// 004c6e58  c1e902               shr ecx, 2
// 004c6e5b  0bc1                 or eax, ecx
// 004c6e5d  8bd0                 mov edx, eax
// 004c6e5f  d1ea                 shr edx, 1
// 004c6e61  0bd0                 or edx, eax
// 004c6e63  42                   inc edx
// 004c6e64  8bfa                 mov edi, edx
// 004c6e66  8bc6                 mov eax, esi
// 004c6e68  0fafc7               imul eax, edi
// 004c6e6b  0faf44243c           imul eax, dword ptr [esp + 0x3c]
// 004c6e70  50                   push eax
// 004c6e71  e8cccc3200           call 0x7f3b42
// 004c6e76  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004c6e7a  8b542420             mov edx, dword ptr [esp + 0x20]
// 004c6e7e  83c404               add esp, 4
// 004c6e81  8be8                 mov ebp, eax
// 004c6e83  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004c6e87  55                   push ebp
// 004c6e88  6801140000           push 0x1401
// 004c6e8d  57                   push edi
// 004c6e8e  56                   push esi
// 004c6e8f  51                   push ecx
// 004c6e90  6801140000           push 0x1401
// 004c6e95  52                   push edx
// 004c6e96  53                   push ebx
// 004c6e97  50                   push eax
// 004c6e98  c644243601           mov byte ptr [esp + 0x36], 1
// 004c6e9d  e82c834400           call 0x90f1ce
// 004c6ea2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004c6ea6  8a5c2412             mov bl, byte ptr [esp + 0x12]
// 004c6eaa  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004c6eae  8b442438             mov eax, dword ptr [esp + 0x38]
// 004c6eb2  55                   push ebp
// 004c6eb3  6801140000           push 0x1401
// 004c6eb8  52                   push edx
// 004c6eb9  57                   push edi
// 004c6eba  56                   push esi
// 004c6ebb  50                   push eax
// 004c6ebc  51                   push ecx
// 004c6ebd  e812834400           call 0x90f1d4
// 004c6ec2  84db                 test bl, bl
// 004c6ec4  7409                 je 0x4c6ecf
// 004c6ec6  55                   push ebp
// 004c6ec7  e83acc3200           call 0x7f3b06
// 004c6ecc  83c404               add esp, 4
// 004c6ecf  5d                   pop ebp
// 004c6ed0  5b                   pop ebx
// 004c6ed1  5f                   pop edi
// 004c6ed2  5e                   pop esi
// 004c6ed3  83c410               add esp, 0x10
// 004c6ed6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createMipMapTexture@G3D@@YAXIPBEHHHIIM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
