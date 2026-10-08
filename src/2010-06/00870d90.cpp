// roc 2010-06 00870d90  unit: CXTPDockingPaneContext  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00870d90
//
// 00870d90  83ec1c               sub esp, 0x1c
// 00870d93  53                   push ebx
// 00870d94  56                   push esi
// 00870d95  8bf1                 mov esi, ecx
// 00870d97  57                   push edi
// 00870d98  8b3de4ba9e00         mov edi, dword ptr [0x9ebae4]
// 00870d9e  8d8650010000         lea eax, [esi + 0x150]
// 00870da4  50                   push eax
// 00870da5  ffd7                 call edi
// 00870da7  33db                 xor ebx, ebx
// 00870da9  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00870daf  51                   push ecx
// 00870db0  899e64010000         mov dword ptr [esi + 0x164], ebx
// 00870db6  899e60010000         mov dword ptr [esi + 0x160], ebx
// 00870dbc  899e68010000         mov dword ptr [esi + 0x168], ebx
// 00870dc2  ffd7                 call edi
// 00870dc4  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 00870dca  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 00870dd0  899e28010000         mov dword ptr [esi + 0x128], ebx
// 00870dd6  399eb4000000         cmp dword ptr [esi + 0xb4], ebx
// 00870ddc  0f858c000000         jne 0x870e6e
// 00870de2  8b3d88bc9e00         mov edi, dword ptr [0x9ebc88]
// 00870de8  55                   push ebp
// 00870de9  53                   push ebx
// 00870dea  6a0f                 push 0xf
// 00870dec  6a0f                 push 0xf
// 00870dee  53                   push ebx
// 00870def  8d542420             lea edx, [esp + 0x20]
// 00870df3  52                   push edx
// 00870df4  ffd7                 call edi
// 00870df6  85c0                 test eax, eax
// 00870df8  7432                 je 0x870e2c
// 00870dfa  8b2d08bc9e00         mov ebp, dword ptr [0x9ebc08]
// 00870e00  6a0f                 push 0xf
// 00870e02  6a0f                 push 0xf
// 00870e04  53                   push ebx
// 00870e05  8d44241c             lea eax, [esp + 0x1c]
// 00870e09  50                   push eax
// 00870e0a  ff15f0bb9e00         call dword ptr [0x9ebbf0]
// 00870e10  85c0                 test eax, eax
// 00870e12  7459                 je 0x870e6d
// 00870e14  8d4c2410             lea ecx, [esp + 0x10]
// 00870e18  51                   push ecx
// 00870e19  ffd5                 call ebp
// 00870e1b  53                   push ebx
// 00870e1c  6a0f                 push 0xf
// 00870e1e  6a0f                 push 0xf
// 00870e20  53                   push ebx
// 00870e21  8d542420             lea edx, [esp + 0x20]
// 00870e25  52                   push edx
// 00870e26  ffd7                 call edi
// 00870e28  85c0                 test eax, eax
// 00870e2a  75d4                 jne 0x870e00
// 00870e2c  ff1574ba9e00         call dword ptr [0x9eba74]
// 00870e32  50                   push eax
// 00870e33  e8326ef3ff           call 0x7a7c6a
// 00870e38  8bf8                 mov edi, eax
// 00870e3a  8b4720               mov eax, dword ptr [edi + 0x20]
// 00870e3d  50                   push eax
// 00870e3e  ff15d0ba9e00         call dword ptr [0x9ebad0]
// 00870e44  85c0                 test eax, eax
// 00870e46  740c                 je 0x870e54
// 00870e48  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00870e4b  6803040000           push 0x403
// 00870e50  53                   push ebx
// 00870e51  51                   push ecx
// 00870e52  eb07                 jmp 0x870e5b
// 00870e54  8b5720               mov edx, dword ptr [edi + 0x20]
// 00870e57  6a03                 push 3
// 00870e59  53                   push ebx
// 00870e5a  52                   push edx
// 00870e5b  ff15d4ba9e00         call dword ptr [0x9ebad4]
// 00870e61  50                   push eax
// 00870e62  e805bf1000           call 0x97cd6c
// 00870e67  89868c010000         mov dword ptr [esi + 0x18c], eax
// 00870e6d  5d                   pop ebp
// 00870e6e  5f                   pop edi
// 00870e6f  5e                   pop esi
// 00870e70  5b                   pop ebx
// 00870e71  83c41c               add esp, 0x1c
// 00870e74  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?InitLoop@CXTPDockingPaneContext@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
