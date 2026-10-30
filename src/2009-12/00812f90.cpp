// roc 2009-12 00812f90  unit: CXTPToolBar  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00812f90
//
// 00812f90  83ec10               sub esp, 0x10
// 00812f93  56                   push esi
// 00812f94  57                   push edi
// 00812f95  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00812f99  8bf1                 mov esi, ecx
// 00812f9b  39bedc000000         cmp dword ptr [esi + 0xdc], edi
// 00812fa1  0f8407010000         je 0x8130ae
// 00812fa7  89bedc000000         mov dword ptr [esi + 0xdc], edi
// 00812fad  85ff                 test edi, edi
// 00812faf  750e                 jne 0x812fbf
// 00812fb1  8b06                 mov eax, dword ptr [esi]
// 00812fb3  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 00812fb9  57                   push edi
// 00812fba  6a01                 push 1
// 00812fbc  57                   push edi
// 00812fbd  ffd2                 call edx
// 00812fbf  8bc7                 mov eax, edi
// 00812fc1  f7d8                 neg eax
// 00812fc3  1bc0                 sbb eax, eax
// 00812fc5  53                   push ebx
// 00812fc6  83e008               and eax, 8
// 00812fc9  50                   push eax
// 00812fca  8bce                 mov ecx, esi
// 00812fcc  e8770bfeff           call 0x7f3b48
// 00812fd1  8bce                 mov ecx, esi
// 00812fd3  e8f814ffff           call 0x8044d0
// 00812fd8  8bd8                 mov ebx, eax
// 00812fda  85ff                 test edi, edi
// 00812fdc  7428                 je 0x813006
// 00812fde  8b16                 mov edx, dword ptr [esi]
// 00812fe0  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 00812fe6  8bce                 mov ecx, esi
// 00812fe8  ffd0                 call eax
// 00812fea  85db                 test ebx, ebx
// 00812fec  0f84bb000000         je 0x8130ad
// 00812ff2  83be8c01000000       cmp dword ptr [esi + 0x18c], 0
// 00812ff9  747d                 je 0x813078
// 00812ffb  85ff                 test edi, edi
// 00812ffd  7579                 jne 0x813078
// 00812fff  bf01000000           mov edi, 1
// 00813004  eb74                 jmp 0x81307a
// 00813006  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0081300c  83f802               cmp eax, 2
// 0081300f  740e                 je 0x81301f
// 00813011  85c0                 test eax, eax
// 00813013  740a                 je 0x81301f
// 00813015  83f803               cmp eax, 3
// 00813018  7405                 je 0x81301f
// 0081301a  83f801               cmp eax, 1
// 0081301d  75cb                 jne 0x812fea
// 0081301f  85db                 test ebx, ebx
// 00813021  740b                 je 0x81302e
// 00813023  6a00                 push 0
// 00813025  8bcb                 mov ecx, ebx
// 00813027  e874190000           call 0x8149a0
// 0081302c  ebbc                 jmp 0x812fea
// 0081302e  8bce                 mov ecx, esi
// 00813030  e85b40ffff           call 0x807090
// 00813035  8bf0                 mov esi, eax
// 00813037  56                   push esi
// 00813038  8d4c2410             lea ecx, [esp + 0x10]
// 0081303c  e88f820300           call 0x84b2d0
// 00813041  85f6                 test esi, esi
// 00813043  7468                 je 0x8130ad
// 00813045  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00813049  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0081304d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00813051  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00813055  0fb7d1               movzx edx, cx
// 00813058  0fb7c8               movzx ecx, ax
// 0081305b  c1e210               shl edx, 0x10
// 0081305e  0bd1                 or edx, ecx
// 00813060  52                   push edx
// 00813061  8b5620               mov edx, dword ptr [esi + 0x20]
// 00813064  6a00                 push 0
// 00813066  6a05                 push 5
// 00813068  52                   push edx
// 00813069  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0081306f  5b                   pop ebx
// 00813070  5f                   pop edi
// 00813071  5e                   pop esi
// 00813072  83c410               add esp, 0x10
// 00813075  c20400               ret 4
// 00813078  33ff                 xor edi, edi
// 0081307a  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00813080  8b8ba0000000         mov ecx, dword ptr [ebx + 0xa0]
// 00813086  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00813089  50                   push eax
// 0081308a  56                   push esi
// 0081308b  6855280000           push 0x2855
// 00813090  52                   push edx
// 00813091  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00813097  85ff                 test edi, edi
// 00813099  7408                 je 0x8130a3
// 0081309b  56                   push esi
// 0081309c  8bcb                 mov ecx, ebx
// 0081309e  e86d3a0000           call 0x816b10
// 008130a3  8b4374               mov eax, dword ptr [ebx + 0x74]
// 008130a6  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 008130ad  5b                   pop ebx
// 008130ae  5f                   pop edi
// 008130af  5e                   pop esi
// 008130b0  83c410               add esp, 0x10
// 008130b3  c20400               ret 4
// copied from an identical function in another client (function ?SetVisible@CXTPToolBar@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp