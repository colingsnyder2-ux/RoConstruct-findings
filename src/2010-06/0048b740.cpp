// roc 2010-06 0048b740  unit: G3D::Win32Window  size: 370 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048b740
//
// 0048b740  6aff                 push -1
// 0048b742  680e629800           push 0x98620e
// 0048b747  64a100000000         mov eax, dword ptr fs:[0]
// 0048b74d  50                   push eax
// 0048b74e  64892500000000       mov dword ptr fs:[0], esp
// 0048b755  51                   push ecx
// 0048b756  53                   push ebx
// 0048b757  56                   push esi
// 0048b758  8bf1                 mov esi, ecx
// 0048b75a  57                   push edi
// 0048b75b  8974240c             mov dword ptr [esp + 0xc], esi
// 0048b75f  c7069c3aa100         mov dword ptr [esi], 0xa13a9c
// 0048b765  33db                 xor ebx, ebx
// 0048b767  c744241804000000     mov dword ptr [esp + 0x18], 4
// 0048b76f  3935743cc000         cmp dword ptr [0xc03c74], esi
// 0048b775  7550                 jne 0x48b7c7
// 0048b777  53                   push ebx
// 0048b778  53                   push ebx
// 0048b779  ff1500ab9e00         call dword ptr [0x9eab00]
// 0048b77f  389eec010000         cmp byte ptr [esi + 0x1ec], bl
// 0048b785  7469                 je 0x48b7f0
// 0048b787  80beac00000001       cmp byte ptr [esi + 0xac], 1
// 0048b78e  895e14               mov dword ptr [esi + 0x14], ebx
// 0048b791  741c                 je 0x48b7af
// 0048b793  8b3d9cbb9e00         mov edi, dword ptr [0x9ebb9c]
// 0048b799  8da42400000000       lea esp, [esp]
// 0048b7a0  6a01                 push 1
// 0048b7a2  ffd7                 call edi
// 0048b7a4  85c0                 test eax, eax
// 0048b7a6  7cf8                 jl 0x48b7a0
// 0048b7a8  c686ac00000001       mov byte ptr [esi + 0xac], 1
// 0048b7af  895e10               mov dword ptr [esi + 0x10], ebx
// 0048b7b2  389ead000000         cmp byte ptr [esi + 0xad], bl
// 0048b7b8  740d                 je 0x48b7c7
// 0048b7ba  53                   push ebx
// 0048b7bb  889ead000000         mov byte ptr [esi + 0xad], bl
// 0048b7c1  ff1598bb9e00         call dword ptr [0x9ebb98]
// 0048b7c7  389eec010000         cmp byte ptr [esi + 0x1ec], bl
// 0048b7cd  7421                 je 0x48b7f0
// 0048b7cf  8b86e8010000         mov eax, dword ptr [esi + 0x1e8]
// 0048b7d5  53                   push ebx
// 0048b7d6  6aeb                 push -0x15
// 0048b7d8  50                   push eax
// 0048b7d9  ff1500bc9e00         call dword ptr [0x9ebc00]
// 0048b7df  8b8ee8010000         mov ecx, dword ptr [esi + 0x1e8]
// 0048b7e5  53                   push ebx
// 0048b7e6  53                   push ebx
// 0048b7e7  6a10                 push 0x10
// 0048b7e9  51                   push ecx
// 0048b7ea  ff1548ba9e00         call dword ptr [0x9eba48]
// 0048b7f0  8bbeb4010000         mov edi, dword ptr [esi + 0x1b4]
// 0048b7f6  3bfb                 cmp edi, ebx
// 0048b7f8  7411                 je 0x48b80b
// 0048b7fa  8d4f04               lea ecx, [edi + 4]
// 0048b7fd  e80edfffff           call 0x489710
// 0048b802  57                   push edi
// 0048b803  e892c13100           call 0x7a799a
// 0048b808  83c404               add esp, 4
// 0048b80b  8b96d8010000         mov edx, dword ptr [esi + 0x1d8]
// 0048b811  52                   push edx
// 0048b812  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0048b817  e8a4210c00           call 0x54d9c0
// 0048b81c  899ed8010000         mov dword ptr [esi + 0x1d8], ebx
// 0048b822  899edc010000         mov dword ptr [esi + 0x1dc], ebx
// 0048b828  899ee0010000         mov dword ptr [esi + 0x1e0], ebx
// 0048b82e  8d8ebc010000         lea ecx, [esi + 0x1bc]
// 0048b834  c786b80100006c38a100 mov dword ptr [esi + 0x1b8], 0xa1386c
// 0048b83e  83c404               add esp, 4
// 0048b841  c644241802           mov byte ptr [esp + 0x18], 2
// 0048b846  c701c435a100         mov dword ptr [ecx], 0xa135c4
// 0048b84c  e8cfd4ffff           call 0x488d20
// 0048b851  8d8e88000000         lea ecx, [esi + 0x88]
// 0048b857  c644241801           mov byte ptr [esp + 0x18], 1
// 0048b85c  ff1500a49e00         call dword ptr [0x9ea400]
// 0048b862  8d4e68               lea ecx, [esi + 0x68]
// 0048b865  885c2418             mov byte ptr [esp + 0x18], bl
// 0048b869  ff1500a49e00         call dword ptr [0x9ea400]
// 0048b86f  c706cc35a100         mov dword ptr [esi], 0xa135cc
// 0048b875  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0048b87d  3935743cc000         cmp dword ptr [0xc03c74], esi
// 0048b883  7506                 jne 0x48b88b
// 0048b885  891d743cc000         mov dword ptr [0xc03c74], ebx
// 0048b88b  8b4604               mov eax, dword ptr [esi + 4]
// 0048b88e  50                   push eax
// 0048b88f  e82c210c00           call 0x54d9c0
// 0048b894  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048b898  83c404               add esp, 4
// 0048b89b  895e04               mov dword ptr [esi + 4], ebx
// 0048b89e  895e08               mov dword ptr [esi + 8], ebx
// 0048b8a1  895e0c               mov dword ptr [esi + 0xc], ebx
// 0048b8a4  5f                   pop edi
// 0048b8a5  5e                   pop esi
// 0048b8a6  5b                   pop ebx
// 0048b8a7  64890d00000000       mov dword ptr fs:[0], ecx
// 0048b8ae  83c410               add esp, 0x10
// 0048b8b1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1Win32Window@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
