// roc 2012-06 009c69f0  unit: CXTPDockingPaneManager  size: 504 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c69f0
//
// 009c69f0  6aff                 push -1
// 009c69f2  684cf8ad00           push 0xadf84c
// 009c69f7  64a100000000         mov eax, dword ptr fs:[0]
// 009c69fd  50                   push eax
// 009c69fe  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009c6a03  33c4                 xor eax, esp
// 009c6a05  50                   push eax
// 009c6a06  8d442404             lea eax, [esp + 4]
// 009c6a0a  64a300000000         mov dword ptr fs:[0], eax
// 009c6a10  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009c6a14  33c0                 xor eax, eax
// 009c6a16  83f905               cmp ecx, 5
// 009c6a19  0f879c010000         ja 0x9c6bbb
// 009c6a1f  ff248dd06b9c00       jmp dword ptr [ecx*4 + 0x9c6bd0]
// 009c6a26  68e8000000           push 0xe8
// 009c6a2b  e8eab6fbff           call 0x98211a
// 009c6a30  83c404               add esp, 4
// 009c6a33  89442414             mov dword ptr [esp + 0x14], eax
// 009c6a37  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 009c6a3f  85c0                 test eax, eax
// 009c6a41  0f8472010000         je 0x9c6bb9
// 009c6a47  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009c6a4b  51                   push ecx
// 009c6a4c  8bc8                 mov ecx, eax
// 009c6a4e  e8cdd80100           call 0x9e4320
// 009c6a53  85c0                 test eax, eax
// 009c6a55  0f845e010000         je 0x9c6bb9
// 009c6a5b  83c020               add eax, 0x20
// 009c6a5e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c6a62  64890d00000000       mov dword ptr fs:[0], ecx
// 009c6a69  59                   pop ecx
// 009c6a6a  83c40c               add esp, 0xc
// 009c6a6d  c20800               ret 8
// 009c6a70  6898000000           push 0x98
// 009c6a75  e8a0b6fbff           call 0x98211a
// 009c6a7a  83c404               add esp, 4
// 009c6a7d  89442414             mov dword ptr [esp + 0x14], eax
// 009c6a81  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 009c6a89  85c0                 test eax, eax
// 009c6a8b  0f8428010000         je 0x9c6bb9
// 009c6a91  8b542418             mov edx, dword ptr [esp + 0x18]
// 009c6a95  52                   push edx
// 009c6a96  8bc8                 mov ecx, eax
// 009c6a98  e8f3770700           call 0xa3e290
// 009c6a9d  85c0                 test eax, eax
// 009c6a9f  0f8414010000         je 0x9c6bb9
// 009c6aa5  83c020               add eax, 0x20
// 009c6aa8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c6aac  64890d00000000       mov dword ptr fs:[0], ecx
// 009c6ab3  59                   pop ecx
// 009c6ab4  83c40c               add esp, 0xc
// 009c6ab7  c20800               ret 8
// 009c6aba  68c8010000           push 0x1c8
// 009c6abf  e856b6fbff           call 0x98211a
// 009c6ac4  83c404               add esp, 4
// 009c6ac7  89442414             mov dword ptr [esp + 0x14], eax
// 009c6acb  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 009c6ad3  85c0                 test eax, eax
// 009c6ad5  0f84de000000         je 0x9c6bb9
// 009c6adb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009c6adf  51                   push ecx
// 009c6ae0  8bc8                 mov ecx, eax
// 009c6ae2  e8295c0700           call 0xa3c710
// 009c6ae7  e9b4000000           jmp 0x9c6ba0
// 009c6aec  6a58                 push 0x58
// 009c6aee  e827b6fbff           call 0x98211a
// 009c6af3  83c404               add esp, 4
// 009c6af6  89442414             mov dword ptr [esp + 0x14], eax
// 009c6afa  c744240c03000000     mov dword ptr [esp + 0xc], 3
// 009c6b02  85c0                 test eax, eax
// 009c6b04  0f84af000000         je 0x9c6bb9
// 009c6b0a  8b542418             mov edx, dword ptr [esp + 0x18]
// 009c6b0e  52                   push edx
// 009c6b0f  8bc8                 mov ecx, eax
// 009c6b11  e8da380700           call 0xa3a3f0
// 009c6b16  85c0                 test eax, eax
// 009c6b18  0f849b000000         je 0x9c6bb9
// 009c6b1e  83c020               add eax, 0x20
// 009c6b21  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c6b25  64890d00000000       mov dword ptr fs:[0], ecx
// 009c6b2c  59                   pop ecx
// 009c6b2d  83c40c               add esp, 0xc
// 009c6b30  c20800               ret 8
// 009c6b33  6858010000           push 0x158
// 009c6b38  e8ddb5fbff           call 0x98211a
// 009c6b3d  83c404               add esp, 4
// 009c6b40  89442414             mov dword ptr [esp + 0x14], eax
// 009c6b44  c744240c04000000     mov dword ptr [esp + 0xc], 4
// 009c6b4c  85c0                 test eax, eax
// 009c6b4e  7469                 je 0x9c6bb9
// 009c6b50  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009c6b54  51                   push ecx
// 009c6b55  8bc8                 mov ecx, eax
// 009c6b57  e8b42c0700           call 0xa39810
// 009c6b5c  85c0                 test eax, eax
// 009c6b5e  7459                 je 0x9c6bb9
// 009c6b60  05f8000000           add eax, 0xf8
// 009c6b65  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c6b69  64890d00000000       mov dword ptr fs:[0], ecx
// 009c6b70  59                   pop ecx
// 009c6b71  83c40c               add esp, 0xc
// 009c6b74  c20800               ret 8
// 009c6b77  68c8000000           push 0xc8
// 009c6b7c  e899b5fbff           call 0x98211a
// 009c6b81  83c404               add esp, 4
// 009c6b84  89442414             mov dword ptr [esp + 0x14], eax
// 009c6b88  c744240c05000000     mov dword ptr [esp + 0xc], 5
// 009c6b90  85c0                 test eax, eax
// 009c6b92  7425                 je 0x9c6bb9
// 009c6b94  8b542418             mov edx, dword ptr [esp + 0x18]
// 009c6b98  52                   push edx
// 009c6b99  8bc8                 mov ecx, eax
// 009c6b9b  e8d0ed0600           call 0xa35970
// 009c6ba0  85c0                 test eax, eax
// 009c6ba2  7415                 je 0x9c6bb9
// 009c6ba4  83c054               add eax, 0x54
// 009c6ba7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c6bab  64890d00000000       mov dword ptr fs:[0], ecx
// 009c6bb2  59                   pop ecx
// 009c6bb3  83c40c               add esp, 0xc
// 009c6bb6  c20800               ret 8
// 009c6bb9  33c0                 xor eax, eax
// 009c6bbb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c6bbf  64890d00000000       mov dword ptr fs:[0], ecx
// 009c6bc6  59                   pop ecx
// 009c6bc7  83c40c               add esp, 0xc
// 009c6bca  c20800               ret 8
// 009c6bcd  8d4900               lea ecx, [ecx]
// 009c6bd0  266a9c               push -0x64
// 009c6bd3  00ba6a9c0070         add byte ptr [edx + 0x70009c6a], bh
// 009c6bd9  6a9c                 push -0x64
// 009c6bdb  0033                 add byte ptr [ebx], dh
// 009c6bdd  6b9c00ec6a9c0077     imul ebx, dword ptr [eax + eax + 0x9c6aec], 0x77
// copied from an identical function in another client (function ?OnCreatePane@CXTPDockingPaneManager@@MAEPAVCXTPDockingPaneBase@@W4XTPDockingPaneType@@PAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp