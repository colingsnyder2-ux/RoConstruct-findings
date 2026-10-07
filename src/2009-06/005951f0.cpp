// roc 2009-06 005951f0  unit: seg_00590000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005951f0
//
// 005951f0  51                   push ecx
// 005951f1  53                   push ebx
// 005951f2  56                   push esi
// 005951f3  8b742410             mov esi, dword ptr [esp + 0x10]
// 005951f7  8b4668               mov eax, dword ptr [esi + 0x68]
// 005951fa  33db                 xor ebx, ebx
// 005951fc  885c240b             mov byte ptr [esp + 0xb], bl
// 00595200  885c240a             mov byte ptr [esp + 0xa], bl
// 00595204  885c2409             mov byte ptr [esp + 9], bl
// 00595208  885c2408             mov byte ptr [esp + 8], bl
// 0059520c  a801                 test al, 1
// 0059520e  750d                 jne 0x59521d
// 00595210  68bc238d00           push 0x8d23bc
// 00595215  56                   push esi
// 00595216  e8458fffff           call 0x58e160
// 0059521b  eb30                 jmp 0x59524d
// 0059521d  a804                 test al, 4
// 0059521f  741d                 je 0x59523e
// 00595221  68a4238d00           push 0x8d23a4
// 00595226  56                   push esi
// 00595227  e8e48fffff           call 0x58e210
// 0059522c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00595230  50                   push eax
// 00595231  56                   push esi
// 00595232  e8a9f9ffff           call 0x594be0
// 00595237  83c410               add esp, 0x10
// 0059523a  5e                   pop esi
// 0059523b  5b                   pop ebx
// 0059523c  59                   pop ecx
// 0059523d  c3                   ret 
// 0059523e  a802                 test al, 2
// 00595240  740e                 je 0x595250
// 00595242  688c238d00           push 0x8d238c
// 00595247  56                   push esi
// 00595248  e8c38fffff           call 0x58e210
// 0059524d  83c408               add esp, 8
// 00595250  8b442414             mov eax, dword ptr [esp + 0x14]
// 00595254  3bc3                 cmp eax, ebx
// 00595256  7423                 je 0x59527b
// 00595258  f6400802             test byte ptr [eax + 8], 2
// 0059525c  741d                 je 0x59527b
// 0059525e  6874238d00           push 0x8d2374
// 00595263  56                   push esi
// 00595264  e8a78fffff           call 0x58e210
// 00595269  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059526d  51                   push ecx
// 0059526e  56                   push esi
// 0059526f  e86cf9ffff           call 0x594be0
// 00595274  83c410               add esp, 0x10
// 00595277  5e                   pop esi
// 00595278  5b                   pop ebx
// 00595279  59                   pop ecx
// 0059527a  c3                   ret 
// 0059527b  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 00595282  57                   push edi
// 00595283  bf03000000           mov edi, 3
// 00595288  7407                 je 0x595291
// 0059528a  0fb6be2a010000       movzx edi, byte ptr [esi + 0x12a]
// 00595291  55                   push ebp
// 00595292  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00595296  3bef                 cmp ebp, edi
// 00595298  0f85b7000000         jne 0x595355
// 0059529e  83fd04               cmp ebp, 4
// 005952a1  0f87ae000000         ja 0x595355
// 005952a7  57                   push edi
// 005952a8  8d542414             lea edx, [esp + 0x14]
// 005952ac  52                   push edx
// 005952ad  56                   push esi
// 005952ae  e84d3affff           call 0x588d00
// 005952b3  57                   push edi
// 005952b4  8d442420             lea eax, [esp + 0x20]
// 005952b8  50                   push eax
// 005952b9  56                   push esi
// 005952ba  e801c6feff           call 0x5818c0
// 005952bf  53                   push ebx
// 005952c0  56                   push esi
// 005952c1  e81af9ffff           call 0x594be0
// 005952c6  83c420               add esp, 0x20
// 005952c9  85c0                 test eax, eax
// 005952cb  0f8599000000         jne 0x59536a
// 005952d1  f6862601000002       test byte ptr [esi + 0x126], 2
// 005952d8  8d867c010000         lea eax, [esi + 0x17c]
// 005952de  743d                 je 0x59531d
// 005952e0  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 005952e5  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 005952ea  88967d010000         mov byte ptr [esi + 0x17d], dl
// 005952f0  0fb6542413           movzx edx, byte ptr [esp + 0x13]
// 005952f5  889680010000         mov byte ptr [esi + 0x180], dl
// 005952fb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005952ff  50                   push eax
// 00595300  8808                 mov byte ptr [eax], cl
// 00595302  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 00595307  52                   push edx
// 00595308  56                   push esi
// 00595309  888e7e010000         mov byte ptr [esi + 0x17e], cl
// 0059530f  e8fcbafeff           call 0x580e10
// 00595314  83c40c               add esp, 0xc
// 00595317  5d                   pop ebp
// 00595318  5f                   pop edi
// 00595319  5e                   pop esi
// 0059531a  5b                   pop ebx
// 0059531b  59                   pop ecx
// 0059531c  c3                   ret 
// 0059531d  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 00595321  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00595325  50                   push eax
// 00595326  888e7f010000         mov byte ptr [esi + 0x17f], cl
// 0059532c  8808                 mov byte ptr [eax], cl
// 0059532e  888e7d010000         mov byte ptr [esi + 0x17d], cl
// 00595334  888e7e010000         mov byte ptr [esi + 0x17e], cl
// 0059533a  0fb64c2415           movzx ecx, byte ptr [esp + 0x15]
// 0059533f  52                   push edx
// 00595340  56                   push esi
// 00595341  888e80010000         mov byte ptr [esi + 0x180], cl
// 00595347  e8c4bafeff           call 0x580e10
// 0059534c  83c40c               add esp, 0xc
// 0059534f  5d                   pop ebp
// 00595350  5f                   pop edi
// 00595351  5e                   pop esi
// 00595352  5b                   pop ebx
// 00595353  59                   pop ecx
// 00595354  c3                   ret 
// 00595355  6858238d00           push 0x8d2358
// 0059535a  56                   push esi
// 0059535b  e8b08effff           call 0x58e210
// 00595360  55                   push ebp
// 00595361  56                   push esi
// 00595362  e879f8ffff           call 0x594be0
// 00595367  83c410               add esp, 0x10
// 0059536a  5d                   pop ebp
// 0059536b  5f                   pop edi
// 0059536c  5e                   pop esi
// 0059536d  5b                   pop ebx
// 0059536e  59                   pop ecx
// 0059536f  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_handle_sBIT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
