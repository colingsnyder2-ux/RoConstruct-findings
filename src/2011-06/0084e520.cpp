// roc 2011-06 0084e520  unit: CXTPDockingPaneManager  size: 504 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084e520
//
// 0084e520  6aff                 push -1
// 0084e522  68fc5aa000           push 0xa05afc
// 0084e527  64a100000000         mov eax, dword ptr fs:[0]
// 0084e52d  50                   push eax
// 0084e52e  a12058c900           mov eax, dword ptr [0xc95820]
// 0084e533  33c4                 xor eax, esp
// 0084e535  50                   push eax
// 0084e536  8d442404             lea eax, [esp + 4]
// 0084e53a  64a300000000         mov dword ptr fs:[0], eax
// 0084e540  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0084e544  33c0                 xor eax, eax
// 0084e546  83f905               cmp ecx, 5
// 0084e549  0f879c010000         ja 0x84e6eb
// 0084e54f  ff248d00e78400       jmp dword ptr [ecx*4 + 0x84e700]
// 0084e556  68e8000000           push 0xe8
// 0084e55b  e8febafbff           call 0x80a05e
// 0084e560  83c404               add esp, 4
// 0084e563  89442414             mov dword ptr [esp + 0x14], eax
// 0084e567  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0084e56f  85c0                 test eax, eax
// 0084e571  0f8472010000         je 0x84e6e9
// 0084e577  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084e57b  51                   push ecx
// 0084e57c  8bc8                 mov ecx, eax
// 0084e57e  e86d000200           call 0x86e5f0
// 0084e583  85c0                 test eax, eax
// 0084e585  0f845e010000         je 0x84e6e9
// 0084e58b  83c020               add eax, 0x20
// 0084e58e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084e592  64890d00000000       mov dword ptr fs:[0], ecx
// 0084e599  59                   pop ecx
// 0084e59a  83c40c               add esp, 0xc
// 0084e59d  c20800               ret 8
// 0084e5a0  6898000000           push 0x98
// 0084e5a5  e8b4bafbff           call 0x80a05e
// 0084e5aa  83c404               add esp, 4
// 0084e5ad  89442414             mov dword ptr [esp + 0x14], eax
// 0084e5b1  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0084e5b9  85c0                 test eax, eax
// 0084e5bb  0f8428010000         je 0x84e6e9
// 0084e5c1  8b542418             mov edx, dword ptr [esp + 0x18]
// 0084e5c5  52                   push edx
// 0084e5c6  8bc8                 mov ecx, eax
// 0084e5c8  e8f3780700           call 0x8c5ec0
// 0084e5cd  85c0                 test eax, eax
// 0084e5cf  0f8414010000         je 0x84e6e9
// 0084e5d5  83c020               add eax, 0x20
// 0084e5d8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084e5dc  64890d00000000       mov dword ptr fs:[0], ecx
// 0084e5e3  59                   pop ecx
// 0084e5e4  83c40c               add esp, 0xc
// 0084e5e7  c20800               ret 8
// 0084e5ea  68c8010000           push 0x1c8
// 0084e5ef  e86abafbff           call 0x80a05e
// 0084e5f4  83c404               add esp, 4
// 0084e5f7  89442414             mov dword ptr [esp + 0x14], eax
// 0084e5fb  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 0084e603  85c0                 test eax, eax
// 0084e605  0f84de000000         je 0x84e6e9
// 0084e60b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084e60f  51                   push ecx
// 0084e610  8bc8                 mov ecx, eax
// 0084e612  e8c95c0700           call 0x8c42e0
// 0084e617  e9b4000000           jmp 0x84e6d0
// 0084e61c  6a58                 push 0x58
// 0084e61e  e83bbafbff           call 0x80a05e
// 0084e623  83c404               add esp, 4
// 0084e626  89442414             mov dword ptr [esp + 0x14], eax
// 0084e62a  c744240c03000000     mov dword ptr [esp + 0xc], 3
// 0084e632  85c0                 test eax, eax
// 0084e634  0f84af000000         je 0x84e6e9
// 0084e63a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0084e63e  52                   push edx
// 0084e63f  8bc8                 mov ecx, eax
// 0084e641  e88a390700           call 0x8c1fd0
// 0084e646  85c0                 test eax, eax
// 0084e648  0f849b000000         je 0x84e6e9
// 0084e64e  83c020               add eax, 0x20
// 0084e651  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084e655  64890d00000000       mov dword ptr fs:[0], ecx
// 0084e65c  59                   pop ecx
// 0084e65d  83c40c               add esp, 0xc
// 0084e660  c20800               ret 8
// 0084e663  6858010000           push 0x158
// 0084e668  e8f1b9fbff           call 0x80a05e
// 0084e66d  83c404               add esp, 4
// 0084e670  89442414             mov dword ptr [esp + 0x14], eax
// 0084e674  c744240c04000000     mov dword ptr [esp + 0xc], 4
// 0084e67c  85c0                 test eax, eax
// 0084e67e  7469                 je 0x84e6e9
// 0084e680  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084e684  51                   push ecx
// 0084e685  8bc8                 mov ecx, eax
// 0084e687  e8742d0700           call 0x8c1400
// 0084e68c  85c0                 test eax, eax
// 0084e68e  7459                 je 0x84e6e9
// 0084e690  05f8000000           add eax, 0xf8
// 0084e695  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084e699  64890d00000000       mov dword ptr fs:[0], ecx
// 0084e6a0  59                   pop ecx
// 0084e6a1  83c40c               add esp, 0xc
// 0084e6a4  c20800               ret 8
// 0084e6a7  68c8000000           push 0xc8
// 0084e6ac  e8adb9fbff           call 0x80a05e
// 0084e6b1  83c404               add esp, 4
// 0084e6b4  89442414             mov dword ptr [esp + 0x14], eax
// 0084e6b8  c744240c05000000     mov dword ptr [esp + 0xc], 5
// 0084e6c0  85c0                 test eax, eax
// 0084e6c2  7425                 je 0x84e6e9
// 0084e6c4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0084e6c8  52                   push edx
// 0084e6c9  8bc8                 mov ecx, eax
// 0084e6cb  e890ed0600           call 0x8bd460
// 0084e6d0  85c0                 test eax, eax
// 0084e6d2  7415                 je 0x84e6e9
// 0084e6d4  83c054               add eax, 0x54
// 0084e6d7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084e6db  64890d00000000       mov dword ptr fs:[0], ecx
// 0084e6e2  59                   pop ecx
// 0084e6e3  83c40c               add esp, 0xc
// 0084e6e6  c20800               ret 8
// 0084e6e9  33c0                 xor eax, eax
// 0084e6eb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084e6ef  64890d00000000       mov dword ptr fs:[0], ecx
// 0084e6f6  59                   pop ecx
// 0084e6f7  83c40c               add esp, 0xc
// 0084e6fa  c20800               ret 8
// 0084e6fd  8d4900               lea ecx, [ecx]
// 0084e700  56                   push esi
// 0084e701  e584                 in eax, 0x84
// 0084e703  00ea                 add dl, ch
// 0084e705  e584                 in eax, 0x84
// 0084e707  00a0e5840063         add byte ptr [eax + 0x630084e5], ah
// 0084e70d  e684                 out 0x84, al
// 0084e70f  001ce6               add byte ptr [esi], bl
// 0084e712  8400                 test byte ptr [eax], al
// 0084e714  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 0084e715  e684                 out 0x84, al
// copied from an identical function in another client (function ?OnCreatePane@CXTPDockingPaneManager@@MAEPAVCXTPDockingPaneBase@@W4XTPDockingPaneType@@PAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp