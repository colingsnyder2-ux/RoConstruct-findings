// from server: 100% by auto
// roc 2009-06 006e9630  unit: RBX::PartDropTool  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9630
//
// 006e9630  8b442404             mov eax, dword ptr [esp + 4]
// 006e9634  53                   push ebx
// 006e9635  55                   push ebp
// 006e9636  8b6810               mov ebp, dword ptr [eax + 0x10]
// 006e9639  0fb65d14             movzx ebx, byte ptr [ebp + 0x14]
// 006e963d  56                   push esi
// 006e963e  57                   push edi
// 006e963f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006e9643  8b37                 mov esi, dword ptr [edi]
// 006e9645  83f303               xor ebx, 3
// 006e9648  85f6                 test esi, esi
// 006e964a  7469                 je 0x6e96b5
// 006e964c  8d642400             lea esp, [esp]
// 006e9650  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006e9654  8bc8                 mov ecx, eax
// 006e9656  48                   dec eax
// 006e9657  8944241c             mov dword ptr [esp + 0x1c], eax
// 006e965b  85c9                 test ecx, ecx
// 006e965d  7656                 jbe 0x6e96b5
// 006e965f  807e0408             cmp byte ptr [esi + 4], 8
// 006e9663  7513                 jne 0x6e9678
// 006e9665  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e9669  6afd                 push -3
// 006e966b  8d5668               lea edx, [esi + 0x68]
// 006e966e  52                   push edx
// 006e966f  50                   push eax
// 006e9670  e8bbffffff           call 0x6e9630
// 006e9675  83c40c               add esp, 0xc
// 006e9678  8a4605               mov al, byte ptr [esi + 5]
// 006e967b  0fb6c8               movzx ecx, al
// 006e967e  83f103               xor ecx, 3
// 006e9681  85cb                 test ebx, ecx
// 006e9683  7411                 je 0x6e9696
// 006e9685  8a5514               mov dl, byte ptr [ebp + 0x14]
// 006e9688  80e203               and dl, 3
// 006e968b  24f8                 and al, 0xf8
// 006e968d  0ad0                 or dl, al
// 006e968f  885605               mov byte ptr [esi + 5], dl
// 006e9692  8bfe                 mov edi, esi
// 006e9694  eb19                 jmp 0x6e96af
// 006e9696  8b06                 mov eax, dword ptr [esi]
// 006e9698  8907                 mov dword ptr [edi], eax
// 006e969a  3b751c               cmp esi, dword ptr [ebp + 0x1c]
// 006e969d  7505                 jne 0x6e96a4
// 006e969f  8b0e                 mov ecx, dword ptr [esi]
// 006e96a1  894d1c               mov dword ptr [ebp + 0x1c], ecx
// 006e96a4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e96a8  8bc6                 mov eax, esi
// 006e96aa  e8e1feffff           call 0x6e9590
// 006e96af  8b37                 mov esi, dword ptr [edi]
// 006e96b1  85f6                 test esi, esi
// 006e96b3  759b                 jne 0x6e9650
// 006e96b5  8bc7                 mov eax, edi
// 006e96b7  5f                   pop edi
// 006e96b8  5e                   pop esi
// 006e96b9  5d                   pop ebp
// 006e96ba  5b                   pop ebx
// 006e96bb  c3                   ret 
// library lua-5.1.4/lgc.c (function _sweeplist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
