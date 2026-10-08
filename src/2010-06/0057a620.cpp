// from server: 100% by auto
// roc 2010-06 0057a620  unit: seg_00570000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057a620
//
// 0057a620  53                   push ebx
// 0057a621  56                   push esi
// 0057a622  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057a626  f6466801             test byte ptr [esi + 0x68], 1
// 0057a62a  57                   push edi
// 0057a62b  750e                 jne 0x57a63b
// 0057a62d  68d078a200           push 0xa278d0
// 0057a632  56                   push esi
// 0057a633  e87874ffff           call 0x571ab0
// 0057a638  83c408               add esp, 8
// 0057a63b  8b4668               mov eax, dword ptr [esi + 0x68]
// 0057a63e  a804                 test al, 4
// 0057a640  7406                 je 0x57a648
// 0057a642  83c808               or eax, 8
// 0057a645  894668               mov dword ptr [esi + 0x68], eax
// 0057a648  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0057a64c  8d4701               lea eax, [edi + 1]
// 0057a64f  50                   push eax
// 0057a650  56                   push esi
// 0057a651  e8da7fffff           call 0x572630
// 0057a656  8bd8                 mov ebx, eax
// 0057a658  83c408               add esp, 8
// 0057a65b  85db                 test ebx, ebx
// 0057a65d  7512                 jne 0x57a671
// 0057a65f  68ac78a200           push 0xa278ac
// 0057a664  56                   push esi
// 0057a665  e8f674ffff           call 0x571b60
// 0057a66a  83c408               add esp, 8
// 0057a66d  5f                   pop edi
// 0057a66e  5e                   pop esi
// 0057a66f  5b                   pop ebx
// 0057a670  c3                   ret 
// 0057a671  57                   push edi
// 0057a672  53                   push ebx
// 0057a673  56                   push esi
// 0057a674  e8971dffff           call 0x56c410
// 0057a679  57                   push edi
// 0057a67a  53                   push ebx
// 0057a67b  56                   push esi
// 0057a67c  e85fa9feff           call 0x564fe0
// 0057a681  6a00                 push 0
// 0057a683  56                   push esi
// 0057a684  e887deffff           call 0x578510
// 0057a689  83c420               add esp, 0x20
// 0057a68c  85c0                 test eax, eax
// 0057a68e  740e                 je 0x57a69e
// 0057a690  53                   push ebx
// 0057a691  56                   push esi
// 0057a692  e8697fffff           call 0x572600
// 0057a697  83c408               add esp, 8
// 0057a69a  5f                   pop edi
// 0057a69b  5e                   pop esi
// 0057a69c  5b                   pop ebx
// 0057a69d  c3                   ret 
// 0057a69e  8d043b               lea eax, [ebx + edi]
// 0057a6a1  c60000               mov byte ptr [eax], 0
// 0057a6a4  803b00               cmp byte ptr [ebx], 0
// 0057a6a7  55                   push ebp
// 0057a6a8  8beb                 mov ebp, ebx
// 0057a6aa  740b                 je 0x57a6b7
// 0057a6ac  8d642400             lea esp, [esp]
// 0057a6b0  45                   inc ebp
// 0057a6b1  807d0000             cmp byte ptr [ebp], 0
// 0057a6b5  75f9                 jne 0x57a6b0
// 0057a6b7  3be8                 cmp ebp, eax
// 0057a6b9  7401                 je 0x57a6bc
// 0057a6bb  45                   inc ebp
// 0057a6bc  6a10                 push 0x10
// 0057a6be  56                   push esi
// 0057a6bf  e86c7fffff           call 0x572630
// 0057a6c4  8bf8                 mov edi, eax
// 0057a6c6  83c408               add esp, 8
// 0057a6c9  85ff                 test edi, edi
// 0057a6cb  751a                 jne 0x57a6e7
// 0057a6cd  688078a200           push 0xa27880
// 0057a6d2  56                   push esi
// 0057a6d3  e88874ffff           call 0x571b60
// 0057a6d8  53                   push ebx
// 0057a6d9  56                   push esi
// 0057a6da  e8217fffff           call 0x572600
// 0057a6df  83c410               add esp, 0x10
// 0057a6e2  5d                   pop ebp
// 0057a6e3  5f                   pop edi
// 0057a6e4  5e                   pop esi
// 0057a6e5  5b                   pop ebx
// 0057a6e6  c3                   ret 
// 0057a6e7  8bc5                 mov eax, ebp
// 0057a6e9  c707ffffffff         mov dword ptr [edi], 0xffffffff
// 0057a6ef  895f04               mov dword ptr [edi + 4], ebx
// 0057a6f2  896f08               mov dword ptr [edi + 8], ebp
// 0057a6f5  8d5001               lea edx, [eax + 1]
// 0057a6f8  8a08                 mov cl, byte ptr [eax]
// 0057a6fa  40                   inc eax
// 0057a6fb  84c9                 test cl, cl
// 0057a6fd  75f9                 jne 0x57a6f8
// 0057a6ff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057a703  6a01                 push 1
// 0057a705  57                   push edi
// 0057a706  51                   push ecx
// 0057a707  2bc2                 sub eax, edx
// 0057a709  56                   push esi
// 0057a70a  89470c               mov dword ptr [edi + 0xc], eax
// 0057a70d  e81ea0feff           call 0x564730
// 0057a712  53                   push ebx
// 0057a713  56                   push esi
// 0057a714  8be8                 mov ebp, eax
// 0057a716  e8e57effff           call 0x572600
// 0057a71b  57                   push edi
// 0057a71c  56                   push esi
// 0057a71d  e8de7effff           call 0x572600
// 0057a722  83c420               add esp, 0x20
// 0057a725  85ed                 test ebp, ebp
// 0057a727  740e                 je 0x57a737
// 0057a729  685478a200           push 0xa27854
// 0057a72e  56                   push esi
// 0057a72f  e82c74ffff           call 0x571b60
// 0057a734  83c408               add esp, 8
// 0057a737  5d                   pop ebp
// 0057a738  5f                   pop edi
// 0057a739  5e                   pop esi
// 0057a73a  5b                   pop ebx
// 0057a73b  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_tEXt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
