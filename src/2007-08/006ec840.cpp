// from server: 100% by auto
// roc 2007-08 006ec840  unit: CXTPDockingPaneContext  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ec840
//
// 006ec840  83ec1c               sub esp, 0x1c
// 006ec843  53                   push ebx
// 006ec844  56                   push esi
// 006ec845  8bf1                 mov esi, ecx
// 006ec847  57                   push edi
// 006ec848  8b3d14ee7700         mov edi, dword ptr [0x77ee14]
// 006ec84e  8d8650010000         lea eax, [esi + 0x150]
// 006ec854  50                   push eax
// 006ec855  ffd7                 call edi
// 006ec857  33db                 xor ebx, ebx
// 006ec859  8d8eb8000000         lea ecx, [esi + 0xb8]
// 006ec85f  51                   push ecx
// 006ec860  899e64010000         mov dword ptr [esi + 0x164], ebx
// 006ec866  899e60010000         mov dword ptr [esi + 0x160], ebx
// 006ec86c  899e68010000         mov dword ptr [esi + 0x168], ebx
// 006ec872  ffd7                 call edi
// 006ec874  399eb4000000         cmp dword ptr [esi + 0xb4], ebx
// 006ec87a  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 006ec880  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 006ec886  899e28010000         mov dword ptr [esi + 0x128], ebx
// 006ec88c  0f858c000000         jne 0x6ec91e
// 006ec892  8b3d40ec7700         mov edi, dword ptr [0x77ec40]
// 006ec898  55                   push ebp
// 006ec899  53                   push ebx
// 006ec89a  6a0f                 push 0xf
// 006ec89c  6a0f                 push 0xf
// 006ec89e  53                   push ebx
// 006ec89f  8d542420             lea edx, [esp + 0x20]
// 006ec8a3  52                   push edx
// 006ec8a4  ffd7                 call edi
// 006ec8a6  85c0                 test eax, eax
// 006ec8a8  7432                 je 0x6ec8dc
// 006ec8aa  8b2d2ced7700         mov ebp, dword ptr [0x77ed2c]
// 006ec8b0  6a0f                 push 0xf
// 006ec8b2  6a0f                 push 0xf
// 006ec8b4  53                   push ebx
// 006ec8b5  8d44241c             lea eax, [esp + 0x1c]
// 006ec8b9  50                   push eax
// 006ec8ba  ff1510ee7700         call dword ptr [0x77ee10]
// 006ec8c0  85c0                 test eax, eax
// 006ec8c2  7459                 je 0x6ec91d
// 006ec8c4  8d4c2410             lea ecx, [esp + 0x10]
// 006ec8c8  51                   push ecx
// 006ec8c9  ffd5                 call ebp
// 006ec8cb  53                   push ebx
// 006ec8cc  6a0f                 push 0xf
// 006ec8ce  6a0f                 push 0xf
// 006ec8d0  53                   push ebx
// 006ec8d1  8d542420             lea edx, [esp + 0x20]
// 006ec8d5  52                   push edx
// 006ec8d6  ffd7                 call edi
// 006ec8d8  85c0                 test eax, eax
// 006ec8da  75d4                 jne 0x6ec8b0
// 006ec8dc  ff154cee7700         call dword ptr [0x77ee4c]
// 006ec8e2  50                   push eax
// 006ec8e3  e8d838f4ff           call 0x6301c0
// 006ec8e8  8bf8                 mov edi, eax
// 006ec8ea  8b4720               mov eax, dword ptr [edi + 0x20]
// 006ec8ed  50                   push eax
// 006ec8ee  ff1548ee7700         call dword ptr [0x77ee48]
// 006ec8f4  85c0                 test eax, eax
// 006ec8f6  740c                 je 0x6ec904
// 006ec8f8  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006ec8fb  6803040000           push 0x403
// 006ec900  53                   push ebx
// 006ec901  51                   push ecx
// 006ec902  eb07                 jmp 0x6ec90b
// 006ec904  8b5720               mov edx, dword ptr [edi + 0x20]
// 006ec907  6a03                 push 3
// 006ec909  53                   push ebx
// 006ec90a  52                   push edx
// 006ec90b  ff1544ee7700         call dword ptr [0x77ee44]
// 006ec911  50                   push eax
// 006ec912  e8a7ba0400           call 0x7383be
// 006ec917  89868c010000         mov dword ptr [esi + 0x18c], eax
// 006ec91d  5d                   pop ebp
// 006ec91e  5f                   pop edi
// 006ec91f  5e                   pop esi
// 006ec920  5b                   pop ebx
// 006ec921  83c41c               add esp, 0x1c
// 006ec924  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneContext.cpp (function ?InitLoop@CXTPDockingPaneContext@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneContext.cpp
