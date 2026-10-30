// roc 2009-12 0083b240  unit: CXTPToolBar::CControlButtonExpand  size: 527 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083b240
//
// 0083b240  83ec10               sub esp, 0x10
// 0083b243  53                   push ebx
// 0083b244  56                   push esi
// 0083b245  8bf1                 mov esi, ecx
// 0083b247  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0083b24d  83f8ff               cmp eax, -1
// 0083b250  750f                 jne 0x83b261
// 0083b252  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0083b258  85c9                 test ecx, ecx
// 0083b25a  7405                 je 0x83b261
// 0083b25c  e84fb3fbff           call 0x7f65b0
// 0083b261  85c0                 test eax, eax
// 0083b263  0f84de010000         je 0x83b447
// 0083b269  8bce                 mov ecx, esi
// 0083b26b  e840acfbff           call 0x7f5eb0
// 0083b270  85c0                 test eax, eax
// 0083b272  7423                 je 0x83b297
// 0083b274  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083b27a  85c9                 test ecx, ecx
// 0083b27c  0f84c5010000         je 0x83b447
// 0083b282  e84992fcff           call 0x8044d0
// 0083b287  85c0                 test eax, eax
// 0083b289  0f84b8010000         je 0x83b447
// 0083b28f  56                   push esi
// 0083b290  8bc8                 mov ecx, eax
// 0083b292  e8099bfdff           call 0x814da0
// 0083b297  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 0083b29e  7424                 je 0x83b2c4
// 0083b2a0  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083b2a6  83b90001000005       cmp dword ptr [ecx + 0x100], 5
// 0083b2ad  7415                 je 0x83b2c4
// 0083b2af  8b01                 mov eax, dword ptr [ecx]
// 0083b2b1  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 0083b2b7  6a00                 push 0
// 0083b2b9  6a00                 push 0
// 0083b2bb  6a00                 push 0
// 0083b2bd  ffd2                 call edx
// 0083b2bf  e962010000           jmp 0x83b426
// 0083b2c4  8bce                 mov ecx, esi
// 0083b2c6  e8e5abfbff           call 0x7f5eb0
// 0083b2cb  85c0                 test eax, eax
// 0083b2cd  0f851c010000         jne 0x83b3ef
// 0083b2d3  83befc00000004       cmp dword ptr [esi + 0xfc], 4
// 0083b2da  0f850f010000         jne 0x83b3ef
// 0083b2e0  8bce                 mov ecx, esi
// 0083b2e2  3944241c             cmp dword ptr [esp + 0x1c], eax
// 0083b2e6  743a                 je 0x83b322
// 0083b2e8  e8e373c1ff           call 0x4526d0
// 0083b2ed  83f804               cmp eax, 4
// 0083b2f0  7414                 je 0x83b306
// 0083b2f2  8b06                 mov eax, dword ptr [esi]
// 0083b2f4  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 0083b2fa  8bce                 mov ecx, esi
// 0083b2fc  ffd2                 call edx
// 0083b2fe  5e                   pop esi
// 0083b2ff  5b                   pop ebx
// 0083b300  83c410               add esp, 0x10
// 0083b303  c20c00               ret 0xc
// 0083b306  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0083b30c  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083b312  6a00                 push 0
// 0083b314  50                   push eax
// 0083b315  e886b2fcff           call 0x8065a0
// 0083b31a  5e                   pop esi
// 0083b31b  5b                   pop ebx
// 0083b31c  83c410               add esp, 0x10
// 0083b31f  c20c00               ret 0xc
// 0083b322  e819acfbff           call 0x7f5f40
// 0083b327  8b10                 mov edx, dword ptr [eax]
// 0083b329  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 0083b32f  56                   push esi
// 0083b330  8d4c240c             lea ecx, [esp + 0xc]
// 0083b334  51                   push ecx
// 0083b335  8bc8                 mov ecx, eax
// 0083b337  ffd2                 call edx
// 0083b339  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0083b33f  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0083b346  8b1d5cca9800         mov ebx, dword ptr [0x98ca5c]
// 0083b34c  7532                 jne 0x83b380
// 0083b34e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0083b352  8b542420             mov edx, dword ptr [esp + 0x20]
// 0083b356  51                   push ecx
// 0083b357  52                   push edx
// 0083b358  8d442410             lea eax, [esp + 0x10]
// 0083b35c  50                   push eax
// 0083b35d  ffd3                 call ebx
// 0083b35f  85c0                 test eax, eax
// 0083b361  741d                 je 0x83b380
// 0083b363  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083b369  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0083b36c  685fb60100           push 0x1b65f
// 0083b371  52                   push edx
// 0083b372  ff15d0cb9800         call dword ptr [0x98cbd0]
// 0083b378  5e                   pop esi
// 0083b379  5b                   pop ebx
// 0083b37a  83c410               add esp, 0x10
// 0083b37d  c20c00               ret 0xc
// 0083b380  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0083b386  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0083b38d  7454                 je 0x83b3e3
// 0083b38f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0083b393  8b542420             mov edx, dword ptr [esp + 0x20]
// 0083b397  51                   push ecx
// 0083b398  52                   push edx
// 0083b399  8d442410             lea eax, [esp + 0x10]
// 0083b39d  50                   push eax
// 0083b39e  ffd3                 call ebx
// 0083b3a0  85c0                 test eax, eax
// 0083b3a2  743f                 je 0x83b3e3
// 0083b3a4  8bce                 mov ecx, esi
// 0083b3a6  e82573c1ff           call 0x4526d0
// 0083b3ab  83f804               cmp eax, 4
// 0083b3ae  0f8493000000         je 0x83b447
// 0083b3b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0083b3b8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0083b3bc  83ec10               sub esp, 0x10
// 0083b3bf  8bc4                 mov eax, esp
// 0083b3c1  8908                 mov dword ptr [eax], ecx
// 0083b3c3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0083b3c7  895004               mov dword ptr [eax + 4], edx
// 0083b3ca  8b542424             mov edx, dword ptr [esp + 0x24]
// 0083b3ce  894808               mov dword ptr [eax + 8], ecx
// 0083b3d1  8bce                 mov ecx, esi
// 0083b3d3  89500c               mov dword ptr [eax + 0xc], edx
// 0083b3d6  e8c5cefbff           call 0x7f82a0
// 0083b3db  5e                   pop esi
// 0083b3dc  5b                   pop ebx
// 0083b3dd  83c410               add esp, 0x10
// 0083b3e0  c20c00               ret 0xc
// 0083b3e3  8bce                 mov ecx, esi
// 0083b3e5  e8e672c1ff           call 0x4526d0
// 0083b3ea  83f803               cmp eax, 3
// 0083b3ed  7458                 je 0x83b447
// 0083b3ef  8bce                 mov ecx, esi
// 0083b3f1  e8baaafbff           call 0x7f5eb0
// 0083b3f6  85c0                 test eax, eax
// 0083b3f8  7418                 je 0x83b412
// 0083b3fa  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0083b400  85c9                 test ecx, ecx
// 0083b402  740e                 je 0x83b412
// 0083b404  8b01                 mov eax, dword ptr [ecx]
// 0083b406  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 0083b40c  ffd2                 call edx
// 0083b40e  85c0                 test eax, eax
// 0083b410  7414                 je 0x83b426
// 0083b412  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0083b418  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083b41e  6a00                 push 0
// 0083b420  50                   push eax
// 0083b421  e87ab1fcff           call 0x8065a0
// 0083b426  8bce                 mov ecx, esi
// 0083b428  e883aafbff           call 0x7f5eb0
// 0083b42d  85c0                 test eax, eax
// 0083b42f  7416                 je 0x83b447
// 0083b431  8b442424             mov eax, dword ptr [esp + 0x24]
// 0083b435  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0083b439  8b16                 mov edx, dword ptr [esi]
// 0083b43b  8b9208010000         mov edx, dword ptr [edx + 0x108]
// 0083b441  50                   push eax
// 0083b442  51                   push ecx
// 0083b443  8bce                 mov ecx, esi
// 0083b445  ffd2                 call edx
// 0083b447  5e                   pop esi
// 0083b448  5b                   pop ebx
// 0083b449  83c410               add esp, 0x10
// 0083b44c  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnClick@CXTPControlPopup@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp