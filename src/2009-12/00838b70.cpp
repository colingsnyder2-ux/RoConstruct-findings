// roc 2009-12 00838b70  unit: CXTPDockingPaneManager  size: 504 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838b70
//
// 00838b70  6aff                 push -1
// 00838b72  683cc59500           push 0x95c53c
// 00838b77  64a100000000         mov eax, dword ptr fs:[0]
// 00838b7d  50                   push eax
// 00838b7e  a10052b600           mov eax, dword ptr [0xb65200]
// 00838b83  33c4                 xor eax, esp
// 00838b85  50                   push eax
// 00838b86  8d442404             lea eax, [esp + 4]
// 00838b8a  64a300000000         mov dword ptr fs:[0], eax
// 00838b90  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00838b94  33c0                 xor eax, eax
// 00838b96  83f905               cmp ecx, 5
// 00838b99  0f879c010000         ja 0x838d3b
// 00838b9f  ff248d508d8300       jmp dword ptr [ecx*4 + 0x838d50]
// 00838ba6  68e8000000           push 0xe8
// 00838bab  e8b0acfbff           call 0x7f3860
// 00838bb0  83c404               add esp, 4
// 00838bb3  89442414             mov dword ptr [esp + 0x14], eax
// 00838bb7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00838bbf  85c0                 test eax, eax
// 00838bc1  0f8472010000         je 0x838d39
// 00838bc7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00838bcb  51                   push ecx
// 00838bcc  8bc8                 mov ecx, eax
// 00838bce  e83d420200           call 0x85ce10
// 00838bd3  85c0                 test eax, eax
// 00838bd5  0f845e010000         je 0x838d39
// 00838bdb  83c020               add eax, 0x20
// 00838bde  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00838be2  64890d00000000       mov dword ptr fs:[0], ecx
// 00838be9  59                   pop ecx
// 00838bea  83c40c               add esp, 0xc
// 00838bed  c20800               ret 8
// 00838bf0  6898000000           push 0x98
// 00838bf5  e866acfbff           call 0x7f3860
// 00838bfa  83c404               add esp, 4
// 00838bfd  89442414             mov dword ptr [esp + 0x14], eax
// 00838c01  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00838c09  85c0                 test eax, eax
// 00838c0b  0f8428010000         je 0x838d39
// 00838c11  8b542418             mov edx, dword ptr [esp + 0x18]
// 00838c15  52                   push edx
// 00838c16  8bc8                 mov ecx, eax
// 00838c18  e813bd0700           call 0x8b4930
// 00838c1d  85c0                 test eax, eax
// 00838c1f  0f8414010000         je 0x838d39
// 00838c25  83c020               add eax, 0x20
// 00838c28  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00838c2c  64890d00000000       mov dword ptr fs:[0], ecx
// 00838c33  59                   pop ecx
// 00838c34  83c40c               add esp, 0xc
// 00838c37  c20800               ret 8
// 00838c3a  68c8010000           push 0x1c8
// 00838c3f  e81cacfbff           call 0x7f3860
// 00838c44  83c404               add esp, 4
// 00838c47  89442414             mov dword ptr [esp + 0x14], eax
// 00838c4b  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 00838c53  85c0                 test eax, eax
// 00838c55  0f84de000000         je 0x838d39
// 00838c5b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00838c5f  51                   push ecx
// 00838c60  8bc8                 mov ecx, eax
// 00838c62  e839a10700           call 0x8b2da0
// 00838c67  e9b4000000           jmp 0x838d20
// 00838c6c  6a58                 push 0x58
// 00838c6e  e8edabfbff           call 0x7f3860
// 00838c73  83c404               add esp, 4
// 00838c76  89442414             mov dword ptr [esp + 0x14], eax
// 00838c7a  c744240c03000000     mov dword ptr [esp + 0xc], 3
// 00838c82  85c0                 test eax, eax
// 00838c84  0f84af000000         je 0x838d39
// 00838c8a  8b542418             mov edx, dword ptr [esp + 0x18]
// 00838c8e  52                   push edx
// 00838c8f  8bc8                 mov ecx, eax
// 00838c91  e81a7e0700           call 0x8b0ab0
// 00838c96  85c0                 test eax, eax
// 00838c98  0f849b000000         je 0x838d39
// 00838c9e  83c020               add eax, 0x20
// 00838ca1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00838ca5  64890d00000000       mov dword ptr fs:[0], ecx
// 00838cac  59                   pop ecx
// 00838cad  83c40c               add esp, 0xc
// 00838cb0  c20800               ret 8
// 00838cb3  6858010000           push 0x158
// 00838cb8  e8a3abfbff           call 0x7f3860
// 00838cbd  83c404               add esp, 4
// 00838cc0  89442414             mov dword ptr [esp + 0x14], eax
// 00838cc4  c744240c04000000     mov dword ptr [esp + 0xc], 4
// 00838ccc  85c0                 test eax, eax
// 00838cce  7469                 je 0x838d39
// 00838cd0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00838cd4  51                   push ecx
// 00838cd5  8bc8                 mov ecx, eax
// 00838cd7  e8e4710700           call 0x8afec0
// 00838cdc  85c0                 test eax, eax
// 00838cde  7459                 je 0x838d39
// 00838ce0  05f8000000           add eax, 0xf8
// 00838ce5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00838ce9  64890d00000000       mov dword ptr fs:[0], ecx
// 00838cf0  59                   pop ecx
// 00838cf1  83c40c               add esp, 0xc
// 00838cf4  c20800               ret 8
// 00838cf7  68c8000000           push 0xc8
// 00838cfc  e85fabfbff           call 0x7f3860
// 00838d01  83c404               add esp, 4
// 00838d04  89442414             mov dword ptr [esp + 0x14], eax
// 00838d08  c744240c05000000     mov dword ptr [esp + 0xc], 5
// 00838d10  85c0                 test eax, eax
// 00838d12  7425                 je 0x838d39
// 00838d14  8b542418             mov edx, dword ptr [esp + 0x18]
// 00838d18  52                   push edx
// 00838d19  8bc8                 mov ecx, eax
// 00838d1b  e870340700           call 0x8ac190
// 00838d20  85c0                 test eax, eax
// 00838d22  7415                 je 0x838d39
// 00838d24  83c054               add eax, 0x54
// 00838d27  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00838d2b  64890d00000000       mov dword ptr fs:[0], ecx
// 00838d32  59                   pop ecx
// 00838d33  83c40c               add esp, 0xc
// 00838d36  c20800               ret 8
// 00838d39  33c0                 xor eax, eax
// 00838d3b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00838d3f  64890d00000000       mov dword ptr fs:[0], ecx
// 00838d46  59                   pop ecx
// 00838d47  83c40c               add esp, 0xc
// 00838d4a  c20800               ret 8
// 00838d4d  8d4900               lea ecx, [ecx]
// 00838d50  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 00838d51  8b83003a8c83         mov eax, dword ptr [ebx - 0x7c73c600]
// 00838d57  00f0                 add al, dh
// 00838d59  8b8300b38c83         mov eax, dword ptr [ebx - 0x7c734d00]
// 00838d5f  006c8c83             add byte ptr [esp + ecx*4 - 0x7d], ch
// 00838d63  00f7                 add bh, dh
// copied from an identical function in another client (function ?OnCreatePane@CXTPDockingPaneManager@@MAEPAVCXTPDockingPaneBase@@W4XTPDockingPaneType@@PAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp