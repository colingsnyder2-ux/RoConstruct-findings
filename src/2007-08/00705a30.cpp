// roc 2007-08 00705a30  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 455 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00705a30
//
// 00705a30  83ec30               sub esp, 0x30
// 00705a33  53                   push ebx
// 00705a34  55                   push ebp
// 00705a35  56                   push esi
// 00705a36  57                   push edi
// 00705a37  8bf1                 mov esi, ecx
// 00705a39  e8e2b40000           call 0x710f20
// 00705a3e  8bc8                 mov ecx, eax
// 00705a40  e8ab9b0000           call 0x70f5f0
// 00705a45  85c0                 test eax, eax
// 00705a47  7518                 jne 0x705a61
// 00705a49  8b742444             mov esi, dword ptr [esp + 0x44]
// 00705a4d  50                   push eax
// 00705a4e  56                   push esi
// 00705a4f  ff15e0ed7700         call dword ptr [0x77ede0]
// 00705a55  8bc6                 mov eax, esi
// 00705a57  5f                   pop edi
// 00705a58  5e                   pop esi
// 00705a59  5d                   pop ebp
// 00705a5a  5b                   pop ebx
// 00705a5b  83c430               add esp, 0x30
// 00705a5e  c21c00               ret 0x1c
// 00705a61  8b442448             mov eax, dword ptr [esp + 0x48]
// 00705a65  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00705a69  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00705a6d  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00705a71  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00705a75  8b16                 mov edx, dword ptr [esi]
// 00705a77  8b5208               mov edx, dword ptr [edx + 8]
// 00705a7a  50                   push eax
// 00705a7b  83ec10               sub esp, 0x10
// 00705a7e  8bc4                 mov eax, esp
// 00705a80  8938                 mov dword ptr [eax], edi
// 00705a82  895804               mov dword ptr [eax + 4], ebx
// 00705a85  896808               mov dword ptr [eax + 8], ebp
// 00705a88  89480c               mov dword ptr [eax + 0xc], ecx
// 00705a8b  8d442434             lea eax, [esp + 0x34]
// 00705a8f  50                   push eax
// 00705a90  8bce                 mov ecx, esi
// 00705a92  ffd2                 call edx
// 00705a94  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00705a97  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00705a9d  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00705aa0  83c008               add eax, 8
// 00705aa3  83f9ff               cmp ecx, -1
// 00705aa6  7505                 jne 0x705aad
// 00705aa8  8b4004               mov eax, dword ptr [eax + 4]
// 00705aab  eb02                 jmp 0x705aaf
// 00705aad  8bc1                 mov eax, ecx
// 00705aaf  50                   push eax
// 00705ab0  8d4c2424             lea ecx, [esp + 0x24]
// 00705ab4  51                   push ecx
// 00705ab5  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00705ab9  e8f2adf2ff           call 0x6308b0
// 00705abe  8b442448             mov eax, dword ptr [esp + 0x48]
// 00705ac2  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00705ac6  8b16                 mov edx, dword ptr [esi]
// 00705ac8  8b520c               mov edx, dword ptr [edx + 0xc]
// 00705acb  50                   push eax
// 00705acc  83ec10               sub esp, 0x10
// 00705acf  8bc4                 mov eax, esp
// 00705ad1  8938                 mov dword ptr [eax], edi
// 00705ad3  895804               mov dword ptr [eax + 4], ebx
// 00705ad6  896808               mov dword ptr [eax + 8], ebp
// 00705ad9  89480c               mov dword ptr [eax + 0xc], ecx
// 00705adc  8d442424             lea eax, [esp + 0x24]
// 00705ae0  50                   push eax
// 00705ae1  8bce                 mov ecx, esi
// 00705ae3  ffd2                 call edx
// 00705ae5  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00705ae8  83783800             cmp dword ptr [eax + 0x38], 0
// 00705aec  7570                 jne 0x705b5e
// 00705aee  687c597d00           push 0x7d597c
// 00705af3  e828b40000           call 0x710f20
// 00705af8  8bc8                 mov ecx, eax
// 00705afa  e841b30000           call 0x710e40
// 00705aff  8bf8                 mov edi, eax
// 00705b01  85ff                 test edi, edi
// 00705b03  7459                 je 0x705b5e
// 00705b05  6a01                 push 1
// 00705b07  6a00                 push 0
// 00705b09  8d4c2438             lea ecx, [esp + 0x38]
// 00705b0d  bd08000000           mov ebp, 8
// 00705b12  51                   push ecx
// 00705b13  8bcf                 mov ecx, edi
// 00705b15  8bdd                 mov ebx, ebp
// 00705b17  896c2468             mov dword ptr [esp + 0x68], ebp
// 00705b1b  e8c0a40000           call 0x70ffe0
// 00705b20  83ec10               sub esp, 0x10
// 00705b23  8bcc                 mov ecx, esp
// 00705b25  8919                 mov dword ptr [ecx], ebx
// 00705b27  896904               mov dword ptr [ecx + 4], ebp
// 00705b2a  8bd3                 mov edx, ebx
// 00705b2c  895108               mov dword ptr [ecx + 8], edx
// 00705b2f  89510c               mov dword ptr [ecx + 0xc], edx
// 00705b32  8b10                 mov edx, dword ptr [eax]
// 00705b34  83ec10               sub esp, 0x10
// 00705b37  8bcc                 mov ecx, esp
// 00705b39  8911                 mov dword ptr [ecx], edx
// 00705b3b  8b5004               mov edx, dword ptr [eax + 4]
// 00705b3e  895104               mov dword ptr [ecx + 4], edx
// 00705b41  8b5008               mov edx, dword ptr [eax + 8]
// 00705b44  8b400c               mov eax, dword ptr [eax + 0xc]
// 00705b47  895108               mov dword ptr [ecx + 8], edx
// 00705b4a  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00705b4e  89410c               mov dword ptr [ecx + 0xc], eax
// 00705b51  8d4c2430             lea ecx, [esp + 0x30]
// 00705b55  51                   push ecx
// 00705b56  52                   push edx
// 00705b57  8bcf                 mov ecx, edi
// 00705b59  e8429d0000           call 0x70f8a0
// 00705b5e  8b761c               mov esi, dword ptr [esi + 0x1c]
// 00705b61  837e3801             cmp dword ptr [esi + 0x38], 1
// 00705b65  7567                 jne 0x705bce
// 00705b67  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 00705b6d  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00705b73  83f9ff               cmp ecx, -1
// 00705b76  7506                 jne 0x705b7e
// 00705b78  8b8830010000         mov ecx, dword ptr [eax + 0x130]
// 00705b7e  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 00705b84  83faff               cmp edx, -1
// 00705b87  7508                 jne 0x705b91
// 00705b89  8b8030010000         mov eax, dword ptr [eax + 0x130]
// 00705b8f  eb02                 jmp 0x705b93
// 00705b91  8bc2                 mov eax, edx
// 00705b93  51                   push ecx
// 00705b94  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00705b98  50                   push eax
// 00705b99  8b01                 mov eax, dword ptr [ecx]
// 00705b9b  8b5048               mov edx, dword ptr [eax + 0x48]
// 00705b9e  ffd2                 call edx
// 00705ba0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00705ba4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00705ba8  50                   push eax
// 00705ba9  83ec10               sub esp, 0x10
// 00705bac  8bc4                 mov eax, esp
// 00705bae  8908                 mov dword ptr [eax], ecx
// 00705bb0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00705bb4  895004               mov dword ptr [eax + 4], edx
// 00705bb7  8b542438             mov edx, dword ptr [esp + 0x38]
// 00705bbb  894808               mov dword ptr [eax + 8], ecx
// 00705bbe  89500c               mov dword ptr [eax + 0xc], edx
// 00705bc1  8b442468             mov eax, dword ptr [esp + 0x68]
// 00705bc5  50                   push eax
// 00705bc6  e8f5dfffff           call 0x703bc0
// 00705bcb  83c420               add esp, 0x20
// 00705bce  8b442444             mov eax, dword ptr [esp + 0x44]
// 00705bd2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00705bd6  8b542424             mov edx, dword ptr [esp + 0x24]
// 00705bda  5f                   pop edi
// 00705bdb  8908                 mov dword ptr [eax], ecx
// 00705bdd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00705be1  895004               mov dword ptr [eax + 4], edx
// 00705be4  8b542428             mov edx, dword ptr [esp + 0x28]
// 00705be8  5e                   pop esi
// 00705be9  5d                   pop ebp
// 00705bea  894808               mov dword ptr [eax + 8], ecx
// 00705bed  89500c               mov dword ptr [eax + 0xc], edx
// 00705bf0  5b                   pop ebx
// 00705bf1  83c430               add esp, 0x30
// 00705bf4  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
