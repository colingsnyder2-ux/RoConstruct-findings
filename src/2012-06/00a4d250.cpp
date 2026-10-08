// roc 2012-06 00a4d250  unit: CXTPTabManagerNavigateButton  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4d250
//
// 00a4d250  83ec20               sub esp, 0x20
// 00a4d253  56                   push esi
// 00a4d254  8bf1                 mov esi, ecx
// 00a4d256  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a4d25c  85c0                 test eax, eax
// 00a4d25e  0f8559010000         jne 0xa4d3bd
// 00a4d264  394620               cmp dword ptr [esi + 0x20], eax
// 00a4d267  0f8450010000         je 0xa4d3bd
// 00a4d26d  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a4d271  53                   push ebx
// 00a4d272  55                   push ebp
// 00a4d273  57                   push edi
// 00a4d274  50                   push eax
// 00a4d275  ff15803ab200         call dword ptr [0xb23a80]
// 00a4d27b  8b2d7422b200         mov ebp, dword ptr [0xb22274]
// 00a4d281  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a4d289  ffd5                 call ebp
// 00a4d28b  8bd8                 mov ebx, eax
// 00a4d28d  8d7e10               lea edi, [esi + 0x10]
// 00a4d290  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a4d294  7418                 je 0xa4d2ae
// 00a4d296  ffd5                 call ebp
// 00a4d298  2bc3                 sub eax, ebx
// 00a4d29a  83f814               cmp eax, 0x14
// 00a4d29d  760f                 jbe 0xa4d2ae
// 00a4d29f  ffd5                 call ebp
// 00a4d2a1  8b16                 mov edx, dword ptr [esi]
// 00a4d2a3  8bd8                 mov ebx, eax
// 00a4d2a5  8b4218               mov eax, dword ptr [edx + 0x18]
// 00a4d2a8  6a01                 push 1
// 00a4d2aa  8bce                 mov ecx, esi
// 00a4d2ac  ffd0                 call eax
// 00a4d2ae  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a4d2b2  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a4d2b6  51                   push ecx
// 00a4d2b7  52                   push edx
// 00a4d2b8  57                   push edi
// 00a4d2b9  ff15483bb200         call dword ptr [0xb23b48]
// 00a4d2bf  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00a4d2c2  7410                 je 0xa4d2d4
// 00a4d2c4  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a4d2c7  894624               mov dword ptr [esi + 0x24], eax
// 00a4d2ca  8b01                 mov eax, dword ptr [ecx]
// 00a4d2cc  8b5034               mov edx, dword ptr [eax + 0x34]
// 00a4d2cf  6a01                 push 1
// 00a4d2d1  57                   push edi
// 00a4d2d2  ffd2                 call edx
// 00a4d2d4  6a00                 push 0
// 00a4d2d6  6a00                 push 0
// 00a4d2d8  6a00                 push 0
// 00a4d2da  6a00                 push 0
// 00a4d2dc  8d442424             lea eax, [esp + 0x24]
// 00a4d2e0  50                   push eax
// 00a4d2e1  ff15783ab200         call dword ptr [0xb23a78]
// 00a4d2e7  85c0                 test eax, eax
// 00a4d2e9  74a5                 je 0xa4d290
// 00a4d2eb  6a00                 push 0
// 00a4d2ed  6a00                 push 0
// 00a4d2ef  6a00                 push 0
// 00a4d2f1  8d4c2420             lea ecx, [esp + 0x20]
// 00a4d2f5  51                   push ecx
// 00a4d2f6  ff15343bb200         call dword ptr [0xb23b34]
// 00a4d2fc  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a4d302  3b442434             cmp eax, dword ptr [esp + 0x34]
// 00a4d306  755a                 jne 0xa4d362
// 00a4d308  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a4d30c  3d00020000           cmp eax, 0x200
// 00a4d311  7733                 ja 0xa4d346
// 00a4d313  7419                 je 0xa4d32e
// 00a4d315  83f81f               cmp eax, 0x1f
// 00a4d318  745c                 je 0xa4d376
// 00a4d31a  3d00010000           cmp eax, 0x100
// 00a4d31f  7531                 jne 0xa4d352
// 00a4d321  837c241c1b           cmp dword ptr [esp + 0x1c], 0x1b
// 00a4d326  0f8564ffffff         jne 0xa4d290
// 00a4d32c  eb48                 jmp 0xa4d376
// 00a4d32e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a4d332  0fbfc8               movsx ecx, ax
// 00a4d335  c1e810               shr eax, 0x10
// 00a4d338  98                   cwde 
// 00a4d339  894c2438             mov dword ptr [esp + 0x38], ecx
// 00a4d33d  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a4d341  e94affffff           jmp 0xa4d290
// 00a4d346  2d02020000           sub eax, 0x202
// 00a4d34b  7422                 je 0xa4d36f
// 00a4d34d  83e802               sub eax, 2
// 00a4d350  7424                 je 0xa4d376
// 00a4d352  8d542414             lea edx, [esp + 0x14]
// 00a4d356  52                   push edx
// 00a4d357  ff15a43ab200         call dword ptr [0xb23aa4]
// 00a4d35d  e92effffff           jmp 0xa4d290
// 00a4d362  8d442414             lea eax, [esp + 0x14]
// 00a4d366  50                   push eax
// 00a4d367  ff15a43ab200         call dword ptr [0xb23aa4]
// 00a4d36d  eb07                 jmp 0xa4d376
// 00a4d36f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00a4d372  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a4d376  ff15743ab200         call dword ptr [0xb23a74]
// 00a4d37c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a4d380  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a4d384  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a4d388  52                   push edx
// 00a4d389  50                   push eax
// 00a4d38a  51                   push ecx
// 00a4d38b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a4d38e  c7462400000000       mov dword ptr [esi + 0x24], 0
// 00a4d395  e8c6faffff           call 0xa4ce60
// 00a4d39a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a4d39d  8b11                 mov edx, dword ptr [ecx]
// 00a4d39f  8b4234               mov eax, dword ptr [edx + 0x34]
// 00a4d3a2  6a00                 push 0
// 00a4d3a4  6a00                 push 0
// 00a4d3a6  ffd0                 call eax
// 00a4d3a8  837c241000           cmp dword ptr [esp + 0x10], 0
// 00a4d3ad  5f                   pop edi
// 00a4d3ae  5d                   pop ebp
// 00a4d3af  5b                   pop ebx
// 00a4d3b0  740b                 je 0xa4d3bd
// 00a4d3b2  8b16                 mov edx, dword ptr [esi]
// 00a4d3b4  8b4218               mov eax, dword ptr [edx + 0x18]
// 00a4d3b7  6a00                 push 0
// 00a4d3b9  8bce                 mov ecx, esi
// 00a4d3bb  ffd0                 call eax
// 00a4d3bd  5e                   pop esi
// 00a4d3be  83c420               add esp, 0x20
// 00a4d3c1  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformClick@CXTPTabManagerNavigateButton@@UAEXPAUHWND__@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
