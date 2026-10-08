// from server: 100% by auto
// roc 2007-08 0046f7f0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046f7f0
//
// 0046f7f0  83ec10               sub esp, 0x10
// 0046f7f3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0046f7f7  81f9f5840000         cmp ecx, 0x84f5
// 0046f7fd  53                   push ebx
// 0046f7fe  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0046f802  55                   push ebp
// 0046f803  56                   push esi
// 0046f804  8b742430             mov esi, dword ptr [esp + 0x30]
// 0046f808  57                   push edi
// 0046f809  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0046f80d  8beb                 mov ebp, ebx
// 0046f80f  c644242800           mov byte ptr [esp + 0x28], 0
// 0046f814  7716                 ja 0x46f82c
// 0046f816  0f8446010000         je 0x46f962
// 0046f81c  81f9e10d0000         cmp ecx, 0xde1
// 0046f822  7420                 je 0x46f844
// 0046f824  5f                   pop edi
// 0046f825  5e                   pop esi
// 0046f826  5d                   pop ebp
// 0046f827  5b                   pop ebx
// 0046f828  83c410               add esp, 0x10
// 0046f82b  c3                   ret 
// 0046f82c  81f915850000         cmp ecx, 0x8515
// 0046f832  0f829c010000         jb 0x46f9d4
// 0046f838  81f91a850000         cmp ecx, 0x851a
// 0046f83e  0f8790010000         ja 0x46f9d4
// 0046f844  8bc6                 mov eax, esi
// 0046f846  f7d8                 neg eax
// 0046f848  23c6                 and eax, esi
// 0046f84a  3bc6                 cmp eax, esi
// 0046f84c  750e                 jne 0x46f85c
// 0046f84e  8bd7                 mov edx, edi
// 0046f850  f7da                 neg edx
// 0046f852  23d7                 and edx, edi
// 0046f854  3bd7                 cmp edx, edi
// 0046f856  0f8406010000         je 0x46f962
// 0046f85c  807c244c00           cmp byte ptr [esp + 0x4c], 0
// 0046f861  740d                 je 0x46f870
// 0046f863  803d5ccf8b0000       cmp byte ptr [0x8bcf5c], 0
// 0046f86a  0f85f2000000         jne 0x46f962
// 0046f870  db442434             fild dword ptr [esp + 0x34]
// 0046f874  8974241c             mov dword ptr [esp + 0x1c], esi
// 0046f878  d9442450             fld dword ptr [esp + 0x50]
// 0046f87c  897c2418             mov dword ptr [esp + 0x18], edi
// 0046f880  d97c2428             fnstcw word ptr [esp + 0x28]
// 0046f884  0fb7442428           movzx eax, word ptr [esp + 0x28]
// 0046f889  d9c0                 fld st(0)
// 0046f88b  0d000c0000           or eax, 0xc00
// 0046f890  deca                 fmulp st(2)
// 0046f892  89442410             mov dword ptr [esp + 0x10], eax
// 0046f896  d9c9                 fxch st(1)
// 0046f898  d96c2410             fldcw word ptr [esp + 0x10]
// 0046f89c  df7c2410             fistp qword ptr [esp + 0x10]
// 0046f8a0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046f8a4  83e801               sub eax, 1
// 0046f8a7  8bc8                 mov ecx, eax
// 0046f8a9  d96c2428             fldcw word ptr [esp + 0x28]
// 0046f8ad  c1e910               shr ecx, 0x10
// 0046f8b0  0bc1                 or eax, ecx
// 0046f8b2  8bd0                 mov edx, eax
// 0046f8b4  c1ea08               shr edx, 8
// 0046f8b7  0bc2                 or eax, edx
// 0046f8b9  8bc8                 mov ecx, eax
// 0046f8bb  c1e904               shr ecx, 4
// 0046f8be  0bc1                 or eax, ecx
// 0046f8c0  da4c2438             fimul dword ptr [esp + 0x38]
// 0046f8c4  8bd0                 mov edx, eax
// 0046f8c6  c1ea02               shr edx, 2
// 0046f8c9  0bc2                 or eax, edx
// 0046f8cb  8bc8                 mov ecx, eax
// 0046f8cd  d97c2428             fnstcw word ptr [esp + 0x28]
// 0046f8d1  d1e9                 shr ecx, 1
// 0046f8d3  0bc8                 or ecx, eax
// 0046f8d5  0fb7442428           movzx eax, word ptr [esp + 0x28]
// 0046f8da  0d000c0000           or eax, 0xc00
// 0046f8df  89442410             mov dword ptr [esp + 0x10], eax
// 0046f8e3  83c101               add ecx, 1
// 0046f8e6  8bf1                 mov esi, ecx
// 0046f8e8  d96c2410             fldcw word ptr [esp + 0x10]
// 0046f8ec  df7c2410             fistp qword ptr [esp + 0x10]
// 0046f8f0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046f8f4  83e801               sub eax, 1
// 0046f8f7  8bd0                 mov edx, eax
// 0046f8f9  c1ea10               shr edx, 0x10
// 0046f8fc  d96c2428             fldcw word ptr [esp + 0x28]
// 0046f900  0bc2                 or eax, edx
// 0046f902  8bc8                 mov ecx, eax
// 0046f904  c1e908               shr ecx, 8
// 0046f907  0bc1                 or eax, ecx
// 0046f909  8bd0                 mov edx, eax
// 0046f90b  c1ea04               shr edx, 4
// 0046f90e  0bc2                 or eax, edx
// 0046f910  8bc8                 mov ecx, eax
// 0046f912  c1e902               shr ecx, 2
// 0046f915  0bc1                 or eax, ecx
// 0046f917  8bd0                 mov edx, eax
// 0046f919  d1ea                 shr edx, 1
// 0046f91b  0bd0                 or edx, eax
// 0046f91d  83c201               add edx, 1
// 0046f920  8bfa                 mov edi, edx
// 0046f922  8bc6                 mov eax, esi
// 0046f924  0fafc7               imul eax, edi
// 0046f927  0faf442440           imul eax, dword ptr [esp + 0x40]
// 0046f92c  50                   push eax
// 0046f92d  e800061c00           call 0x62ff32
// 0046f932  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046f936  8b542420             mov edx, dword ptr [esp + 0x20]
// 0046f93a  83c404               add esp, 4
// 0046f93d  8be8                 mov ebp, eax
// 0046f93f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0046f943  55                   push ebp
// 0046f944  6801140000           push 0x1401
// 0046f949  57                   push edi
// 0046f94a  56                   push esi
// 0046f94b  53                   push ebx
// 0046f94c  6801140000           push 0x1401
// 0046f951  51                   push ecx
// 0046f952  52                   push edx
// 0046f953  50                   push eax
// 0046f954  c644244c01           mov byte ptr [esp + 0x4c], 1
// 0046f959  e818bd2b00           call 0x72b676
// 0046f95e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046f962  807c244800           cmp byte ptr [esp + 0x48], 0
// 0046f967  743b                 je 0x46f9a4
// 0046f969  53                   push ebx
// 0046f96a  8d4603               lea eax, [esi + 3]
// 0046f96d  99                   cdq 
// 0046f96e  83e203               and edx, 3
// 0046f971  03c2                 add eax, edx
// 0046f973  8bd8                 mov ebx, eax
// 0046f975  8d4703               lea eax, [edi + 3]
// 0046f978  99                   cdq 
// 0046f979  83e203               and edx, 3
// 0046f97c  03c2                 add eax, edx
// 0046f97e  8b542434             mov edx, dword ptr [esp + 0x34]
// 0046f982  c1fb02               sar ebx, 2
// 0046f985  c1f802               sar eax, 2
// 0046f988  0fafd8               imul ebx, eax
// 0046f98b  0faf5c2444           imul ebx, dword ptr [esp + 0x44]
// 0046f990  8b442448             mov eax, dword ptr [esp + 0x48]
// 0046f994  53                   push ebx
// 0046f995  6a00                 push 0
// 0046f997  57                   push edi
// 0046f998  56                   push esi
// 0046f999  52                   push edx
// 0046f99a  50                   push eax
// 0046f99b  51                   push ecx
// 0046f99c  ff1518d98b00         call dword ptr [0x8bd918]
// 0046f9a2  eb20                 jmp 0x46f9c4
// 0046f9a4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046f9a8  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0046f9ac  55                   push ebp
// 0046f9ad  6801140000           push 0x1401
// 0046f9b2  52                   push edx
// 0046f9b3  8b542450             mov edx, dword ptr [esp + 0x50]
// 0046f9b7  6a00                 push 0
// 0046f9b9  57                   push edi
// 0046f9ba  56                   push esi
// 0046f9bb  50                   push eax
// 0046f9bc  52                   push edx
// 0046f9bd  51                   push ecx
// 0046f9be  ff1558eb7700         call dword ptr [0x77eb58]
// 0046f9c4  807c242800           cmp byte ptr [esp + 0x28], 0
// 0046f9c9  7409                 je 0x46f9d4
// 0046f9cb  55                   push ebp
// 0046f9cc  e855051c00           call 0x62ff26
// 0046f9d1  83c404               add esp, 4
// 0046f9d4  5f                   pop edi
// 0046f9d5  5e                   pop esi
// 0046f9d6  5d                   pop ebp
// 0046f9d7  5b                   pop ebx
// 0046f9d8  83c410               add esp, 0x10
// 0046f9db  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createTexture@G3D@@YAXIPBEIIHHIHH_N1M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
