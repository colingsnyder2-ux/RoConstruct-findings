// from server: 100% by auto
// roc 2008-06 0052e610  unit: seg_00520000  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052e610
//
// 0052e610  81ec04020000         sub esp, 0x204
// 0052e616  55                   push ebp
// 0052e617  8bac2410020000       mov ebp, dword ptr [esp + 0x210]
// 0052e61e  56                   push esi
// 0052e61f  8bb42410020000       mov esi, dword ptr [esp + 0x210]
// 0052e626  8b4668               mov eax, dword ptr [esi + 0x68]
// 0052e629  a801                 test al, 1
// 0052e62b  0f85ac000000         jne 0x52e6dd
// 0052e631  6888c58200           push 0x82c588
// 0052e636  56                   push esi
// 0052e637  e874b3ffff           call 0x5299b0
// 0052e63c  83c408               add esp, 8
// 0052e63f  0fb78618010000       movzx eax, word ptr [esi + 0x118]
// 0052e646  53                   push ebx
// 0052e647  57                   push edi
// 0052e648  8bbc2420020000       mov edi, dword ptr [esp + 0x220]
// 0052e64f  8bdf                 mov ebx, edi
// 0052e651  d1eb                 shr ebx, 1
// 0052e653  3bd8                 cmp ebx, eax
// 0052e655  0f850b010000         jne 0x52e766
// 0052e65b  81fb00010000         cmp ebx, 0x100
// 0052e661  0f87ff000000         ja 0x52e766
// 0052e667  33ff                 xor edi, edi
// 0052e669  85db                 test ebx, ebx
// 0052e66b  7643                 jbe 0x52e6b0
// 0052e66d  8d4900               lea ecx, [ecx]
// 0052e670  6a02                 push 2
// 0052e672  8d4c2414             lea ecx, [esp + 0x14]
// 0052e676  51                   push ecx
// 0052e677  56                   push esi
// 0052e678  e83364ffff           call 0x524ab0
// 0052e67d  6a02                 push 2
// 0052e67f  8d542420             lea edx, [esp + 0x20]
// 0052e683  52                   push edx
// 0052e684  56                   push esi
// 0052e685  e8f6f6feff           call 0x51dd80
// 0052e68a  668b442428           mov ax, word ptr [esp + 0x28]
// 0052e68f  660fb6c8             movzx cx, al
// 0052e693  ba00010000           mov edx, 0x100
// 0052e698  660fafca             imul cx, dx
// 0052e69c  660fb6c4             movzx ax, ah
// 0052e6a0  6603c8               add cx, ax
// 0052e6a3  66894c7c2c           mov word ptr [esp + edi*2 + 0x2c], cx
// 0052e6a8  47                   inc edi
// 0052e6a9  83c418               add esp, 0x18
// 0052e6ac  3bfb                 cmp edi, ebx
// 0052e6ae  72c0                 jb 0x52e670
// 0052e6b0  6a00                 push 0
// 0052e6b2  56                   push esi
// 0052e6b3  e828e8ffff           call 0x52cee0
// 0052e6b8  83c408               add esp, 8
// 0052e6bb  85c0                 test eax, eax
// 0052e6bd  0f85b8000000         jne 0x52e77b
// 0052e6c3  8d4c2414             lea ecx, [esp + 0x14]
// 0052e6c7  51                   push ecx
// 0052e6c8  55                   push ebp
// 0052e6c9  56                   push esi
// 0052e6ca  e801e7feff           call 0x51cdd0
// 0052e6cf  83c40c               add esp, 0xc
// 0052e6d2  5f                   pop edi
// 0052e6d3  5b                   pop ebx
// 0052e6d4  5e                   pop esi
// 0052e6d5  5d                   pop ebp
// 0052e6d6  81c404020000         add esp, 0x204
// 0052e6dc  c3                   ret 
// 0052e6dd  a804                 test al, 4
// 0052e6df  7425                 je 0x52e706
// 0052e6e1  6870c58200           push 0x82c570
// 0052e6e6  56                   push esi
// 0052e6e7  e864b3ffff           call 0x529a50
// 0052e6ec  8b842420020000       mov eax, dword ptr [esp + 0x220]
// 0052e6f3  50                   push eax
// 0052e6f4  56                   push esi
// 0052e6f5  e8e6e7ffff           call 0x52cee0
// 0052e6fa  83c410               add esp, 0x10
// 0052e6fd  5e                   pop esi
// 0052e6fe  5d                   pop ebp
// 0052e6ff  81c404020000         add esp, 0x204
// 0052e705  c3                   ret 
// 0052e706  a802                 test al, 2
// 0052e708  7525                 jne 0x52e72f
// 0052e70a  6854c58200           push 0x82c554
// 0052e70f  56                   push esi
// 0052e710  e83bb3ffff           call 0x529a50
// 0052e715  8b8c2420020000       mov ecx, dword ptr [esp + 0x220]
// 0052e71c  51                   push ecx
// 0052e71d  56                   push esi
// 0052e71e  e8bde7ffff           call 0x52cee0
// 0052e723  83c410               add esp, 0x10
// 0052e726  5e                   pop esi
// 0052e727  5d                   pop ebp
// 0052e728  81c404020000         add esp, 0x204
// 0052e72e  c3                   ret 
// 0052e72f  85ed                 test ebp, ebp
// 0052e731  0f8408ffffff         je 0x52e63f
// 0052e737  f6450840             test byte ptr [ebp + 8], 0x40
// 0052e73b  0f84fefeffff         je 0x52e63f
// 0052e741  683cc58200           push 0x82c53c
// 0052e746  56                   push esi
// 0052e747  e804b3ffff           call 0x529a50
// 0052e74c  8b942420020000       mov edx, dword ptr [esp + 0x220]
// 0052e753  52                   push edx
// 0052e754  56                   push esi
// 0052e755  e886e7ffff           call 0x52cee0
// 0052e75a  83c410               add esp, 0x10
// 0052e75d  5e                   pop esi
// 0052e75e  5d                   pop ebp
// 0052e75f  81c404020000         add esp, 0x204
// 0052e765  c3                   ret 
// 0052e766  6820c58200           push 0x82c520
// 0052e76b  56                   push esi
// 0052e76c  e8dfb2ffff           call 0x529a50
// 0052e771  57                   push edi
// 0052e772  56                   push esi
// 0052e773  e868e7ffff           call 0x52cee0
// 0052e778  83c410               add esp, 0x10
// 0052e77b  5f                   pop edi
// 0052e77c  5b                   pop ebx
// 0052e77d  5e                   pop esi
// 0052e77e  5d                   pop ebp
// 0052e77f  81c404020000         add esp, 0x204
// 0052e785  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_handle_hIST)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
