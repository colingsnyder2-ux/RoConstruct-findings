// roc 2010-06 00830b60  unit: CXTPRibbonTheme  size: 570 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00830b60
//
// 00830b60  83ec60               sub esp, 0x60
// 00830b63  53                   push ebx
// 00830b64  55                   push ebp
// 00830b65  56                   push esi
// 00830b66  8b742474             mov esi, dword ptr [esp + 0x74]
// 00830b6a  57                   push edi
// 00830b6b  8bd9                 mov ebx, ecx
// 00830b6d  56                   push esi
// 00830b6e  8d4c2424             lea ecx, [esp + 0x24]
// 00830b72  e899e7fcff           call 0x7ff310
// 00830b77  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00830b7b  8b542420             mov edx, dword ptr [esp + 0x20]
// 00830b7f  8bc1                 mov eax, ecx
// 00830b81  2bc2                 sub eax, edx
// 00830b83  89442478             mov dword ptr [esp + 0x78], eax
// 00830b87  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00830b8d  85c0                 test eax, eax
// 00830b8f  7e3a                 jle 0x830bcb
// 00830b91  894c2438             mov dword ptr [esp + 0x38], ecx
// 00830b95  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00830b99  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00830b9d  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00830ba3  89542430             mov dword ptr [esp + 0x30], edx
// 00830ba7  8b542424             mov edx, dword ptr [esp + 0x24]
// 00830bab  48                   dec eax
// 00830bac  3bc1                 cmp eax, ecx
// 00830bae  89542434             mov dword ptr [esp + 0x34], edx
// 00830bb2  7c02                 jl 0x830bb6
// 00830bb4  8bc1                 mov eax, ecx
// 00830bb6  8d542430             lea edx, [esp + 0x30]
// 00830bba  52                   push edx
// 00830bbb  50                   push eax
// 00830bbc  8bce                 mov ecx, esi
// 00830bbe  e88deefdff           call 0x80fa50
// 00830bc3  8b442438             mov eax, dword ptr [esp + 0x38]
// 00830bc7  89442478             mov dword ptr [esp + 0x78], eax
// 00830bcb  68c860a600           push 0xa660c8
// 00830bd0  8bcb                 mov ecx, ebx
// 00830bd2  e829160000           call 0x832200
// 00830bd7  8bf0                 mov esi, eax
// 00830bd9  85f6                 test esi, esi
// 00830bdb  0f84af010000         je 0x830d90
// 00830be1  8bce                 mov ecx, esi
// 00830be3  e8c83f0600           call 0x894bb0
// 00830be8  8bce                 mov ecx, esi
// 00830bea  8bf8                 mov edi, eax
// 00830bec  e8df3f0600           call 0x894bd0
// 00830bf1  8be8                 mov ebp, eax
// 00830bf3  8b442420             mov eax, dword ptr [esp + 0x20]
// 00830bf7  897c241c             mov dword ptr [esp + 0x1c], edi
// 00830bfb  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00830bff  897c2444             mov dword ptr [esp + 0x44], edi
// 00830c03  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00830c07  89442440             mov dword ptr [esp + 0x40], eax
// 00830c0b  8d4438fd             lea eax, [eax + edi - 3]
// 00830c0f  89442448             mov dword ptr [esp + 0x48], eax
// 00830c13  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00830c17  83ec10               sub esp, 0x10
// 00830c1a  33ff                 xor edi, edi
// 00830c1c  8944245c             mov dword ptr [esp + 0x5c], eax
// 00830c20  8bc4                 mov eax, esp
// 00830c22  8938                 mov dword ptr [eax], edi
// 00830c24  897804               mov dword ptr [eax + 4], edi
// 00830c27  897808               mov dword ptr [eax + 8], edi
// 00830c2a  89780c               mov dword ptr [eax + 0xc], edi
// 00830c2d  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 00830c34  83ec10               sub esp, 0x10
// 00830c37  8bc4                 mov eax, esp
// 00830c39  33c9                 xor ecx, ecx
// 00830c3b  8908                 mov dword ptr [eax], ecx
// 00830c3d  33d2                 xor edx, edx
// 00830c3f  895004               mov dword ptr [eax + 4], edx
// 00830c42  894c2430             mov dword ptr [esp + 0x30], ecx
// 00830c46  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00830c4a  89542434             mov dword ptr [esp + 0x34], edx
// 00830c4e  8d542460             lea edx, [esp + 0x60]
// 00830c52  896808               mov dword ptr [eax + 8], ebp
// 00830c55  52                   push edx
// 00830c56  89480c               mov dword ptr [eax + 0xc], ecx
// 00830c59  57                   push edi
// 00830c5a  8bce                 mov ecx, esi
// 00830c5c  896c2440             mov dword ptr [esp + 0x40], ebp
// 00830c60  e89b370600           call 0x894400
// 00830c65  68b460a600           push 0xa660b4
// 00830c6a  8bcb                 mov ecx, ebx
// 00830c6c  e88f150000           call 0x832200
// 00830c71  8bf0                 mov esi, eax
// 00830c73  8bce                 mov ecx, esi
// 00830c75  e8363f0600           call 0x894bb0
// 00830c7a  8bce                 mov ecx, esi
// 00830c7c  8be8                 mov ebp, eax
// 00830c7e  e84d3f0600           call 0x894bd0
// 00830c83  55                   push ebp
// 00830c84  8b2dc0bb9e00         mov ebp, dword ptr [0x9ebbc0]
// 00830c8a  50                   push eax
// 00830c8b  6a00                 push 0
// 00830c8d  6a00                 push 0
// 00830c8f  8d442420             lea eax, [esp + 0x20]
// 00830c93  50                   push eax
// 00830c94  ffd5                 call ebp
// 00830c96  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00830c9a  8b442448             mov eax, dword ptr [esp + 0x48]
// 00830c9e  894c2454             mov dword ptr [esp + 0x54], ecx
// 00830ca2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00830ca6  8bd1                 mov edx, ecx
// 00830ca8  2b542410             sub edx, dword ptr [esp + 0x10]
// 00830cac  89442450             mov dword ptr [esp + 0x50], eax
// 00830cb0  03d0                 add edx, eax
// 00830cb2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00830cb6  83ec10               sub esp, 0x10
// 00830cb9  89542468             mov dword ptr [esp + 0x68], edx
// 00830cbd  33d2                 xor edx, edx
// 00830cbf  8944246c             mov dword ptr [esp + 0x6c], eax
// 00830cc3  8bc4                 mov eax, esp
// 00830cc5  8910                 mov dword ptr [eax], edx
// 00830cc7  895004               mov dword ptr [eax + 4], edx
// 00830cca  895008               mov dword ptr [eax + 8], edx
// 00830ccd  89500c               mov dword ptr [eax + 0xc], edx
// 00830cd0  83ec10               sub esp, 0x10
// 00830cd3  8954245c             mov dword ptr [esp + 0x5c], edx
// 00830cd7  8b542430             mov edx, dword ptr [esp + 0x30]
// 00830cdb  8bc4                 mov eax, esp
// 00830cdd  8910                 mov dword ptr [eax], edx
// 00830cdf  8b542434             mov edx, dword ptr [esp + 0x34]
// 00830ce3  895004               mov dword ptr [eax + 4], edx
// 00830ce6  894808               mov dword ptr [eax + 8], ecx
// 00830ce9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00830ced  8d542470             lea edx, [esp + 0x70]
// 00830cf1  52                   push edx
// 00830cf2  89480c               mov dword ptr [eax + 0xc], ecx
// 00830cf5  57                   push edi
// 00830cf6  8bce                 mov ecx, esi
// 00830cf8  e803370600           call 0x894400
// 00830cfd  68a460a600           push 0xa660a4
// 00830d02  8bcb                 mov ecx, ebx
// 00830d04  e8f7140000           call 0x832200
// 00830d09  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00830d0d  8b542428             mov edx, dword ptr [esp + 0x28]
// 00830d11  8bf0                 mov esi, eax
// 00830d13  8b442458             mov eax, dword ptr [esp + 0x58]
// 00830d17  89442460             mov dword ptr [esp + 0x60], eax
// 00830d1b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00830d1f  894c2464             mov dword ptr [esp + 0x64], ecx
// 00830d23  8bce                 mov ecx, esi
// 00830d25  89542468             mov dword ptr [esp + 0x68], edx
// 00830d29  8944246c             mov dword ptr [esp + 0x6c], eax
// 00830d2d  e87e3e0600           call 0x894bb0
// 00830d32  8bce                 mov ecx, esi
// 00830d34  8bd8                 mov ebx, eax
// 00830d36  e8953e0600           call 0x894bd0
// 00830d3b  53                   push ebx
// 00830d3c  50                   push eax
// 00830d3d  6a00                 push 0
// 00830d3f  6a00                 push 0
// 00830d41  8d4c2420             lea ecx, [esp + 0x20]
// 00830d45  51                   push ecx
// 00830d46  ffd5                 call ebp
// 00830d48  83ec10               sub esp, 0x10
// 00830d4b  8bc4                 mov eax, esp
// 00830d4d  33c9                 xor ecx, ecx
// 00830d4f  8908                 mov dword ptr [eax], ecx
// 00830d51  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00830d55  33d2                 xor edx, edx
// 00830d57  895004               mov dword ptr [eax + 4], edx
// 00830d5a  8b542420             mov edx, dword ptr [esp + 0x20]
// 00830d5e  33db                 xor ebx, ebx
// 00830d60  895808               mov dword ptr [eax + 8], ebx
// 00830d63  83ec10               sub esp, 0x10
// 00830d66  33ed                 xor ebp, ebp
// 00830d68  89680c               mov dword ptr [eax + 0xc], ebp
// 00830d6b  8bc4                 mov eax, esp
// 00830d6d  8910                 mov dword ptr [eax], edx
// 00830d6f  8b542438             mov edx, dword ptr [esp + 0x38]
// 00830d73  894804               mov dword ptr [eax + 4], ecx
// 00830d76  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00830d7a  895008               mov dword ptr [eax + 8], edx
// 00830d7d  8d942480000000       lea edx, [esp + 0x80]
// 00830d84  52                   push edx
// 00830d85  89480c               mov dword ptr [eax + 0xc], ecx
// 00830d88  57                   push edi
// 00830d89  8bce                 mov ecx, esi
// 00830d8b  e870360600           call 0x894400
// 00830d90  5f                   pop edi
// 00830d91  5e                   pop esi
// 00830d92  5d                   pop ebp
// 00830d93  5b                   pop ebx
// 00830d94  83c460               add esp, 0x60
// 00830d97  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillStatusBar@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPStatusBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
