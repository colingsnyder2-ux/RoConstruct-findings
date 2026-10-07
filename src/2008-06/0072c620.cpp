// roc 2008-06 0072c620  unit: CXTPRibbonTheme  size: 570 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072c620
//
// 0072c620  83ec60               sub esp, 0x60
// 0072c623  53                   push ebx
// 0072c624  55                   push ebp
// 0072c625  56                   push esi
// 0072c626  8b742474             mov esi, dword ptr [esp + 0x74]
// 0072c62a  57                   push edi
// 0072c62b  8bd9                 mov ebx, ecx
// 0072c62d  56                   push esi
// 0072c62e  8d4c2424             lea ecx, [esp + 0x24]
// 0072c632  e8f9b4fcff           call 0x6f7b30
// 0072c637  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0072c63b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0072c63f  8bc1                 mov eax, ecx
// 0072c641  2bc2                 sub eax, edx
// 0072c643  89442478             mov dword ptr [esp + 0x78], eax
// 0072c647  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0072c64d  85c0                 test eax, eax
// 0072c64f  7e3a                 jle 0x72c68b
// 0072c651  894c2438             mov dword ptr [esp + 0x38], ecx
// 0072c655  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0072c659  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0072c65d  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0072c663  89542430             mov dword ptr [esp + 0x30], edx
// 0072c667  8b542424             mov edx, dword ptr [esp + 0x24]
// 0072c66b  48                   dec eax
// 0072c66c  3bc1                 cmp eax, ecx
// 0072c66e  89542434             mov dword ptr [esp + 0x34], edx
// 0072c672  7c02                 jl 0x72c676
// 0072c674  8bc1                 mov eax, ecx
// 0072c676  8d542430             lea edx, [esp + 0x30]
// 0072c67a  52                   push edx
// 0072c67b  50                   push eax
// 0072c67c  8bce                 mov ecx, esi
// 0072c67e  e8cd2cfeff           call 0x70f350
// 0072c683  8b442438             mov eax, dword ptr [esp + 0x38]
// 0072c687  89442478             mov dword ptr [esp + 0x78], eax
// 0072c68b  6868208600           push 0x862068
// 0072c690  8bcb                 mov ecx, ebx
// 0072c692  e859900000           call 0x7356f0
// 0072c697  8bf0                 mov esi, eax
// 0072c699  85f6                 test esi, esi
// 0072c69b  0f84af010000         je 0x72c850
// 0072c6a1  8bce                 mov ecx, esi
// 0072c6a3  e808110600           call 0x78d7b0
// 0072c6a8  8bce                 mov ecx, esi
// 0072c6aa  8bf8                 mov edi, eax
// 0072c6ac  e81f110600           call 0x78d7d0
// 0072c6b1  8be8                 mov ebp, eax
// 0072c6b3  8b442420             mov eax, dword ptr [esp + 0x20]
// 0072c6b7  897c241c             mov dword ptr [esp + 0x1c], edi
// 0072c6bb  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0072c6bf  897c2444             mov dword ptr [esp + 0x44], edi
// 0072c6c3  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 0072c6c7  89442440             mov dword ptr [esp + 0x40], eax
// 0072c6cb  8d4438fd             lea eax, [eax + edi - 3]
// 0072c6cf  89442448             mov dword ptr [esp + 0x48], eax
// 0072c6d3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0072c6d7  83ec10               sub esp, 0x10
// 0072c6da  33ff                 xor edi, edi
// 0072c6dc  8944245c             mov dword ptr [esp + 0x5c], eax
// 0072c6e0  8bc4                 mov eax, esp
// 0072c6e2  8938                 mov dword ptr [eax], edi
// 0072c6e4  897804               mov dword ptr [eax + 4], edi
// 0072c6e7  897808               mov dword ptr [eax + 8], edi
// 0072c6ea  89780c               mov dword ptr [eax + 0xc], edi
// 0072c6ed  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 0072c6f4  83ec10               sub esp, 0x10
// 0072c6f7  8bc4                 mov eax, esp
// 0072c6f9  33c9                 xor ecx, ecx
// 0072c6fb  8908                 mov dword ptr [eax], ecx
// 0072c6fd  33d2                 xor edx, edx
// 0072c6ff  895004               mov dword ptr [eax + 4], edx
// 0072c702  894c2430             mov dword ptr [esp + 0x30], ecx
// 0072c706  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0072c70a  89542434             mov dword ptr [esp + 0x34], edx
// 0072c70e  8d542460             lea edx, [esp + 0x60]
// 0072c712  896808               mov dword ptr [eax + 8], ebp
// 0072c715  52                   push edx
// 0072c716  89480c               mov dword ptr [eax + 0xc], ecx
// 0072c719  57                   push edi
// 0072c71a  8bce                 mov ecx, esi
// 0072c71c  896c2440             mov dword ptr [esp + 0x40], ebp
// 0072c720  e8db080600           call 0x78d000
// 0072c725  6854208600           push 0x862054
// 0072c72a  8bcb                 mov ecx, ebx
// 0072c72c  e8bf8f0000           call 0x7356f0
// 0072c731  8bf0                 mov esi, eax
// 0072c733  8bce                 mov ecx, esi
// 0072c735  e876100600           call 0x78d7b0
// 0072c73a  8bce                 mov ecx, esi
// 0072c73c  8be8                 mov ebp, eax
// 0072c73e  e88d100600           call 0x78d7d0
// 0072c743  55                   push ebp
// 0072c744  8b2d102d8000         mov ebp, dword ptr [0x802d10]
// 0072c74a  50                   push eax
// 0072c74b  6a00                 push 0
// 0072c74d  6a00                 push 0
// 0072c74f  8d442420             lea eax, [esp + 0x20]
// 0072c753  50                   push eax
// 0072c754  ffd5                 call ebp
// 0072c756  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0072c75a  8b442448             mov eax, dword ptr [esp + 0x48]
// 0072c75e  894c2454             mov dword ptr [esp + 0x54], ecx
// 0072c762  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072c766  8bd1                 mov edx, ecx
// 0072c768  2b542410             sub edx, dword ptr [esp + 0x10]
// 0072c76c  89442450             mov dword ptr [esp + 0x50], eax
// 0072c770  03d0                 add edx, eax
// 0072c772  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0072c776  83ec10               sub esp, 0x10
// 0072c779  89542468             mov dword ptr [esp + 0x68], edx
// 0072c77d  33d2                 xor edx, edx
// 0072c77f  8944246c             mov dword ptr [esp + 0x6c], eax
// 0072c783  8bc4                 mov eax, esp
// 0072c785  8910                 mov dword ptr [eax], edx
// 0072c787  895004               mov dword ptr [eax + 4], edx
// 0072c78a  895008               mov dword ptr [eax + 8], edx
// 0072c78d  89500c               mov dword ptr [eax + 0xc], edx
// 0072c790  83ec10               sub esp, 0x10
// 0072c793  8954245c             mov dword ptr [esp + 0x5c], edx
// 0072c797  8b542430             mov edx, dword ptr [esp + 0x30]
// 0072c79b  8bc4                 mov eax, esp
// 0072c79d  8910                 mov dword ptr [eax], edx
// 0072c79f  8b542434             mov edx, dword ptr [esp + 0x34]
// 0072c7a3  895004               mov dword ptr [eax + 4], edx
// 0072c7a6  894808               mov dword ptr [eax + 8], ecx
// 0072c7a9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0072c7ad  8d542470             lea edx, [esp + 0x70]
// 0072c7b1  52                   push edx
// 0072c7b2  89480c               mov dword ptr [eax + 0xc], ecx
// 0072c7b5  57                   push edi
// 0072c7b6  8bce                 mov ecx, esi
// 0072c7b8  e843080600           call 0x78d000
// 0072c7bd  6844208600           push 0x862044
// 0072c7c2  8bcb                 mov ecx, ebx
// 0072c7c4  e8278f0000           call 0x7356f0
// 0072c7c9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0072c7cd  8b542428             mov edx, dword ptr [esp + 0x28]
// 0072c7d1  8bf0                 mov esi, eax
// 0072c7d3  8b442458             mov eax, dword ptr [esp + 0x58]
// 0072c7d7  89442460             mov dword ptr [esp + 0x60], eax
// 0072c7db  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0072c7df  894c2464             mov dword ptr [esp + 0x64], ecx
// 0072c7e3  8bce                 mov ecx, esi
// 0072c7e5  89542468             mov dword ptr [esp + 0x68], edx
// 0072c7e9  8944246c             mov dword ptr [esp + 0x6c], eax
// 0072c7ed  e8be0f0600           call 0x78d7b0
// 0072c7f2  8bce                 mov ecx, esi
// 0072c7f4  8bd8                 mov ebx, eax
// 0072c7f6  e8d50f0600           call 0x78d7d0
// 0072c7fb  53                   push ebx
// 0072c7fc  50                   push eax
// 0072c7fd  6a00                 push 0
// 0072c7ff  6a00                 push 0
// 0072c801  8d4c2420             lea ecx, [esp + 0x20]
// 0072c805  51                   push ecx
// 0072c806  ffd5                 call ebp
// 0072c808  83ec10               sub esp, 0x10
// 0072c80b  8bc4                 mov eax, esp
// 0072c80d  33c9                 xor ecx, ecx
// 0072c80f  8908                 mov dword ptr [eax], ecx
// 0072c811  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0072c815  33d2                 xor edx, edx
// 0072c817  895004               mov dword ptr [eax + 4], edx
// 0072c81a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0072c81e  33db                 xor ebx, ebx
// 0072c820  895808               mov dword ptr [eax + 8], ebx
// 0072c823  83ec10               sub esp, 0x10
// 0072c826  33ed                 xor ebp, ebp
// 0072c828  89680c               mov dword ptr [eax + 0xc], ebp
// 0072c82b  8bc4                 mov eax, esp
// 0072c82d  8910                 mov dword ptr [eax], edx
// 0072c82f  8b542438             mov edx, dword ptr [esp + 0x38]
// 0072c833  894804               mov dword ptr [eax + 4], ecx
// 0072c836  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0072c83a  895008               mov dword ptr [eax + 8], edx
// 0072c83d  8d942480000000       lea edx, [esp + 0x80]
// 0072c844  52                   push edx
// 0072c845  89480c               mov dword ptr [eax + 0xc], ecx
// 0072c848  57                   push edi
// 0072c849  8bce                 mov ecx, esi
// 0072c84b  e8b0070600           call 0x78d000
// 0072c850  5f                   pop edi
// 0072c851  5e                   pop esi
// 0072c852  5d                   pop ebp
// 0072c853  5b                   pop ebx
// 0072c854  83c460               add esp, 0x60
// 0072c857  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillStatusBar@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPStatusBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
