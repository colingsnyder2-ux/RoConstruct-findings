// from server: 100% by colin
// roc 2008-06 0052b660  unit: seg_00520000  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052b660
//
// 0052b660  51                   push ecx
// 0052b661  53                   push ebx
// 0052b662  56                   push esi
// 0052b663  57                   push edi
// 0052b664  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052b668  33db                 xor ebx, ebx
// 0052b66a  57                   push edi
// 0052b66b  895f04               mov dword ptr [edi + 4], ebx
// 0052b66e  e86d520000           call 0x5308e0
// 0052b673  6a54                 push 0x54
// 0052b675  57                   push edi
// 0052b676  89442418             mov dword ptr [esp + 0x18], eax
// 0052b67a  e8e1500000           call 0x530760
// 0052b67f  8bf0                 mov esi, eax
// 0052b681  83c40c               add esp, 0xc
// 0052b684  3bf3                 cmp esi, ebx
// 0052b686  751e                 jne 0x52b6a6
// 0052b688  57                   push edi
// 0052b689  e8821df5ff           call 0x47d410
// 0052b68e  8b07                 mov eax, dword ptr [edi]
// 0052b690  c7401436000000       mov dword ptr [eax + 0x14], 0x36
// 0052b697  8b0f                 mov ecx, dword ptr [edi]
// 0052b699  895918               mov dword ptr [ecx + 0x18], ebx
// 0052b69c  8b17                 mov edx, dword ptr [edi]
// 0052b69e  8b02                 mov eax, dword ptr [edx]
// 0052b6a0  57                   push edi
// 0052b6a1  ffd0                 call eax
// 0052b6a3  83c408               add esp, 8
// 0052b6a6  c70650ab5200         mov dword ptr [esi], 0x52ab50
// 0052b6ac  c74604a0ac5200       mov dword ptr [esi + 4], 0x52aca0
// 0052b6b3  c7460860ad5200       mov dword ptr [esi + 8], 0x52ad60
// 0052b6ba  c7460c10ae5200       mov dword ptr [esi + 0xc], 0x52ae10
// 0052b6c1  c74610c0ae5200       mov dword ptr [esi + 0x10], 0x52aec0
// 0052b6c8  c7461430af5200       mov dword ptr [esi + 0x14], 0x52af30
// 0052b6cf  c74618a0af5200       mov dword ptr [esi + 0x18], 0x52afa0
// 0052b6d6  c7461c80b25200       mov dword ptr [esi + 0x1c], 0x52b280
// 0052b6dd  c74620c0b35200       mov dword ptr [esi + 0x20], 0x52b3c0
// 0052b6e4  c7462410b55200       mov dword ptr [esi + 0x24], 0x52b510
// 0052b6eb  c7462820b65200       mov dword ptr [esi + 0x28], 0x52b620
// 0052b6f2  c7463000ca9a3b       mov dword ptr [esi + 0x30], 0x3b9aca00
// 0052b6f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052b6fd  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0052b700  895e38               mov dword ptr [esi + 0x38], ebx
// 0052b703  895e40               mov dword ptr [esi + 0x40], ebx
// 0052b706  895e34               mov dword ptr [esi + 0x34], ebx
// 0052b709  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0052b70c  895e44               mov dword ptr [esi + 0x44], ebx
// 0052b70f  895e48               mov dword ptr [esi + 0x48], ebx
// 0052b712  c7464c54000000       mov dword ptr [esi + 0x4c], 0x54
// 0052b719  686cbb8200           push 0x82bb6c
// 0052b71e  897704               mov dword ptr [edi + 4], esi
// 0052b721  ff15a0278000         call dword ptr [0x8027a0]
// 0052b727  83c404               add esp, 4
// 0052b72a  3bc3                 cmp eax, ebx
// 0052b72c  7453                 je 0x52b781
// 0052b72e  8d542414             lea edx, [esp + 0x14]
// 0052b732  52                   push edx
// 0052b733  8d4c2410             lea ecx, [esp + 0x10]
// 0052b737  51                   push ecx
// 0052b738  6864bb8200           push 0x82bb64
// 0052b73d  50                   push eax
// 0052b73e  c644242478           mov byte ptr [esp + 0x24], 0x78
// 0052b743  ff1580278000         call dword ptr [0x802780]
// 0052b749  83c410               add esp, 0x10
// 0052b74c  85c0                 test eax, eax
// 0052b74e  7e31                 jle 0x52b781
// 0052b750  8a442414             mov al, byte ptr [esp + 0x14]
// 0052b754  3c6d                 cmp al, 0x6d
// 0052b756  7404                 je 0x52b75c
// 0052b758  3c4d                 cmp al, 0x4d
// 0052b75a  7518                 jne 0x52b774
// 0052b75c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052b760  69c0e8030000         imul eax, eax, 0x3e8
// 0052b766  69c0e8030000         imul eax, eax, 0x3e8
// 0052b76c  5f                   pop edi
// 0052b76d  89462c               mov dword ptr [esi + 0x2c], eax
// 0052b770  5e                   pop esi
// 0052b771  5b                   pop ebx
// 0052b772  59                   pop ecx
// 0052b773  c3                   ret 
// 0052b774  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052b778  69c0e8030000         imul eax, eax, 0x3e8
// 0052b77e  89462c               mov dword ptr [esi + 0x2c], eax
// 0052b781  5f                   pop edi
// 0052b782  5e                   pop esi
// 0052b783  5b                   pop ebx
// 0052b784  59                   pop ecx
// 0052b785  c3                   ret 
// library g3d-6.09-ijg-dll/jmemmgr.c (function _jinit_memory_mgr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-ijg-dll jmemmgr.c
