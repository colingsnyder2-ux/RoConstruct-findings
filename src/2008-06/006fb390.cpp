// roc 2008-06 006fb390  unit: CXTPPropertyGrid  size: 723 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fb390
//
// 006fb390  8b542408             mov edx, dword ptr [esp + 8]
// 006fb394  83ec44               sub esp, 0x44
// 006fb397  53                   push ebx
// 006fb398  55                   push ebp
// 006fb399  56                   push esi
// 006fb39a  57                   push edi
// 006fb39b  8bf9                 mov edi, ecx
// 006fb39d  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 006fb3a1  8b07                 mov eax, dword ptr [edi]
// 006fb3a3  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 006fb3a9  51                   push ecx
// 006fb3aa  52                   push edx
// 006fb3ab  8bcf                 mov ecx, edi
// 006fb3ad  ffd0                 call eax
// 006fb3af  8bf0                 mov esi, eax
// 006fb3b1  83feff               cmp esi, -1
// 006fb3b4  7441                 je 0x6fb3f7
// 006fb3b6  83fe03               cmp esi, 3
// 006fb3b9  7c3c                 jl 0x6fb3f7
// 006fb3bb  83c6fd               add esi, -3
// 006fb3be  8bcf                 mov ecx, edi
// 006fb3c0  89b748010000         mov dword ptr [edi + 0x148], esi
// 006fb3c6  c7878001000001000000 mov dword ptr [edi + 0x180], 1
// 006fb3d0  e85356faff           call 0x6a0a28
// 006fb3d5  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006fb3d8  6a00                 push 0
// 006fb3da  6a00                 push 0
// 006fb3dc  51                   push ecx
// 006fb3dd  c7878001000000000000 mov dword ptr [edi + 0x180], 0
// 006fb3e7  ff15182e8000         call dword ptr [0x802e18]
// 006fb3ed  5f                   pop edi
// 006fb3ee  5e                   pop esi
// 006fb3ef  5d                   pop ebp
// 006fb3f0  5b                   pop ebx
// 006fb3f1  83c444               add esp, 0x44
// 006fb3f4  c20c00               ret 0xc
// 006fb3f7  8bcf                 mov ecx, edi
// 006fb3f9  e82a56faff           call 0x6a0a28
// 006fb3fe  83fe01               cmp esi, 1
// 006fb401  7416                 je 0x6fb419
// 006fb403  83fe02               cmp esi, 2
// 006fb406  7411                 je 0x6fb419
// 006fb408  8bcf                 mov ecx, edi
// 006fb40a  e85958faff           call 0x6a0c68
// 006fb40f  5f                   pop edi
// 006fb410  5e                   pop esi
// 006fb411  5d                   pop ebp
// 006fb412  5b                   pop ebx
// 006fb413  83c444               add esp, 0x44
// 006fb416  c20c00               ret 0xc
// 006fb419  8b5720               mov edx, dword ptr [edi + 0x20]
// 006fb41c  52                   push edx
// 006fb41d  ff15a82d8000         call dword ptr [0x802da8]
// 006fb423  50                   push eax
// 006fb424  e8b557faff           call 0x6a0bde
// 006fb429  57                   push edi
// 006fb42a  8d4c241c             lea ecx, [esp + 0x1c]
// 006fb42e  e8fdc6ffff           call 0x6f7b30
// 006fb433  33c0                 xor eax, eax
// 006fb435  83fe01               cmp esi, 1
// 006fb438  0f94c0               sete al
// 006fb43b  33c9                 xor ecx, ecx
// 006fb43d  89442414             mov dword ptr [esp + 0x14], eax
// 006fb441  3bc1                 cmp eax, ecx
// 006fb443  740e                 je 0x6fb453
// 006fb445  8b442420             mov eax, dword ptr [esp + 0x20]
// 006fb449  8b542424             mov edx, dword ptr [esp + 0x24]
// 006fb44d  89442430             mov dword ptr [esp + 0x30], eax
// 006fb451  eb1d                 jmp 0x6fb470
// 006fb453  394f60               cmp dword ptr [edi + 0x60], ecx
// 006fb456  7408                 je 0x6fb460
// 006fb458  8b4754               mov eax, dword ptr [edi + 0x54]
// 006fb45b  83c003               add eax, 3
// 006fb45e  eb02                 jmp 0x6fb462
// 006fb460  33c0                 xor eax, eax
// 006fb462  8b542420             mov edx, dword ptr [esp + 0x20]
// 006fb466  89542430             mov dword ptr [esp + 0x30], edx
// 006fb46a  8b542424             mov edx, dword ptr [esp + 0x24]
// 006fb46e  2bd0                 sub edx, eax
// 006fb470  8d442428             lea eax, [esp + 0x28]
// 006fb474  894c2428             mov dword ptr [esp + 0x28], ecx
// 006fb478  89542434             mov dword ptr [esp + 0x34], edx
// 006fb47c  c744242c2d000000     mov dword ptr [esp + 0x2c], 0x2d
// 006fb484  8b10                 mov edx, dword ptr [eax]
// 006fb486  8b6804               mov ebp, dword ptr [eax + 4]
// 006fb489  8b580c               mov ebx, dword ptr [eax + 0xc]
// 006fb48c  51                   push ecx
// 006fb48d  51                   push ecx
// 006fb48e  89542440             mov dword ptr [esp + 0x40], edx
// 006fb492  8b5008               mov edx, dword ptr [eax + 8]
// 006fb495  6800000006           push 0x6000000
// 006fb49a  8bcf                 mov ecx, edi
// 006fb49c  8954244c             mov dword ptr [esp + 0x4c], edx
// 006fb4a0  e86d59faff           call 0x6a0e12
// 006fb4a5  8b442460             mov eax, dword ptr [esp + 0x60]
// 006fb4a9  8b542420             mov edx, dword ptr [esp + 0x20]
// 006fb4ad  2b542418             sub edx, dword ptr [esp + 0x18]
// 006fb4b1  8d4803               lea ecx, [eax + 3]
// 006fb4b4  51                   push ecx
// 006fb4b5  52                   push edx
// 006fb4b6  50                   push eax
// 006fb4b7  6a00                 push 0
// 006fb4b9  8db770010000         lea esi, [edi + 0x170]
// 006fb4bf  56                   push esi
// 006fb4c0  ff15102d8000         call dword ptr [0x802d10]
// 006fb4c6  8b0e                 mov ecx, dword ptr [esi]
// 006fb4c8  8b5604               mov edx, dword ptr [esi + 4]
// 006fb4cb  83ec10               sub esp, 0x10
// 006fb4ce  8bc4                 mov eax, esp
// 006fb4d0  8908                 mov dword ptr [eax], ecx
// 006fb4d2  8b4e08               mov ecx, dword ptr [esi + 8]
// 006fb4d5  895004               mov dword ptr [eax + 4], edx
// 006fb4d8  8b560c               mov edx, dword ptr [esi + 0xc]
// 006fb4db  894808               mov dword ptr [eax + 8], ecx
// 006fb4de  8bcf                 mov ecx, edi
// 006fb4e0  89500c               mov dword ptr [eax + 0xc], edx
// 006fb4e3  e898fcffff           call 0x6fb180
// 006fb4e8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006fb4f0  ff15ac2d8000         call dword ptr [0x802dac]
// 006fb4f6  50                   push eax
// 006fb4f7  e8e256faff           call 0x6a0bde
// 006fb4fc  3bc7                 cmp eax, edi
// 006fb4fe  0f85f4000000         jne 0x6fb5f8
// 006fb504  6a00                 push 0
// 006fb506  6a00                 push 0
// 006fb508  6a00                 push 0
// 006fb50a  8d442444             lea eax, [esp + 0x44]
// 006fb50e  50                   push eax
// 006fb50f  ff15782c8000         call dword ptr [0x802c78]
// 006fb515  85c0                 test eax, eax
// 006fb517  0f84db000000         je 0x6fb5f8
// 006fb51d  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006fb521  3d00020000           cmp eax, 0x200
// 006fb526  0f858c000000         jne 0x6fb5b8
// 006fb52c  8b442444             mov eax, dword ptr [esp + 0x44]
// 006fb530  0fbfc8               movsx ecx, ax
// 006fb533  c1e810               shr eax, 0x10
// 006fb536  98                   cwde 
// 006fb537  894c245c             mov dword ptr [esp + 0x5c], ecx
// 006fb53b  8d4bec               lea ecx, [ebx - 0x14]
// 006fb53e  3bc1                 cmp eax, ecx
// 006fb540  89442460             mov dword ptr [esp + 0x60], eax
// 006fb544  7c06                 jl 0x6fb54c
// 006fb546  8bc1                 mov eax, ecx
// 006fb548  89442460             mov dword ptr [esp + 0x60], eax
// 006fb54c  3bc5                 cmp eax, ebp
// 006fb54e  7f06                 jg 0x6fb556
// 006fb550  8bc5                 mov eax, ebp
// 006fb552  89442460             mov dword ptr [esp + 0x60], eax
// 006fb556  398774010000         cmp dword ptr [edi + 0x174], eax
// 006fb55c  747c                 je 0x6fb5da
// 006fb55e  8b0e                 mov ecx, dword ptr [esi]
// 006fb560  8b5604               mov edx, dword ptr [esi + 4]
// 006fb563  83ec10               sub esp, 0x10
// 006fb566  8bc4                 mov eax, esp
// 006fb568  8908                 mov dword ptr [eax], ecx
// 006fb56a  8b4e08               mov ecx, dword ptr [esi + 8]
// 006fb56d  895004               mov dword ptr [eax + 4], edx
// 006fb570  8b560c               mov edx, dword ptr [esi + 0xc]
// 006fb573  894808               mov dword ptr [eax + 8], ecx
// 006fb576  8bcf                 mov ecx, edi
// 006fb578  89500c               mov dword ptr [eax + 0xc], edx
// 006fb57b  e800fcffff           call 0x6fb180
// 006fb580  8b442460             mov eax, dword ptr [esp + 0x60]
// 006fb584  2b8774010000         sub eax, dword ptr [edi + 0x174]
// 006fb58a  50                   push eax
// 006fb58b  6a00                 push 0
// 006fb58d  56                   push esi
// 006fb58e  ff15682d8000         call dword ptr [0x802d68]
// 006fb594  8b0e                 mov ecx, dword ptr [esi]
// 006fb596  8b5604               mov edx, dword ptr [esi + 4]
// 006fb599  83ec10               sub esp, 0x10
// 006fb59c  8bc4                 mov eax, esp
// 006fb59e  8908                 mov dword ptr [eax], ecx
// 006fb5a0  8b4e08               mov ecx, dword ptr [esi + 8]
// 006fb5a3  895004               mov dword ptr [eax + 4], edx
// 006fb5a6  8b560c               mov edx, dword ptr [esi + 0xc]
// 006fb5a9  894808               mov dword ptr [eax + 8], ecx
// 006fb5ac  8bcf                 mov ecx, edi
// 006fb5ae  89500c               mov dword ptr [eax + 0xc], edx
// 006fb5b1  e8cafbffff           call 0x6fb180
// 006fb5b6  eb22                 jmp 0x6fb5da
// 006fb5b8  3d00010000           cmp eax, 0x100
// 006fb5bd  7509                 jne 0x6fb5c8
// 006fb5bf  837c24401b           cmp dword ptr [esp + 0x40], 0x1b
// 006fb5c4  7432                 je 0x6fb5f8
// 006fb5c6  eb07                 jmp 0x6fb5cf
// 006fb5c8  3d02020000           cmp eax, 0x202
// 006fb5cd  7421                 je 0x6fb5f0
// 006fb5cf  8d442438             lea eax, [esp + 0x38]
// 006fb5d3  50                   push eax
// 006fb5d4  ff15c82c8000         call dword ptr [0x802cc8]
// 006fb5da  ff15ac2d8000         call dword ptr [0x802dac]
// 006fb5e0  50                   push eax
// 006fb5e1  e8f855faff           call 0x6a0bde
// 006fb5e6  3bc7                 cmp eax, edi
// 006fb5e8  0f8416ffffff         je 0x6fb504
// 006fb5ee  eb08                 jmp 0x6fb5f8
// 006fb5f0  c744241001000000     mov dword ptr [esp + 0x10], 1
// 006fb5f8  ff15b42d8000         call dword ptr [0x802db4]
// 006fb5fe  837c241000           cmp dword ptr [esp + 0x10], 0
// 006fb603  7436                 je 0x6fb63b
// 006fb605  2b9f74010000         sub ebx, dword ptr [edi + 0x174]
// 006fb60b  83eb02               sub ebx, 2
// 006fb60e  837c241400           cmp dword ptr [esp + 0x14], 0
// 006fb613  7405                 je 0x6fb61a
// 006fb615  895f54               mov dword ptr [edi + 0x54], ebx
// 006fb618  eb03                 jmp 0x6fb61d
// 006fb61a  895f58               mov dword ptr [edi + 0x58], ebx
// 006fb61d  8b442424             mov eax, dword ptr [esp + 0x24]
// 006fb621  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 006fb625  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006fb629  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 006fb62d  8b17                 mov edx, dword ptr [edi]
// 006fb62f  8b9258010000         mov edx, dword ptr [edx + 0x158]
// 006fb635  50                   push eax
// 006fb636  51                   push ecx
// 006fb637  8bcf                 mov ecx, edi
// 006fb639  ffd2                 call edx
// 006fb63b  8b4720               mov eax, dword ptr [edi + 0x20]
// 006fb63e  6a00                 push 0
// 006fb640  6a00                 push 0
// 006fb642  50                   push eax
// 006fb643  ff15182e8000         call dword ptr [0x802e18]
// 006fb649  6a00                 push 0
// 006fb64b  6800000006           push 0x6000000
// 006fb650  6a00                 push 0
// 006fb652  8bcf                 mov ecx, edi
// 006fb654  e8b957faff           call 0x6a0e12
// 006fb659  5f                   pop edi
// 006fb65a  5e                   pop esi
// 006fb65b  5d                   pop ebp
// 006fb65c  5b                   pop ebx
// 006fb65d  83c444               add esp, 0x44
// 006fb660  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnLButtonDown@CXTPPropertyGrid@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp
