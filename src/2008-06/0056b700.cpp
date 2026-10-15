// roc 2008-06 0056b700  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 931 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056b700
//
// 0056b700  6aff                 push -1
// 0056b702  6830fb7c00           push 0x7cfb30
// 0056b707  64a100000000         mov eax, dword ptr fs:[0]
// 0056b70d  50                   push eax
// 0056b70e  64892500000000       mov dword ptr fs:[0], esp
// 0056b715  83ec10               sub esp, 0x10
// 0056b718  53                   push ebx
// 0056b719  55                   push ebp
// 0056b71a  56                   push esi
// 0056b71b  57                   push edi
// 0056b71c  8bf1                 mov esi, ecx
// 0056b71e  e80dfeffff           call 0x56b530
// 0056b723  8bc8                 mov ecx, eax
// 0056b725  89442418             mov dword ptr [esp + 0x18], eax
// 0056b729  e86279ffff           call 0x563090
// 0056b72e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0056b733  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0056b736  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0056b73e  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0056b741  7606                 jbe 0x56b749
// 0056b743  ff1590288000         call dword ptr [0x802890]
// 0056b749  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0056b74c  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 0056b74f  7606                 jbe 0x56b757
// 0056b751  ff1590288000         call dword ptr [0x802890]
// 0056b757  8b1e                 mov ebx, dword ptr [esi]
// 0056b759  6a00                 push 0
// 0056b75b  6800b55600           push 0x56b500
// 0056b760  8d442438             lea eax, [esp + 0x38]
// 0056b764  50                   push eax
// 0056b765  55                   push ebp
// 0056b766  57                   push edi
// 0056b767  897c2428             mov dword ptr [esp + 0x28], edi
// 0056b76b  e820470000           call 0x56fe90
// 0056b770  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0056b773  83c414               add esp, 0x14
// 0056b776  8be8                 mov ebp, eax
// 0056b778  397e0c               cmp dword ptr [esi + 0xc], edi
// 0056b77b  7606                 jbe 0x56b783
// 0056b77d  ff1590288000         call dword ptr [0x802890]
// 0056b783  8b06                 mov eax, dword ptr [esi]
// 0056b785  85db                 test ebx, ebx
// 0056b787  7404                 je 0x56b78d
// 0056b789  3bd8                 cmp ebx, eax
// 0056b78b  7406                 je 0x56b793
// 0056b78d  ff1590288000         call dword ptr [0x802890]
// 0056b793  3bef                 cmp ebp, edi
// 0056b795  7424                 je 0x56b7bb
// 0056b797  85db                 test ebx, ebx
// 0056b799  0f8599000000         jne 0x56b838
// 0056b79f  ff1590288000         call dword ptr [0x802890]
// 0056b7a5  33c0                 xor eax, eax
// 0056b7a7  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0056b7aa  7206                 jb 0x56b7b2
// 0056b7ac  ff1590288000         call dword ptr [0x802890]
// 0056b7b2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0056b7b6  394d00               cmp dword ptr [ebp], ecx
// 0056b7b9  7413                 je 0x56b7ce
// 0056b7bb  8d542430             lea edx, [esp + 0x30]
// 0056b7bf  52                   push edx
// 0056b7c0  55                   push ebp
// 0056b7c1  53                   push ebx
// 0056b7c2  8d44241c             lea eax, [esp + 0x1c]
// 0056b7c6  50                   push eax
// 0056b7c7  8bce                 mov ecx, esi
// 0056b7c9  e892c4f5ff           call 0x4c7c60
// 0056b7ce  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 0056b7d1  3b5e28               cmp ebx, dword ptr [esi + 0x28]
// 0056b7d4  7606                 jbe 0x56b7dc
// 0056b7d6  ff1590288000         call dword ptr [0x802890]
// 0056b7dc  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0056b7df  90                   nop 
// 0056b7e0  8b6e28               mov ebp, dword ptr [esi + 0x28]
// 0056b7e3  396e24               cmp dword ptr [esi + 0x24], ebp
// 0056b7e6  7606                 jbe 0x56b7ee
// 0056b7e8  ff1590288000         call dword ptr [0x802890]
// 0056b7ee  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056b7f1  85ff                 test edi, edi
// 0056b7f3  7404                 je 0x56b7f9
// 0056b7f5  3bf8                 cmp edi, eax
// 0056b7f7  7406                 je 0x56b7ff
// 0056b7f9  ff1590288000         call dword ptr [0x802890]
// 0056b7ff  3bdd                 cmp ebx, ebp
// 0056b801  7444                 je 0x56b847
// 0056b803  8b2d90288000         mov ebp, dword ptr [0x802890]
// 0056b809  85ff                 test edi, edi
// 0056b80b  7532                 jne 0x56b83f
// 0056b80d  ffd5                 call ebp
// 0056b80f  33c0                 xor eax, eax
// 0056b811  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0056b814  7202                 jb 0x56b818
// 0056b816  ffd5                 call ebp
// 0056b818  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0056b81c  51                   push ecx
// 0056b81d  8b0b                 mov ecx, dword ptr [ebx]
// 0056b81f  e8dcfeffff           call 0x56b700
// 0056b824  85ff                 test edi, edi
// 0056b826  751b                 jne 0x56b843
// 0056b828  ffd5                 call ebp
// 0056b82a  33c0                 xor eax, eax
// 0056b82c  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0056b82f  7202                 jb 0x56b833
// 0056b831  ffd5                 call ebp
// 0056b833  83c304               add ebx, 4
// 0056b836  eba8                 jmp 0x56b7e0
// 0056b838  8b03                 mov eax, dword ptr [ebx]
// 0056b83a  e968ffffff           jmp 0x56b7a7
// 0056b83f  8b07                 mov eax, dword ptr [edi]
// 0056b841  ebce                 jmp 0x56b811
// 0056b843  8b07                 mov eax, dword ptr [edi]
// 0056b845  ebe5                 jmp 0x56b82c
// 0056b847  68f04a9700           push 0x974af0
// 0056b84c  68f0b65600           push 0x56b6f0
// 0056b851  e8dabafeff           call 0x557330
// 0056b856  83c408               add esp, 8
// 0056b859  f605ec4a970001       test byte ptr [0x974aec], 1
// 0056b860  7551                 jne 0x56b8b3
// 0056b862  830dec4a970001       or dword ptr [0x974aec], 1
// 0056b869  6a04                 push 4
// 0056b86b  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0056b870  e8ab501300           call 0x6a0920
// 0056b875  33ed                 xor ebp, ebp
// 0056b877  83c404               add esp, 4
// 0056b87a  3bc5                 cmp eax, ebp
// 0056b87c  7408                 je 0x56b886
// 0056b87e  c700d44a9700         mov dword ptr [eax], 0x974ad4
// 0056b884  eb02                 jmp 0x56b888
// 0056b886  33c0                 xor eax, eax
// 0056b888  a3d44a9700           mov dword ptr [0x974ad4], eax
// 0056b88d  6860d17f00           push 0x7fd160
// 0056b892  892de04a9700         mov dword ptr [0x974ae0], ebp
// 0056b898  892de44a9700         mov dword ptr [0x974ae4], ebp
// 0056b89e  892de84a9700         mov dword ptr [0x974ae8], ebp
// 0056b8a4  e8065f1300           call 0x6a17af
// 0056b8a9  83c404               add esp, 4
// 0056b8ac  c644242800           mov byte ptr [esp + 0x28], 0
// 0056b8b1  eb02                 jmp 0x56b8b5
// 0056b8b3  33ed                 xor ebp, ebp
// 0056b8b5  8b35e04a9700         mov esi, dword ptr [0x974ae0]
// 0056b8bb  3b35e44a9700         cmp esi, dword ptr [0x974ae4]
// 0056b8c1  7606                 jbe 0x56b8c9
// 0056b8c3  ff1590288000         call dword ptr [0x802890]
// 0056b8c9  8b3dd44a9700         mov edi, dword ptr [0x974ad4]
// 0056b8cf  897c2410             mov dword ptr [esp + 0x10], edi
// 0056b8d3  8bde                 mov ebx, esi
// 0056b8d5  eb09                 jmp 0x56b8e0
// 0056b8d7  8da42400000000       lea esp, [esp]
// 0056b8de  8bff                 mov edi, edi
// 0056b8e0  68f04a9700           push 0x974af0
// 0056b8e5  68f0b65600           push 0x56b6f0
// 0056b8ea  e841bafeff           call 0x557330
// 0056b8ef  83c408               add esp, 8
// 0056b8f2  f605ec4a970001       test byte ptr [0x974aec], 1
// 0056b8f9  754d                 jne 0x56b948
// 0056b8fb  830dec4a970001       or dword ptr [0x974aec], 1
// 0056b902  6a04                 push 4
// 0056b904  c644242c03           mov byte ptr [esp + 0x2c], 3
// 0056b909  e812501300           call 0x6a0920
// 0056b90e  83c404               add esp, 4
// 0056b911  3bc5                 cmp eax, ebp
// 0056b913  7408                 je 0x56b91d
// 0056b915  c700d44a9700         mov dword ptr [eax], 0x974ad4
// 0056b91b  eb02                 jmp 0x56b91f
// 0056b91d  33c0                 xor eax, eax
// 0056b91f  a3d44a9700           mov dword ptr [0x974ad4], eax
// 0056b924  6860d17f00           push 0x7fd160
// 0056b929  892de04a9700         mov dword ptr [0x974ae0], ebp
// 0056b92f  892de44a9700         mov dword ptr [0x974ae4], ebp
// 0056b935  892de84a9700         mov dword ptr [0x974ae8], ebp
// 0056b93b  e86f5e1300           call 0x6a17af
// 0056b940  83c404               add esp, 4
// 0056b943  c644242800           mov byte ptr [esp + 0x28], 0
// 0056b948  a1e44a9700           mov eax, dword ptr [0x974ae4]
// 0056b94d  8bf0                 mov esi, eax
// 0056b94f  3905e04a9700         cmp dword ptr [0x974ae0], eax
// 0056b955  7606                 jbe 0x56b95d
// 0056b957  ff1590288000         call dword ptr [0x802890]
// 0056b95d  3bfd                 cmp edi, ebp
// 0056b95f  7408                 je 0x56b969
// 0056b961  3b3dd44a9700         cmp edi, dword ptr [0x974ad4]
// 0056b967  7406                 je 0x56b96f
// 0056b969  ff1590288000         call dword ptr [0x802890]
// 0056b96f  3bde                 cmp ebx, esi
// 0056b971  0f8488000000         je 0x56b9ff
// 0056b977  3bfd                 cmp edi, ebp
// 0056b979  7578                 jne 0x56b9f3
// 0056b97b  ff1590288000         call dword ptr [0x802890]
// 0056b981  33c0                 xor eax, eax
// 0056b983  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0056b986  7206                 jb 0x56b98e
// 0056b988  ff1590288000         call dword ptr [0x802890]
// 0056b98e  8b33                 mov esi, dword ptr [ebx]
// 0056b990  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0056b994  3bf7                 cmp esi, edi
// 0056b996  0f84e1000000         je 0x56ba7d
// 0056b99c  8b5604               mov edx, dword ptr [esi + 4]
// 0056b99f  8b4704               mov eax, dword ptr [edi + 4]
// 0056b9a2  52                   push edx
// 0056b9a3  50                   push eax
// 0056b9a4  e8f740ebff           call 0x41faa0
// 0056b9a9  83c408               add esp, 8
// 0056b9ac  3bc5                 cmp eax, ebp
// 0056b9ae  7c4b                 jl 0x56b9fb
// 0056b9b0  751a                 jne 0x56b9cc
// 0056b9b2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0056b9b5  8b5104               mov edx, dword ptr [ecx + 4]
// 0056b9b8  8b470c               mov eax, dword ptr [edi + 0xc]
// 0056b9bb  8b4804               mov ecx, dword ptr [eax + 4]
// 0056b9be  52                   push edx
// 0056b9bf  51                   push ecx
// 0056b9c0  e8db40ebff           call 0x41faa0
// 0056b9c5  83c408               add esp, 8
// 0056b9c8  3bc5                 cmp eax, ebp
// 0056b9ca  7c2f                 jl 0x56b9fb
// 0056b9cc  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056b9d0  3bc5                 cmp eax, ebp
// 0056b9d2  7523                 jne 0x56b9f7
// 0056b9d4  ff1590288000         call dword ptr [0x802890]
// 0056b9da  33c0                 xor eax, eax
// 0056b9dc  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0056b9df  7206                 jb 0x56b9e7
// 0056b9e1  ff1590288000         call dword ptr [0x802890]
// 0056b9e7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056b9eb  83c304               add ebx, 4
// 0056b9ee  e9edfeffff           jmp 0x56b8e0
// 0056b9f3  8b07                 mov eax, dword ptr [edi]
// 0056b9f5  eb8c                 jmp 0x56b983
// 0056b9f7  8b00                 mov eax, dword ptr [eax]
// 0056b9f9  ebe1                 jmp 0x56b9dc
// 0056b9fb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056b9ff  68f04a9700           push 0x974af0
// 0056ba04  68f0b65600           push 0x56b6f0
// 0056ba09  e822b9feff           call 0x557330
// 0056ba0e  83c408               add esp, 8
// 0056ba11  f605ec4a970001       test byte ptr [0x974aec], 1
// 0056ba18  754d                 jne 0x56ba67
// 0056ba1a  830dec4a970001       or dword ptr [0x974aec], 1
// 0056ba21  6a04                 push 4
// 0056ba23  c644242c05           mov byte ptr [esp + 0x2c], 5
// 0056ba28  e8f34e1300           call 0x6a0920
// 0056ba2d  83c404               add esp, 4
// 0056ba30  3bc5                 cmp eax, ebp
// 0056ba32  7408                 je 0x56ba3c
// 0056ba34  c700d44a9700         mov dword ptr [eax], 0x974ad4
// 0056ba3a  eb02                 jmp 0x56ba3e
// 0056ba3c  33c0                 xor eax, eax
// 0056ba3e  a3d44a9700           mov dword ptr [0x974ad4], eax
// 0056ba43  6860d17f00           push 0x7fd160
// 0056ba48  892de04a9700         mov dword ptr [0x974ae0], ebp
// 0056ba4e  892de44a9700         mov dword ptr [0x974ae4], ebp
// 0056ba54  892de84a9700         mov dword ptr [0x974ae8], ebp
// 0056ba5a  e8505d1300           call 0x6a17af
// 0056ba5f  83c404               add esp, 4
// 0056ba62  c644242800           mov byte ptr [esp + 0x28], 0
// 0056ba67  8d542430             lea edx, [esp + 0x30]
// 0056ba6b  52                   push edx
// 0056ba6c  53                   push ebx
// 0056ba6d  57                   push edi
// 0056ba6e  8d44241c             lea eax, [esp + 0x1c]
// 0056ba72  50                   push eax
// 0056ba73  b9d44a9700           mov ecx, 0x974ad4
// 0056ba78  e8e3c1f5ff           call 0x4c7c60
// 0056ba7d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056ba81  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0056ba89  e85276ffff           call 0x5630e0
// 0056ba8e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056ba92  5f                   pop edi
// 0056ba93  5e                   pop esi
// 0056ba94  5d                   pop ebp
// 0056ba95  5b                   pop ebx
// 0056ba96  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ba9d  83c41c               add esp, 0x1c
// 0056baa0  c20400               ret 4
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?declare@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@QAEXPAVPropertyDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
