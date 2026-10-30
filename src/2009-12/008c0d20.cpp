// roc 2009-12 008c0d20  unit: CXTPShadowsManager::CShadowWnd  size: 379 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c0d20
//
// 008c0d20  6aff                 push -1
// 008c0d22  686a3e9600           push 0x963e6a
// 008c0d27  64a100000000         mov eax, dword ptr fs:[0]
// 008c0d2d  50                   push eax
// 008c0d2e  83ec14               sub esp, 0x14
// 008c0d31  53                   push ebx
// 008c0d32  55                   push ebp
// 008c0d33  56                   push esi
// 008c0d34  57                   push edi
// 008c0d35  a10052b600           mov eax, dword ptr [0xb65200]
// 008c0d3a  33c4                 xor eax, esp
// 008c0d3c  50                   push eax
// 008c0d3d  8d442428             lea eax, [esp + 0x28]
// 008c0d41  64a300000000         mov dword ptr fs:[0], eax
// 008c0d47  8bd9                 mov ebx, ecx
// 008c0d49  6a70                 push 0x70
// 008c0d4b  e8102bf3ff           call 0x7f3860
// 008c0d50  83c404               add esp, 4
// 008c0d53  89442414             mov dword ptr [esp + 0x14], eax
// 008c0d57  c744243000000000     mov dword ptr [esp + 0x30], 0
// 008c0d5f  85c0                 test eax, eax
// 008c0d61  740b                 je 0x8c0d6e
// 008c0d63  8bc8                 mov ecx, eax
// 008c0d65  e886f1ffff           call 0x8bfef0
// 008c0d6a  8bf0                 mov esi, eax
// 008c0d6c  eb02                 jmp 0x8c0d70
// 008c0d6e  33f6                 xor esi, esi
// 008c0d70  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 008c0d74  8bcd                 mov ecx, ebp
// 008c0d76  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008c0d7e  e80d38f4ff           call 0x804590
// 008c0d83  83786400             cmp dword ptr [eax + 0x64], 0
// 008c0d87  7507                 jne 0x8c0d90
// 008c0d89  33c0                 xor eax, eax
// 008c0d8b  e9f5000000           jmp 0x8c0e85
// 008c0d90  8b8028010000         mov eax, dword ptr [eax + 0x128]
// 008c0d96  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008c0d9a  894664               mov dword ptr [esi + 0x64], eax
// 008c0d9d  894e6c               mov dword ptr [esi + 0x6c], ecx
// 008c0da0  896e68               mov dword ptr [esi + 0x68], ebp
// 008c0da3  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008c0da7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008c0dab  83ec10               sub esp, 0x10
// 008c0dae  8bc4                 mov eax, esp
// 008c0db0  8910                 mov dword ptr [eax], edx
// 008c0db2  8b542454             mov edx, dword ptr [esp + 0x54]
// 008c0db6  894804               mov dword ptr [eax + 4], ecx
// 008c0db9  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008c0dbd  895008               mov dword ptr [eax + 8], edx
// 008c0dc0  8b542448             mov edx, dword ptr [esp + 0x48]
// 008c0dc4  89480c               mov dword ptr [eax + 0xc], ecx
// 008c0dc7  52                   push edx
// 008c0dc8  8bce                 mov ecx, esi
// 008c0dca  e8c1f7ffff           call 0x8c0590
// 008c0dcf  8d7b04               lea edi, [ebx + 4]
// 008c0dd2  57                   push edi
// 008c0dd3  8bce                 mov ecx, esi
// 008c0dd5  e876f3ffff           call 0x8c0150
// 008c0dda  56                   push esi
// 008c0ddb  8bcf                 mov ecx, edi
// 008c0ddd  e89e2d0000           call 0x8c3b80
// 008c0de2  f6466402             test byte ptr [esi + 0x64], 2
// 008c0de6  7427                 je 0x8c0e0f
// 008c0de8  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008c0dec  8b542450             mov edx, dword ptr [esp + 0x50]
// 008c0df0  83ec10               sub esp, 0x10
// 008c0df3  8bc4                 mov eax, esp
// 008c0df5  8908                 mov dword ptr [eax], ecx
// 008c0df7  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008c0dfb  895004               mov dword ptr [eax + 4], edx
// 008c0dfe  8b542468             mov edx, dword ptr [esp + 0x68]
// 008c0e02  894808               mov dword ptr [eax + 8], ecx
// 008c0e05  8bce                 mov ecx, esi
// 008c0e07  89500c               mov dword ptr [eax + 0xc], edx
// 008c0e0a  e891f2ffff           call 0x8c00a0
// 008c0e0f  8b7b08               mov edi, dword ptr [ebx + 8]
// 008c0e12  85ff                 test edi, edi
// 008c0e14  743e                 je 0x8c0e54
// 008c0e16  8bc7                 mov eax, edi
// 008c0e18  8b4008               mov eax, dword ptr [eax + 8]
// 008c0e1b  8b4068               mov eax, dword ptr [eax + 0x68]
// 008c0e1e  8b3f                 mov edi, dword ptr [edi]
// 008c0e20  85c0                 test eax, eax
// 008c0e22  742c                 je 0x8c0e50
// 008c0e24  50                   push eax
// 008c0e25  8d4c241c             lea ecx, [esp + 0x1c]
// 008c0e29  e842a4f8ff           call 0x84b270
// 008c0e2e  8b10                 mov edx, dword ptr [eax]
// 008c0e30  83ec10               sub esp, 0x10
// 008c0e33  8bcc                 mov ecx, esp
// 008c0e35  8911                 mov dword ptr [ecx], edx
// 008c0e37  8b5004               mov edx, dword ptr [eax + 4]
// 008c0e3a  895104               mov dword ptr [ecx + 4], edx
// 008c0e3d  8b5008               mov edx, dword ptr [eax + 8]
// 008c0e40  8b400c               mov eax, dword ptr [eax + 0xc]
// 008c0e43  895108               mov dword ptr [ecx + 8], edx
// 008c0e46  89410c               mov dword ptr [ecx + 0xc], eax
// 008c0e49  8bce                 mov ecx, esi
// 008c0e4b  e850f2ffff           call 0x8c00a0
// 008c0e50  85ff                 test edi, edi
// 008c0e52  75c2                 jne 0x8c0e16
// 008c0e54  8b0d10da9800         mov ecx, dword ptr [0x98da10]
// 008c0e5a  6853020000           push 0x253
// 008c0e5f  6a00                 push 0
// 008c0e61  6a00                 push 0
// 008c0e63  6a00                 push 0
// 008c0e65  6a00                 push 0
// 008c0e67  51                   push ecx
// 008c0e68  8bce                 mov ecx, esi
// 008c0e6a  e8bd2df3ff           call 0x7f3c2c
// 008c0e6f  8b5520               mov edx, dword ptr [ebp + 0x20]
// 008c0e72  8d4654               lea eax, [esi + 0x54]
// 008c0e75  50                   push eax
// 008c0e76  52                   push edx
// 008c0e77  e864fafaff           call 0x8708e0
// 008c0e7c  8bc8                 mov ecx, eax
// 008c0e7e  e8fd00fbff           call 0x870f80
// 008c0e83  8bc6                 mov eax, esi
// 008c0e85  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008c0e89  64890d00000000       mov dword ptr fs:[0], ecx
// 008c0e90  59                   pop ecx
// 008c0e91  5f                   pop edi
// 008c0e92  5e                   pop esi
// 008c0e93  5d                   pop ebp
// 008c0e94  5b                   pop ebx
// 008c0e95  83c420               add esp, 0x20
// 008c0e98  c22c00               ret 0x2c
// copied from an identical function in another client (function ?CreateShadow@CXTPShadowsManager@@AAEPAVCShadowWnd@1@HVCRect@@0PAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPShadowsManager.cpp