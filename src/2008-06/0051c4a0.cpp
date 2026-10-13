// from server: 100% by colin
// roc 2008-06 0051c4a0  unit: G3D::_internal::DialogTemplate  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051c4a0
//
// 0051c4a0  55                   push ebp
// 0051c4a1  8bec                 mov ebp, esp
// 0051c4a3  83ec54               sub esp, 0x54
// 0051c4a6  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0051c4a9  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 0051c4ac  53                   push ebx
// 0051c4ad  56                   push esi
// 0051c4ae  57                   push edi
// 0051c4af  50                   push eax
// 0051c4b0  51                   push ecx
// 0051c4b1  6a01                 push 1
// 0051c4b3  e888de0000           call 0x52a340
// 0051c4b8  8bf0                 mov esi, eax
// 0051c4ba  83c40c               add esp, 0xc
// 0051c4bd  8975fc               mov dword ptr [ebp - 4], esi
// 0051c4c0  85f6                 test esi, esi
// 0051c4c2  7449                 je 0x51c50d
// 0051c4c4  56                   push esi
// 0051c4c5  e8561d0000           call 0x51e220
// 0051c4ca  b840420f00           mov eax, 0xf4240
// 0051c4cf  6a00                 push 0
// 0051c4d1  898664020000         mov dword ptr [esi + 0x264], eax
// 0051c4d7  56                   push esi
// 0051c4d8  898668020000         mov dword ptr [esi + 0x268], eax
// 0051c4de  e8e9581800           call 0x6a1dcc
// 0051c4e3  8b75fc               mov esi, dword ptr [ebp - 4]
// 0051c4e6  83c40c               add esp, 0xc
// 0051c4e9  85c0                 test eax, eax
// 0051c4eb  7429                 je 0x51c516
// 0051c4ed  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 0051c4f3  52                   push edx
// 0051c4f4  56                   push esi
// 0051c4f5  e806e00000           call 0x52a500
// 0051c4fa  56                   push esi
// 0051c4fb  c786ac00000000000000 mov dword ptr [esi + 0xac], 0
// 0051c505  e876df0000           call 0x52a480
// 0051c50a  83c40c               add esp, 0xc
// 0051c50d  33c0                 xor eax, eax
// 0051c50f  5f                   pop edi
// 0051c510  5e                   pop esi
// 0051c511  5b                   pop ebx
// 0051c512  8be5                 mov esp, ebp
// 0051c514  5d                   pop ebp
// 0051c515  c3                   ret 
// 0051c516  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0051c519  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 0051c51c  8b5518               mov edx, dword ptr [ebp + 0x18]
// 0051c51f  50                   push eax
// 0051c520  51                   push ecx
// 0051c521  52                   push edx
// 0051c522  56                   push esi
// 0051c523  e828df0000           call 0x52a450
// 0051c528  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0051c52b  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0051c52e  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0051c531  50                   push eax
// 0051c532  51                   push ecx
// 0051c533  52                   push edx
// 0051c534  56                   push esi
// 0051c535  e856d40000           call 0x529990
// 0051c53a  8b7d08               mov edi, dword ptr [ebp + 8]
// 0051c53d  b828948200           mov eax, 0x829428
// 0051c542  8bcf                 mov ecx, edi
// 0051c544  83c420               add esp, 0x20
// 0051c547  2bc8                 sub ecx, eax
// 0051c549  ba00000200           mov edx, 0x20000
// 0051c54e  8bff                 mov edi, edi
// 0051c550  8a1c01               mov bl, byte ptr [ecx + eax]
// 0051c553  3a18                 cmp bl, byte ptr [eax]
// 0051c555  7403                 je 0x51c55a
// 0051c557  09566c               or dword ptr [esi + 0x6c], edx
// 0051c55a  8a18                 mov bl, byte ptr [eax]
// 0051c55c  40                   inc eax
// 0051c55d  84db                 test bl, bl
// 0051c55f  75ef                 jne 0x51c550
// 0051c561  85566c               test dword ptr [esi + 0x6c], edx
// 0051c564  7479                 je 0x51c5df
// 0051c566  85ff                 test edi, edi
// 0051c568  7425                 je 0x51c58f
// 0051c56a  8a07                 mov al, byte ptr [edi]
// 0051c56c  3a0528948200         cmp al, byte ptr [0x829428]
// 0051c572  7519                 jne 0x51c58d
// 0051c574  3c31                 cmp al, 0x31
// 0051c576  750b                 jne 0x51c583
// 0051c578  8a4f02               mov cl, byte ptr [edi + 2]
// 0051c57b  3a0d2a948200         cmp cl, byte ptr [0x82942a]
// 0051c581  750a                 jne 0x51c58d
// 0051c583  3c30                 cmp al, 0x30
// 0051c585  7558                 jne 0x51c5df
// 0051c587  807f0239             cmp byte ptr [edi + 2], 0x39
// 0051c58b  7d52                 jge 0x51c5df
// 0051c58d  85ff                 test edi, edi
// 0051c58f  8b1d30288000         mov ebx, dword ptr [0x802830]
// 0051c595  7419                 je 0x51c5b0
// 0051c597  57                   push edi
// 0051c598  8d55ac               lea edx, [ebp - 0x54]
// 0051c59b  68c08e8200           push 0x828ec0
// 0051c5a0  52                   push edx
// 0051c5a1  ffd3                 call ebx
// 0051c5a3  8d45ac               lea eax, [ebp - 0x54]
// 0051c5a6  50                   push eax
// 0051c5a7  56                   push esi
// 0051c5a8  e8a3d40000           call 0x529a50
// 0051c5ad  83c414               add esp, 0x14
// 0051c5b0  6828948200           push 0x829428
// 0051c5b5  8d4dac               lea ecx, [ebp - 0x54]
// 0051c5b8  68888e8200           push 0x828e88
// 0051c5bd  51                   push ecx
// 0051c5be  ffd3                 call ebx
// 0051c5c0  8d55ac               lea edx, [ebp - 0x54]
// 0051c5c3  52                   push edx
// 0051c5c4  56                   push esi
// 0051c5c5  e886d40000           call 0x529a50
// 0051c5ca  68508e8200           push 0x828e50
// 0051c5cf  56                   push esi
// 0051c5d0  c7466c00000000       mov dword ptr [esi + 0x6c], 0
// 0051c5d7  e8d4d30000           call 0x5299b0
// 0051c5dc  83c41c               add esp, 0x1c
// 0051c5df  6800200000           push 0x2000
// 0051c5e4  56                   push esi
// 0051c5e5  c786b000000000200000 mov dword ptr [esi + 0xb0], 0x2000
// 0051c5ef  e8acde0000           call 0x52a4a0
// 0051c5f4  6a00                 push 0
// 0051c5f6  6a00                 push 0
// 0051c5f8  6a00                 push 0
// 0051c5fa  56                   push esi
// 0051c5fb  8986ac000000         mov dword ptr [esi + 0xac], eax
// 0051c601  e84a150000           call 0x51db50
// 0051c606  6a00                 push 0
// 0051c608  6a00                 push 0
// 0051c60a  6a01                 push 1
// 0051c60c  6a00                 push 0
// 0051c60e  56                   push esi
// 0051c60f  e85cfbffff           call 0x51c170
// 0051c614  6a00                 push 0
// 0051c616  56                   push esi
// 0051c617  e8b0571800           call 0x6a1dcc
// 0051c61c  83c434               add esp, 0x34
// 0051c61f  85c0                 test eax, eax
// 0051c621  7406                 je 0x51c629
// 0051c623  ff1560278000         call dword ptr [0x802760]
// 0051c629  8b45fc               mov eax, dword ptr [ebp - 4]
// 0051c62c  5f                   pop edi
// 0051c62d  5e                   pop esi
// 0051c62e  5b                   pop ebx
// 0051c62f  8be5                 mov esp, ebp
// 0051c631  5d                   pop ebp
// 0051c632  c3                   ret 
// library g3d-6.09-png-dll/pngwrite.c (function _png_create_write_struct_2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-png-dll pngwrite.c
