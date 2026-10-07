// roc 2010-06 0077a8d0  unit: RBX::PartDropTool  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077a8d0
//
// 0077a8d0  8b442404             mov eax, dword ptr [esp + 4]
// 0077a8d4  53                   push ebx
// 0077a8d5  55                   push ebp
// 0077a8d6  8b6810               mov ebp, dword ptr [eax + 0x10]
// 0077a8d9  0fb65d14             movzx ebx, byte ptr [ebp + 0x14]
// 0077a8dd  56                   push esi
// 0077a8de  57                   push edi
// 0077a8df  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0077a8e3  8b37                 mov esi, dword ptr [edi]
// 0077a8e5  83f303               xor ebx, 3
// 0077a8e8  85f6                 test esi, esi
// 0077a8ea  7469                 je 0x77a955
// 0077a8ec  8d642400             lea esp, [esp]
// 0077a8f0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0077a8f4  8bc8                 mov ecx, eax
// 0077a8f6  48                   dec eax
// 0077a8f7  8944241c             mov dword ptr [esp + 0x1c], eax
// 0077a8fb  85c9                 test ecx, ecx
// 0077a8fd  7656                 jbe 0x77a955
// 0077a8ff  807e0408             cmp byte ptr [esi + 4], 8
// 0077a903  7513                 jne 0x77a918
// 0077a905  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077a909  6afd                 push -3
// 0077a90b  8d5668               lea edx, [esi + 0x68]
// 0077a90e  52                   push edx
// 0077a90f  50                   push eax
// 0077a910  e8bbffffff           call 0x77a8d0
// 0077a915  83c40c               add esp, 0xc
// 0077a918  8a4605               mov al, byte ptr [esi + 5]
// 0077a91b  0fb6c8               movzx ecx, al
// 0077a91e  83f103               xor ecx, 3
// 0077a921  85cb                 test ebx, ecx
// 0077a923  7411                 je 0x77a936
// 0077a925  8a5514               mov dl, byte ptr [ebp + 0x14]
// 0077a928  80e203               and dl, 3
// 0077a92b  24f8                 and al, 0xf8
// 0077a92d  0ad0                 or dl, al
// 0077a92f  885605               mov byte ptr [esi + 5], dl
// 0077a932  8bfe                 mov edi, esi
// 0077a934  eb19                 jmp 0x77a94f
// 0077a936  8b06                 mov eax, dword ptr [esi]
// 0077a938  8907                 mov dword ptr [edi], eax
// 0077a93a  3b751c               cmp esi, dword ptr [ebp + 0x1c]
// 0077a93d  7505                 jne 0x77a944
// 0077a93f  8b0e                 mov ecx, dword ptr [esi]
// 0077a941  894d1c               mov dword ptr [ebp + 0x1c], ecx
// 0077a944  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0077a948  8bc6                 mov eax, esi
// 0077a94a  e8e1feffff           call 0x77a830
// 0077a94f  8b37                 mov esi, dword ptr [edi]
// 0077a951  85f6                 test esi, esi
// 0077a953  759b                 jne 0x77a8f0
// 0077a955  8bc7                 mov eax, edi
// 0077a957  5f                   pop edi
// 0077a958  5e                   pop esi
// 0077a959  5d                   pop ebp
// 0077a95a  5b                   pop ebx
// 0077a95b  c3                   ret 
// library lua-5.1.4/lgc.c (function _sweeplist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
