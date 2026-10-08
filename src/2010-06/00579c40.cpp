// from server: 100% by auto
// roc 2010-06 00579c40  unit: seg_00570000  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00579c40
//
// 00579c40  81ec04020000         sub esp, 0x204
// 00579c46  55                   push ebp
// 00579c47  8bac2410020000       mov ebp, dword ptr [esp + 0x210]
// 00579c4e  56                   push esi
// 00579c4f  8bb42410020000       mov esi, dword ptr [esp + 0x210]
// 00579c56  8b4668               mov eax, dword ptr [esi + 0x68]
// 00579c59  a801                 test al, 1
// 00579c5b  0f85ac000000         jne 0x579d0d
// 00579c61  686475a200           push 0xa27564
// 00579c66  56                   push esi
// 00579c67  e8447effff           call 0x571ab0
// 00579c6c  83c408               add esp, 8
// 00579c6f  0fb78618010000       movzx eax, word ptr [esi + 0x118]
// 00579c76  53                   push ebx
// 00579c77  57                   push edi
// 00579c78  8bbc2420020000       mov edi, dword ptr [esp + 0x220]
// 00579c7f  8bdf                 mov ebx, edi
// 00579c81  d1eb                 shr ebx, 1
// 00579c83  3bd8                 cmp ebx, eax
// 00579c85  0f850b010000         jne 0x579d96
// 00579c8b  81fb00010000         cmp ebx, 0x100
// 00579c91  0f87ff000000         ja 0x579d96
// 00579c97  33ff                 xor edi, edi
// 00579c99  85db                 test ebx, ebx
// 00579c9b  7643                 jbe 0x579ce0
// 00579c9d  8d4900               lea ecx, [ecx]
// 00579ca0  6a02                 push 2
// 00579ca2  8d4c2414             lea ecx, [esp + 0x14]
// 00579ca6  51                   push ecx
// 00579ca7  56                   push esi
// 00579ca8  e86327ffff           call 0x56c410
// 00579cad  6a02                 push 2
// 00579caf  8d542420             lea edx, [esp + 0x20]
// 00579cb3  52                   push edx
// 00579cb4  56                   push esi
// 00579cb5  e826b3feff           call 0x564fe0
// 00579cba  668b442428           mov ax, word ptr [esp + 0x28]
// 00579cbf  660fb6c8             movzx cx, al
// 00579cc3  ba00010000           mov edx, 0x100
// 00579cc8  660fafca             imul cx, dx
// 00579ccc  660fb6c4             movzx ax, ah
// 00579cd0  6603c8               add cx, ax
// 00579cd3  66894c7c2c           mov word ptr [esp + edi*2 + 0x2c], cx
// 00579cd8  47                   inc edi
// 00579cd9  83c418               add esp, 0x18
// 00579cdc  3bfb                 cmp edi, ebx
// 00579cde  72c0                 jb 0x579ca0
// 00579ce0  6a00                 push 0
// 00579ce2  56                   push esi
// 00579ce3  e828e8ffff           call 0x578510
// 00579ce8  83c408               add esp, 8
// 00579ceb  85c0                 test eax, eax
// 00579ced  0f85b8000000         jne 0x579dab
// 00579cf3  8d4c2414             lea ecx, [esp + 0x14]
// 00579cf7  51                   push ecx
// 00579cf8  55                   push ebp
// 00579cf9  56                   push esi
// 00579cfa  e841a2feff           call 0x563f40
// 00579cff  83c40c               add esp, 0xc
// 00579d02  5f                   pop edi
// 00579d03  5b                   pop ebx
// 00579d04  5e                   pop esi
// 00579d05  5d                   pop ebp
// 00579d06  81c404020000         add esp, 0x204
// 00579d0c  c3                   ret 
// 00579d0d  a804                 test al, 4
// 00579d0f  7425                 je 0x579d36
// 00579d11  684c75a200           push 0xa2754c
// 00579d16  56                   push esi
// 00579d17  e8447effff           call 0x571b60
// 00579d1c  8b842420020000       mov eax, dword ptr [esp + 0x220]
// 00579d23  50                   push eax
// 00579d24  56                   push esi
// 00579d25  e8e6e7ffff           call 0x578510
// 00579d2a  83c410               add esp, 0x10
// 00579d2d  5e                   pop esi
// 00579d2e  5d                   pop ebp
// 00579d2f  81c404020000         add esp, 0x204
// 00579d35  c3                   ret 
// 00579d36  a802                 test al, 2
// 00579d38  7525                 jne 0x579d5f
// 00579d3a  683075a200           push 0xa27530
// 00579d3f  56                   push esi
// 00579d40  e81b7effff           call 0x571b60
// 00579d45  8b8c2420020000       mov ecx, dword ptr [esp + 0x220]
// 00579d4c  51                   push ecx
// 00579d4d  56                   push esi
// 00579d4e  e8bde7ffff           call 0x578510
// 00579d53  83c410               add esp, 0x10
// 00579d56  5e                   pop esi
// 00579d57  5d                   pop ebp
// 00579d58  81c404020000         add esp, 0x204
// 00579d5e  c3                   ret 
// 00579d5f  85ed                 test ebp, ebp
// 00579d61  0f8408ffffff         je 0x579c6f
// 00579d67  f6450840             test byte ptr [ebp + 8], 0x40
// 00579d6b  0f84fefeffff         je 0x579c6f
// 00579d71  681875a200           push 0xa27518
// 00579d76  56                   push esi
// 00579d77  e8e47dffff           call 0x571b60
// 00579d7c  8b942420020000       mov edx, dword ptr [esp + 0x220]
// 00579d83  52                   push edx
// 00579d84  56                   push esi
// 00579d85  e886e7ffff           call 0x578510
// 00579d8a  83c410               add esp, 0x10
// 00579d8d  5e                   pop esi
// 00579d8e  5d                   pop ebp
// 00579d8f  81c404020000         add esp, 0x204
// 00579d95  c3                   ret 
// 00579d96  68fc74a200           push 0xa274fc
// 00579d9b  56                   push esi
// 00579d9c  e8bf7dffff           call 0x571b60
// 00579da1  57                   push edi
// 00579da2  56                   push esi
// 00579da3  e868e7ffff           call 0x578510
// 00579da8  83c410               add esp, 0x10
// 00579dab  5f                   pop edi
// 00579dac  5b                   pop ebx
// 00579dad  5e                   pop esi
// 00579dae  5d                   pop ebp
// 00579daf  81c404020000         add esp, 0x204
// 00579db5  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_handle_hIST)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
