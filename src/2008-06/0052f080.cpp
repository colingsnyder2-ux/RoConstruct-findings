// from server: 100% by auto
// roc 2008-06 0052f080  unit: seg_00520000  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052f080
//
// 0052f080  53                   push ebx
// 0052f081  56                   push esi
// 0052f082  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052f086  f6466801             test byte ptr [esi + 0x68], 1
// 0052f08a  57                   push edi
// 0052f08b  750e                 jne 0x52f09b
// 0052f08d  68b8c98200           push 0x82c9b8
// 0052f092  56                   push esi
// 0052f093  e818a9ffff           call 0x5299b0
// 0052f098  83c408               add esp, 8
// 0052f09b  8b4668               mov eax, dword ptr [esi + 0x68]
// 0052f09e  a804                 test al, 4
// 0052f0a0  7406                 je 0x52f0a8
// 0052f0a2  83c808               or eax, 8
// 0052f0a5  894668               mov dword ptr [esi + 0x68], eax
// 0052f0a8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0052f0ac  8d4701               lea eax, [edi + 1]
// 0052f0af  50                   push eax
// 0052f0b0  56                   push esi
// 0052f0b1  e87ab4ffff           call 0x52a530
// 0052f0b6  8bd8                 mov ebx, eax
// 0052f0b8  83c408               add esp, 8
// 0052f0bb  85db                 test ebx, ebx
// 0052f0bd  7512                 jne 0x52f0d1
// 0052f0bf  6890c98200           push 0x82c990
// 0052f0c4  56                   push esi
// 0052f0c5  e886a9ffff           call 0x529a50
// 0052f0ca  83c408               add esp, 8
// 0052f0cd  5f                   pop edi
// 0052f0ce  5e                   pop esi
// 0052f0cf  5b                   pop ebx
// 0052f0d0  c3                   ret 
// 0052f0d1  57                   push edi
// 0052f0d2  53                   push ebx
// 0052f0d3  56                   push esi
// 0052f0d4  e8d759ffff           call 0x524ab0
// 0052f0d9  57                   push edi
// 0052f0da  53                   push ebx
// 0052f0db  56                   push esi
// 0052f0dc  e89fecfeff           call 0x51dd80
// 0052f0e1  6a00                 push 0
// 0052f0e3  56                   push esi
// 0052f0e4  e8f7ddffff           call 0x52cee0
// 0052f0e9  83c420               add esp, 0x20
// 0052f0ec  85c0                 test eax, eax
// 0052f0ee  740e                 je 0x52f0fe
// 0052f0f0  53                   push ebx
// 0052f0f1  56                   push esi
// 0052f0f2  e809b4ffff           call 0x52a500
// 0052f0f7  83c408               add esp, 8
// 0052f0fa  5f                   pop edi
// 0052f0fb  5e                   pop esi
// 0052f0fc  5b                   pop ebx
// 0052f0fd  c3                   ret 
// 0052f0fe  8d043b               lea eax, [ebx + edi]
// 0052f101  c60000               mov byte ptr [eax], 0
// 0052f104  803b00               cmp byte ptr [ebx], 0
// 0052f107  8bfb                 mov edi, ebx
// 0052f109  740b                 je 0x52f116
// 0052f10b  eb03                 jmp 0x52f110
// 0052f10d  8d4900               lea ecx, [ecx]
// 0052f110  47                   inc edi
// 0052f111  803f00               cmp byte ptr [edi], 0
// 0052f114  75fa                 jne 0x52f110
// 0052f116  55                   push ebp
// 0052f117  3bf8                 cmp edi, eax
// 0052f119  7513                 jne 0x52f12e
// 0052f11b  6878c98200           push 0x82c978
// 0052f120  56                   push esi
// 0052f121  83cdff               or ebp, 0xffffffff
// 0052f124  e827a9ffff           call 0x529a50
// 0052f129  83c408               add esp, 8
// 0052f12c  eb1a                 jmp 0x52f148
// 0052f12e  0fbe6f01             movsx ebp, byte ptr [edi + 1]
// 0052f132  47                   inc edi
// 0052f133  85ed                 test ebp, ebp
// 0052f135  7410                 je 0x52f147
// 0052f137  6850c98200           push 0x82c950
// 0052f13c  56                   push esi
// 0052f13d  e80ea9ffff           call 0x529a50
// 0052f142  83c408               add esp, 8
// 0052f145  33ed                 xor ebp, ebp
// 0052f147  47                   inc edi
// 0052f148  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0052f14c  8d4c241c             lea ecx, [esp + 0x1c]
// 0052f150  51                   push ecx
// 0052f151  2bfb                 sub edi, ebx
// 0052f153  57                   push edi
// 0052f154  52                   push edx
// 0052f155  53                   push ebx
// 0052f156  55                   push ebp
// 0052f157  56                   push esi
// 0052f158  897c242c             mov dword ptr [esp + 0x2c], edi
// 0052f15c  e8efcdffff           call 0x52bf50
// 0052f161  6a10                 push 0x10
// 0052f163  56                   push esi
// 0052f164  8bd8                 mov ebx, eax
// 0052f166  e8c5b3ffff           call 0x52a530
// 0052f16b  8bf8                 mov edi, eax
// 0052f16d  83c420               add esp, 0x20
// 0052f170  85ff                 test edi, edi
// 0052f172  751a                 jne 0x52f18e
// 0052f174  6824c98200           push 0x82c924
// 0052f179  56                   push esi
// 0052f17a  e8d1a8ffff           call 0x529a50
// 0052f17f  53                   push ebx
// 0052f180  56                   push esi
// 0052f181  e87ab3ffff           call 0x52a500
// 0052f186  83c410               add esp, 0x10
// 0052f189  5d                   pop ebp
// 0052f18a  5f                   pop edi
// 0052f18b  5e                   pop esi
// 0052f18c  5b                   pop ebx
// 0052f18d  c3                   ret 
// 0052f18e  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052f192  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052f196  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052f19a  6a01                 push 1
// 0052f19c  57                   push edi
// 0052f19d  52                   push edx
// 0052f19e  03c3                 add eax, ebx
// 0052f1a0  56                   push esi
// 0052f1a1  892f                 mov dword ptr [edi], ebp
// 0052f1a3  895f04               mov dword ptr [edi + 4], ebx
// 0052f1a6  894708               mov dword ptr [edi + 8], eax
// 0052f1a9  894f0c               mov dword ptr [edi + 0xc], ecx
// 0052f1ac  e8dfe3feff           call 0x51d590
// 0052f1b1  57                   push edi
// 0052f1b2  56                   push esi
// 0052f1b3  8be8                 mov ebp, eax
// 0052f1b5  e846b3ffff           call 0x52a500
// 0052f1ba  53                   push ebx
// 0052f1bb  56                   push esi
// 0052f1bc  e83fb3ffff           call 0x52a500
// 0052f1c1  83c420               add esp, 0x20
// 0052f1c4  85ed                 test ebp, ebp
// 0052f1c6  740e                 je 0x52f1d6
// 0052f1c8  68f8c88200           push 0x82c8f8
// 0052f1cd  56                   push esi
// 0052f1ce  e8dda7ffff           call 0x5299b0
// 0052f1d3  83c408               add esp, 8
// 0052f1d6  5d                   pop ebp
// 0052f1d7  5f                   pop edi
// 0052f1d8  5e                   pop esi
// 0052f1d9  5b                   pop ebx
// 0052f1da  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_zTXt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
