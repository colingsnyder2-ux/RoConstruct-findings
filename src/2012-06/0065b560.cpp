// from server: 100% by auto
// roc 2012-06 0065b560  unit: seg_00650000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065b560
//
// 0065b560  51                   push ecx
// 0065b561  53                   push ebx
// 0065b562  56                   push esi
// 0065b563  8b742410             mov esi, dword ptr [esp + 0x10]
// 0065b567  8b4668               mov eax, dword ptr [esi + 0x68]
// 0065b56a  33db                 xor ebx, ebx
// 0065b56c  885c240b             mov byte ptr [esp + 0xb], bl
// 0065b570  885c240a             mov byte ptr [esp + 0xa], bl
// 0065b574  885c2409             mov byte ptr [esp + 9], bl
// 0065b578  885c2408             mov byte ptr [esp + 8], bl
// 0065b57c  a801                 test al, 1
// 0065b57e  750d                 jne 0x65b58d
// 0065b580  68fca4b800           push 0xb8a4fc
// 0065b585  56                   push esi
// 0065b586  e8252cffff           call 0x64e1b0
// 0065b58b  eb30                 jmp 0x65b5bd
// 0065b58d  a804                 test al, 4
// 0065b58f  741d                 je 0x65b5ae
// 0065b591  68e4a4b800           push 0xb8a4e4
// 0065b596  56                   push esi
// 0065b597  e8c42cffff           call 0x64e260
// 0065b59c  8b442420             mov eax, dword ptr [esp + 0x20]
// 0065b5a0  50                   push eax
// 0065b5a1  56                   push esi
// 0065b5a2  e8a9f9ffff           call 0x65af50
// 0065b5a7  83c410               add esp, 0x10
// 0065b5aa  5e                   pop esi
// 0065b5ab  5b                   pop ebx
// 0065b5ac  59                   pop ecx
// 0065b5ad  c3                   ret 
// 0065b5ae  a802                 test al, 2
// 0065b5b0  740e                 je 0x65b5c0
// 0065b5b2  68cca4b800           push 0xb8a4cc
// 0065b5b7  56                   push esi
// 0065b5b8  e8a32cffff           call 0x64e260
// 0065b5bd  83c408               add esp, 8
// 0065b5c0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0065b5c4  3bc3                 cmp eax, ebx
// 0065b5c6  7423                 je 0x65b5eb
// 0065b5c8  f6400802             test byte ptr [eax + 8], 2
// 0065b5cc  741d                 je 0x65b5eb
// 0065b5ce  68b4a4b800           push 0xb8a4b4
// 0065b5d3  56                   push esi
// 0065b5d4  e8872cffff           call 0x64e260
// 0065b5d9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0065b5dd  51                   push ecx
// 0065b5de  56                   push esi
// 0065b5df  e86cf9ffff           call 0x65af50
// 0065b5e4  83c410               add esp, 0x10
// 0065b5e7  5e                   pop esi
// 0065b5e8  5b                   pop ebx
// 0065b5e9  59                   pop ecx
// 0065b5ea  c3                   ret 
// 0065b5eb  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 0065b5f2  57                   push edi
// 0065b5f3  bf03000000           mov edi, 3
// 0065b5f8  7407                 je 0x65b601
// 0065b5fa  0fb6be2a010000       movzx edi, byte ptr [esi + 0x12a]
// 0065b601  55                   push ebp
// 0065b602  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0065b606  3bef                 cmp ebp, edi
// 0065b608  0f85b7000000         jne 0x65b6c5
// 0065b60e  83fd04               cmp ebp, 4
// 0065b611  0f87ae000000         ja 0x65b6c5
// 0065b617  57                   push edi
// 0065b618  8d542414             lea edx, [esp + 0x14]
// 0065b61c  52                   push edx
// 0065b61d  56                   push esi
// 0065b61e  e8cd27ffff           call 0x64ddf0
// 0065b623  57                   push edi
// 0065b624  8d442420             lea eax, [esp + 0x20]
// 0065b628  50                   push eax
// 0065b629  56                   push esi
// 0065b62a  e86128feff           call 0x63de90
// 0065b62f  53                   push ebx
// 0065b630  56                   push esi
// 0065b631  e81af9ffff           call 0x65af50
// 0065b636  83c420               add esp, 0x20
// 0065b639  85c0                 test eax, eax
// 0065b63b  0f8599000000         jne 0x65b6da
// 0065b641  f6862601000002       test byte ptr [esi + 0x126], 2
// 0065b648  8d867c010000         lea eax, [esi + 0x17c]
// 0065b64e  743d                 je 0x65b68d
// 0065b650  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 0065b655  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 0065b65a  88967d010000         mov byte ptr [esi + 0x17d], dl
// 0065b660  0fb6542413           movzx edx, byte ptr [esp + 0x13]
// 0065b665  889680010000         mov byte ptr [esi + 0x180], dl
// 0065b66b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0065b66f  50                   push eax
// 0065b670  8808                 mov byte ptr [eax], cl
// 0065b672  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 0065b677  52                   push edx
// 0065b678  56                   push esi
// 0065b679  888e7e010000         mov byte ptr [esi + 0x17e], cl
// 0065b67f  e83cb8feff           call 0x646ec0
// 0065b684  83c40c               add esp, 0xc
// 0065b687  5d                   pop ebp
// 0065b688  5f                   pop edi
// 0065b689  5e                   pop esi
// 0065b68a  5b                   pop ebx
// 0065b68b  59                   pop ecx
// 0065b68c  c3                   ret 
// 0065b68d  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 0065b691  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0065b695  50                   push eax
// 0065b696  888e7f010000         mov byte ptr [esi + 0x17f], cl
// 0065b69c  8808                 mov byte ptr [eax], cl
// 0065b69e  888e7d010000         mov byte ptr [esi + 0x17d], cl
// 0065b6a4  888e7e010000         mov byte ptr [esi + 0x17e], cl
// 0065b6aa  0fb64c2415           movzx ecx, byte ptr [esp + 0x15]
// 0065b6af  52                   push edx
// 0065b6b0  56                   push esi
// 0065b6b1  888e80010000         mov byte ptr [esi + 0x180], cl
// 0065b6b7  e804b8feff           call 0x646ec0
// 0065b6bc  83c40c               add esp, 0xc
// 0065b6bf  5d                   pop ebp
// 0065b6c0  5f                   pop edi
// 0065b6c1  5e                   pop esi
// 0065b6c2  5b                   pop ebx
// 0065b6c3  59                   pop ecx
// 0065b6c4  c3                   ret 
// 0065b6c5  6898a4b800           push 0xb8a498
// 0065b6ca  56                   push esi
// 0065b6cb  e8902bffff           call 0x64e260
// 0065b6d0  55                   push ebp
// 0065b6d1  56                   push esi
// 0065b6d2  e879f8ffff           call 0x65af50
// 0065b6d7  83c410               add esp, 0x10
// 0065b6da  5d                   pop ebp
// 0065b6db  5f                   pop edi
// 0065b6dc  5e                   pop esi
// 0065b6dd  5b                   pop ebx
// 0065b6de  59                   pop ecx
// 0065b6df  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_handle_sBIT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
