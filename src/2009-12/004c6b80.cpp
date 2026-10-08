// roc 2009-12 004c6b80  unit: G3D::ReferenceCountedObject  size: 482 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c6b80
//
// 004c6b80  83ec10               sub esp, 0x10
// 004c6b83  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c6b87  53                   push ebx
// 004c6b88  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004c6b8c  55                   push ebp
// 004c6b8d  56                   push esi
// 004c6b8e  8b742430             mov esi, dword ptr [esp + 0x30]
// 004c6b92  57                   push edi
// 004c6b93  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 004c6b97  8beb                 mov ebp, ebx
// 004c6b99  c644242800           mov byte ptr [esp + 0x28], 0
// 004c6b9e  81f9f5840000         cmp ecx, 0x84f5
// 004c6ba4  7716                 ja 0x4c6bbc
// 004c6ba6  0f843c010000         je 0x4c6ce8
// 004c6bac  81f9e10d0000         cmp ecx, 0xde1
// 004c6bb2  7420                 je 0x4c6bd4
// 004c6bb4  5f                   pop edi
// 004c6bb5  5e                   pop esi
// 004c6bb6  5d                   pop ebp
// 004c6bb7  5b                   pop ebx
// 004c6bb8  83c410               add esp, 0x10
// 004c6bbb  c3                   ret 
// 004c6bbc  81f915850000         cmp ecx, 0x8515
// 004c6bc2  0f8292010000         jb 0x4c6d5a
// 004c6bc8  81f91a850000         cmp ecx, 0x851a
// 004c6bce  0f8786010000         ja 0x4c6d5a
// 004c6bd4  8bc6                 mov eax, esi
// 004c6bd6  f7d8                 neg eax
// 004c6bd8  23c6                 and eax, esi
// 004c6bda  3bc6                 cmp eax, esi
// 004c6bdc  750e                 jne 0x4c6bec
// 004c6bde  8bd7                 mov edx, edi
// 004c6be0  f7da                 neg edx
// 004c6be2  23d7                 and edx, edi
// 004c6be4  3bd7                 cmp edx, edi
// 004c6be6  0f84fc000000         je 0x4c6ce8
// 004c6bec  807c244c00           cmp byte ptr [esp + 0x4c], 0
// 004c6bf1  740d                 je 0x4c6c00
// 004c6bf3  803db8d0b70000       cmp byte ptr [0xb7d0b8], 0
// 004c6bfa  0f85e8000000         jne 0x4c6ce8
// 004c6c00  db442434             fild dword ptr [esp + 0x34]
// 004c6c04  8974241c             mov dword ptr [esp + 0x1c], esi
// 004c6c08  d9442450             fld dword ptr [esp + 0x50]
// 004c6c0c  897c2418             mov dword ptr [esp + 0x18], edi
// 004c6c10  d97c2428             fnstcw word ptr [esp + 0x28]
// 004c6c14  0fb7442428           movzx eax, word ptr [esp + 0x28]
// 004c6c19  dcc9                 fmul st(1), st(0)
// 004c6c1b  0d000c0000           or eax, 0xc00
// 004c6c20  d9c9                 fxch st(1)
// 004c6c22  89442410             mov dword ptr [esp + 0x10], eax
// 004c6c26  d96c2410             fldcw word ptr [esp + 0x10]
// 004c6c2a  df7c2410             fistp qword ptr [esp + 0x10]
// 004c6c2e  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c6c32  48                   dec eax
// 004c6c33  8bc8                 mov ecx, eax
// 004c6c35  d96c2428             fldcw word ptr [esp + 0x28]
// 004c6c39  c1e910               shr ecx, 0x10
// 004c6c3c  0bc1                 or eax, ecx
// 004c6c3e  8bd0                 mov edx, eax
// 004c6c40  c1ea08               shr edx, 8
// 004c6c43  0bc2                 or eax, edx
// 004c6c45  8bc8                 mov ecx, eax
// 004c6c47  c1e904               shr ecx, 4
// 004c6c4a  0bc1                 or eax, ecx
// 004c6c4c  da4c2438             fimul dword ptr [esp + 0x38]
// 004c6c50  8bd0                 mov edx, eax
// 004c6c52  c1ea02               shr edx, 2
// 004c6c55  0bc2                 or eax, edx
// 004c6c57  8bc8                 mov ecx, eax
// 004c6c59  d97c2428             fnstcw word ptr [esp + 0x28]
// 004c6c5d  d1e9                 shr ecx, 1
// 004c6c5f  0bc8                 or ecx, eax
// 004c6c61  0fb7442428           movzx eax, word ptr [esp + 0x28]
// 004c6c66  0d000c0000           or eax, 0xc00
// 004c6c6b  89442410             mov dword ptr [esp + 0x10], eax
// 004c6c6f  41                   inc ecx
// 004c6c70  8bf1                 mov esi, ecx
// 004c6c72  d96c2410             fldcw word ptr [esp + 0x10]
// 004c6c76  df7c2410             fistp qword ptr [esp + 0x10]
// 004c6c7a  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c6c7e  48                   dec eax
// 004c6c7f  8bd0                 mov edx, eax
// 004c6c81  c1ea10               shr edx, 0x10
// 004c6c84  d96c2428             fldcw word ptr [esp + 0x28]
// 004c6c88  0bc2                 or eax, edx
// 004c6c8a  8bc8                 mov ecx, eax
// 004c6c8c  c1e908               shr ecx, 8
// 004c6c8f  0bc1                 or eax, ecx
// 004c6c91  8bd0                 mov edx, eax
// 004c6c93  c1ea04               shr edx, 4
// 004c6c96  0bc2                 or eax, edx
// 004c6c98  8bc8                 mov ecx, eax
// 004c6c9a  c1e902               shr ecx, 2
// 004c6c9d  0bc1                 or eax, ecx
// 004c6c9f  8bd0                 mov edx, eax
// 004c6ca1  d1ea                 shr edx, 1
// 004c6ca3  0bd0                 or edx, eax
// 004c6ca5  42                   inc edx
// 004c6ca6  8bfa                 mov edi, edx
// 004c6ca8  8bc6                 mov eax, esi
// 004c6caa  0fafc7               imul eax, edi
// 004c6cad  0faf442440           imul eax, dword ptr [esp + 0x40]
// 004c6cb2  50                   push eax
// 004c6cb3  e88ace3200           call 0x7f3b42
// 004c6cb8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004c6cbc  8b542420             mov edx, dword ptr [esp + 0x20]
// 004c6cc0  83c404               add esp, 4
// 004c6cc3  8be8                 mov ebp, eax
// 004c6cc5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004c6cc9  55                   push ebp
// 004c6cca  6801140000           push 0x1401
// 004c6ccf  57                   push edi
// 004c6cd0  56                   push esi
// 004c6cd1  53                   push ebx
// 004c6cd2  6801140000           push 0x1401
// 004c6cd7  51                   push ecx
// 004c6cd8  52                   push edx
// 004c6cd9  50                   push eax
// 004c6cda  c644244c01           mov byte ptr [esp + 0x4c], 1
// 004c6cdf  e8ea844400           call 0x90f1ce
// 004c6ce4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004c6ce8  807c244800           cmp byte ptr [esp + 0x48], 0
// 004c6ced  743b                 je 0x4c6d2a
// 004c6cef  53                   push ebx
// 004c6cf0  8d4603               lea eax, [esi + 3]
// 004c6cf3  99                   cdq 
// 004c6cf4  83e203               and edx, 3
// 004c6cf7  03c2                 add eax, edx
// 004c6cf9  8bd8                 mov ebx, eax
// 004c6cfb  8d4703               lea eax, [edi + 3]
// 004c6cfe  99                   cdq 
// 004c6cff  83e203               and edx, 3
// 004c6d02  03c2                 add eax, edx
// 004c6d04  8b542434             mov edx, dword ptr [esp + 0x34]
// 004c6d08  c1fb02               sar ebx, 2
// 004c6d0b  c1f802               sar eax, 2
// 004c6d0e  0fafd8               imul ebx, eax
// 004c6d11  0faf5c2444           imul ebx, dword ptr [esp + 0x44]
// 004c6d16  8b442448             mov eax, dword ptr [esp + 0x48]
// 004c6d1a  53                   push ebx
// 004c6d1b  6a00                 push 0
// 004c6d1d  57                   push edi
// 004c6d1e  56                   push esi
// 004c6d1f  52                   push edx
// 004c6d20  50                   push eax
// 004c6d21  51                   push ecx
// 004c6d22  ff153cd9b700         call dword ptr [0xb7d93c]
// 004c6d28  eb20                 jmp 0x4c6d4a
// 004c6d2a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004c6d2e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004c6d32  55                   push ebp
// 004c6d33  6801140000           push 0x1401
// 004c6d38  52                   push edx
// 004c6d39  8b542450             mov edx, dword ptr [esp + 0x50]
// 004c6d3d  6a00                 push 0
// 004c6d3f  57                   push edi
// 004c6d40  56                   push esi
// 004c6d41  50                   push eax
// 004c6d42  52                   push edx
// 004c6d43  51                   push ecx
// 004c6d44  ff15f8bb9800         call dword ptr [0x98bbf8]
// 004c6d4a  807c242800           cmp byte ptr [esp + 0x28], 0
// 004c6d4f  7409                 je 0x4c6d5a
// 004c6d51  55                   push ebp
// 004c6d52  e8afcd3200           call 0x7f3b06
// 004c6d57  83c404               add esp, 4
// 004c6d5a  5f                   pop edi
// 004c6d5b  5e                   pop esi
// 004c6d5c  5d                   pop ebp
// 004c6d5d  5b                   pop ebx
// 004c6d5e  83c410               add esp, 0x10
// 004c6d61  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createTexture@G3D@@YAXIPBEIIHHIHH_N1M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
