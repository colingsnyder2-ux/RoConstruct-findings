// roc 2009-06 0057ba60  unit: G3D::TextInput::WrongSymbol  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057ba60
//
// 0057ba60  6aff                 push -1
// 0057ba62  68780a8600           push 0x860a78
// 0057ba67  64a100000000         mov eax, dword ptr fs:[0]
// 0057ba6d  50                   push eax
// 0057ba6e  64892500000000       mov dword ptr fs:[0], esp
// 0057ba75  83ec34               sub esp, 0x34
// 0057ba78  53                   push ebx
// 0057ba79  56                   push esi
// 0057ba7a  33db                 xor ebx, ebx
// 0057ba7c  8bf1                 mov esi, ecx
// 0057ba7e  895c2408             mov dword ptr [esp + 8], ebx
// 0057ba82  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0057ba85  57                   push edi
// 0057ba86  3bc3                 cmp eax, ebx
// 0057ba88  0f86cd000000         jbe 0x57bb5b
// 0057ba8e  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0057ba91  03c7                 add eax, edi
// 0057ba93  3bf8                 cmp edi, eax
// 0057ba95  7606                 jbe 0x57ba9d
// 0057ba97  ff15ace98900         call dword ptr [0x89e9ac]
// 0057ba9d  8b0e                 mov ecx, dword ptr [esi]
// 0057ba9f  894c240c             mov dword ptr [esp + 0xc], ecx
// 0057baa3  8d4c240c             lea ecx, [esp + 0xc]
// 0057baa7  897c2410             mov dword ptr [esp + 0x10], edi
// 0057baab  e8b0c5e9ff           call 0x418060
// 0057bab0  8bf8                 mov edi, eax
// 0057bab2  57                   push edi
// 0057bab3  8d4c2418             lea ecx, [esp + 0x18]
// 0057bab7  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057babd  8b571c               mov edx, dword ptr [edi + 0x1c]
// 0057bac0  89542430             mov dword ptr [esp + 0x30], edx
// 0057bac4  8b4720               mov eax, dword ptr [edi + 0x20]
// 0057bac7  89442434             mov dword ptr [esp + 0x34], eax
// 0057bacb  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0057bace  894c2438             mov dword ptr [esp + 0x38], ecx
// 0057bad2  8b5728               mov edx, dword ptr [edi + 0x28]
// 0057bad5  8954243c             mov dword ptr [esp + 0x3c], edx
// 0057bad9  83cfff               or edi, 0xffffffff
// 0057badc  895c2448             mov dword ptr [esp + 0x48], ebx
// 0057bae0  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0057bae3  7425                 je 0x57bb0a
// 0057bae5  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057bae8  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0057baeb  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0057baee  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057baf4  ff4618               inc dword ptr [esi + 0x18]
// 0057baf7  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057bafa  394614               cmp dword ptr [esi + 0x14], eax
// 0057bafd  7703                 ja 0x57bb02
// 0057baff  895e18               mov dword ptr [esi + 0x18], ebx
// 0057bb02  017e1c               add dword ptr [esi + 0x1c], edi
// 0057bb05  7503                 jne 0x57bb0a
// 0057bb07  895e18               mov dword ptr [esi + 0x18], ebx
// 0057bb0a  8b742450             mov esi, dword ptr [esp + 0x50]
// 0057bb0e  8d542414             lea edx, [esp + 0x14]
// 0057bb12  52                   push edx
// 0057bb13  8bce                 mov ecx, esi
// 0057bb15  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057bb1b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057bb1f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057bb23  8b542438             mov edx, dword ptr [esp + 0x38]
// 0057bb27  89461c               mov dword ptr [esi + 0x1c], eax
// 0057bb2a  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0057bb2e  894e20               mov dword ptr [esi + 0x20], ecx
// 0057bb31  8d4c2414             lea ecx, [esp + 0x14]
// 0057bb35  895624               mov dword ptr [esi + 0x24], edx
// 0057bb38  894628               mov dword ptr [esi + 0x28], eax
// 0057bb3b  897c2448             mov dword ptr [esp + 0x48], edi
// 0057bb3f  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057bb45  5f                   pop edi
// 0057bb46  8bc6                 mov eax, esi
// 0057bb48  5e                   pop esi
// 0057bb49  5b                   pop ebx
// 0057bb4a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057bb4e  64890d00000000       mov dword ptr fs:[0], ecx
// 0057bb55  83c440               add esp, 0x40
// 0057bb58  c20400               ret 4
// 0057bb5b  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0057bb5f  57                   push edi
// 0057bb60  e81bf1ffff           call 0x57ac80
// 0057bb65  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0057bb69  8bc7                 mov eax, edi
// 0057bb6b  5f                   pop edi
// 0057bb6c  5e                   pop esi
// 0057bb6d  5b                   pop ebx
// 0057bb6e  64890d00000000       mov dword ptr fs:[0], ecx
// 0057bb75  83c440               add esp, 0x40
// 0057bb78  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?read@TextInput@G3D@@QAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
