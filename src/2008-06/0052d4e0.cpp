// roc 2008-06 0052d4e0  unit: seg_00520000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052d4e0
//
// 0052d4e0  51                   push ecx
// 0052d4e1  53                   push ebx
// 0052d4e2  56                   push esi
// 0052d4e3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052d4e7  8b4668               mov eax, dword ptr [esi + 0x68]
// 0052d4ea  33db                 xor ebx, ebx
// 0052d4ec  885c240b             mov byte ptr [esp + 0xb], bl
// 0052d4f0  885c240a             mov byte ptr [esp + 0xa], bl
// 0052d4f4  885c2409             mov byte ptr [esp + 9], bl
// 0052d4f8  885c2408             mov byte ptr [esp + 8], bl
// 0052d4fc  a801                 test al, 1
// 0052d4fe  750d                 jne 0x52d50d
// 0052d500  68e8bf8200           push 0x82bfe8
// 0052d505  56                   push esi
// 0052d506  e8a5c4ffff           call 0x5299b0
// 0052d50b  eb30                 jmp 0x52d53d
// 0052d50d  a804                 test al, 4
// 0052d50f  741d                 je 0x52d52e
// 0052d511  68d0bf8200           push 0x82bfd0
// 0052d516  56                   push esi
// 0052d517  e834c5ffff           call 0x529a50
// 0052d51c  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052d520  50                   push eax
// 0052d521  56                   push esi
// 0052d522  e8b9f9ffff           call 0x52cee0
// 0052d527  83c410               add esp, 0x10
// 0052d52a  5e                   pop esi
// 0052d52b  5b                   pop ebx
// 0052d52c  59                   pop ecx
// 0052d52d  c3                   ret 
// 0052d52e  a802                 test al, 2
// 0052d530  740e                 je 0x52d540
// 0052d532  68b8bf8200           push 0x82bfb8
// 0052d537  56                   push esi
// 0052d538  e813c5ffff           call 0x529a50
// 0052d53d  83c408               add esp, 8
// 0052d540  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052d544  3bc3                 cmp eax, ebx
// 0052d546  7423                 je 0x52d56b
// 0052d548  f6400802             test byte ptr [eax + 8], 2
// 0052d54c  741d                 je 0x52d56b
// 0052d54e  68a0bf8200           push 0x82bfa0
// 0052d553  56                   push esi
// 0052d554  e8f7c4ffff           call 0x529a50
// 0052d559  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052d55d  51                   push ecx
// 0052d55e  56                   push esi
// 0052d55f  e87cf9ffff           call 0x52cee0
// 0052d564  83c410               add esp, 0x10
// 0052d567  5e                   pop esi
// 0052d568  5b                   pop ebx
// 0052d569  59                   pop ecx
// 0052d56a  c3                   ret 
// 0052d56b  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 0052d572  57                   push edi
// 0052d573  bf03000000           mov edi, 3
// 0052d578  7407                 je 0x52d581
// 0052d57a  0fb6be2a010000       movzx edi, byte ptr [esi + 0x12a]
// 0052d581  55                   push ebp
// 0052d582  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0052d586  3bef                 cmp ebp, edi
// 0052d588  0f85b7000000         jne 0x52d645
// 0052d58e  83fd04               cmp ebp, 4
// 0052d591  0f87ae000000         ja 0x52d645
// 0052d597  57                   push edi
// 0052d598  8d542414             lea edx, [esp + 0x14]
// 0052d59c  52                   push edx
// 0052d59d  56                   push esi
// 0052d59e  e80d75ffff           call 0x524ab0
// 0052d5a3  57                   push edi
// 0052d5a4  8d442420             lea eax, [esp + 0x20]
// 0052d5a8  50                   push eax
// 0052d5a9  56                   push esi
// 0052d5aa  e8d107ffff           call 0x51dd80
// 0052d5af  53                   push ebx
// 0052d5b0  56                   push esi
// 0052d5b1  e82af9ffff           call 0x52cee0
// 0052d5b6  83c420               add esp, 0x20
// 0052d5b9  85c0                 test eax, eax
// 0052d5bb  0f8599000000         jne 0x52d65a
// 0052d5c1  f6862601000002       test byte ptr [esi + 0x126], 2
// 0052d5c8  8d867c010000         lea eax, [esi + 0x17c]
// 0052d5ce  743d                 je 0x52d60d
// 0052d5d0  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 0052d5d5  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 0052d5da  88967d010000         mov byte ptr [esi + 0x17d], dl
// 0052d5e0  0fb6542413           movzx edx, byte ptr [esp + 0x13]
// 0052d5e5  889680010000         mov byte ptr [esi + 0x180], dl
// 0052d5eb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0052d5ef  50                   push eax
// 0052d5f0  8808                 mov byte ptr [eax], cl
// 0052d5f2  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 0052d5f7  52                   push edx
// 0052d5f8  56                   push esi
// 0052d5f9  888e7e010000         mov byte ptr [esi + 0x17e], cl
// 0052d5ff  e87cfdfeff           call 0x51d380
// 0052d604  83c40c               add esp, 0xc
// 0052d607  5d                   pop ebp
// 0052d608  5f                   pop edi
// 0052d609  5e                   pop esi
// 0052d60a  5b                   pop ebx
// 0052d60b  59                   pop ecx
// 0052d60c  c3                   ret 
// 0052d60d  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 0052d611  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0052d615  50                   push eax
// 0052d616  888e7f010000         mov byte ptr [esi + 0x17f], cl
// 0052d61c  8808                 mov byte ptr [eax], cl
// 0052d61e  888e7d010000         mov byte ptr [esi + 0x17d], cl
// 0052d624  888e7e010000         mov byte ptr [esi + 0x17e], cl
// 0052d62a  0fb64c2415           movzx ecx, byte ptr [esp + 0x15]
// 0052d62f  52                   push edx
// 0052d630  56                   push esi
// 0052d631  888e80010000         mov byte ptr [esi + 0x180], cl
// 0052d637  e844fdfeff           call 0x51d380
// 0052d63c  83c40c               add esp, 0xc
// 0052d63f  5d                   pop ebp
// 0052d640  5f                   pop edi
// 0052d641  5e                   pop esi
// 0052d642  5b                   pop ebx
// 0052d643  59                   pop ecx
// 0052d644  c3                   ret 
// 0052d645  6884bf8200           push 0x82bf84
// 0052d64a  56                   push esi
// 0052d64b  e800c4ffff           call 0x529a50
// 0052d650  55                   push ebp
// 0052d651  56                   push esi
// 0052d652  e889f8ffff           call 0x52cee0
// 0052d657  83c410               add esp, 0x10
// 0052d65a  5d                   pop ebp
// 0052d65b  5f                   pop edi
// 0052d65c  5e                   pop esi
// 0052d65d  5b                   pop ebx
// 0052d65e  59                   pop ecx
// 0052d65f  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_handle_sBIT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
