// roc 2007-03 006d55c0  unit: seg_006d0000  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d55c0
//
// 006d55c0  83ec1c               sub esp, 0x1c
// 006d55c3  53                   push ebx
// 006d55c4  56                   push esi
// 006d55c5  8bf1                 mov esi, ecx
// 006d55c7  57                   push edi
// 006d55c8  8b3d14ef7700         mov edi, dword ptr [0x77ef14]
// 006d55ce  8d8650010000         lea eax, [esi + 0x150]
// 006d55d4  50                   push eax
// 006d55d5  ffd7                 call edi
// 006d55d7  33db                 xor ebx, ebx
// 006d55d9  8d8eb8000000         lea ecx, [esi + 0xb8]
// 006d55df  51                   push ecx
// 006d55e0  899e64010000         mov dword ptr [esi + 0x164], ebx
// 006d55e6  899e60010000         mov dword ptr [esi + 0x160], ebx
// 006d55ec  899e68010000         mov dword ptr [esi + 0x168], ebx
// 006d55f2  ffd7                 call edi
// 006d55f4  399eb4000000         cmp dword ptr [esi + 0xb4], ebx
// 006d55fa  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 006d5600  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 006d5606  899e28010000         mov dword ptr [esi + 0x128], ebx
// 006d560c  0f858c000000         jne 0x6d569e
// 006d5612  8b3d10ed7700         mov edi, dword ptr [0x77ed10]
// 006d5618  55                   push ebp
// 006d5619  53                   push ebx
// 006d561a  6a0f                 push 0xf
// 006d561c  6a0f                 push 0xf
// 006d561e  53                   push ebx
// 006d561f  8d542420             lea edx, [esp + 0x20]
// 006d5623  52                   push edx
// 006d5624  ffd7                 call edi
// 006d5626  85c0                 test eax, eax
// 006d5628  7432                 je 0x6d565c
// 006d562a  8b2d04ee7700         mov ebp, dword ptr [0x77ee04]
// 006d5630  6a0f                 push 0xf
// 006d5632  6a0f                 push 0xf
// 006d5634  53                   push ebx
// 006d5635  8d44241c             lea eax, [esp + 0x1c]
// 006d5639  50                   push eax
// 006d563a  ff1510ef7700         call dword ptr [0x77ef10]
// 006d5640  85c0                 test eax, eax
// 006d5642  7459                 je 0x6d569d
// 006d5644  8d4c2410             lea ecx, [esp + 0x10]
// 006d5648  51                   push ecx
// 006d5649  ffd5                 call ebp
// 006d564b  53                   push ebx
// 006d564c  6a0f                 push 0xf
// 006d564e  6a0f                 push 0xf
// 006d5650  53                   push ebx
// 006d5651  8d542420             lea edx, [esp + 0x20]
// 006d5655  52                   push edx
// 006d5656  ffd7                 call edi
// 006d5658  85c0                 test eax, eax
// 006d565a  75d4                 jne 0x6d5630
// 006d565c  ff152cef7700         call dword ptr [0x77ef2c]
// 006d5662  50                   push eax
// 006d5663  e8e68ff4ff           call 0x61e64e
// 006d5668  8bf8                 mov edi, eax
// 006d566a  8b4720               mov eax, dword ptr [edi + 0x20]
// 006d566d  50                   push eax
// 006d566e  ff1528ef7700         call dword ptr [0x77ef28]
// 006d5674  85c0                 test eax, eax
// 006d5676  740c                 je 0x6d5684
// 006d5678  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006d567b  6803040000           push 0x403
// 006d5680  53                   push ebx
// 006d5681  51                   push ecx
// 006d5682  eb07                 jmp 0x6d568b
// 006d5684  8b5720               mov edx, dword ptr [edi + 0x20]
// 006d5687  6a03                 push 3
// 006d5689  53                   push ebx
// 006d568a  52                   push edx
// 006d568b  ff1524ef7700         call dword ptr [0x77ef24]
// 006d5691  50                   push eax
// 006d5692  e8f7540600           call 0x73ab8e
// 006d5697  89868c010000         mov dword ptr [esi + 0x18c], eax
// 006d569d  5d                   pop ebp
// 006d569e  5f                   pop edi
// 006d569f  5e                   pop esi
// 006d56a0  5b                   pop ebx
// 006d56a1  83c41c               add esp, 0x1c
// 006d56a4  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneContext.cpp (function ?InitLoop@CXTPDockingPaneContext@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneContext.cpp
