// from server: 100% by auto
// roc 2009-06 004a76a0  unit: G3D::TextureManager::TextureArgs  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a76a0
//
// 004a76a0  6aff                 push -1
// 004a76a2  68e6798500           push 0x8579e6
// 004a76a7  64a100000000         mov eax, dword ptr fs:[0]
// 004a76ad  50                   push eax
// 004a76ae  64892500000000       mov dword ptr fs:[0], esp
// 004a76b5  51                   push ecx
// 004a76b6  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a76ba  83781810             cmp dword ptr [eax + 0x18], 0x10
// 004a76be  53                   push ebx
// 004a76bf  55                   push ebp
// 004a76c0  56                   push esi
// 004a76c1  57                   push edi
// 004a76c2  8bf9                 mov edi, ecx
// 004a76c4  8b4814               mov ecx, dword ptr [eax + 0x14]
// 004a76c7  7205                 jb 0x4a76ce
// 004a76c9  8b4004               mov eax, dword ptr [eax + 4]
// 004a76cc  eb03                 jmp 0x4a76d1
// 004a76ce  83c004               add eax, 4
// 004a76d1  51                   push ecx
// 004a76d2  50                   push eax
// 004a76d3  e8482c0d00           call 0x57a320
// 004a76d8  33d2                 xor edx, edx
// 004a76da  8be8                 mov ebp, eax
// 004a76dc  f7770c               div dword ptr [edi + 0xc]
// 004a76df  8b4708               mov eax, dword ptr [edi + 8]
// 004a76e2  83c408               add esp, 8
// 004a76e5  8bda                 mov ebx, edx
// 004a76e7  8b3498               mov esi, dword ptr [eax + ebx*4]
// 004a76ea  85f6                 test esi, esi
// 004a76ec  7548                 jne 0x4a7736
// 004a76ee  6a28                 push 0x28
// 004a76f0  e84b3a0c00           call 0x56b140
// 004a76f5  8bf0                 mov esi, eax
// 004a76f7  83c404               add esp, 4
// 004a76fa  89742410             mov dword ptr [esp + 0x10], esi
// 004a76fe  33c0                 xor eax, eax
// 004a7700  8944241c             mov dword ptr [esp + 0x1c], eax
// 004a7704  3bf0                 cmp esi, eax
// 004a7706  0f840f010000         je 0x4a781b
// 004a770c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004a7710  0fb611               movzx edx, byte ptr [ecx]
// 004a7713  50                   push eax
// 004a7714  8b442428             mov eax, dword ptr [esp + 0x28]
// 004a7718  55                   push ebp
// 004a7719  52                   push edx
// 004a771a  83ec1c               sub esp, 0x1c
// 004a771d  8bcc                 mov ecx, esp
// 004a771f  89642450             mov dword ptr [esp + 0x50], esp
// 004a7723  50                   push eax
// 004a7724  ff15b8e48900         call dword ptr [0x89e4b8]
// 004a772a  8bce                 mov ecx, esi
// 004a772c  e82ff7ffff           call 0x4a6e60
// 004a7731  e9e5000000           jmp 0x4a781b
// 004a7736  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004a773e  b301                 mov bl, 1
// 004a7740  84db                 test bl, bl
// 004a7742  7408                 je 0x4a774c
// 004a7744  3b2e                 cmp ebp, dword ptr [esi]
// 004a7746  7504                 jne 0x4a774c
// 004a7748  b301                 mov bl, 1
// 004a774a  eb02                 jmp 0x4a774e
// 004a774c  32db                 xor bl, bl
// 004a774e  3b2e                 cmp ebp, dword ptr [esi]
// 004a7750  751a                 jne 0x4a776c
// 004a7752  8b542424             mov edx, dword ptr [esp + 0x24]
// 004a7756  52                   push edx
// 004a7757  8d4604               lea eax, [esi + 4]
// 004a775a  50                   push eax
// 004a775b  ff1544e48900         call dword ptr [0x89e444]
// 004a7761  83c408               add esp, 8
// 004a7764  84c0                 test al, al
// 004a7766  0f858f000000         jne 0x4a77fb
// 004a776c  8b7624               mov esi, dword ptr [esi + 0x24]
// 004a776f  ff442410             inc dword ptr [esp + 0x10]
// 004a7773  85f6                 test esi, esi
// 004a7775  75c9                 jne 0x4a7740
// 004a7777  33c0                 xor eax, eax
// 004a7779  84db                 test bl, bl
// 004a777b  0f94c0               sete al
// 004a777e  33c9                 xor ecx, ecx
// 004a7780  837c241005           cmp dword ptr [esp + 0x10], 5
// 004a7785  0f9fc1               setg cl
// 004a7788  85c1                 test ecx, eax
// 004a778a  741d                 je 0x4a77a9
// 004a778c  8b4704               mov eax, dword ptr [edi + 4]
// 004a778f  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 004a7792  8d1480               lea edx, [eax + eax*4]
// 004a7795  03d2                 add edx, edx
// 004a7797  03d2                 add edx, edx
// 004a7799  3bca                 cmp ecx, edx
// 004a779b  7d0c                 jge 0x4a77a9
// 004a779d  8d440901             lea eax, [ecx + ecx + 1]
// 004a77a1  50                   push eax
// 004a77a2  8bcf                 mov ecx, edi
// 004a77a4  e8c7f1ffff           call 0x4a6970
// 004a77a9  33d2                 xor edx, edx
// 004a77ab  8bc5                 mov eax, ebp
// 004a77ad  f7770c               div dword ptr [edi + 0xc]
// 004a77b0  6a28                 push 0x28
// 004a77b2  8bda                 mov ebx, edx
// 004a77b4  e887390c00           call 0x56b140
// 004a77b9  8bf0                 mov esi, eax
// 004a77bb  83c404               add esp, 4
// 004a77be  89742410             mov dword ptr [esp + 0x10], esi
// 004a77c2  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004a77ca  85f6                 test esi, esi
// 004a77cc  744b                 je 0x4a7819
// 004a77ce  8b4f08               mov ecx, dword ptr [edi + 8]
// 004a77d1  8b1499               mov edx, dword ptr [ecx + ebx*4]
// 004a77d4  8b442428             mov eax, dword ptr [esp + 0x28]
// 004a77d8  0fb608               movzx ecx, byte ptr [eax]
// 004a77db  52                   push edx
// 004a77dc  8b542428             mov edx, dword ptr [esp + 0x28]
// 004a77e0  55                   push ebp
// 004a77e1  51                   push ecx
// 004a77e2  83ec1c               sub esp, 0x1c
// 004a77e5  8bcc                 mov ecx, esp
// 004a77e7  89642450             mov dword ptr [esp + 0x50], esp
// 004a77eb  52                   push edx
// 004a77ec  ff15b8e48900         call dword ptr [0x89e4b8]
// 004a77f2  8bce                 mov ecx, esi
// 004a77f4  e867f6ffff           call 0x4a6e60
// 004a77f9  eb20                 jmp 0x4a781b
// 004a77fb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004a77ff  8a11                 mov dl, byte ptr [ecx]
// 004a7801  885620               mov byte ptr [esi + 0x20], dl
// 004a7804  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a7808  64890d00000000       mov dword ptr fs:[0], ecx
// 004a780f  5f                   pop edi
// 004a7810  5e                   pop esi
// 004a7811  5d                   pop ebp
// 004a7812  5b                   pop ebx
// 004a7813  83c410               add esp, 0x10
// 004a7816  c20800               ret 8
// 004a7819  33c0                 xor eax, eax
// 004a781b  8b4f08               mov ecx, dword ptr [edi + 8]
// 004a781e  890499               mov dword ptr [ecx + ebx*4], eax
// 004a7821  ff4704               inc dword ptr [edi + 4]
// 004a7824  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a7828  5f                   pop edi
// 004a7829  5e                   pop esi
// 004a782a  5d                   pop ebp
// 004a782b  64890d00000000       mov dword ptr fs:[0], ecx
// 004a7832  5b                   pop ebx
// 004a7833  83c410               add esp, 0x10
// 004a7836  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?set@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
