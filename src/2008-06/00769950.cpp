// from server: 100% by auto
// roc 2008-06 00769950  unit: CXTPDockingPaneContext  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00769950
//
// 00769950  83ec1c               sub esp, 0x1c
// 00769953  53                   push ebx
// 00769954  56                   push esi
// 00769955  8bf1                 mov esi, ecx
// 00769957  57                   push edi
// 00769958  8b3d7c2c8000         mov edi, dword ptr [0x802c7c]
// 0076995e  8d8650010000         lea eax, [esi + 0x150]
// 00769964  50                   push eax
// 00769965  ffd7                 call edi
// 00769967  33db                 xor ebx, ebx
// 00769969  8d8eb8000000         lea ecx, [esi + 0xb8]
// 0076996f  51                   push ecx
// 00769970  899e64010000         mov dword ptr [esi + 0x164], ebx
// 00769976  899e60010000         mov dword ptr [esi + 0x160], ebx
// 0076997c  899e68010000         mov dword ptr [esi + 0x168], ebx
// 00769982  ffd7                 call edi
// 00769984  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0076998a  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 00769990  899e28010000         mov dword ptr [esi + 0x128], ebx
// 00769996  399eb4000000         cmp dword ptr [esi + 0xb4], ebx
// 0076999c  0f858c000000         jne 0x769a2e
// 007699a2  8b3db02d8000         mov edi, dword ptr [0x802db0]
// 007699a8  55                   push ebp
// 007699a9  53                   push ebx
// 007699aa  6a0f                 push 0xf
// 007699ac  6a0f                 push 0xf
// 007699ae  53                   push ebx
// 007699af  8d542420             lea edx, [esp + 0x20]
// 007699b3  52                   push edx
// 007699b4  ffd7                 call edi
// 007699b6  85c0                 test eax, eax
// 007699b8  7432                 je 0x7699ec
// 007699ba  8b2dc82c8000         mov ebp, dword ptr [0x802cc8]
// 007699c0  6a0f                 push 0xf
// 007699c2  6a0f                 push 0xf
// 007699c4  53                   push ebx
// 007699c5  8d44241c             lea eax, [esp + 0x1c]
// 007699c9  50                   push eax
// 007699ca  ff15782c8000         call dword ptr [0x802c78]
// 007699d0  85c0                 test eax, eax
// 007699d2  7459                 je 0x769a2d
// 007699d4  8d4c2410             lea ecx, [esp + 0x10]
// 007699d8  51                   push ecx
// 007699d9  ffd5                 call ebp
// 007699db  53                   push ebx
// 007699dc  6a0f                 push 0xf
// 007699de  6a0f                 push 0xf
// 007699e0  53                   push ebx
// 007699e1  8d542420             lea edx, [esp + 0x20]
// 007699e5  52                   push edx
// 007699e6  ffd7                 call edi
// 007699e8  85c0                 test eax, eax
// 007699ea  75d4                 jne 0x7699c0
// 007699ec  ff154c2b8000         call dword ptr [0x802b4c]
// 007699f2  50                   push eax
// 007699f3  e8e671f3ff           call 0x6a0bde
// 007699f8  8bf8                 mov edi, eax
// 007699fa  8b4720               mov eax, dword ptr [edi + 0x20]
// 007699fd  50                   push eax
// 007699fe  ff15482b8000         call dword ptr [0x802b48]
// 00769a04  85c0                 test eax, eax
// 00769a06  740c                 je 0x769a14
// 00769a08  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00769a0b  6803040000           push 0x403
// 00769a10  53                   push ebx
// 00769a11  51                   push ecx
// 00769a12  eb07                 jmp 0x769a1b
// 00769a14  8b5720               mov edx, dword ptr [edi + 0x20]
// 00769a17  6a03                 push 3
// 00769a19  53                   push ebx
// 00769a1a  52                   push edx
// 00769a1b  ff15442b8000         call dword ptr [0x802b44]
// 00769a21  50                   push eax
// 00769a22  e801260500           call 0x7bc028
// 00769a27  89868c010000         mov dword ptr [esi + 0x18c], eax
// 00769a2d  5d                   pop ebp
// 00769a2e  5f                   pop edi
// 00769a2f  5e                   pop esi
// 00769a30  5b                   pop ebx
// 00769a31  83c41c               add esp, 0x1c
// 00769a34  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?InitLoop@CXTPDockingPaneContext@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
