// roc 2011-06 008ce1e0  unit: CXTPDockingPaneContext  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ce1e0
//
// 008ce1e0  83ec1c               sub esp, 0x1c
// 008ce1e3  53                   push ebx
// 008ce1e4  56                   push esi
// 008ce1e5  8bf1                 mov esi, ecx
// 008ce1e7  57                   push edi
// 008ce1e8  8b3dac19a400         mov edi, dword ptr [0xa419ac]
// 008ce1ee  8d8650010000         lea eax, [esi + 0x150]
// 008ce1f4  50                   push eax
// 008ce1f5  ffd7                 call edi
// 008ce1f7  33db                 xor ebx, ebx
// 008ce1f9  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008ce1ff  51                   push ecx
// 008ce200  899e64010000         mov dword ptr [esi + 0x164], ebx
// 008ce206  899e60010000         mov dword ptr [esi + 0x160], ebx
// 008ce20c  899e68010000         mov dword ptr [esi + 0x168], ebx
// 008ce212  ffd7                 call edi
// 008ce214  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 008ce21a  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 008ce220  899e28010000         mov dword ptr [esi + 0x128], ebx
// 008ce226  399eb4000000         cmp dword ptr [esi + 0xb4], ebx
// 008ce22c  0f858c000000         jne 0x8ce2be
// 008ce232  8b3d3c1ba400         mov edi, dword ptr [0xa41b3c]
// 008ce238  55                   push ebp
// 008ce239  53                   push ebx
// 008ce23a  6a0f                 push 0xf
// 008ce23c  6a0f                 push 0xf
// 008ce23e  53                   push ebx
// 008ce23f  8d542420             lea edx, [esp + 0x20]
// 008ce243  52                   push edx
// 008ce244  ffd7                 call edi
// 008ce246  85c0                 test eax, eax
// 008ce248  7432                 je 0x8ce27c
// 008ce24a  8b2d0c1aa400         mov ebp, dword ptr [0xa41a0c]
// 008ce250  6a0f                 push 0xf
// 008ce252  6a0f                 push 0xf
// 008ce254  53                   push ebx
// 008ce255  8d44241c             lea eax, [esp + 0x1c]
// 008ce259  50                   push eax
// 008ce25a  ff15281ca400         call dword ptr [0xa41c28]
// 008ce260  85c0                 test eax, eax
// 008ce262  7459                 je 0x8ce2bd
// 008ce264  8d4c2410             lea ecx, [esp + 0x10]
// 008ce268  51                   push ecx
// 008ce269  ffd5                 call ebp
// 008ce26b  53                   push ebx
// 008ce26c  6a0f                 push 0xf
// 008ce26e  6a0f                 push 0xf
// 008ce270  53                   push ebx
// 008ce271  8d542420             lea edx, [esp + 0x20]
// 008ce275  52                   push edx
// 008ce276  ffd7                 call edi
// 008ce278  85c0                 test eax, eax
// 008ce27a  75d4                 jne 0x8ce250
// 008ce27c  ff15e819a400         call dword ptr [0xa419e8]
// 008ce282  50                   push eax
// 008ce283  e8a0c0f3ff           call 0x80a328
// 008ce288  8bf8                 mov edi, eax
// 008ce28a  8b4720               mov eax, dword ptr [edi + 0x20]
// 008ce28d  50                   push eax
// 008ce28e  ff15241ba400         call dword ptr [0xa41b24]
// 008ce294  85c0                 test eax, eax
// 008ce296  740c                 je 0x8ce2a4
// 008ce298  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008ce29b  6803040000           push 0x403
// 008ce2a0  53                   push ebx
// 008ce2a1  51                   push ecx
// 008ce2a2  eb07                 jmp 0x8ce2ab
// 008ce2a4  8b5720               mov edx, dword ptr [edi + 0x20]
// 008ce2a7  6a03                 push 3
// 008ce2a9  53                   push ebx
// 008ce2aa  52                   push edx
// 008ce2ab  ff15281ba400         call dword ptr [0xa41b28]
// 008ce2b1  50                   push eax
// 008ce2b2  e801e30f00           call 0x9cc5b8
// 008ce2b7  89868c010000         mov dword ptr [esi + 0x18c], eax
// 008ce2bd  5d                   pop ebp
// 008ce2be  5f                   pop edi
// 008ce2bf  5e                   pop esi
// 008ce2c0  5b                   pop ebx
// 008ce2c1  83c41c               add esp, 0x1c
// 008ce2c4  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?InitLoop@CXTPDockingPaneContext@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
