// from server: 100% by auto
// roc 2008-06 0052e3f0  unit: seg_00520000  size: 533 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052e3f0
//
// 0052e3f0  83ec08               sub esp, 8
// 0052e3f3  55                   push ebp
// 0052e3f4  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052e3f8  56                   push esi
// 0052e3f9  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052e3fd  8b4668               mov eax, dword ptr [esi + 0x68]
// 0052e400  a801                 test al, 1
// 0052e402  7527                 jne 0x52e42b
// 0052e404  6804c58200           push 0x82c504
// 0052e409  56                   push esi
// 0052e40a  e8a1b5ffff           call 0x5299b0
// 0052e40f  83c408               add esp, 8
// 0052e412  8a8626010000         mov al, byte ptr [esi + 0x126]
// 0052e418  57                   push edi
// 0052e419  3c03                 cmp al, 3
// 0052e41b  0f8582000000         jne 0x52e4a3
// 0052e421  bf01000000           mov edi, 1
// 0052e426  e983000000           jmp 0x52e4ae
// 0052e42b  a804                 test al, 4
// 0052e42d  741f                 je 0x52e44e
// 0052e42f  68ecc48200           push 0x82c4ec
// 0052e434  56                   push esi
// 0052e435  e816b6ffff           call 0x529a50
// 0052e43a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052e43e  50                   push eax
// 0052e43f  56                   push esi
// 0052e440  e89beaffff           call 0x52cee0
// 0052e445  83c410               add esp, 0x10
// 0052e448  5e                   pop esi
// 0052e449  5d                   pop ebp
// 0052e44a  83c408               add esp, 8
// 0052e44d  c3                   ret 
// 0052e44e  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 0052e455  7523                 jne 0x52e47a
// 0052e457  a802                 test al, 2
// 0052e459  751f                 jne 0x52e47a
// 0052e45b  68d0c48200           push 0x82c4d0
// 0052e460  56                   push esi
// 0052e461  e8eab5ffff           call 0x529a50
// 0052e466  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0052e46a  51                   push ecx
// 0052e46b  56                   push esi
// 0052e46c  e86feaffff           call 0x52cee0
// 0052e471  83c410               add esp, 0x10
// 0052e474  5e                   pop esi
// 0052e475  5d                   pop ebp
// 0052e476  83c408               add esp, 8
// 0052e479  c3                   ret 
// 0052e47a  85ed                 test ebp, ebp
// 0052e47c  7494                 je 0x52e412
// 0052e47e  f6450820             test byte ptr [ebp + 8], 0x20
// 0052e482  748e                 je 0x52e412
// 0052e484  68b8c48200           push 0x82c4b8
// 0052e489  56                   push esi
// 0052e48a  e8c1b5ffff           call 0x529a50
// 0052e48f  8b542424             mov edx, dword ptr [esp + 0x24]
// 0052e493  52                   push edx
// 0052e494  56                   push esi
// 0052e495  e846eaffff           call 0x52cee0
// 0052e49a  83c410               add esp, 0x10
// 0052e49d  5e                   pop esi
// 0052e49e  5d                   pop ebp
// 0052e49f  83c408               add esp, 8
// 0052e4a2  c3                   ret 
// 0052e4a3  0fb6f8               movzx edi, al
// 0052e4a6  83e702               and edi, 2
// 0052e4a9  83cf01               or edi, 1
// 0052e4ac  03ff                 add edi, edi
// 0052e4ae  53                   push ebx
// 0052e4af  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0052e4b3  3bdf                 cmp ebx, edi
// 0052e4b5  741d                 je 0x52e4d4
// 0052e4b7  689cc48200           push 0x82c49c
// 0052e4bc  56                   push esi
// 0052e4bd  e88eb5ffff           call 0x529a50
// 0052e4c2  53                   push ebx
// 0052e4c3  56                   push esi
// 0052e4c4  e817eaffff           call 0x52cee0
// 0052e4c9  83c410               add esp, 0x10
// 0052e4cc  5b                   pop ebx
// 0052e4cd  5f                   pop edi
// 0052e4ce  5e                   pop esi
// 0052e4cf  5d                   pop ebp
// 0052e4d0  83c408               add esp, 8
// 0052e4d3  c3                   ret 
// 0052e4d4  57                   push edi
// 0052e4d5  8d442414             lea eax, [esp + 0x14]
// 0052e4d9  50                   push eax
// 0052e4da  56                   push esi
// 0052e4db  e8d065ffff           call 0x524ab0
// 0052e4e0  57                   push edi
// 0052e4e1  8d4c2420             lea ecx, [esp + 0x20]
// 0052e4e5  51                   push ecx
// 0052e4e6  56                   push esi
// 0052e4e7  e894f8feff           call 0x51dd80
// 0052e4ec  6a00                 push 0
// 0052e4ee  56                   push esi
// 0052e4ef  e8ece9ffff           call 0x52cee0
// 0052e4f4  83c420               add esp, 0x20
// 0052e4f7  85c0                 test eax, eax
// 0052e4f9  0f85fe000000         jne 0x52e5fd
// 0052e4ff  8a8626010000         mov al, byte ptr [esi + 0x126]
// 0052e505  3c03                 cmp al, 3
// 0052e507  7568                 jne 0x52e571
// 0052e509  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 0052e50d  888e38010000         mov byte ptr [esi + 0x138], cl
// 0052e513  0fb74514             movzx eax, word ptr [ebp + 0x14]
// 0052e517  6685c0               test ax, ax
// 0052e51a  0f84cc000000         je 0x52e5ec
// 0052e520  660fb6d1             movzx dx, cl
// 0052e524  663bd0               cmp dx, ax
// 0052e527  7616                 jbe 0x52e53f
// 0052e529  6878c48200           push 0x82c478
// 0052e52e  56                   push esi
// 0052e52f  e81cb5ffff           call 0x529a50
// 0052e534  83c408               add esp, 8
// 0052e537  5b                   pop ebx
// 0052e538  5f                   pop edi
// 0052e539  5e                   pop esi
// 0052e53a  5d                   pop ebp
// 0052e53b  83c408               add esp, 8
// 0052e53e  c3                   ret 
// 0052e53f  0fb6c1               movzx eax, cl
// 0052e542  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0052e548  8d0440               lea eax, [eax + eax*2]
// 0052e54b  0fb61408             movzx edx, byte ptr [eax + ecx]
// 0052e54f  03c1                 add eax, ecx
// 0052e551  6689963a010000       mov word ptr [esi + 0x13a], dx
// 0052e558  660fb64801           movzx cx, byte ptr [eax + 1]
// 0052e55d  66898e3c010000       mov word ptr [esi + 0x13c], cx
// 0052e564  0fb65002             movzx edx, byte ptr [eax + 2]
// 0052e568  6689963e010000       mov word ptr [esi + 0x13e], dx
// 0052e56f  eb7b                 jmp 0x52e5ec
// 0052e571  b900010000           mov ecx, 0x100
// 0052e576  a802                 test al, 2
// 0052e578  752a                 jne 0x52e5a4
// 0052e57a  660fb6442410         movzx ax, byte ptr [esp + 0x10]
// 0052e580  660fb6542411         movzx dx, byte ptr [esp + 0x11]
// 0052e586  660fafc1             imul ax, cx
// 0052e58a  6603c2               add ax, dx
// 0052e58d  66898640010000       mov word ptr [esi + 0x140], ax
// 0052e594  6689863c010000       mov word ptr [esi + 0x13c], ax
// 0052e59b  6689863a010000       mov word ptr [esi + 0x13a], ax
// 0052e5a2  eb41                 jmp 0x52e5e5
// 0052e5a4  0fb6442410           movzx eax, byte ptr [esp + 0x10]
// 0052e5a9  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 0052e5ae  660fafc1             imul ax, cx
// 0052e5b2  6603c2               add ax, dx
// 0052e5b5  0fb6542413           movzx edx, byte ptr [esp + 0x13]
// 0052e5ba  6689863a010000       mov word ptr [esi + 0x13a], ax
// 0052e5c1  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 0052e5c6  660fafc1             imul ax, cx
// 0052e5ca  6603c2               add ax, dx
// 0052e5cd  0fb6542415           movzx edx, byte ptr [esp + 0x15]
// 0052e5d2  6689863c010000       mov word ptr [esi + 0x13c], ax
// 0052e5d9  0fb6442414           movzx eax, byte ptr [esp + 0x14]
// 0052e5de  660fafc1             imul ax, cx
// 0052e5e2  6603c2               add ax, dx
// 0052e5e5  6689863e010000       mov word ptr [esi + 0x13e], ax
// 0052e5ec  8d8638010000         lea eax, [esi + 0x138]
// 0052e5f2  50                   push eax
// 0052e5f3  55                   push ebp
// 0052e5f4  56                   push esi
// 0052e5f5  e876e1feff           call 0x51c770
// 0052e5fa  83c40c               add esp, 0xc
// 0052e5fd  5b                   pop ebx
// 0052e5fe  5f                   pop edi
// 0052e5ff  5e                   pop esi
// 0052e600  5d                   pop ebp
// 0052e601  83c408               add esp, 8
// 0052e604  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
