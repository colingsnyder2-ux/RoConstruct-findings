// from server: 100% by tester
// roc 2008-06 00781a30  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio  size: 441 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00781a30
//
// 00781a30  83ec20               sub esp, 0x20
// 00781a33  53                   push ebx
// 00781a34  55                   push ebp
// 00781a35  56                   push esi
// 00781a36  8b742434             mov esi, dword ptr [esp + 0x34]
// 00781a3a  8b4644               mov eax, dword ptr [esi + 0x44]
// 00781a3d  8b564c               mov edx, dword ptr [esi + 0x4c]
// 00781a40  57                   push edi
// 00781a41  8bf9                 mov edi, ecx
// 00781a43  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00781a46  89442410             mov dword ptr [esp + 0x10], eax
// 00781a4a  8b4650               mov eax, dword ptr [esi + 0x50]
// 00781a4d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00781a51  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00781a54  89542418             mov dword ptr [esp + 0x18], edx
// 00781a58  8944241c             mov dword ptr [esp + 0x1c], eax
// 00781a5c  397104               cmp dword ptr [ecx + 4], esi
// 00781a5f  0f84a8000000         je 0x781b0d
// 00781a65  8b11                 mov edx, dword ptr [ecx]
// 00781a67  8b4248               mov eax, dword ptr [edx + 0x48]
// 00781a6a  ffd0                 call eax
// 00781a6c  83f802               cmp eax, 2
// 00781a6f  7450                 je 0x781ac1
// 00781a71  85c0                 test eax, eax
// 00781a73  744c                 je 0x781ac1
// 00781a75  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00781a78  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00781a7e  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00781a81  83c044               add eax, 0x44
// 00781a84  83f9ff               cmp ecx, -1
// 00781a87  7505                 jne 0x781a8e
// 00781a89  8b4004               mov eax, dword ptr [eax + 4]
// 00781a8c  eb02                 jmp 0x781a90
// 00781a8e  8bc1                 mov eax, ecx
// 00781a90  83f8ff               cmp eax, -1
// 00781a93  0f8416010000         je 0x781baf
// 00781a99  8b542418             mov edx, dword ptr [esp + 0x18]
// 00781a9d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00781aa1  50                   push eax
// 00781aa2  8b442414             mov eax, dword ptr [esp + 0x14]
// 00781aa6  2bd0                 sub edx, eax
// 00781aa8  6a01                 push 1
// 00781aaa  83ea04               sub edx, 4
// 00781aad  52                   push edx
// 00781aae  51                   push ecx
// 00781aaf  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00781ab3  83c002               add eax, 2
// 00781ab6  50                   push eax
// 00781ab7  e884a50300           call 0x7bc040
// 00781abc  e9ee000000           jmp 0x781baf
// 00781ac1  8b571c               mov edx, dword ptr [edi + 0x1c]
// 00781ac4  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 00781aca  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00781acd  83c044               add eax, 0x44
// 00781ad0  83f9ff               cmp ecx, -1
// 00781ad3  7505                 jne 0x781ada
// 00781ad5  8b4004               mov eax, dword ptr [eax + 4]
// 00781ad8  eb02                 jmp 0x781adc
// 00781ada  8bc1                 mov eax, ecx
// 00781adc  83f8ff               cmp eax, -1
// 00781adf  0f84ca000000         je 0x781baf
// 00781ae5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00781ae9  8b542418             mov edx, dword ptr [esp + 0x18]
// 00781aed  50                   push eax
// 00781aee  8b442418             mov eax, dword ptr [esp + 0x18]
// 00781af2  2bc8                 sub ecx, eax
// 00781af4  83e904               sub ecx, 4
// 00781af7  51                   push ecx
// 00781af8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00781afc  6a01                 push 1
// 00781afe  83c002               add eax, 2
// 00781b01  50                   push eax
// 00781b02  52                   push edx
// 00781b03  e838a50300           call 0x7bc040
// 00781b08  e9a2000000           jmp 0x781baf
// 00781b0d  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00781b10  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00781b16  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 00781b19  8b11                 mov edx, dword ptr [ecx]
// 00781b1b  8b5218               mov edx, dword ptr [edx + 0x18]
// 00781b1e  56                   push esi
// 00781b1f  83ec10               sub esp, 0x10
// 00781b22  8bc4                 mov eax, esp
// 00781b24  8918                 mov dword ptr [eax], ebx
// 00781b26  8b5e48               mov ebx, dword ptr [esi + 0x48]
// 00781b29  895804               mov dword ptr [eax + 4], ebx
// 00781b2c  8b5e4c               mov ebx, dword ptr [esi + 0x4c]
// 00781b2f  895808               mov dword ptr [eax + 8], ebx
// 00781b32  8b5e50               mov ebx, dword ptr [esi + 0x50]
// 00781b35  89580c               mov dword ptr [eax + 0xc], ebx
// 00781b38  8b442448             mov eax, dword ptr [esp + 0x48]
// 00781b3c  50                   push eax
// 00781b3d  ffd2                 call edx
// 00781b3f  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00781b42  8b01                 mov eax, dword ptr [ecx]
// 00781b44  8b5048               mov edx, dword ptr [eax + 0x48]
// 00781b47  33ed                 xor ebp, ebp
// 00781b49  33db                 xor ebx, ebx
// 00781b4b  896c2428             mov dword ptr [esp + 0x28], ebp
// 00781b4f  ffd2                 call edx
// 00781b51  50                   push eax
// 00781b52  83ec10               sub esp, 0x10
// 00781b55  8bc4                 mov eax, esp
// 00781b57  8918                 mov dword ptr [eax], ebx
// 00781b59  896804               mov dword ptr [eax + 4], ebp
// 00781b5c  8bcd                 mov ecx, ebp
// 00781b5e  894808               mov dword ptr [eax + 8], ecx
// 00781b61  8d542424             lea edx, [esp + 0x24]
// 00781b65  b901000000           mov ecx, 1
// 00781b6a  52                   push edx
// 00781b6b  89480c               mov dword ptr [eax + 0xc], ecx
// 00781b6e  e8ddf0ffff           call 0x780c50
// 00781b73  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00781b76  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00781b7c  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 00781b82  83c418               add esp, 0x18
// 00781b85  83f9ff               cmp ecx, -1
// 00781b88  7506                 jne 0x781b90
// 00781b8a  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00781b90  8b5070               mov edx, dword ptr [eax + 0x70]
// 00781b93  83faff               cmp edx, -1
// 00781b96  7505                 jne 0x781b9d
// 00781b98  8b406c               mov eax, dword ptr [eax + 0x6c]
// 00781b9b  eb02                 jmp 0x781b9f
// 00781b9d  8bc2                 mov eax, edx
// 00781b9f  51                   push ecx
// 00781ba0  50                   push eax
// 00781ba1  8d4c2418             lea ecx, [esp + 0x18]
// 00781ba5  51                   push ecx
// 00781ba6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00781baa  e8a9f7f1ff           call 0x6a1358
// 00781baf  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00781bb2  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 00781bb5  8b17                 mov edx, dword ptr [edi]
// 00781bb7  8b5268               mov edx, dword ptr [edx + 0x68]
// 00781bba  6a01                 push 1
// 00781bbc  83ec10               sub esp, 0x10
// 00781bbf  8bc4                 mov eax, esp
// 00781bc1  8908                 mov dword ptr [eax], ecx
// 00781bc3  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00781bc6  894804               mov dword ptr [eax + 4], ecx
// 00781bc9  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00781bcc  894808               mov dword ptr [eax + 8], ecx
// 00781bcf  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 00781bd2  89480c               mov dword ptr [eax + 0xc], ecx
// 00781bd5  8b442448             mov eax, dword ptr [esp + 0x48]
// 00781bd9  56                   push esi
// 00781bda  50                   push eax
// 00781bdb  8bcf                 mov ecx, edi
// 00781bdd  ffd2                 call edx
// 00781bdf  5f                   pop edi
// 00781be0  5e                   pop esi
// 00781be1  5d                   pop ebp
// 00781be2  5b                   pop ebx
// 00781be3  83c420               add esp, 0x20
// 00781be6  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawSingleButton@CAppearanceSetVisualStudio@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp
