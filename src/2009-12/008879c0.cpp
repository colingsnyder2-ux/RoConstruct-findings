// roc 2009-12 008879c0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008879c0
//
// 008879c0  83ec28               sub esp, 0x28
// 008879c3  53                   push ebx
// 008879c4  55                   push ebp
// 008879c5  56                   push esi
// 008879c6  8bf1                 mov esi, ecx
// 008879c8  57                   push edi
// 008879c9  89742414             mov dword ptr [esp + 0x14], esi
// 008879cd  e83ef2ffff           call 0x886c10
// 008879d2  85c0                 test eax, eax
// 008879d4  753b                 jne 0x887a11
// 008879d6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008879da  8b542448             mov edx, dword ptr [esp + 0x48]
// 008879de  83ec10               sub esp, 0x10
// 008879e1  8bc4                 mov eax, esp
// 008879e3  8908                 mov dword ptr [eax], ecx
// 008879e5  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008879e9  895004               mov dword ptr [eax + 4], edx
// 008879ec  8b542460             mov edx, dword ptr [esp + 0x60]
// 008879f0  894808               mov dword ptr [eax + 8], ecx
// 008879f3  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008879f7  89500c               mov dword ptr [eax + 0xc], edx
// 008879fa  8b442450             mov eax, dword ptr [esp + 0x50]
// 008879fe  50                   push eax
// 008879ff  51                   push ecx
// 00887a00  8bce                 mov ecx, esi
// 00887a02  e8f95fffff           call 0x87da00
// 00887a07  5f                   pop edi
// 00887a08  5e                   pop esi
// 00887a09  5d                   pop ebp
// 00887a0a  5b                   pop ebx
// 00887a0b  83c428               add esp, 0x28
// 00887a0e  c21800               ret 0x18
// 00887a11  8b742440             mov esi, dword ptr [esp + 0x40]
// 00887a15  8b16                 mov edx, dword ptr [esi]
// 00887a17  8b4278               mov eax, dword ptr [edx + 0x78]
// 00887a1a  8bce                 mov ecx, esi
// 00887a1c  ffd0                 call eax
// 00887a1e  8b16                 mov edx, dword ptr [esi]
// 00887a20  8bf8                 mov edi, eax
// 00887a22  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00887a25  8bce                 mov ecx, esi
// 00887a27  ffd0                 call eax
// 00887a29  89442410             mov dword ptr [esp + 0x10], eax
// 00887a2d  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00887a33  83f8ff               cmp eax, -1
// 00887a36  750f                 jne 0x887a47
// 00887a38  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00887a3e  85c9                 test ecx, ecx
// 00887a40  7405                 je 0x887a47
// 00887a42  e869ebf6ff           call 0x7f65b0
// 00887a47  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00887a4d  89442440             mov dword ptr [esp + 0x40], eax
// 00887a51  83f9ff               cmp ecx, -1
// 00887a54  750f                 jne 0x887a65
// 00887a56  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 00887a5c  85c0                 test eax, eax
// 00887a5e  7405                 je 0x887a65
// 00887a60  8b6838               mov ebp, dword ptr [eax + 0x38]
// 00887a63  eb02                 jmp 0x887a67
// 00887a65  8be9                 mov ebp, ecx
// 00887a67  8b16                 mov edx, dword ptr [esi]
// 00887a69  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00887a6f  8bce                 mov ecx, esi
// 00887a71  ffd0                 call eax
// 00887a73  837c244000           cmp dword ptr [esp + 0x40], 0
// 00887a78  8bd8                 mov ebx, eax
// 00887a7a  7507                 jne 0x887a83
// 00887a7c  be04000000           mov esi, 4
// 00887a81  eb2f                 jmp 0x887ab2
// 00887a83  85ff                 test edi, edi
// 00887a85  740e                 je 0x887a95
// 00887a87  837c241000           cmp dword ptr [esp + 0x10], 0
// 00887a8c  7407                 je 0x887a95
// 00887a8e  be03000000           mov esi, 3
// 00887a93  eb1d                 jmp 0x887ab2
// 00887a95  85ed                 test ebp, ebp
// 00887a97  7407                 je 0x887aa0
// 00887a99  be05000000           mov esi, 5
// 00887a9e  eb12                 jmp 0x887ab2
// 00887aa0  85db                 test ebx, ebx
// 00887aa2  7509                 jne 0x887aad
// 00887aa4  8d7301               lea esi, [ebx + 1]
// 00887aa7  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00887aab  7405                 je 0x887ab2
// 00887aad  be02000000           mov esi, 2
// 00887ab2  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00887ab6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00887aba  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00887abe  8b542448             mov edx, dword ptr [esp + 0x48]
// 00887ac2  894c2418             mov dword ptr [esp + 0x18], ecx
// 00887ac6  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00887aca  83c0f4               add eax, -0xc
// 00887acd  8954241c             mov dword ptr [esp + 0x1c], edx
// 00887ad1  89442420             mov dword ptr [esp + 0x20], eax
// 00887ad5  894c2424             mov dword ptr [esp + 0x24], ecx
// 00887ad9  85ed                 test ebp, ebp
// 00887adb  7504                 jne 0x887ae1
// 00887add  33c0                 xor eax, eax
// 00887adf  eb03                 jmp 0x887ae4
// 00887ae1  8b4504               mov eax, dword ptr [ebp + 4]
// 00887ae4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00887ae8  6a00                 push 0
// 00887aea  8d54241c             lea edx, [esp + 0x1c]
// 00887aee  52                   push edx
// 00887aef  56                   push esi
// 00887af0  6a03                 push 3
// 00887af2  81c76c040000         add edi, 0x46c
// 00887af8  50                   push eax
// 00887af9  8bcf                 mov ecx, edi
// 00887afb  e8403dfeff           call 0x86b840
// 00887b00  85db                 test ebx, ebx
// 00887b02  7405                 je 0x887b09
// 00887b04  be03000000           mov esi, 3
// 00887b09  837c244003           cmp dword ptr [esp + 0x40], 3
// 00887b0e  7505                 jne 0x887b15
// 00887b10  be04000000           mov esi, 4
// 00887b15  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00887b19  8b542448             mov edx, dword ptr [esp + 0x48]
// 00887b1d  8d48f4               lea ecx, [eax - 0xc]
// 00887b20  89442430             mov dword ptr [esp + 0x30], eax
// 00887b24  8b442450             mov eax, dword ptr [esp + 0x50]
// 00887b28  894c2428             mov dword ptr [esp + 0x28], ecx
// 00887b2c  8954242c             mov dword ptr [esp + 0x2c], edx
// 00887b30  89442434             mov dword ptr [esp + 0x34], eax
// 00887b34  85ed                 test ebp, ebp
// 00887b36  7504                 jne 0x887b3c
// 00887b38  33c0                 xor eax, eax
// 00887b3a  eb03                 jmp 0x887b3f
// 00887b3c  8b4504               mov eax, dword ptr [ebp + 4]
// 00887b3f  6a00                 push 0
// 00887b41  8d4c242c             lea ecx, [esp + 0x2c]
// 00887b45  51                   push ecx
// 00887b46  56                   push esi
// 00887b47  6a04                 push 4
// 00887b49  50                   push eax
// 00887b4a  8bcf                 mov ecx, edi
// 00887b4c  e8ef3cfeff           call 0x86b840
// 00887b51  5f                   pop edi
// 00887b52  5e                   pop esi
// 00887b53  5d                   pop ebp
// 00887b54  5b                   pop ebx
// 00887b55  83c428               add esp, 0x28
// 00887b58  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawSplitButtonFrame@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPControl@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPNativeXPTheme.cpp