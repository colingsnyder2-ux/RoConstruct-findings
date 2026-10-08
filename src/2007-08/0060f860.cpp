// from server: 100% by auto
// roc 2007-08 0060f860  unit: RBX::Ball  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060f860
//
// 0060f860  8b442404             mov eax, dword ptr [esp + 4]
// 0060f864  53                   push ebx
// 0060f865  55                   push ebp
// 0060f866  8b6810               mov ebp, dword ptr [eax + 0x10]
// 0060f869  0fb65d14             movzx ebx, byte ptr [ebp + 0x14]
// 0060f86d  56                   push esi
// 0060f86e  57                   push edi
// 0060f86f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0060f873  8b37                 mov esi, dword ptr [edi]
// 0060f875  83f303               xor ebx, 3
// 0060f878  85f6                 test esi, esi
// 0060f87a  746b                 je 0x60f8e7
// 0060f87c  8d642400             lea esp, [esp]
// 0060f880  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060f884  8bc8                 mov ecx, eax
// 0060f886  83e801               sub eax, 1
// 0060f889  85c9                 test ecx, ecx
// 0060f88b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0060f88f  7656                 jbe 0x60f8e7
// 0060f891  807e0408             cmp byte ptr [esi + 4], 8
// 0060f895  7513                 jne 0x60f8aa
// 0060f897  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060f89b  6afd                 push -3
// 0060f89d  8d5668               lea edx, [esi + 0x68]
// 0060f8a0  52                   push edx
// 0060f8a1  50                   push eax
// 0060f8a2  e8b9ffffff           call 0x60f860
// 0060f8a7  83c40c               add esp, 0xc
// 0060f8aa  8a4605               mov al, byte ptr [esi + 5]
// 0060f8ad  0fb6c8               movzx ecx, al
// 0060f8b0  83f103               xor ecx, 3
// 0060f8b3  85cb                 test ebx, ecx
// 0060f8b5  7411                 je 0x60f8c8
// 0060f8b7  8a5514               mov dl, byte ptr [ebp + 0x14]
// 0060f8ba  80e203               and dl, 3
// 0060f8bd  24f8                 and al, 0xf8
// 0060f8bf  0ad0                 or dl, al
// 0060f8c1  885605               mov byte ptr [esi + 5], dl
// 0060f8c4  8bfe                 mov edi, esi
// 0060f8c6  eb19                 jmp 0x60f8e1
// 0060f8c8  8b06                 mov eax, dword ptr [esi]
// 0060f8ca  8907                 mov dword ptr [edi], eax
// 0060f8cc  3b751c               cmp esi, dword ptr [ebp + 0x1c]
// 0060f8cf  7505                 jne 0x60f8d6
// 0060f8d1  8b0e                 mov ecx, dword ptr [esi]
// 0060f8d3  894d1c               mov dword ptr [ebp + 0x1c], ecx
// 0060f8d6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060f8da  8bc6                 mov eax, esi
// 0060f8dc  e8dffeffff           call 0x60f7c0
// 0060f8e1  8b37                 mov esi, dword ptr [edi]
// 0060f8e3  85f6                 test esi, esi
// 0060f8e5  7599                 jne 0x60f880
// 0060f8e7  8bc7                 mov eax, edi
// 0060f8e9  5f                   pop edi
// 0060f8ea  5e                   pop esi
// 0060f8eb  5d                   pop ebp
// 0060f8ec  5b                   pop ebx
// 0060f8ed  c3                   ret 
// library lua-5.1.4/lgc.c (function _sweeplist)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
