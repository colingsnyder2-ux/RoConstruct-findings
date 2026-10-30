// roc 2012-06 00a539f0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a539f0
//
// 00a539f0  83ec40               sub esp, 0x40
// 00a539f3  53                   push ebx
// 00a539f4  55                   push ebp
// 00a539f5  56                   push esi
// 00a539f6  57                   push edi
// 00a539f7  8bf1                 mov esi, ecx
// 00a539f9  e832300100           call 0xa66a30
// 00a539fe  8bc8                 mov ecx, eax
// 00a53a00  e80b170100           call 0xa65110
// 00a53a05  85c0                 test eax, eax
// 00a53a07  7518                 jne 0xa53a21
// 00a53a09  8b742454             mov esi, dword ptr [esp + 0x54]
// 00a53a0d  50                   push eax
// 00a53a0e  56                   push esi
// 00a53a0f  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a53a15  8bc6                 mov eax, esi
// 00a53a17  5f                   pop edi
// 00a53a18  5e                   pop esi
// 00a53a19  5d                   pop ebp
// 00a53a1a  5b                   pop ebx
// 00a53a1b  83c440               add esp, 0x40
// 00a53a1e  c21c00               ret 0x1c
// 00a53a21  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00a53a25  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a53a29  8b16                 mov edx, dword ptr [esi]
// 00a53a2b  8b5208               mov edx, dword ptr [edx + 8]
// 00a53a2e  53                   push ebx
// 00a53a2f  83ec10               sub esp, 0x10
// 00a53a32  8bc4                 mov eax, esp
// 00a53a34  8908                 mov dword ptr [eax], ecx
// 00a53a36  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00a53a3a  894804               mov dword ptr [eax + 4], ecx
// 00a53a3d  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00a53a41  894808               mov dword ptr [eax + 8], ecx
// 00a53a44  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00a53a4b  89480c               mov dword ptr [eax + 0xc], ecx
// 00a53a4e  8d442434             lea eax, [esp + 0x34]
// 00a53a52  50                   push eax
// 00a53a53  8bce                 mov ecx, esi
// 00a53a55  ffd2                 call edx
// 00a53a57  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a53a5a  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00a53a60  bd08000000           mov ebp, 8
// 00a53a65  8b4c2808             mov ecx, dword ptr [eax + ebp + 8]
// 00a53a69  03c5                 add eax, ebp
// 00a53a6b  83f9ff               cmp ecx, -1
// 00a53a6e  7505                 jne 0xa53a75
// 00a53a70  8b4004               mov eax, dword ptr [eax + 4]
// 00a53a73  eb02                 jmp 0xa53a77
// 00a53a75  8bc1                 mov eax, ecx
// 00a53a77  50                   push eax
// 00a53a78  8d4c2424             lea ecx, [esp + 0x24]
// 00a53a7c  51                   push ecx
// 00a53a7d  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a53a81  e826f4f2ff           call 0x982eac
// 00a53a86  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a53a8a  8b16                 mov edx, dword ptr [esi]
// 00a53a8c  8b520c               mov edx, dword ptr [edx + 0xc]
// 00a53a8f  53                   push ebx
// 00a53a90  83ec10               sub esp, 0x10
// 00a53a93  8bc4                 mov eax, esp
// 00a53a95  8908                 mov dword ptr [eax], ecx
// 00a53a97  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00a53a9b  894804               mov dword ptr [eax + 4], ecx
// 00a53a9e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00a53aa2  894808               mov dword ptr [eax + 8], ecx
// 00a53aa5  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00a53aac  89480c               mov dword ptr [eax + 0xc], ecx
// 00a53aaf  8d442424             lea eax, [esp + 0x24]
// 00a53ab3  50                   push eax
// 00a53ab4  8bce                 mov ecx, esi
// 00a53ab6  ffd2                 call edx
// 00a53ab8  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a53abb  83783800             cmp dword ptr [eax + 0x38], 0
// 00a53abf  756f                 jne 0xa53b30
// 00a53ac1  68a4bcc100           push 0xc1bca4
// 00a53ac6  e8652f0100           call 0xa66a30
// 00a53acb  8bc8                 mov ecx, eax
// 00a53acd  e87e2e0100           call 0xa66950
// 00a53ad2  8bf8                 mov edi, eax
// 00a53ad4  85ff                 test edi, edi
// 00a53ad6  7458                 je 0xa53b30
// 00a53ad8  6a01                 push 1
// 00a53ada  6a00                 push 0
// 00a53adc  8d4c2448             lea ecx, [esp + 0x48]
// 00a53ae0  51                   push ecx
// 00a53ae1  8bcf                 mov ecx, edi
// 00a53ae3  8bdd                 mov ebx, ebp
// 00a53ae5  896c2448             mov dword ptr [esp + 0x48], ebp
// 00a53ae9  e802200100           call 0xa65af0
// 00a53aee  83ec10               sub esp, 0x10
// 00a53af1  8bcc                 mov ecx, esp
// 00a53af3  8919                 mov dword ptr [ecx], ebx
// 00a53af5  896904               mov dword ptr [ecx + 4], ebp
// 00a53af8  8bd3                 mov edx, ebx
// 00a53afa  895108               mov dword ptr [ecx + 8], edx
// 00a53afd  89510c               mov dword ptr [ecx + 0xc], edx
// 00a53b00  8b10                 mov edx, dword ptr [eax]
// 00a53b02  83ec10               sub esp, 0x10
// 00a53b05  8bcc                 mov ecx, esp
// 00a53b07  8911                 mov dword ptr [ecx], edx
// 00a53b09  8b5004               mov edx, dword ptr [eax + 4]
// 00a53b0c  895104               mov dword ptr [ecx + 4], edx
// 00a53b0f  8b5008               mov edx, dword ptr [eax + 8]
// 00a53b12  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a53b15  895108               mov dword ptr [ecx + 8], edx
// 00a53b18  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00a53b1c  89410c               mov dword ptr [ecx + 0xc], eax
// 00a53b1f  8d4c2430             lea ecx, [esp + 0x30]
// 00a53b23  51                   push ecx
// 00a53b24  52                   push edx
// 00a53b25  8bcf                 mov ecx, edi
// 00a53b27  e894180100           call 0xa653c0
// 00a53b2c  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00a53b30  8b761c               mov esi, dword ptr [esi + 0x1c]
// 00a53b33  837e3801             cmp dword ptr [esi + 0x38], 1
// 00a53b37  7565                 jne 0xa53b9e
// 00a53b39  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 00a53b3f  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00a53b45  83f9ff               cmp ecx, -1
// 00a53b48  7506                 jne 0xa53b50
// 00a53b4a  8b8830010000         mov ecx, dword ptr [eax + 0x130]
// 00a53b50  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 00a53b56  83faff               cmp edx, -1
// 00a53b59  7508                 jne 0xa53b63
// 00a53b5b  8b8030010000         mov eax, dword ptr [eax + 0x130]
// 00a53b61  eb02                 jmp 0xa53b65
// 00a53b63  8bc2                 mov eax, edx
// 00a53b65  51                   push ecx
// 00a53b66  50                   push eax
// 00a53b67  8b03                 mov eax, dword ptr [ebx]
// 00a53b69  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a53b6c  8bcb                 mov ecx, ebx
// 00a53b6e  ffd2                 call edx
// 00a53b70  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a53b74  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a53b78  50                   push eax
// 00a53b79  83ec10               sub esp, 0x10
// 00a53b7c  8bc4                 mov eax, esp
// 00a53b7e  8908                 mov dword ptr [eax], ecx
// 00a53b80  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a53b84  895004               mov dword ptr [eax + 4], edx
// 00a53b87  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a53b8b  894808               mov dword ptr [eax + 8], ecx
// 00a53b8e  89500c               mov dword ptr [eax + 0xc], edx
// 00a53b91  8b442478             mov eax, dword ptr [esp + 0x78]
// 00a53b95  50                   push eax
// 00a53b96  e825e0ffff           call 0xa51bc0
// 00a53b9b  83c420               add esp, 0x20
// 00a53b9e  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a53ba2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a53ba6  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a53baa  5f                   pop edi
// 00a53bab  8908                 mov dword ptr [eax], ecx
// 00a53bad  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a53bb1  895004               mov dword ptr [eax + 4], edx
// 00a53bb4  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a53bb8  5e                   pop esi
// 00a53bb9  5d                   pop ebp
// 00a53bba  894808               mov dword ptr [eax + 8], ecx
// 00a53bbd  89500c               mov dword ptr [eax + 0xc], edx
// 00a53bc0  5b                   pop ebx
// 00a53bc1  83c440               add esp, 0x40
// 00a53bc4  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
