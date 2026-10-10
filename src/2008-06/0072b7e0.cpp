// roc 2008-06 0072b7e0  unit: CXTPRibbonTheme  size: 441 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072b7e0
//
// 0072b7e0  83ec40               sub esp, 0x40
// 0072b7e3  53                   push ebx
// 0072b7e4  55                   push ebp
// 0072b7e5  56                   push esi
// 0072b7e6  8b742454             mov esi, dword ptr [esp + 0x54]
// 0072b7ea  8b86fc010000         mov eax, dword ptr [esi + 0x1fc]
// 0072b7f0  8b9608020000         mov edx, dword ptr [esi + 0x208]
// 0072b7f6  8bd9                 mov ebx, ecx
// 0072b7f8  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0072b7fe  8944240c             mov dword ptr [esp + 0xc], eax
// 0072b802  8b8600020000         mov eax, dword ptr [esi + 0x200]
// 0072b808  57                   push edi
// 0072b809  894c2418             mov dword ptr [esp + 0x18], ecx
// 0072b80d  48                   dec eax
// 0072b80e  68341f8600           push 0x861f34
// 0072b813  8bcb                 mov ecx, ebx
// 0072b815  89542420             mov dword ptr [esp + 0x20], edx
// 0072b819  89442418             mov dword ptr [esp + 0x18], eax
// 0072b81d  e8ce9e0000           call 0x7356f0
// 0072b822  6a02                 push 2
// 0072b824  8bf8                 mov edi, eax
// 0072b826  33ed                 xor ebp, ebp
// 0072b828  55                   push ebp
// 0072b829  8d442438             lea eax, [esp + 0x38]
// 0072b82d  50                   push eax
// 0072b82e  8bcf                 mov ecx, edi
// 0072b830  e8fb1e0600           call 0x78d730
// 0072b835  83ec10               sub esp, 0x10
// 0072b838  8bcc                 mov ecx, esp
// 0072b83a  8929                 mov dword ptr [ecx], ebp
// 0072b83c  ba05000000           mov edx, 5
// 0072b841  895104               mov dword ptr [ecx + 4], edx
// 0072b844  33d2                 xor edx, edx
// 0072b846  895108               mov dword ptr [ecx + 8], edx
// 0072b849  83ec10               sub esp, 0x10
// 0072b84c  ba03000000           mov edx, 3
// 0072b851  89510c               mov dword ptr [ecx + 0xc], edx
// 0072b854  8b10                 mov edx, dword ptr [eax]
// 0072b856  8bcc                 mov ecx, esp
// 0072b858  8911                 mov dword ptr [ecx], edx
// 0072b85a  8b5004               mov edx, dword ptr [eax + 4]
// 0072b85d  895104               mov dword ptr [ecx + 4], edx
// 0072b860  8b5008               mov edx, dword ptr [eax + 8]
// 0072b863  8b400c               mov eax, dword ptr [eax + 0xc]
// 0072b866  895108               mov dword ptr [ecx + 8], edx
// 0072b869  8b542474             mov edx, dword ptr [esp + 0x74]
// 0072b86d  89410c               mov dword ptr [ecx + 0xc], eax
// 0072b870  8d4c2430             lea ecx, [esp + 0x30]
// 0072b874  51                   push ecx
// 0072b875  52                   push edx
// 0072b876  8bcf                 mov ecx, edi
// 0072b878  e883170600           call 0x78d000
// 0072b87d  8bce                 mov ecx, esi
// 0072b87f  e8ec71ffff           call 0x722a70
// 0072b884  85c0                 test eax, eax
// 0072b886  0f85df000000         jne 0x72b96b
// 0072b88c  39ae4c020000         cmp dword ptr [esi + 0x24c], ebp
// 0072b892  0f84d3000000         je 0x72b96b
// 0072b898  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 0072b89e  50                   push eax
// 0072b89f  e80c73fcff           call 0x6f2bb0
// 0072b8a4  85c0                 test eax, eax
// 0072b8a6  0f8ebf000000         jle 0x72b96b
// 0072b8ac  8b8e38020000         mov ecx, dword ptr [esi + 0x238]
// 0072b8b2  8b8630020000         mov eax, dword ptr [esi + 0x230]
// 0072b8b8  8bbe2c020000         mov edi, dword ptr [esi + 0x22c]
// 0072b8be  8bae34020000         mov ebp, dword ptr [esi + 0x234]
// 0072b8c4  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0072b8c8  8bce                 mov ecx, esi
// 0072b8ca  89442434             mov dword ptr [esp + 0x34], eax
// 0072b8ce  e87d69ffff           call 0x722250
// 0072b8d3  83c7f1               add edi, -0xf
// 0072b8d6  681c1f8600           push 0x861f1c
// 0072b8db  8bcb                 mov ecx, ebx
// 0072b8dd  897c2424             mov dword ptr [esp + 0x24], edi
// 0072b8e1  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0072b8e9  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0072b8ed  89442430             mov dword ptr [esp + 0x30], eax
// 0072b8f1  e8fa9d0000           call 0x7356f0
// 0072b8f6  8bf8                 mov edi, eax
// 0072b8f8  85ff                 test edi, edi
// 0072b8fa  746f                 je 0x72b96b
// 0072b8fc  6a01                 push 1
// 0072b8fe  6a00                 push 0
// 0072b900  8d542448             lea edx, [esp + 0x48]
// 0072b904  bd10000000           mov ebp, 0x10
// 0072b909  52                   push edx
// 0072b90a  8bcf                 mov ecx, edi
// 0072b90c  c7472c01000000       mov dword ptr [edi + 0x2c], 1
// 0072b913  896c2444             mov dword ptr [esp + 0x44], ebp
// 0072b917  c744244803000000     mov dword ptr [esp + 0x48], 3
// 0072b91f  e80c1e0600           call 0x78d730
// 0072b924  83ec10               sub esp, 0x10
// 0072b927  8bcc                 mov ecx, esp
// 0072b929  8929                 mov dword ptr [ecx], ebp
// 0072b92b  ba03000000           mov edx, 3
// 0072b930  895104               mov dword ptr [ecx + 4], edx
// 0072b933  8bd5                 mov edx, ebp
// 0072b935  895108               mov dword ptr [ecx + 8], edx
// 0072b938  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0072b93c  89510c               mov dword ptr [ecx + 0xc], edx
// 0072b93f  8b10                 mov edx, dword ptr [eax]
// 0072b941  83ec10               sub esp, 0x10
// 0072b944  8bcc                 mov ecx, esp
// 0072b946  8911                 mov dword ptr [ecx], edx
// 0072b948  8b5004               mov edx, dword ptr [eax + 4]
// 0072b94b  895104               mov dword ptr [ecx + 4], edx
// 0072b94e  8b5008               mov edx, dword ptr [eax + 8]
// 0072b951  8b400c               mov eax, dword ptr [eax + 0xc]
// 0072b954  895108               mov dword ptr [ecx + 8], edx
// 0072b957  8b542474             mov edx, dword ptr [esp + 0x74]
// 0072b95b  89410c               mov dword ptr [ecx + 0xc], eax
// 0072b95e  8d4c2440             lea ecx, [esp + 0x40]
// 0072b962  51                   push ecx
// 0072b963  52                   push edx
// 0072b964  8bcf                 mov ecx, edi
// 0072b966  e895160600           call 0x78d000
// 0072b96b  8bbe84020000         mov edi, dword ptr [esi + 0x284]
// 0072b971  8bcf                 mov ecx, edi
// 0072b973  e8d8830600           call 0x793d50
// 0072b978  85c0                 test eax, eax
// 0072b97a  7413                 je 0x72b98f
// 0072b97c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0072b980  8b03                 mov eax, dword ptr [ebx]
// 0072b982  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 0072b988  57                   push edi
// 0072b989  56                   push esi
// 0072b98a  51                   push ecx
// 0072b98b  8bcb                 mov ecx, ebx
// 0072b98d  ffd2                 call edx
// 0072b98f  5f                   pop edi
// 0072b990  5e                   pop esi
// 0072b991  5d                   pop ebp
// 0072b992  5b                   pop ebx
// 0072b993  83c440               add esp, 0x40
// 0072b996  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawRibbonFrameCaptionBar@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp
