// roc 2008-06 0065be00  unit: RBX::BallBallContact  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065be00
//
// 0065be00  8b442404             mov eax, dword ptr [esp + 4]
// 0065be04  53                   push ebx
// 0065be05  55                   push ebp
// 0065be06  8b6810               mov ebp, dword ptr [eax + 0x10]
// 0065be09  0fb65d14             movzx ebx, byte ptr [ebp + 0x14]
// 0065be0d  56                   push esi
// 0065be0e  57                   push edi
// 0065be0f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0065be13  8b37                 mov esi, dword ptr [edi]
// 0065be15  83f303               xor ebx, 3
// 0065be18  85f6                 test esi, esi
// 0065be1a  7469                 je 0x65be85
// 0065be1c  8d642400             lea esp, [esp]
// 0065be20  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0065be24  8bc8                 mov ecx, eax
// 0065be26  48                   dec eax
// 0065be27  8944241c             mov dword ptr [esp + 0x1c], eax
// 0065be2b  85c9                 test ecx, ecx
// 0065be2d  7656                 jbe 0x65be85
// 0065be2f  807e0408             cmp byte ptr [esi + 4], 8
// 0065be33  7513                 jne 0x65be48
// 0065be35  8b442414             mov eax, dword ptr [esp + 0x14]
// 0065be39  6afd                 push -3
// 0065be3b  8d5668               lea edx, [esi + 0x68]
// 0065be3e  52                   push edx
// 0065be3f  50                   push eax
// 0065be40  e8bbffffff           call 0x65be00
// 0065be45  83c40c               add esp, 0xc
// 0065be48  8a4605               mov al, byte ptr [esi + 5]
// 0065be4b  0fb6c8               movzx ecx, al
// 0065be4e  83f103               xor ecx, 3
// 0065be51  85cb                 test ebx, ecx
// 0065be53  7411                 je 0x65be66
// 0065be55  8a5514               mov dl, byte ptr [ebp + 0x14]
// 0065be58  80e203               and dl, 3
// 0065be5b  24f8                 and al, 0xf8
// 0065be5d  0ad0                 or dl, al
// 0065be5f  885605               mov byte ptr [esi + 5], dl
// 0065be62  8bfe                 mov edi, esi
// 0065be64  eb19                 jmp 0x65be7f
// 0065be66  8b06                 mov eax, dword ptr [esi]
// 0065be68  8907                 mov dword ptr [edi], eax
// 0065be6a  3b751c               cmp esi, dword ptr [ebp + 0x1c]
// 0065be6d  7505                 jne 0x65be74
// 0065be6f  8b0e                 mov ecx, dword ptr [esi]
// 0065be71  894d1c               mov dword ptr [ebp + 0x1c], ecx
// 0065be74  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065be78  8bc6                 mov eax, esi
// 0065be7a  e8e1feffff           call 0x65bd60
// 0065be7f  8b37                 mov esi, dword ptr [edi]
// 0065be81  85f6                 test esi, esi
// 0065be83  759b                 jne 0x65be20
// 0065be85  8bc7                 mov eax, edi
// 0065be87  5f                   pop edi
// 0065be88  5e                   pop esi
// 0065be89  5d                   pop ebp
// 0065be8a  5b                   pop ebx
// 0065be8b  c3                   ret 
// library lua-5.1.4/lgc.c (function _sweeplist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
