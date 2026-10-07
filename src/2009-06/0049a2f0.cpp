// roc 2009-06 0049a2f0  unit: G3D::ReferenceCountedObject  size: 482 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049a2f0
//
// 0049a2f0  83ec10               sub esp, 0x10
// 0049a2f3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049a2f7  53                   push ebx
// 0049a2f8  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0049a2fc  55                   push ebp
// 0049a2fd  56                   push esi
// 0049a2fe  8b742430             mov esi, dword ptr [esp + 0x30]
// 0049a302  57                   push edi
// 0049a303  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0049a307  8beb                 mov ebp, ebx
// 0049a309  c644242800           mov byte ptr [esp + 0x28], 0
// 0049a30e  81f9f5840000         cmp ecx, 0x84f5
// 0049a314  7716                 ja 0x49a32c
// 0049a316  0f843c010000         je 0x49a458
// 0049a31c  81f9e10d0000         cmp ecx, 0xde1
// 0049a322  7420                 je 0x49a344
// 0049a324  5f                   pop edi
// 0049a325  5e                   pop esi
// 0049a326  5d                   pop ebp
// 0049a327  5b                   pop ebx
// 0049a328  83c410               add esp, 0x10
// 0049a32b  c3                   ret 
// 0049a32c  81f915850000         cmp ecx, 0x8515
// 0049a332  0f8292010000         jb 0x49a4ca
// 0049a338  81f91a850000         cmp ecx, 0x851a
// 0049a33e  0f8786010000         ja 0x49a4ca
// 0049a344  8bc6                 mov eax, esi
// 0049a346  f7d8                 neg eax
// 0049a348  23c6                 and eax, esi
// 0049a34a  3bc6                 cmp eax, esi
// 0049a34c  750e                 jne 0x49a35c
// 0049a34e  8bd7                 mov edx, edi
// 0049a350  f7da                 neg edx
// 0049a352  23d7                 and edx, edi
// 0049a354  3bd7                 cmp edx, edi
// 0049a356  0f84fc000000         je 0x49a458
// 0049a35c  807c244c00           cmp byte ptr [esp + 0x4c], 0
// 0049a361  740d                 je 0x49a370
// 0049a363  803d08c9a30000       cmp byte ptr [0xa3c908], 0
// 0049a36a  0f85e8000000         jne 0x49a458
// 0049a370  db442434             fild dword ptr [esp + 0x34]
// 0049a374  8974241c             mov dword ptr [esp + 0x1c], esi
// 0049a378  d9442450             fld dword ptr [esp + 0x50]
// 0049a37c  897c2418             mov dword ptr [esp + 0x18], edi
// 0049a380  d97c2428             fnstcw word ptr [esp + 0x28]
// 0049a384  0fb7442428           movzx eax, word ptr [esp + 0x28]
// 0049a389  dcc9                 fmul st(1), st(0)
// 0049a38b  0d000c0000           or eax, 0xc00
// 0049a390  d9c9                 fxch st(1)
// 0049a392  89442410             mov dword ptr [esp + 0x10], eax
// 0049a396  d96c2410             fldcw word ptr [esp + 0x10]
// 0049a39a  df7c2410             fistp qword ptr [esp + 0x10]
// 0049a39e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0049a3a2  48                   dec eax
// 0049a3a3  8bc8                 mov ecx, eax
// 0049a3a5  d96c2428             fldcw word ptr [esp + 0x28]
// 0049a3a9  c1e910               shr ecx, 0x10
// 0049a3ac  0bc1                 or eax, ecx
// 0049a3ae  8bd0                 mov edx, eax
// 0049a3b0  c1ea08               shr edx, 8
// 0049a3b3  0bc2                 or eax, edx
// 0049a3b5  8bc8                 mov ecx, eax
// 0049a3b7  c1e904               shr ecx, 4
// 0049a3ba  0bc1                 or eax, ecx
// 0049a3bc  da4c2438             fimul dword ptr [esp + 0x38]
// 0049a3c0  8bd0                 mov edx, eax
// 0049a3c2  c1ea02               shr edx, 2
// 0049a3c5  0bc2                 or eax, edx
// 0049a3c7  8bc8                 mov ecx, eax
// 0049a3c9  d97c2428             fnstcw word ptr [esp + 0x28]
// 0049a3cd  d1e9                 shr ecx, 1
// 0049a3cf  0bc8                 or ecx, eax
// 0049a3d1  0fb7442428           movzx eax, word ptr [esp + 0x28]
// 0049a3d6  0d000c0000           or eax, 0xc00
// 0049a3db  89442410             mov dword ptr [esp + 0x10], eax
// 0049a3df  41                   inc ecx
// 0049a3e0  8bf1                 mov esi, ecx
// 0049a3e2  d96c2410             fldcw word ptr [esp + 0x10]
// 0049a3e6  df7c2410             fistp qword ptr [esp + 0x10]
// 0049a3ea  8b442410             mov eax, dword ptr [esp + 0x10]
// 0049a3ee  48                   dec eax
// 0049a3ef  8bd0                 mov edx, eax
// 0049a3f1  c1ea10               shr edx, 0x10
// 0049a3f4  d96c2428             fldcw word ptr [esp + 0x28]
// 0049a3f8  0bc2                 or eax, edx
// 0049a3fa  8bc8                 mov ecx, eax
// 0049a3fc  c1e908               shr ecx, 8
// 0049a3ff  0bc1                 or eax, ecx
// 0049a401  8bd0                 mov edx, eax
// 0049a403  c1ea04               shr edx, 4
// 0049a406  0bc2                 or eax, edx
// 0049a408  8bc8                 mov ecx, eax
// 0049a40a  c1e902               shr ecx, 2
// 0049a40d  0bc1                 or eax, ecx
// 0049a40f  8bd0                 mov edx, eax
// 0049a411  d1ea                 shr edx, 1
// 0049a413  0bd0                 or edx, eax
// 0049a415  42                   inc edx
// 0049a416  8bfa                 mov edi, edx
// 0049a418  8bc6                 mov eax, esi
// 0049a41a  0fafc7               imul eax, edi
// 0049a41d  0faf442440           imul eax, dword ptr [esp + 0x40]
// 0049a422  50                   push eax
// 0049a423  e8f2e82700           call 0x718d1a
// 0049a428  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049a42c  8b542420             mov edx, dword ptr [esp + 0x20]
// 0049a430  83c404               add esp, 4
// 0049a433  8be8                 mov ebp, eax
// 0049a435  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0049a439  55                   push ebp
// 0049a43a  6801140000           push 0x1401
// 0049a43f  57                   push edi
// 0049a440  56                   push esi
// 0049a441  53                   push ebx
// 0049a442  6801140000           push 0x1401
// 0049a447  51                   push ecx
// 0049a448  52                   push edx
// 0049a449  50                   push eax
// 0049a44a  c644244c01           mov byte ptr [esp + 0x4c], 1
// 0049a44f  e87a9d3900           call 0x8341ce
// 0049a454  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0049a458  807c244800           cmp byte ptr [esp + 0x48], 0
// 0049a45d  743b                 je 0x49a49a
// 0049a45f  53                   push ebx
// 0049a460  8d4603               lea eax, [esi + 3]
// 0049a463  99                   cdq 
// 0049a464  83e203               and edx, 3
// 0049a467  03c2                 add eax, edx
// 0049a469  8bd8                 mov ebx, eax
// 0049a46b  8d4703               lea eax, [edi + 3]
// 0049a46e  99                   cdq 
// 0049a46f  83e203               and edx, 3
// 0049a472  03c2                 add eax, edx
// 0049a474  8b542434             mov edx, dword ptr [esp + 0x34]
// 0049a478  c1fb02               sar ebx, 2
// 0049a47b  c1f802               sar eax, 2
// 0049a47e  0fafd8               imul ebx, eax
// 0049a481  0faf5c2444           imul ebx, dword ptr [esp + 0x44]
// 0049a486  8b442448             mov eax, dword ptr [esp + 0x48]
// 0049a48a  53                   push ebx
// 0049a48b  6a00                 push 0
// 0049a48d  57                   push edi
// 0049a48e  56                   push esi
// 0049a48f  52                   push edx
// 0049a490  50                   push eax
// 0049a491  51                   push ecx
// 0049a492  ff158cd1a300         call dword ptr [0xa3d18c]
// 0049a498  eb20                 jmp 0x49a4ba
// 0049a49a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0049a49e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0049a4a2  55                   push ebp
// 0049a4a3  6801140000           push 0x1401
// 0049a4a8  52                   push edx
// 0049a4a9  8b542450             mov edx, dword ptr [esp + 0x50]
// 0049a4ad  6a00                 push 0
// 0049a4af  57                   push edi
// 0049a4b0  56                   push esi
// 0049a4b1  50                   push eax
// 0049a4b2  52                   push edx
// 0049a4b3  51                   push ecx
// 0049a4b4  ff15d4eb8900         call dword ptr [0x89ebd4]
// 0049a4ba  807c242800           cmp byte ptr [esp + 0x28], 0
// 0049a4bf  7409                 je 0x49a4ca
// 0049a4c1  55                   push ebp
// 0049a4c2  e817e82700           call 0x718cde
// 0049a4c7  83c404               add esp, 4
// 0049a4ca  5f                   pop edi
// 0049a4cb  5e                   pop esi
// 0049a4cc  5d                   pop ebp
// 0049a4cd  5b                   pop ebx
// 0049a4ce  83c410               add esp, 0x10
// 0049a4d1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createTexture@G3D@@YAXIPBEIIHHIHH_N1M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
