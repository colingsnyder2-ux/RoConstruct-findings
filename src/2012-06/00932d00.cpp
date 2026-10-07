// roc 2012-06 00932d00  unit: RBX::BallCellContact  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00932d00
//
// 00932d00  8b442404             mov eax, dword ptr [esp + 4]
// 00932d04  53                   push ebx
// 00932d05  55                   push ebp
// 00932d06  8b6810               mov ebp, dword ptr [eax + 0x10]
// 00932d09  0fb65d14             movzx ebx, byte ptr [ebp + 0x14]
// 00932d0d  56                   push esi
// 00932d0e  57                   push edi
// 00932d0f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00932d13  8b37                 mov esi, dword ptr [edi]
// 00932d15  83f303               xor ebx, 3
// 00932d18  85f6                 test esi, esi
// 00932d1a  7469                 je 0x932d85
// 00932d1c  8d642400             lea esp, [esp]
// 00932d20  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00932d24  8bc8                 mov ecx, eax
// 00932d26  48                   dec eax
// 00932d27  8944241c             mov dword ptr [esp + 0x1c], eax
// 00932d2b  85c9                 test ecx, ecx
// 00932d2d  7656                 jbe 0x932d85
// 00932d2f  807e0408             cmp byte ptr [esi + 4], 8
// 00932d33  7513                 jne 0x932d48
// 00932d35  8b442414             mov eax, dword ptr [esp + 0x14]
// 00932d39  6afd                 push -3
// 00932d3b  8d5668               lea edx, [esi + 0x68]
// 00932d3e  52                   push edx
// 00932d3f  50                   push eax
// 00932d40  e8bbffffff           call 0x932d00
// 00932d45  83c40c               add esp, 0xc
// 00932d48  8a4605               mov al, byte ptr [esi + 5]
// 00932d4b  0fb6c8               movzx ecx, al
// 00932d4e  83f103               xor ecx, 3
// 00932d51  85cb                 test ebx, ecx
// 00932d53  7411                 je 0x932d66
// 00932d55  8a5514               mov dl, byte ptr [ebp + 0x14]
// 00932d58  80e203               and dl, 3
// 00932d5b  24f8                 and al, 0xf8
// 00932d5d  0ad0                 or dl, al
// 00932d5f  885605               mov byte ptr [esi + 5], dl
// 00932d62  8bfe                 mov edi, esi
// 00932d64  eb19                 jmp 0x932d7f
// 00932d66  8b06                 mov eax, dword ptr [esi]
// 00932d68  8907                 mov dword ptr [edi], eax
// 00932d6a  3b751c               cmp esi, dword ptr [ebp + 0x1c]
// 00932d6d  7505                 jne 0x932d74
// 00932d6f  8b0e                 mov ecx, dword ptr [esi]
// 00932d71  894d1c               mov dword ptr [ebp + 0x1c], ecx
// 00932d74  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00932d78  8bc6                 mov eax, esi
// 00932d7a  e8e1feffff           call 0x932c60
// 00932d7f  8b37                 mov esi, dword ptr [edi]
// 00932d81  85f6                 test esi, esi
// 00932d83  759b                 jne 0x932d20
// 00932d85  8bc7                 mov eax, edi
// 00932d87  5f                   pop edi
// 00932d88  5e                   pop esi
// 00932d89  5d                   pop ebp
// 00932d8a  5b                   pop ebx
// 00932d8b  c3                   ret 
// library lua-5.1.4/lgc.c (function _sweeplist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
