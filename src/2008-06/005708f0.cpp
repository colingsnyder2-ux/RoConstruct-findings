// roc 2008-06 005708f0  unit: RBX::Reflection::ClassDescriptor  size: 676 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005708f0
//
// 005708f0  6aff                 push -1
// 005708f2  683f017d00           push 0x7d013f
// 005708f7  64a100000000         mov eax, dword ptr fs:[0]
// 005708fd  50                   push eax
// 005708fe  64892500000000       mov dword ptr fs:[0], esp
// 00570905  83ec18               sub esp, 0x18
// 00570908  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057090c  53                   push ebx
// 0057090d  55                   push ebp
// 0057090e  56                   push esi
// 0057090f  57                   push edi
// 00570910  8bd9                 mov ebx, ecx
// 00570912  6aff                 push -1
// 00570914  50                   push eax
// 00570915  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00570919  c70330b78000         mov dword ptr [ebx], 0x80b730
// 0057091f  e86c36feff           call 0x553f90
// 00570924  83c408               add esp, 8
// 00570927  894304               mov dword ptr [ebx + 4], eax
// 0057092a  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0057092e  33ed                 xor ebp, ebp
// 00570930  896c2430             mov dword ptr [esp + 0x30], ebp
// 00570934  3bfd                 cmp edi, ebp
// 00570936  7405                 je 0x57093d
// 00570938  8d4708               lea eax, [edi + 8]
// 0057093b  eb02                 jmp 0x57093f
// 0057093d  33c0                 xor eax, eax
// 0057093f  50                   push eax
// 00570940  8d4b08               lea ecx, [ebx + 8]
// 00570943  e838fcffff           call 0x570580
// 00570948  c644243001           mov byte ptr [esp + 0x30], 1
// 0057094d  3bfd                 cmp edi, ebp
// 0057094f  7405                 je 0x570956
// 00570951  8d473c               lea eax, [edi + 0x3c]
// 00570954  eb02                 jmp 0x570958
// 00570956  33c0                 xor eax, eax
// 00570958  50                   push eax
// 00570959  8d4b3c               lea ecx, [ebx + 0x3c]
// 0057095c  e8fffcffff           call 0x570660
// 00570961  c644243002           mov byte ptr [esp + 0x30], 2
// 00570966  3bfd                 cmp edi, ebp
// 00570968  7405                 je 0x57096f
// 0057096a  8d4770               lea eax, [edi + 0x70]
// 0057096d  eb02                 jmp 0x570971
// 0057096f  33c0                 xor eax, eax
// 00570971  50                   push eax
// 00570972  8d4b70               lea ecx, [ebx + 0x70]
// 00570975  e8c6fdffff           call 0x570740
// 0057097a  6a04                 push 4
// 0057097c  c644243403           mov byte ptr [esp + 0x34], 3
// 00570981  c703bcf78200         mov dword ptr [ebx], 0x82f7bc
// 00570987  8db3a4000000         lea esi, [ebx + 0xa4]
// 0057098d  e88eff1200           call 0x6a0920
// 00570992  83c404               add esp, 4
// 00570995  3bc5                 cmp eax, ebp
// 00570997  7404                 je 0x57099d
// 00570999  8930                 mov dword ptr [eax], esi
// 0057099b  eb02                 jmp 0x57099f
// 0057099d  33c0                 xor eax, eax
// 0057099f  8906                 mov dword ptr [esi], eax
// 005709a1  896e0c               mov dword ptr [esi + 0xc], ebp
// 005709a4  896e10               mov dword ptr [esi + 0x10], ebp
// 005709a7  896e14               mov dword ptr [esi + 0x14], ebp
// 005709aa  c644243005           mov byte ptr [esp + 0x30], 5
// 005709af  89bbbc000000         mov dword ptr [ebx + 0xbc], edi
// 005709b5  e876f4ffff           call 0x56fe30
// 005709ba  8bc8                 mov ecx, eax
// 005709bc  89442420             mov dword ptr [esp + 0x20], eax
// 005709c0  e8cb26ffff           call 0x563090
// 005709c5  c644242401           mov byte ptr [esp + 0x24], 1
// 005709ca  8db7a4000000         lea esi, [edi + 0xa4]
// 005709d0  8b7e10               mov edi, dword ptr [esi + 0x10]
// 005709d3  c644243006           mov byte ptr [esp + 0x30], 6
// 005709d8  895c243c             mov dword ptr [esp + 0x3c], ebx
// 005709dc  397e0c               cmp dword ptr [esi + 0xc], edi
// 005709df  7606                 jbe 0x5709e7
// 005709e1  ff1590288000         call dword ptr [0x802890]
// 005709e7  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 005709ea  3b6e10               cmp ebp, dword ptr [esi + 0x10]
// 005709ed  7606                 jbe 0x5709f5
// 005709ef  ff1590288000         call dword ptr [0x802890]
// 005709f5  8b0e                 mov ecx, dword ptr [esi]
// 005709f7  6a00                 push 0
// 005709f9  6800b55600           push 0x56b500
// 005709fe  8d542444             lea edx, [esp + 0x44]
// 00570a02  52                   push edx
// 00570a03  57                   push edi
// 00570a04  55                   push ebp
// 00570a05  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00570a09  896c2430             mov dword ptr [esp + 0x30], ebp
// 00570a0d  e87ef4ffff           call 0x56fe90
// 00570a12  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00570a16  83c414               add esp, 0x14
// 00570a19  8d4c243c             lea ecx, [esp + 0x3c]
// 00570a1d  51                   push ecx
// 00570a1e  50                   push eax
// 00570a1f  52                   push edx
// 00570a20  8d442424             lea eax, [esp + 0x24]
// 00570a24  50                   push eax
// 00570a25  8bce                 mov ecx, esi
// 00570a27  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00570a2b  e83072f5ff           call 0x4c7c60
// 00570a30  68b44c9700           push 0x974cb4
// 00570a35  6850ff5600           push 0x56ff50
// 00570a3a  e8f168feff           call 0x557330
// 00570a3f  83c408               add esp, 8
// 00570a42  e8a9f4ffff           call 0x56fef0
// 00570a47  8bf0                 mov esi, eax
// 00570a49  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00570a4c  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 00570a4f  7606                 jbe 0x570a57
// 00570a51  ff1590288000         call dword ptr [0x802890]
// 00570a57  8b2e                 mov ebp, dword ptr [esi]
// 00570a59  8da42400000000       lea esp, [esp]
// 00570a60  68b44c9700           push 0x974cb4
// 00570a65  6850ff5600           push 0x56ff50
// 00570a6a  e8c168feff           call 0x557330
// 00570a6f  83c408               add esp, 8
// 00570a72  f605b04c970001       test byte ptr [0x974cb0], 1
// 00570a79  754f                 jne 0x570aca
// 00570a7b  830db04c970001       or dword ptr [0x974cb0], 1
// 00570a82  6a04                 push 4
// 00570a84  c644243407           mov byte ptr [esp + 0x34], 7
// 00570a89  e892fe1200           call 0x6a0920
// 00570a8e  33c9                 xor ecx, ecx
// 00570a90  83c404               add esp, 4
// 00570a93  3bc1                 cmp eax, ecx
// 00570a95  7408                 je 0x570a9f
// 00570a97  c700984c9700         mov dword ptr [eax], 0x974c98
// 00570a9d  eb02                 jmp 0x570aa1
// 00570a9f  33c0                 xor eax, eax
// 00570aa1  a3984c9700           mov dword ptr [0x974c98], eax
// 00570aa6  6810d37f00           push 0x7fd310
// 00570aab  890da44c9700         mov dword ptr [0x974ca4], ecx
// 00570ab1  890da84c9700         mov dword ptr [0x974ca8], ecx
// 00570ab7  890dac4c9700         mov dword ptr [0x974cac], ecx
// 00570abd  e8ed0c1300           call 0x6a17af
// 00570ac2  83c404               add esp, 4
// 00570ac5  c644243006           mov byte ptr [esp + 0x30], 6
// 00570aca  a1a84c9700           mov eax, dword ptr [0x974ca8]
// 00570acf  8bf0                 mov esi, eax
// 00570ad1  3905a44c9700         cmp dword ptr [0x974ca4], eax
// 00570ad7  7606                 jbe 0x570adf
// 00570ad9  ff1590288000         call dword ptr [0x802890]
// 00570adf  85ed                 test ebp, ebp
// 00570ae1  7408                 je 0x570aeb
// 00570ae3  3b2d984c9700         cmp ebp, dword ptr [0x974c98]
// 00570ae9  7406                 je 0x570af1
// 00570aeb  ff1590288000         call dword ptr [0x802890]
// 00570af1  3bfe                 cmp edi, esi
// 00570af3  744c                 je 0x570b41
// 00570af5  8b3590288000         mov esi, dword ptr [0x802890]
// 00570afb  85ed                 test ebp, ebp
// 00570afd  7538                 jne 0x570b37
// 00570aff  ffd6                 call esi
// 00570b01  33c0                 xor eax, eax
// 00570b03  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00570b06  7202                 jb 0x570b0a
// 00570b08  ffd6                 call esi
// 00570b0a  8b07                 mov eax, dword ptr [edi]
// 00570b0c  8b4804               mov ecx, dword ptr [eax + 4]
// 00570b0f  8b5304               mov edx, dword ptr [ebx + 4]
// 00570b12  51                   push ecx
// 00570b13  52                   push edx
// 00570b14  e887efeaff           call 0x41faa0
// 00570b19  83c408               add esp, 8
// 00570b1c  85c0                 test eax, eax
// 00570b1e  7c21                 jl 0x570b41
// 00570b20  85ed                 test ebp, ebp
// 00570b22  7518                 jne 0x570b3c
// 00570b24  ffd6                 call esi
// 00570b26  33c0                 xor eax, eax
// 00570b28  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00570b2b  7202                 jb 0x570b2f
// 00570b2d  ffd6                 call esi
// 00570b2f  83c704               add edi, 4
// 00570b32  e929ffffff           jmp 0x570a60
// 00570b37  8b4500               mov eax, dword ptr [ebp]
// 00570b3a  ebc7                 jmp 0x570b03
// 00570b3c  8b4500               mov eax, dword ptr [ebp]
// 00570b3f  ebe7                 jmp 0x570b28
// 00570b41  68b44c9700           push 0x974cb4
// 00570b46  6850ff5600           push 0x56ff50
// 00570b4b  895c2444             mov dword ptr [esp + 0x44], ebx
// 00570b4f  e8dc67feff           call 0x557330
// 00570b54  83c408               add esp, 8
// 00570b57  8d44243c             lea eax, [esp + 0x3c]
// 00570b5b  50                   push eax
// 00570b5c  57                   push edi
// 00570b5d  8d4c2420             lea ecx, [esp + 0x20]
// 00570b61  55                   push ebp
// 00570b62  51                   push ecx
// 00570b63  e888f3ffff           call 0x56fef0
// 00570b68  8bc8                 mov ecx, eax
// 00570b6a  e8f170f5ff           call 0x4c7c60
// 00570b6f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00570b73  c644243005           mov byte ptr [esp + 0x30], 5
// 00570b78  e86325ffff           call 0x5630e0
// 00570b7d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00570b81  5f                   pop edi
// 00570b82  5e                   pop esi
// 00570b83  5d                   pop ebp
// 00570b84  8bc3                 mov eax, ebx
// 00570b86  5b                   pop ebx
// 00570b87  64890d00000000       mov dword ptr fs:[0], ecx
// 00570b8e  83c424               add esp, 0x24
// 00570b91  c20800               ret 8
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ??0ClassDescriptor@Reflection@RBX@@QAE@AAV012@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
