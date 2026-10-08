// roc 2007-03 0046f790  unit: seg_00460000  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046f790
//
// 0046f790  83ec10               sub esp, 0x10
// 0046f793  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0046f797  81f9f5840000         cmp ecx, 0x84f5
// 0046f79d  53                   push ebx
// 0046f79e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0046f7a2  55                   push ebp
// 0046f7a3  56                   push esi
// 0046f7a4  8b742430             mov esi, dword ptr [esp + 0x30]
// 0046f7a8  57                   push edi
// 0046f7a9  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0046f7ad  8beb                 mov ebp, ebx
// 0046f7af  c644242800           mov byte ptr [esp + 0x28], 0
// 0046f7b4  7716                 ja 0x46f7cc
// 0046f7b6  0f8446010000         je 0x46f902
// 0046f7bc  81f9e10d0000         cmp ecx, 0xde1
// 0046f7c2  7420                 je 0x46f7e4
// 0046f7c4  5f                   pop edi
// 0046f7c5  5e                   pop esi
// 0046f7c6  5d                   pop ebp
// 0046f7c7  5b                   pop ebx
// 0046f7c8  83c410               add esp, 0x10
// 0046f7cb  c3                   ret 
// 0046f7cc  81f915850000         cmp ecx, 0x8515
// 0046f7d2  0f829c010000         jb 0x46f974
// 0046f7d8  81f91a850000         cmp ecx, 0x851a
// 0046f7de  0f8790010000         ja 0x46f974
// 0046f7e4  8bc6                 mov eax, esi
// 0046f7e6  f7d8                 neg eax
// 0046f7e8  23c6                 and eax, esi
// 0046f7ea  3bc6                 cmp eax, esi
// 0046f7ec  750e                 jne 0x46f7fc
// 0046f7ee  8bd7                 mov edx, edi
// 0046f7f0  f7da                 neg edx
// 0046f7f2  23d7                 and edx, edi
// 0046f7f4  3bd7                 cmp edx, edi
// 0046f7f6  0f8406010000         je 0x46f902
// 0046f7fc  807c244c00           cmp byte ptr [esp + 0x4c], 0
// 0046f801  740d                 je 0x46f810
// 0046f803  803d24768b0000       cmp byte ptr [0x8b7624], 0
// 0046f80a  0f85f2000000         jne 0x46f902
// 0046f810  db442434             fild dword ptr [esp + 0x34]
// 0046f814  8974241c             mov dword ptr [esp + 0x1c], esi
// 0046f818  d9442450             fld dword ptr [esp + 0x50]
// 0046f81c  897c2418             mov dword ptr [esp + 0x18], edi
// 0046f820  d97c2428             fnstcw word ptr [esp + 0x28]
// 0046f824  0fb7442428           movzx eax, word ptr [esp + 0x28]
// 0046f829  d9c0                 fld st(0)
// 0046f82b  0d000c0000           or eax, 0xc00
// 0046f830  deca                 fmulp st(2)
// 0046f832  89442410             mov dword ptr [esp + 0x10], eax
// 0046f836  d9c9                 fxch st(1)
// 0046f838  d96c2410             fldcw word ptr [esp + 0x10]
// 0046f83c  df7c2410             fistp qword ptr [esp + 0x10]
// 0046f840  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046f844  83e801               sub eax, 1
// 0046f847  8bc8                 mov ecx, eax
// 0046f849  d96c2428             fldcw word ptr [esp + 0x28]
// 0046f84d  c1e910               shr ecx, 0x10
// 0046f850  0bc1                 or eax, ecx
// 0046f852  8bd0                 mov edx, eax
// 0046f854  c1ea08               shr edx, 8
// 0046f857  0bc2                 or eax, edx
// 0046f859  8bc8                 mov ecx, eax
// 0046f85b  c1e904               shr ecx, 4
// 0046f85e  0bc1                 or eax, ecx
// 0046f860  da4c2438             fimul dword ptr [esp + 0x38]
// 0046f864  8bd0                 mov edx, eax
// 0046f866  c1ea02               shr edx, 2
// 0046f869  0bc2                 or eax, edx
// 0046f86b  8bc8                 mov ecx, eax
// 0046f86d  d97c2428             fnstcw word ptr [esp + 0x28]
// 0046f871  d1e9                 shr ecx, 1
// 0046f873  0bc8                 or ecx, eax
// 0046f875  0fb7442428           movzx eax, word ptr [esp + 0x28]
// 0046f87a  0d000c0000           or eax, 0xc00
// 0046f87f  89442410             mov dword ptr [esp + 0x10], eax
// 0046f883  83c101               add ecx, 1
// 0046f886  8bf1                 mov esi, ecx
// 0046f888  d96c2410             fldcw word ptr [esp + 0x10]
// 0046f88c  df7c2410             fistp qword ptr [esp + 0x10]
// 0046f890  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046f894  83e801               sub eax, 1
// 0046f897  8bd0                 mov edx, eax
// 0046f899  c1ea10               shr edx, 0x10
// 0046f89c  d96c2428             fldcw word ptr [esp + 0x28]
// 0046f8a0  0bc2                 or eax, edx
// 0046f8a2  8bc8                 mov ecx, eax
// 0046f8a4  c1e908               shr ecx, 8
// 0046f8a7  0bc1                 or eax, ecx
// 0046f8a9  8bd0                 mov edx, eax
// 0046f8ab  c1ea04               shr edx, 4
// 0046f8ae  0bc2                 or eax, edx
// 0046f8b0  8bc8                 mov ecx, eax
// 0046f8b2  c1e902               shr ecx, 2
// 0046f8b5  0bc1                 or eax, ecx
// 0046f8b7  8bd0                 mov edx, eax
// 0046f8b9  d1ea                 shr edx, 1
// 0046f8bb  0bd0                 or edx, eax
// 0046f8bd  83c201               add edx, 1
// 0046f8c0  8bfa                 mov edi, edx
// 0046f8c2  8bc6                 mov eax, esi
// 0046f8c4  0fafc7               imul eax, edi
// 0046f8c7  0faf442440           imul eax, dword ptr [esp + 0x40]
// 0046f8cc  50                   push eax
// 0046f8cd  e8eeea1a00           call 0x61e3c0
// 0046f8d2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046f8d6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0046f8da  83c404               add esp, 4
// 0046f8dd  8be8                 mov ebp, eax
// 0046f8df  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0046f8e3  55                   push ebp
// 0046f8e4  6801140000           push 0x1401
// 0046f8e9  57                   push edi
// 0046f8ea  56                   push esi
// 0046f8eb  53                   push ebx
// 0046f8ec  6801140000           push 0x1401
// 0046f8f1  51                   push ecx
// 0046f8f2  52                   push edx
// 0046f8f3  50                   push eax
// 0046f8f4  c644244c01           mov byte ptr [esp + 0x4c], 1
// 0046f8f9  e808c42b00           call 0x72bd06
// 0046f8fe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046f902  807c244800           cmp byte ptr [esp + 0x48], 0
// 0046f907  743b                 je 0x46f944
// 0046f909  53                   push ebx
// 0046f90a  8d4603               lea eax, [esi + 3]
// 0046f90d  99                   cdq 
// 0046f90e  83e203               and edx, 3
// 0046f911  03c2                 add eax, edx
// 0046f913  8bd8                 mov ebx, eax
// 0046f915  8d4703               lea eax, [edi + 3]
// 0046f918  99                   cdq 
// 0046f919  83e203               and edx, 3
// 0046f91c  03c2                 add eax, edx
// 0046f91e  8b542434             mov edx, dword ptr [esp + 0x34]
// 0046f922  c1fb02               sar ebx, 2
// 0046f925  c1f802               sar eax, 2
// 0046f928  0fafd8               imul ebx, eax
// 0046f92b  0faf5c2444           imul ebx, dword ptr [esp + 0x44]
// 0046f930  8b442448             mov eax, dword ptr [esp + 0x48]
// 0046f934  53                   push ebx
// 0046f935  6a00                 push 0
// 0046f937  57                   push edi
// 0046f938  56                   push esi
// 0046f939  52                   push edx
// 0046f93a  50                   push eax
// 0046f93b  51                   push ecx
// 0046f93c  ff15d07f8b00         call dword ptr [0x8b7fd0]
// 0046f942  eb20                 jmp 0x46f964
// 0046f944  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046f948  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0046f94c  55                   push ebp
// 0046f94d  6801140000           push 0x1401
// 0046f952  52                   push edx
// 0046f953  8b542450             mov edx, dword ptr [esp + 0x50]
// 0046f957  6a00                 push 0
// 0046f959  57                   push edi
// 0046f95a  56                   push esi
// 0046f95b  50                   push eax
// 0046f95c  52                   push edx
// 0046f95d  51                   push ecx
// 0046f95e  ff1568eb7700         call dword ptr [0x77eb68]
// 0046f964  807c242800           cmp byte ptr [esp + 0x28], 0
// 0046f969  7409                 je 0x46f974
// 0046f96b  55                   push ebp
// 0046f96c  e843ea1a00           call 0x61e3b4
// 0046f971  83c404               add esp, 4
// 0046f974  5f                   pop edi
// 0046f975  5e                   pop esi
// 0046f976  5d                   pop ebp
// 0046f977  5b                   pop ebx
// 0046f978  83c410               add esp, 0x10
// 0046f97b  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Texture.cpp (function ?createTexture@G3D@@YAXIPBEIIHHIHH_N1M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Texture.cpp
