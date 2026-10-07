// roc 2011-06 007d6c00  unit: RBX::EquationDisplay  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d6c00
//
// 007d6c00  8b442404             mov eax, dword ptr [esp + 4]
// 007d6c04  53                   push ebx
// 007d6c05  55                   push ebp
// 007d6c06  8b6810               mov ebp, dword ptr [eax + 0x10]
// 007d6c09  0fb65d14             movzx ebx, byte ptr [ebp + 0x14]
// 007d6c0d  56                   push esi
// 007d6c0e  57                   push edi
// 007d6c0f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007d6c13  8b37                 mov esi, dword ptr [edi]
// 007d6c15  83f303               xor ebx, 3
// 007d6c18  85f6                 test esi, esi
// 007d6c1a  7469                 je 0x7d6c85
// 007d6c1c  8d642400             lea esp, [esp]
// 007d6c20  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007d6c24  8bc8                 mov ecx, eax
// 007d6c26  48                   dec eax
// 007d6c27  8944241c             mov dword ptr [esp + 0x1c], eax
// 007d6c2b  85c9                 test ecx, ecx
// 007d6c2d  7656                 jbe 0x7d6c85
// 007d6c2f  807e0408             cmp byte ptr [esi + 4], 8
// 007d6c33  7513                 jne 0x7d6c48
// 007d6c35  8b442414             mov eax, dword ptr [esp + 0x14]
// 007d6c39  6afd                 push -3
// 007d6c3b  8d5668               lea edx, [esi + 0x68]
// 007d6c3e  52                   push edx
// 007d6c3f  50                   push eax
// 007d6c40  e8bbffffff           call 0x7d6c00
// 007d6c45  83c40c               add esp, 0xc
// 007d6c48  8a4605               mov al, byte ptr [esi + 5]
// 007d6c4b  0fb6c8               movzx ecx, al
// 007d6c4e  83f103               xor ecx, 3
// 007d6c51  85cb                 test ebx, ecx
// 007d6c53  7411                 je 0x7d6c66
// 007d6c55  8a5514               mov dl, byte ptr [ebp + 0x14]
// 007d6c58  80e203               and dl, 3
// 007d6c5b  24f8                 and al, 0xf8
// 007d6c5d  0ad0                 or dl, al
// 007d6c5f  885605               mov byte ptr [esi + 5], dl
// 007d6c62  8bfe                 mov edi, esi
// 007d6c64  eb19                 jmp 0x7d6c7f
// 007d6c66  8b06                 mov eax, dword ptr [esi]
// 007d6c68  8907                 mov dword ptr [edi], eax
// 007d6c6a  3b751c               cmp esi, dword ptr [ebp + 0x1c]
// 007d6c6d  7505                 jne 0x7d6c74
// 007d6c6f  8b0e                 mov ecx, dword ptr [esi]
// 007d6c71  894d1c               mov dword ptr [ebp + 0x1c], ecx
// 007d6c74  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d6c78  8bc6                 mov eax, esi
// 007d6c7a  e8e1feffff           call 0x7d6b60
// 007d6c7f  8b37                 mov esi, dword ptr [edi]
// 007d6c81  85f6                 test esi, esi
// 007d6c83  759b                 jne 0x7d6c20
// 007d6c85  8bc7                 mov eax, edi
// 007d6c87  5f                   pop edi
// 007d6c88  5e                   pop esi
// 007d6c89  5d                   pop ebp
// 007d6c8a  5b                   pop ebx
// 007d6c8b  c3                   ret 
// library lua-5.1.4/lgc.c (function _sweeplist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
