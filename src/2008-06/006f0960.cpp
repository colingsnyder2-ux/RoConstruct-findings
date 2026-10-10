// roc 2008-06 006f0960  unit: CXTPPopupBar  size: 441 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f0960
//
// 006f0960  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006f0964  83ec08               sub esp, 8
// 006f0967  53                   push ebx
// 006f0968  55                   push ebp
// 006f0969  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006f096d  56                   push esi
// 006f096e  57                   push edi
// 006f096f  8bf1                 mov esi, ecx
// 006f0971  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006f0975  83ec10               sub esp, 0x10
// 006f0978  8bc4                 mov eax, esp
// 006f097a  8908                 mov dword ptr [eax], ecx
// 006f097c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006f0980  895004               mov dword ptr [eax + 4], edx
// 006f0983  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006f0987  894808               mov dword ptr [eax + 8], ecx
// 006f098a  55                   push ebp
// 006f098b  8bce                 mov ecx, esi
// 006f098d  89500c               mov dword ptr [eax + 0xc], edx
// 006f0990  e8db6dfcff           call 0x6b7770
// 006f0995  83be1802000000       cmp dword ptr [esi + 0x218], 0
// 006f099c  0f84c0000000         je 0x6f0a62
// 006f09a2  8d9e24020000         lea ebx, [esi + 0x224]
// 006f09a8  53                   push ebx
// 006f09a9  ff156c2d8000         call dword ptr [0x802d6c]
// 006f09af  85c0                 test eax, eax
// 006f09b1  754f                 jne 0x6f0a02
// 006f09b3  8b4308               mov eax, dword ptr [ebx + 8]
// 006f09b6  0303                 add eax, dword ptr [ebx]
// 006f09b8  8bce                 mov ecx, esi
// 006f09ba  99                   cdq 
// 006f09bb  2bc2                 sub eax, edx
// 006f09bd  8bf8                 mov edi, eax
// 006f09bf  8b430c               mov eax, dword ptr [ebx + 0xc]
// 006f09c2  034304               add eax, dword ptr [ebx + 4]
// 006f09c5  d1ff                 sar edi, 1
// 006f09c7  99                   cdq 
// 006f09c8  2bc2                 sub eax, edx
// 006f09ca  8bd8                 mov ebx, eax
// 006f09cc  d1fb                 sar ebx, 1
// 006f09ce  e8fd44fcff           call 0x6b4ed0
// 006f09d3  e868f3feff           call 0x6dfd40
// 006f09d8  6a12                 push 0x12
// 006f09da  8bc8                 mov ecx, eax
// 006f09dc  e83febfeff           call 0x6df520
// 006f09e1  50                   push eax
// 006f09e2  8d4b03               lea ecx, [ebx + 3]
// 006f09e5  51                   push ecx
// 006f09e6  57                   push edi
// 006f09e7  8d5703               lea edx, [edi + 3]
// 006f09ea  8954241c             mov dword ptr [esp + 0x1c], edx
// 006f09ee  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006f09f2  53                   push ebx
// 006f09f3  50                   push eax
// 006f09f4  8d57fd               lea edx, [edi - 3]
// 006f09f7  53                   push ebx
// 006f09f8  52                   push edx
// 006f09f9  55                   push ebp
// 006f09fa  e811800000           call 0x6f8a10
// 006f09ff  83c420               add esp, 0x20
// 006f0a02  8d9e40020000         lea ebx, [esi + 0x240]
// 006f0a08  53                   push ebx
// 006f0a09  ff156c2d8000         call dword ptr [0x802d6c]
// 006f0a0f  85c0                 test eax, eax
// 006f0a11  754f                 jne 0x6f0a62
// 006f0a13  8b4308               mov eax, dword ptr [ebx + 8]
// 006f0a16  0303                 add eax, dword ptr [ebx]
// 006f0a18  8bce                 mov ecx, esi
// 006f0a1a  99                   cdq 
// 006f0a1b  2bc2                 sub eax, edx
// 006f0a1d  8bf8                 mov edi, eax
// 006f0a1f  8b430c               mov eax, dword ptr [ebx + 0xc]
// 006f0a22  034304               add eax, dword ptr [ebx + 4]
// 006f0a25  d1ff                 sar edi, 1
// 006f0a27  99                   cdq 
// 006f0a28  2bc2                 sub eax, edx
// 006f0a2a  8bd8                 mov ebx, eax
// 006f0a2c  d1fb                 sar ebx, 1
// 006f0a2e  e89d44fcff           call 0x6b4ed0
// 006f0a33  e808f3feff           call 0x6dfd40
// 006f0a38  6a12                 push 0x12
// 006f0a3a  8bc8                 mov ecx, eax
// 006f0a3c  e8dfeafeff           call 0x6df520
// 006f0a41  50                   push eax
// 006f0a42  8d4bfd               lea ecx, [ebx - 3]
// 006f0a45  51                   push ecx
// 006f0a46  57                   push edi
// 006f0a47  8d5703               lea edx, [edi + 3]
// 006f0a4a  8954241c             mov dword ptr [esp + 0x1c], edx
// 006f0a4e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006f0a52  53                   push ebx
// 006f0a53  50                   push eax
// 006f0a54  8d57fd               lea edx, [edi - 3]
// 006f0a57  53                   push ebx
// 006f0a58  52                   push edx
// 006f0a59  55                   push ebp
// 006f0a5a  e8b17f0000           call 0x6f8a10
// 006f0a5f  83c420               add esp, 0x20
// 006f0a62  83beb001000000       cmp dword ptr [esi + 0x1b0], 0
// 006f0a69  7455                 je 0x6f0ac0
// 006f0a6b  8bce                 mov ecx, esi
// 006f0a6d  e82e51fcff           call 0x6b5ba0
// 006f0a72  85c0                 test eax, eax
// 006f0a74  7e4a                 jle 0x6f0ac0
// 006f0a76  8bce                 mov ecx, esi
// 006f0a78  e85344fcff           call 0x6b4ed0
// 006f0a7d  8b8ed8010000         mov ecx, dword ptr [esi + 0x1d8]
// 006f0a83  8b38                 mov edi, dword ptr [eax]
// 006f0a85  6a01                 push 1
// 006f0a87  51                   push ecx
// 006f0a88  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 006f0a8e  83ec10               sub esp, 0x10
// 006f0a91  8bd4                 mov edx, esp
// 006f0a93  890a                 mov dword ptr [edx], ecx
// 006f0a95  8b8eb8010000         mov ecx, dword ptr [esi + 0x1b8]
// 006f0a9b  894a04               mov dword ptr [edx + 4], ecx
// 006f0a9e  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 006f0aa4  894a08               mov dword ptr [edx + 8], ecx
// 006f0aa7  8b8ec0010000         mov ecx, dword ptr [esi + 0x1c0]
// 006f0aad  894a0c               mov dword ptr [edx + 0xc], ecx
// 006f0ab0  55                   push ebp
// 006f0ab1  8d54242c             lea edx, [esp + 0x2c]
// 006f0ab5  8bc8                 mov ecx, eax
// 006f0ab7  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 006f0abd  52                   push edx
// 006f0abe  ffd0                 call eax
// 006f0ac0  8dbec4010000         lea edi, [esi + 0x1c4]
// 006f0ac6  57                   push edi
// 006f0ac7  ff156c2d8000         call dword ptr [0x802d6c]
// 006f0acd  85c0                 test eax, eax
// 006f0acf  753e                 jne 0x6f0b0f
// 006f0ad1  3986d4010000         cmp dword ptr [esi + 0x1d4], eax
// 006f0ad7  7436                 je 0x6f0b0f
// 006f0ad9  8bce                 mov ecx, esi
// 006f0adb  e8f043fcff           call 0x6b4ed0
// 006f0ae0  8b8ed4010000         mov ecx, dword ptr [esi + 0x1d4]
// 006f0ae6  8b18                 mov ebx, dword ptr [eax]
// 006f0ae8  51                   push ecx
// 006f0ae9  8b0f                 mov ecx, dword ptr [edi]
// 006f0aeb  83ec10               sub esp, 0x10
// 006f0aee  8bd4                 mov edx, esp
// 006f0af0  890a                 mov dword ptr [edx], ecx
// 006f0af2  8b4f04               mov ecx, dword ptr [edi + 4]
// 006f0af5  894a04               mov dword ptr [edx + 4], ecx
// 006f0af8  8b4f08               mov ecx, dword ptr [edi + 8]
// 006f0afb  894a08               mov dword ptr [edx + 8], ecx
// 006f0afe  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 006f0b01  894a0c               mov dword ptr [edx + 0xc], ecx
// 006f0b04  8b93bc000000         mov edx, dword ptr [ebx + 0xbc]
// 006f0b0a  55                   push ebp
// 006f0b0b  8bc8                 mov ecx, eax
// 006f0b0d  ffd2                 call edx
// 006f0b0f  5f                   pop edi
// 006f0b10  5e                   pop esi
// 006f0b11  5d                   pop ebp
// 006f0b12  5b                   pop ebx
// 006f0b13  83c408               add esp, 8
// 006f0b16  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?DrawCommandBar@CXTPPopupBar@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
