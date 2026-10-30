// roc 2009-12 008d68b0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 570 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d68b0
//
// 008d68b0  6aff                 push -1
// 008d68b2  68c8539600           push 0x9653c8
// 008d68b7  64a100000000         mov eax, dword ptr fs:[0]
// 008d68bd  50                   push eax
// 008d68be  83ec5c               sub esp, 0x5c
// 008d68c1  53                   push ebx
// 008d68c2  55                   push ebp
// 008d68c3  56                   push esi
// 008d68c4  57                   push edi
// 008d68c5  a10052b600           mov eax, dword ptr [0xb65200]
// 008d68ca  33c4                 xor eax, esp
// 008d68cc  50                   push eax
// 008d68cd  8d442470             lea eax, [esp + 0x70]
// 008d68d1  64a300000000         mov dword ptr fs:[0], eax
// 008d68d7  8be9                 mov ebp, ecx
// 008d68d9  8bb4248c000000       mov esi, dword ptr [esp + 0x8c]
// 008d68e0  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 008d68e7  2bb42484000000       sub esi, dword ptr [esp + 0x84]
// 008d68ee  2bbc2488000000       sub edi, dword ptr [esp + 0x88]
// 008d68f5  6a2c                 push 0x2c
// 008d68f7  33db                 xor ebx, ebx
// 008d68f9  8d442448             lea eax, [esp + 0x48]
// 008d68fd  53                   push ebx
// 008d68fe  50                   push eax
// 008d68ff  e8a0e1f1ff           call 0x7f4aa4
// 008d6904  83c40c               add esp, 0xc
// 008d6907  c744244428000000     mov dword ptr [esp + 0x44], 0x28
// 008d690f  399c2498000000       cmp dword ptr [esp + 0x98], ebx
// 008d6916  740a                 je 0x8d6922
// 008d6918  897c2448             mov dword ptr [esp + 0x48], edi
// 008d691c  8974244c             mov dword ptr [esp + 0x4c], esi
// 008d6920  eb08                 jmp 0x8d692a
// 008d6922  89742448             mov dword ptr [esp + 0x48], esi
// 008d6926  897c244c             mov dword ptr [esp + 0x4c], edi
// 008d692a  53                   push ebx
// 008d692b  53                   push ebx
// 008d692c  8d442420             lea eax, [esp + 0x20]
// 008d6930  50                   push eax
// 008d6931  b901000000           mov ecx, 1
// 008d6936  53                   push ebx
// 008d6937  66894c2460           mov word ptr [esp + 0x60], cx
// 008d693c  8d4c2454             lea ecx, [esp + 0x54]
// 008d6940  51                   push ecx
// 008d6941  ba20000000           mov edx, 0x20
// 008d6946  895c2468             mov dword ptr [esp + 0x68], ebx
// 008d694a  895c242c             mov dword ptr [esp + 0x2c], ebx
// 008d694e  53                   push ebx
// 008d694f  8b1d60b19800         mov ebx, dword ptr [0x98b160]
// 008d6955  668954246a           mov word ptr [esp + 0x6a], dx
// 008d695a  ffd3                 call ebx
// 008d695c  837c241800           cmp dword ptr [esp + 0x18], 0
// 008d6961  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d6965  0f8469010000         je 0x8d6ad4
// 008d696b  6a00                 push 0
// 008d696d  6a00                 push 0
// 008d696f  8d54241c             lea edx, [esp + 0x1c]
// 008d6973  52                   push edx
// 008d6974  6a00                 push 0
// 008d6976  8d442454             lea eax, [esp + 0x54]
// 008d697a  50                   push eax
// 008d697b  6a00                 push 0
// 008d697d  89742460             mov dword ptr [esp + 0x60], esi
// 008d6981  897c2464             mov dword ptr [esp + 0x64], edi
// 008d6985  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 008d698d  ffd3                 call ebx
// 008d698f  837c241400           cmp dword ptr [esp + 0x14], 0
// 008d6994  8bd8                 mov ebx, eax
// 008d6996  0f8438010000         je 0x8d6ad4
// 008d699c  8d4c2434             lea ecx, [esp + 0x34]
// 008d69a0  e809fb0400           call 0x9264ae
// 008d69a5  6a00                 push 0
// 008d69a7  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 008d69af  ff1554b19800         call dword ptr [0x98b154]
// 008d69b5  50                   push eax
// 008d69b6  8d4c2438             lea ecx, [esp + 0x38]
// 008d69ba  e8ddfa0400           call 0x92649c
// 008d69bf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d69c3  8b542438             mov edx, dword ptr [esp + 0x38]
// 008d69c7  51                   push ecx
// 008d69c8  52                   push edx
// 008d69c9  ff154cb19800         call dword ptr [0x98b14c]
// 008d69cf  33d2                 xor edx, edx
// 008d69d1  89442420             mov dword ptr [esp + 0x20], eax
// 008d69d5  39942498000000       cmp dword ptr [esp + 0x98], edx
// 008d69dc  7406                 je 0x8d69e4
// 008d69de  8bce                 mov ecx, esi
// 008d69e0  8bc7                 mov eax, edi
// 008d69e2  eb04                 jmp 0x8d69e8
// 008d69e4  8bcf                 mov ecx, edi
// 008d69e6  8bc6                 mov eax, esi
// 008d69e8  8944242c             mov dword ptr [esp + 0x2c], eax
// 008d69ec  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 008d69ef  89542424             mov dword ptr [esp + 0x24], edx
// 008d69f3  89542428             mov dword ptr [esp + 0x28], edx
// 008d69f7  894c2430             mov dword ptr [esp + 0x30], ecx
// 008d69fb  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d6a01  8b4110               mov eax, dword ptr [ecx + 0x10]
// 008d6a04  83f8ff               cmp eax, -1
// 008d6a07  7503                 jne 0x8d6a0c
// 008d6a09  8b410c               mov eax, dword ptr [ecx + 0xc]
// 008d6a0c  50                   push eax
// 008d6a0d  8d4c2428             lea ecx, [esp + 0x28]
// 008d6a11  51                   push ecx
// 008d6a12  8d4c243c             lea ecx, [esp + 0x3c]
// 008d6a16  e8e3dbf1ff           call 0x7f45fe
// 008d6a1b  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d6a1f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d6a23  83ec10               sub esp, 0x10
// 008d6a26  8bc4                 mov eax, esp
// 008d6a28  8910                 mov dword ptr [eax], edx
// 008d6a2a  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d6a2e  894804               mov dword ptr [eax + 4], ecx
// 008d6a31  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d6a35  895008               mov dword ptr [eax + 8], edx
// 008d6a38  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 008d6a3f  89480c               mov dword ptr [eax + 0xc], ecx
// 008d6a42  52                   push edx
// 008d6a43  8d442448             lea eax, [esp + 0x48]
// 008d6a47  50                   push eax
// 008d6a48  8bcd                 mov ecx, ebp
// 008d6a4a  e881fdffff           call 0x8d67d0
// 008d6a4f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d6a53  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d6a57  51                   push ecx
// 008d6a58  52                   push edx
// 008d6a59  57                   push edi
// 008d6a5a  56                   push esi
// 008d6a5b  ff9424ac000000       call dword ptr [esp + 0xac]
// 008d6a62  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 008d6a69  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 008d6a70  8bb42494000000       mov esi, dword ptr [esp + 0x94]
// 008d6a77  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008d6a7e  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 008d6a85  8b7f04               mov edi, dword ptr [edi + 4]
// 008d6a88  83c410               add esp, 0x10
// 008d6a8b  6a04                 push 4
// 008d6a8d  2bc2                 sub eax, edx
// 008d6a8f  50                   push eax
// 008d6a90  2bce                 sub ecx, esi
// 008d6a92  51                   push ecx
// 008d6a93  52                   push edx
// 008d6a94  56                   push esi
// 008d6a95  6a00                 push 0
// 008d6a97  53                   push ebx
// 008d6a98  6a00                 push 0
// 008d6a9a  6a00                 push 0
// 008d6a9c  57                   push edi
// 008d6a9d  ff15f8ca9800         call dword ptr [0x98caf8]
// 008d6aa3  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d6aa7  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008d6aab  50                   push eax
// 008d6aac  51                   push ecx
// 008d6aad  ff154cb19800         call dword ptr [0x98b14c]
// 008d6ab3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d6ab7  8b353cb19800         mov esi, dword ptr [0x98b13c]
// 008d6abd  52                   push edx
// 008d6abe  ffd6                 call esi
// 008d6ac0  53                   push ebx
// 008d6ac1  ffd6                 call esi
// 008d6ac3  8d4c2434             lea ecx, [esp + 0x34]
// 008d6ac7  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 008d6acf  e8d4f90400           call 0x9264a8
// 008d6ad4  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008d6ad8  64890d00000000       mov dword ptr fs:[0], ecx
// 008d6adf  59                   pop ecx
// 008d6ae0  5f                   pop edi
// 008d6ae1  5e                   pop esi
// 008d6ae2  5d                   pop ebp
// 008d6ae3  5b                   pop ebx
// 008d6ae4  83c468               add esp, 0x68
// 008d6ae7  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawRotatedButton@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@AAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@HP6AXHHPAI3@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp