// roc 2010-06 00483d70  unit: G3D::ReferenceCountedObject  size: 482 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00483d70
//
// 00483d70  83ec10               sub esp, 0x10
// 00483d73  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00483d77  53                   push ebx
// 00483d78  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00483d7c  55                   push ebp
// 00483d7d  56                   push esi
// 00483d7e  8b742430             mov esi, dword ptr [esp + 0x30]
// 00483d82  57                   push edi
// 00483d83  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00483d87  8beb                 mov ebp, ebx
// 00483d89  c644242800           mov byte ptr [esp + 0x28], 0
// 00483d8e  81f9f5840000         cmp ecx, 0x84f5
// 00483d94  7716                 ja 0x483dac
// 00483d96  0f843c010000         je 0x483ed8
// 00483d9c  81f9e10d0000         cmp ecx, 0xde1
// 00483da2  7420                 je 0x483dc4
// 00483da4  5f                   pop edi
// 00483da5  5e                   pop esi
// 00483da6  5d                   pop ebp
// 00483da7  5b                   pop ebx
// 00483da8  83c410               add esp, 0x10
// 00483dab  c3                   ret 
// 00483dac  81f915850000         cmp ecx, 0x8515
// 00483db2  0f8292010000         jb 0x483f4a
// 00483db8  81f91a850000         cmp ecx, 0x851a
// 00483dbe  0f8786010000         ja 0x483f4a
// 00483dc4  8bc6                 mov eax, esi
// 00483dc6  f7d8                 neg eax
// 00483dc8  23c6                 and eax, esi
// 00483dca  3bc6                 cmp eax, esi
// 00483dcc  750e                 jne 0x483ddc
// 00483dce  8bd7                 mov edx, edi
// 00483dd0  f7da                 neg edx
// 00483dd2  23d7                 and edx, edi
// 00483dd4  3bd7                 cmp edx, edi
// 00483dd6  0f84fc000000         je 0x483ed8
// 00483ddc  807c244c00           cmp byte ptr [esp + 0x4c], 0
// 00483de1  740d                 je 0x483df0
// 00483de3  803db438c00000       cmp byte ptr [0xc038b4], 0
// 00483dea  0f85e8000000         jne 0x483ed8
// 00483df0  db442434             fild dword ptr [esp + 0x34]
// 00483df4  8974241c             mov dword ptr [esp + 0x1c], esi
// 00483df8  d9442450             fld dword ptr [esp + 0x50]
// 00483dfc  897c2418             mov dword ptr [esp + 0x18], edi
// 00483e00  d97c2428             fnstcw word ptr [esp + 0x28]
// 00483e04  0fb7442428           movzx eax, word ptr [esp + 0x28]
// 00483e09  dcc9                 fmul st(1), st(0)
// 00483e0b  0d000c0000           or eax, 0xc00
// 00483e10  d9c9                 fxch st(1)
// 00483e12  89442410             mov dword ptr [esp + 0x10], eax
// 00483e16  d96c2410             fldcw word ptr [esp + 0x10]
// 00483e1a  df7c2410             fistp qword ptr [esp + 0x10]
// 00483e1e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00483e22  48                   dec eax
// 00483e23  8bc8                 mov ecx, eax
// 00483e25  d96c2428             fldcw word ptr [esp + 0x28]
// 00483e29  c1e910               shr ecx, 0x10
// 00483e2c  0bc1                 or eax, ecx
// 00483e2e  8bd0                 mov edx, eax
// 00483e30  c1ea08               shr edx, 8
// 00483e33  0bc2                 or eax, edx
// 00483e35  8bc8                 mov ecx, eax
// 00483e37  c1e904               shr ecx, 4
// 00483e3a  0bc1                 or eax, ecx
// 00483e3c  da4c2438             fimul dword ptr [esp + 0x38]
// 00483e40  8bd0                 mov edx, eax
// 00483e42  c1ea02               shr edx, 2
// 00483e45  0bc2                 or eax, edx
// 00483e47  8bc8                 mov ecx, eax
// 00483e49  d97c2428             fnstcw word ptr [esp + 0x28]
// 00483e4d  d1e9                 shr ecx, 1
// 00483e4f  0bc8                 or ecx, eax
// 00483e51  0fb7442428           movzx eax, word ptr [esp + 0x28]
// 00483e56  0d000c0000           or eax, 0xc00
// 00483e5b  89442410             mov dword ptr [esp + 0x10], eax
// 00483e5f  41                   inc ecx
// 00483e60  8bf1                 mov esi, ecx
// 00483e62  d96c2410             fldcw word ptr [esp + 0x10]
// 00483e66  df7c2410             fistp qword ptr [esp + 0x10]
// 00483e6a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00483e6e  48                   dec eax
// 00483e6f  8bd0                 mov edx, eax
// 00483e71  c1ea10               shr edx, 0x10
// 00483e74  d96c2428             fldcw word ptr [esp + 0x28]
// 00483e78  0bc2                 or eax, edx
// 00483e7a  8bc8                 mov ecx, eax
// 00483e7c  c1e908               shr ecx, 8
// 00483e7f  0bc1                 or eax, ecx
// 00483e81  8bd0                 mov edx, eax
// 00483e83  c1ea04               shr edx, 4
// 00483e86  0bc2                 or eax, edx
// 00483e88  8bc8                 mov ecx, eax
// 00483e8a  c1e902               shr ecx, 2
// 00483e8d  0bc1                 or eax, ecx
// 00483e8f  8bd0                 mov edx, eax
// 00483e91  d1ea                 shr edx, 1
// 00483e93  0bd0                 or edx, eax
// 00483e95  42                   inc edx
// 00483e96  8bfa                 mov edi, edx
// 00483e98  8bc6                 mov eax, esi
// 00483e9a  0fafc7               imul eax, edi
// 00483e9d  0faf442440           imul eax, dword ptr [esp + 0x40]
// 00483ea2  50                   push eax
// 00483ea3  e8da3d3200           call 0x7a7c82
// 00483ea8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00483eac  8b542420             mov edx, dword ptr [esp + 0x20]
// 00483eb0  83c404               add esp, 4
// 00483eb3  8be8                 mov ebp, eax
// 00483eb5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00483eb9  55                   push ebp
// 00483eba  6801140000           push 0x1401
// 00483ebf  57                   push edi
// 00483ec0  56                   push esi
// 00483ec1  53                   push ebx
// 00483ec2  6801140000           push 0x1401
// 00483ec7  51                   push ecx
// 00483ec8  52                   push edx
// 00483ec9  50                   push eax
// 00483eca  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00483ecf  e8faf24300           call 0x8c31ce
// 00483ed4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00483ed8  807c244800           cmp byte ptr [esp + 0x48], 0
// 00483edd  743b                 je 0x483f1a
// 00483edf  53                   push ebx
// 00483ee0  8d4603               lea eax, [esi + 3]
// 00483ee3  99                   cdq 
// 00483ee4  83e203               and edx, 3
// 00483ee7  03c2                 add eax, edx
// 00483ee9  8bd8                 mov ebx, eax
// 00483eeb  8d4703               lea eax, [edi + 3]
// 00483eee  99                   cdq 
// 00483eef  83e203               and edx, 3
// 00483ef2  03c2                 add eax, edx
// 00483ef4  8b542434             mov edx, dword ptr [esp + 0x34]
// 00483ef8  c1fb02               sar ebx, 2
// 00483efb  c1f802               sar eax, 2
// 00483efe  0fafd8               imul ebx, eax
// 00483f01  0faf5c2444           imul ebx, dword ptr [esp + 0x44]
// 00483f06  8b442448             mov eax, dword ptr [esp + 0x48]
// 00483f0a  53                   push ebx
// 00483f0b  6a00                 push 0
// 00483f0d  57                   push edi
// 00483f0e  56                   push esi
// 00483f0f  52                   push edx
// 00483f10  50                   push eax
// 00483f11  51                   push ecx
// 00483f12  ff15cc39c000         call dword ptr [0xc039cc]
// 00483f18  eb20                 jmp 0x483f3a
// 00483f1a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00483f1e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00483f22  55                   push ebp
// 00483f23  6801140000           push 0x1401
// 00483f28  52                   push edx
// 00483f29  8b542450             mov edx, dword ptr [esp + 0x50]
// 00483f2d  6a00                 push 0
// 00483f2f  57                   push edi
// 00483f30  56                   push esi
// 00483f31  50                   push eax
// 00483f32  52                   push edx
// 00483f33  51                   push ecx
// 00483f34  ff15c0aa9e00         call dword ptr [0x9eaac0]
// 00483f3a  807c242800           cmp byte ptr [esp + 0x28], 0
// 00483f3f  7409                 je 0x483f4a
// 00483f41  55                   push ebp
// 00483f42  e8ff3c3200           call 0x7a7c46
// 00483f47  83c404               add esp, 4
// 00483f4a  5f                   pop edi
// 00483f4b  5e                   pop esi
// 00483f4c  5d                   pop ebp
// 00483f4d  5b                   pop ebx
// 00483f4e  83c410               add esp, 0x10
// 00483f51  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createTexture@G3D@@YAXIPBEIIHHIHH_N1M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
