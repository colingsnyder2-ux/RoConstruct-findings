// roc 2009-12 00875c30  unit: CXTPRibbonTheme  size: 570 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00875c30
//
// 00875c30  83ec60               sub esp, 0x60
// 00875c33  53                   push ebx
// 00875c34  55                   push ebp
// 00875c35  56                   push esi
// 00875c36  8b742474             mov esi, dword ptr [esp + 0x74]
// 00875c3a  57                   push edi
// 00875c3b  8bd9                 mov ebx, ecx
// 00875c3d  56                   push esi
// 00875c3e  8d4c2424             lea ecx, [esp + 0x24]
// 00875c42  e88956fdff           call 0x84b2d0
// 00875c47  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00875c4b  8b542420             mov edx, dword ptr [esp + 0x20]
// 00875c4f  8bc1                 mov eax, ecx
// 00875c51  2bc2                 sub eax, edx
// 00875c53  89442478             mov dword ptr [esp + 0x78], eax
// 00875c57  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00875c5d  85c0                 test eax, eax
// 00875c5f  7e3a                 jle 0x875c9b
// 00875c61  894c2438             mov dword ptr [esp + 0x38], ecx
// 00875c65  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00875c69  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00875c6d  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00875c73  89542430             mov dword ptr [esp + 0x30], edx
// 00875c77  8b542424             mov edx, dword ptr [esp + 0x24]
// 00875c7b  48                   dec eax
// 00875c7c  3bc1                 cmp eax, ecx
// 00875c7e  89542434             mov dword ptr [esp + 0x34], edx
// 00875c82  7c02                 jl 0x875c86
// 00875c84  8bc1                 mov eax, ecx
// 00875c86  8d542430             lea edx, [esp + 0x30]
// 00875c8a  52                   push edx
// 00875c8b  50                   push eax
// 00875c8c  8bce                 mov ecx, esi
// 00875c8e  e8ed5dfeff           call 0x85ba80
// 00875c93  8b442438             mov eax, dword ptr [esp + 0x38]
// 00875c97  89442478             mov dword ptr [esp + 0x78], eax
// 00875c9b  688817a000           push 0xa01788
// 00875ca0  8bcb                 mov ecx, ebx
// 00875ca2  e859900000           call 0x87ed00
// 00875ca7  8bf0                 mov esi, eax
// 00875ca9  85f6                 test esi, esi
// 00875cab  0f84af010000         je 0x875e60
// 00875cb1  8bce                 mov ecx, esi
// 00875cb3  e888ac0600           call 0x8e0940
// 00875cb8  8bce                 mov ecx, esi
// 00875cba  8bf8                 mov edi, eax
// 00875cbc  e89fac0600           call 0x8e0960
// 00875cc1  8be8                 mov ebp, eax
// 00875cc3  8b442420             mov eax, dword ptr [esp + 0x20]
// 00875cc7  897c241c             mov dword ptr [esp + 0x1c], edi
// 00875ccb  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00875ccf  897c2444             mov dword ptr [esp + 0x44], edi
// 00875cd3  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00875cd7  89442440             mov dword ptr [esp + 0x40], eax
// 00875cdb  8d4438fd             lea eax, [eax + edi - 3]
// 00875cdf  89442448             mov dword ptr [esp + 0x48], eax
// 00875ce3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00875ce7  83ec10               sub esp, 0x10
// 00875cea  33ff                 xor edi, edi
// 00875cec  8944245c             mov dword ptr [esp + 0x5c], eax
// 00875cf0  8bc4                 mov eax, esp
// 00875cf2  8938                 mov dword ptr [eax], edi
// 00875cf4  897804               mov dword ptr [eax + 4], edi
// 00875cf7  897808               mov dword ptr [eax + 8], edi
// 00875cfa  89780c               mov dword ptr [eax + 0xc], edi
// 00875cfd  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 00875d04  83ec10               sub esp, 0x10
// 00875d07  8bc4                 mov eax, esp
// 00875d09  33c9                 xor ecx, ecx
// 00875d0b  8908                 mov dword ptr [eax], ecx
// 00875d0d  33d2                 xor edx, edx
// 00875d0f  895004               mov dword ptr [eax + 4], edx
// 00875d12  894c2430             mov dword ptr [esp + 0x30], ecx
// 00875d16  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00875d1a  89542434             mov dword ptr [esp + 0x34], edx
// 00875d1e  8d542460             lea edx, [esp + 0x60]
// 00875d22  896808               mov dword ptr [eax + 8], ebp
// 00875d25  52                   push edx
// 00875d26  89480c               mov dword ptr [eax + 0xc], ecx
// 00875d29  57                   push edi
// 00875d2a  8bce                 mov ecx, esi
// 00875d2c  896c2440             mov dword ptr [esp + 0x40], ebp
// 00875d30  e85ba40600           call 0x8e0190
// 00875d35  687417a000           push 0xa01774
// 00875d3a  8bcb                 mov ecx, ebx
// 00875d3c  e8bf8f0000           call 0x87ed00
// 00875d41  8bf0                 mov esi, eax
// 00875d43  8bce                 mov ecx, esi
// 00875d45  e8f6ab0600           call 0x8e0940
// 00875d4a  8bce                 mov ecx, esi
// 00875d4c  8be8                 mov ebp, eax
// 00875d4e  e80dac0600           call 0x8e0960
// 00875d53  55                   push ebp
// 00875d54  8b2d38ca9800         mov ebp, dword ptr [0x98ca38]
// 00875d5a  50                   push eax
// 00875d5b  6a00                 push 0
// 00875d5d  6a00                 push 0
// 00875d5f  8d442420             lea eax, [esp + 0x20]
// 00875d63  50                   push eax
// 00875d64  ffd5                 call ebp
// 00875d66  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00875d6a  8b442448             mov eax, dword ptr [esp + 0x48]
// 00875d6e  894c2454             mov dword ptr [esp + 0x54], ecx
// 00875d72  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00875d76  8bd1                 mov edx, ecx
// 00875d78  2b542410             sub edx, dword ptr [esp + 0x10]
// 00875d7c  89442450             mov dword ptr [esp + 0x50], eax
// 00875d80  03d0                 add edx, eax
// 00875d82  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00875d86  83ec10               sub esp, 0x10
// 00875d89  89542468             mov dword ptr [esp + 0x68], edx
// 00875d8d  33d2                 xor edx, edx
// 00875d8f  8944246c             mov dword ptr [esp + 0x6c], eax
// 00875d93  8bc4                 mov eax, esp
// 00875d95  8910                 mov dword ptr [eax], edx
// 00875d97  895004               mov dword ptr [eax + 4], edx
// 00875d9a  895008               mov dword ptr [eax + 8], edx
// 00875d9d  89500c               mov dword ptr [eax + 0xc], edx
// 00875da0  83ec10               sub esp, 0x10
// 00875da3  8954245c             mov dword ptr [esp + 0x5c], edx
// 00875da7  8b542430             mov edx, dword ptr [esp + 0x30]
// 00875dab  8bc4                 mov eax, esp
// 00875dad  8910                 mov dword ptr [eax], edx
// 00875daf  8b542434             mov edx, dword ptr [esp + 0x34]
// 00875db3  895004               mov dword ptr [eax + 4], edx
// 00875db6  894808               mov dword ptr [eax + 8], ecx
// 00875db9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00875dbd  8d542470             lea edx, [esp + 0x70]
// 00875dc1  52                   push edx
// 00875dc2  89480c               mov dword ptr [eax + 0xc], ecx
// 00875dc5  57                   push edi
// 00875dc6  8bce                 mov ecx, esi
// 00875dc8  e8c3a30600           call 0x8e0190
// 00875dcd  686417a000           push 0xa01764
// 00875dd2  8bcb                 mov ecx, ebx
// 00875dd4  e8278f0000           call 0x87ed00
// 00875dd9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00875ddd  8b542428             mov edx, dword ptr [esp + 0x28]
// 00875de1  8bf0                 mov esi, eax
// 00875de3  8b442458             mov eax, dword ptr [esp + 0x58]
// 00875de7  89442460             mov dword ptr [esp + 0x60], eax
// 00875deb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00875def  894c2464             mov dword ptr [esp + 0x64], ecx
// 00875df3  8bce                 mov ecx, esi
// 00875df5  89542468             mov dword ptr [esp + 0x68], edx
// 00875df9  8944246c             mov dword ptr [esp + 0x6c], eax
// 00875dfd  e83eab0600           call 0x8e0940
// 00875e02  8bce                 mov ecx, esi
// 00875e04  8bd8                 mov ebx, eax
// 00875e06  e855ab0600           call 0x8e0960
// 00875e0b  53                   push ebx
// 00875e0c  50                   push eax
// 00875e0d  6a00                 push 0
// 00875e0f  6a00                 push 0
// 00875e11  8d4c2420             lea ecx, [esp + 0x20]
// 00875e15  51                   push ecx
// 00875e16  ffd5                 call ebp
// 00875e18  83ec10               sub esp, 0x10
// 00875e1b  8bc4                 mov eax, esp
// 00875e1d  33c9                 xor ecx, ecx
// 00875e1f  8908                 mov dword ptr [eax], ecx
// 00875e21  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00875e25  33d2                 xor edx, edx
// 00875e27  895004               mov dword ptr [eax + 4], edx
// 00875e2a  8b542420             mov edx, dword ptr [esp + 0x20]
// 00875e2e  33db                 xor ebx, ebx
// 00875e30  895808               mov dword ptr [eax + 8], ebx
// 00875e33  83ec10               sub esp, 0x10
// 00875e36  33ed                 xor ebp, ebp
// 00875e38  89680c               mov dword ptr [eax + 0xc], ebp
// 00875e3b  8bc4                 mov eax, esp
// 00875e3d  8910                 mov dword ptr [eax], edx
// 00875e3f  8b542438             mov edx, dword ptr [esp + 0x38]
// 00875e43  894804               mov dword ptr [eax + 4], ecx
// 00875e46  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00875e4a  895008               mov dword ptr [eax + 8], edx
// 00875e4d  8d942480000000       lea edx, [esp + 0x80]
// 00875e54  52                   push edx
// 00875e55  89480c               mov dword ptr [eax + 0xc], ecx
// 00875e58  57                   push edi
// 00875e59  8bce                 mov ecx, esi
// 00875e5b  e830a30600           call 0x8e0190
// 00875e60  5f                   pop edi
// 00875e61  5e                   pop esi
// 00875e62  5d                   pop ebp
// 00875e63  5b                   pop ebx
// 00875e64  83c460               add esp, 0x60
// 00875e67  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillStatusBar@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPStatusBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
