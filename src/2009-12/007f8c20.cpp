// roc 2009-12 007f8c20  unit: CRobloxControlColorSelector  size: 517 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f8c20
//
// 007f8c20  53                   push ebx
// 007f8c21  56                   push esi
// 007f8c22  57                   push edi
// 007f8c23  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007f8c27  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 007f8c2d  8bf1                 mov esi, ecx
// 007f8c2f  8b16                 mov edx, dword ptr [esi]
// 007f8c31  8b92b8000000         mov edx, dword ptr [edx + 0xb8]
// 007f8c37  898684000000         mov dword ptr [esi + 0x84], eax
// 007f8c3d  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 007f8c43  50                   push eax
// 007f8c44  ffd2                 call edx
// 007f8c46  8b477c               mov eax, dword ptr [edi + 0x7c]
// 007f8c49  89467c               mov dword ptr [esi + 0x7c], eax
// 007f8c4c  8b8fd4000000         mov ecx, dword ptr [edi + 0xd4]
// 007f8c52  898ed4000000         mov dword ptr [esi + 0xd4], ecx
// 007f8c58  8b97fc000000         mov edx, dword ptr [edi + 0xfc]
// 007f8c5e  8d87d8000000         lea eax, [edi + 0xd8]
// 007f8c64  50                   push eax
// 007f8c65  8d8ed8000000         lea ecx, [esi + 0xd8]
// 007f8c6b  8996fc000000         mov dword ptr [esi + 0xfc], edx
// 007f8c71  ff1538d59800         call dword ptr [0x98d538]
// 007f8c77  8d8fe0000000         lea ecx, [edi + 0xe0]
// 007f8c7d  51                   push ecx
// 007f8c7e  8d8ee0000000         lea ecx, [esi + 0xe0]
// 007f8c84  ff1538d59800         call dword ptr [0x98d538]
// 007f8c8a  8d97e4000000         lea edx, [edi + 0xe4]
// 007f8c90  52                   push edx
// 007f8c91  8d8ee4000000         lea ecx, [esi + 0xe4]
// 007f8c97  ff1538d59800         call dword ptr [0x98d538]
// 007f8c9d  8d87e8000000         lea eax, [edi + 0xe8]
// 007f8ca3  50                   push eax
// 007f8ca4  8d8ee8000000         lea ecx, [esi + 0xe8]
// 007f8caa  ff1538d59800         call dword ptr [0x98d538]
// 007f8cb0  8d8fec000000         lea ecx, [edi + 0xec]
// 007f8cb6  51                   push ecx
// 007f8cb7  8d8eec000000         lea ecx, [esi + 0xec]
// 007f8cbd  ff1538d59800         call dword ptr [0x98d538]
// 007f8cc3  8d97f0000000         lea edx, [edi + 0xf0]
// 007f8cc9  52                   push edx
// 007f8cca  8d8ef0000000         lea ecx, [esi + 0xf0]
// 007f8cd0  ff1538d59800         call dword ptr [0x98d538]
// 007f8cd6  8d87f4000000         lea eax, [edi + 0xf4]
// 007f8cdc  50                   push eax
// 007f8cdd  8d8ef4000000         lea ecx, [esi + 0xf4]
// 007f8ce3  ff1538d59800         call dword ptr [0x98d538]
// 007f8ce9  8b8f90000000         mov ecx, dword ptr [edi + 0x90]
// 007f8cef  898e90000000         mov dword ptr [esi + 0x90], ecx
// 007f8cf5  8b9788000000         mov edx, dword ptr [edi + 0x88]
// 007f8cfb  899688000000         mov dword ptr [esi + 0x88], edx
// 007f8d01  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 007f8d07  89868c000000         mov dword ptr [esi + 0x8c], eax
// 007f8d0d  8b8fac000000         mov ecx, dword ptr [edi + 0xac]
// 007f8d13  8d97dc000000         lea edx, [edi + 0xdc]
// 007f8d19  898eac000000         mov dword ptr [esi + 0xac], ecx
// 007f8d1f  52                   push edx
// 007f8d20  8d8edc000000         lea ecx, [esi + 0xdc]
// 007f8d26  ff1538d59800         call dword ptr [0x98d538]
// 007f8d2c  8d8708010000         lea eax, [edi + 0x108]
// 007f8d32  50                   push eax
// 007f8d33  8d8e08010000         lea ecx, [esi + 0x108]
// 007f8d39  ff1538d59800         call dword ptr [0x98d538]
// 007f8d3f  8b8fd0000000         mov ecx, dword ptr [edi + 0xd0]
// 007f8d45  898ed0000000         mov dword ptr [esi + 0xd0], ecx
// 007f8d4b  8b970c010000         mov edx, dword ptr [edi + 0x10c]
// 007f8d51  89960c010000         mov dword ptr [esi + 0x10c], edx
// 007f8d57  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 007f8d5d  89869c000000         mov dword ptr [esi + 0x9c], eax
// 007f8d63  8b8fa0000000         mov ecx, dword ptr [edi + 0xa0]
// 007f8d69  898ea0000000         mov dword ptr [esi + 0xa0], ecx
// 007f8d6f  8b974c010000         mov edx, dword ptr [edi + 0x14c]
// 007f8d75  89964c010000         mov dword ptr [esi + 0x14c], edx
// 007f8d7b  8b8748010000         mov eax, dword ptr [edi + 0x148]
// 007f8d81  8b16                 mov edx, dword ptr [esi]
// 007f8d83  898648010000         mov dword ptr [esi + 0x148], eax
// 007f8d89  8b821c010000         mov eax, dword ptr [edx + 0x11c]
// 007f8d8f  8b9f60010000         mov ebx, dword ptr [edi + 0x160]
// 007f8d95  8bce                 mov ecx, esi
// 007f8d97  ffd0                 call eax
// 007f8d99  3bc3                 cmp eax, ebx
// 007f8d9b  7e0e                 jle 0x7f8dab
// 007f8d9d  8b16                 mov edx, dword ptr [esi]
// 007f8d9f  8b821c010000         mov eax, dword ptr [edx + 0x11c]
// 007f8da5  8bce                 mov ecx, esi
// 007f8da7  ffd0                 call eax
// 007f8da9  eb02                 jmp 0x7f8dad
// 007f8dab  8bc3                 mov eax, ebx
// 007f8dad  898660010000         mov dword ptr [esi + 0x160], eax
// 007f8db3  8b8f64010000         mov ecx, dword ptr [edi + 0x164]
// 007f8db9  898e64010000         mov dword ptr [esi + 0x164], ecx
// 007f8dbf  8b976c010000         mov edx, dword ptr [edi + 0x16c]
// 007f8dc5  89966c010000         mov dword ptr [esi + 0x16c], edx
// 007f8dcb  8b8770010000         mov eax, dword ptr [edi + 0x170]
// 007f8dd1  898670010000         mov dword ptr [esi + 0x170], eax
// 007f8dd7  8b8f98000000         mov ecx, dword ptr [edi + 0x98]
// 007f8ddd  898e98000000         mov dword ptr [esi + 0x98], ecx
// 007f8de3  8b9754010000         mov edx, dword ptr [edi + 0x154]
// 007f8de9  8d8f10010000         lea ecx, [edi + 0x110]
// 007f8def  899654010000         mov dword ptr [esi + 0x154], edx
// 007f8df5  8b8768010000         mov eax, dword ptr [edi + 0x168]
// 007f8dfb  51                   push ecx
// 007f8dfc  8d8e10010000         lea ecx, [esi + 0x110]
// 007f8e02  898668010000         mov dword ptr [esi + 0x168], eax
// 007f8e08  e8b3fdffff           call 0x7f8bc0
// 007f8e0d  81c72c010000         add edi, 0x12c
// 007f8e13  57                   push edi
// 007f8e14  8d8e2c010000         lea ecx, [esi + 0x12c]
// 007f8e1a  e8a1fdffff           call 0x7f8bc0
// 007f8e1f  5f                   pop edi
// 007f8e20  5e                   pop esi
// 007f8e21  5b                   pop ebx
// 007f8e22  c20800               ret 8
// copied from an identical function in another client (function ?Copy@CXTPControl@@MAEXPAV1@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp