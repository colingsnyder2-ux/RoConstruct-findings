// from server: 100% by auto
// roc 2009-06 0056e160  unit: G3D::Log  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056e160
//
// 0056e160  6aff                 push -1
// 0056e162  68d9b88500           push 0x85b8d9
// 0056e167  64a100000000         mov eax, dword ptr fs:[0]
// 0056e16d  50                   push eax
// 0056e16e  64892500000000       mov dword ptr fs:[0], esp
// 0056e175  83ec1c               sub esp, 0x1c
// 0056e178  53                   push ebx
// 0056e179  55                   push ebp
// 0056e17a  56                   push esi
// 0056e17b  57                   push edi
// 0056e17c  8bf9                 mov edi, ecx
// 0056e17e  8b470c               mov eax, dword ptr [edi + 0xc]
// 0056e181  8b4f08               mov ecx, dword ptr [edi + 8]
// 0056e184  50                   push eax
// 0056e185  51                   push ecx
// 0056e186  8d542418             lea edx, [esp + 0x18]
// 0056e18a  6870b38c00           push 0x8cb370
// 0056e18f  52                   push edx
// 0056e190  e8ebb10000           call 0x579380
// 0056e195  83c410               add esp, 0x10
// 0056e198  837c242810           cmp dword ptr [esp + 0x28], 0x10
// 0056e19d  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0056e1a1  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0056e1a5  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0056e1ad  7304                 jae 0x56e1b3
// 0056e1af  8d6c2414             lea ebp, [esp + 0x14]
// 0056e1b3  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0056e1b7  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0056e1ba  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056e1bd  03c3                 add eax, ebx
// 0056e1bf  3bc8                 cmp ecx, eax
// 0056e1c1  7c02                 jl 0x56e1c5
// 0056e1c3  8bc1                 mov eax, ecx
// 0056e1c5  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0056e1c8  894634               mov dword ptr [esi + 0x34], eax
// 0056e1cb  7e09                 jle 0x56e1d6
// 0056e1cd  51                   push ecx
// 0056e1ce  53                   push ebx
// 0056e1cf  8bce                 mov ecx, esi
// 0056e1d1  e8faef0000           call 0x57d1d0
// 0056e1d6  8b4630               mov eax, dword ptr [esi + 0x30]
// 0056e1d9  03463c               add eax, dword ptr [esi + 0x3c]
// 0056e1dc  53                   push ebx
// 0056e1dd  55                   push ebp
// 0056e1de  50                   push eax
// 0056e1df  e85cdcffff           call 0x56be40
// 0056e1e4  015e3c               add dword ptr [esi + 0x3c], ebx
// 0056e1e7  8b4708               mov eax, dword ptr [edi + 8]
// 0056e1ea  0faf470c             imul eax, dword ptr [edi + 0xc]
// 0056e1ee  8b5f04               mov ebx, dword ptr [edi + 4]
// 0056e1f1  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056e1f4  8d3c40               lea edi, [eax + eax*2]
// 0056e1f7  8b4634               mov eax, dword ptr [esi + 0x34]
// 0056e1fa  03cf                 add ecx, edi
// 0056e1fc  83c40c               add esp, 0xc
// 0056e1ff  3bc1                 cmp eax, ecx
// 0056e201  7c02                 jl 0x56e205
// 0056e203  8bc8                 mov ecx, eax
// 0056e205  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0056e208  894e34               mov dword ptr [esi + 0x34], ecx
// 0056e20b  7e09                 jle 0x56e216
// 0056e20d  50                   push eax
// 0056e20e  57                   push edi
// 0056e20f  8bce                 mov ecx, esi
// 0056e211  e8baef0000           call 0x57d1d0
// 0056e216  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0056e219  034e3c               add ecx, dword ptr [esi + 0x3c]
// 0056e21c  57                   push edi
// 0056e21d  53                   push ebx
// 0056e21e  51                   push ecx
// 0056e21f  e81cdcffff           call 0x56be40
// 0056e224  017e3c               add dword ptr [esi + 0x3c], edi
// 0056e227  83c40c               add esp, 0xc
// 0056e22a  8d4c2410             lea ecx, [esp + 0x10]
// 0056e22e  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0056e236  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056e23c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0056e240  5f                   pop edi
// 0056e241  5e                   pop esi
// 0056e242  5d                   pop ebp
// 0056e243  5b                   pop ebx
// 0056e244  64890d00000000       mov dword ptr fs:[0], ecx
// 0056e24b  83c428               add esp, 0x28
// 0056e24e  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?encodePPM@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
