// from server: 100% by auto
// roc 2008-06 0052e180  unit: seg_00520000  size: 621 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052e180
//
// 0052e180  81ec0c010000         sub esp, 0x10c
// 0052e186  53                   push ebx
// 0052e187  8b9c2418010000       mov ebx, dword ptr [esp + 0x118]
// 0052e18e  56                   push esi
// 0052e18f  8bb42418010000       mov esi, dword ptr [esp + 0x118]
// 0052e196  8b4668               mov eax, dword ptr [esi + 0x68]
// 0052e199  a801                 test al, 1
// 0052e19b  7548                 jne 0x52e1e5
// 0052e19d  685cc48200           push 0x82c45c
// 0052e1a2  56                   push esi
// 0052e1a3  e808b8ffff           call 0x5299b0
// 0052e1a8  83c408               add esp, 8
// 0052e1ab  8a8626010000         mov al, byte ptr [esi + 0x126]
// 0052e1b1  57                   push edi
// 0052e1b2  84c0                 test al, al
// 0052e1b4  0f85d1000000         jne 0x52e28b
// 0052e1ba  8bbc2424010000       mov edi, dword ptr [esp + 0x124]
// 0052e1c1  83ff02               cmp edi, 2
// 0052e1c4  7477                 je 0x52e23d
// 0052e1c6  6840c48200           push 0x82c440
// 0052e1cb  56                   push esi
// 0052e1cc  e87fb8ffff           call 0x529a50
// 0052e1d1  57                   push edi
// 0052e1d2  56                   push esi
// 0052e1d3  e808edffff           call 0x52cee0
// 0052e1d8  83c410               add esp, 0x10
// 0052e1db  5f                   pop edi
// 0052e1dc  5e                   pop esi
// 0052e1dd  5b                   pop ebx
// 0052e1de  81c40c010000         add esp, 0x10c
// 0052e1e4  c3                   ret 
// 0052e1e5  a804                 test al, 4
// 0052e1e7  7425                 je 0x52e20e
// 0052e1e9  6828c48200           push 0x82c428
// 0052e1ee  56                   push esi
// 0052e1ef  e85cb8ffff           call 0x529a50
// 0052e1f4  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 0052e1fb  50                   push eax
// 0052e1fc  56                   push esi
// 0052e1fd  e8deecffff           call 0x52cee0
// 0052e202  83c410               add esp, 0x10
// 0052e205  5e                   pop esi
// 0052e206  5b                   pop ebx
// 0052e207  81c40c010000         add esp, 0x10c
// 0052e20d  c3                   ret 
// 0052e20e  85db                 test ebx, ebx
// 0052e210  7499                 je 0x52e1ab
// 0052e212  f6430810             test byte ptr [ebx + 8], 0x10
// 0052e216  7493                 je 0x52e1ab
// 0052e218  6810c48200           push 0x82c410
// 0052e21d  56                   push esi
// 0052e21e  e82db8ffff           call 0x529a50
// 0052e223  8b8c2428010000       mov ecx, dword ptr [esp + 0x128]
// 0052e22a  51                   push ecx
// 0052e22b  56                   push esi
// 0052e22c  e8afecffff           call 0x52cee0
// 0052e231  83c410               add esp, 0x10
// 0052e234  5e                   pop esi
// 0052e235  5b                   pop ebx
// 0052e236  81c40c010000         add esp, 0x10c
// 0052e23c  c3                   ret 
// 0052e23d  6a02                 push 2
// 0052e23f  8d542410             lea edx, [esp + 0x10]
// 0052e243  52                   push edx
// 0052e244  56                   push esi
// 0052e245  e86668ffff           call 0x524ab0
// 0052e24a  6a02                 push 2
// 0052e24c  8d44241c             lea eax, [esp + 0x1c]
// 0052e250  50                   push eax
// 0052e251  56                   push esi
// 0052e252  e829fbfeff           call 0x51dd80
// 0052e257  668b442424           mov ax, word ptr [esp + 0x24]
// 0052e25c  b901000000           mov ecx, 1
// 0052e261  660fb6d0             movzx dx, al
// 0052e265  66898e1a010000       mov word ptr [esi + 0x11a], cx
// 0052e26c  b900010000           mov ecx, 0x100
// 0052e271  660fafd1             imul dx, cx
// 0052e275  660fb6c4             movzx ax, ah
// 0052e279  83c418               add esp, 0x18
// 0052e27c  6603d0               add dx, ax
// 0052e27f  66899694010000       mov word ptr [esi + 0x194], dx
// 0052e286  e905010000           jmp 0x52e390
// 0052e28b  3c02                 cmp al, 2
// 0052e28d  0f8586000000         jne 0x52e319
// 0052e293  8bbc2424010000       mov edi, dword ptr [esp + 0x124]
// 0052e29a  83ff06               cmp edi, 6
// 0052e29d  0f8523ffffff         jne 0x52e1c6
// 0052e2a3  57                   push edi
// 0052e2a4  8d4c2414             lea ecx, [esp + 0x14]
// 0052e2a8  51                   push ecx
// 0052e2a9  56                   push esi
// 0052e2aa  e80168ffff           call 0x524ab0
// 0052e2af  57                   push edi
// 0052e2b0  8d542420             lea edx, [esp + 0x20]
// 0052e2b4  52                   push edx
// 0052e2b5  56                   push esi
// 0052e2b6  e8c5fafeff           call 0x51dd80
// 0052e2bb  0fb64c2428           movzx ecx, byte ptr [esp + 0x28]
// 0052e2c0  ba00010000           mov edx, 0x100
// 0052e2c5  660fafca             imul cx, dx
// 0052e2c9  b801000000           mov eax, 1
// 0052e2ce  6689861a010000       mov word ptr [esi + 0x11a], ax
// 0052e2d5  0fb6442429           movzx eax, byte ptr [esp + 0x29]
// 0052e2da  6603c8               add cx, ax
// 0052e2dd  0fb644242b           movzx eax, byte ptr [esp + 0x2b]
// 0052e2e2  66898e8e010000       mov word ptr [esi + 0x18e], cx
// 0052e2e9  0fb64c242a           movzx ecx, byte ptr [esp + 0x2a]
// 0052e2ee  660fafca             imul cx, dx
// 0052e2f2  6603c8               add cx, ax
// 0052e2f5  0fb644242d           movzx eax, byte ptr [esp + 0x2d]
// 0052e2fa  66898e90010000       mov word ptr [esi + 0x190], cx
// 0052e301  0fb64c242c           movzx ecx, byte ptr [esp + 0x2c]
// 0052e306  660fafca             imul cx, dx
// 0052e30a  83c418               add esp, 0x18
// 0052e30d  6603c8               add cx, ax
// 0052e310  66898e92010000       mov word ptr [esi + 0x192], cx
// 0052e317  eb77                 jmp 0x52e390
// 0052e319  3c03                 cmp al, 3
// 0052e31b  0f85a6000000         jne 0x52e3c7
// 0052e321  f6466802             test byte ptr [esi + 0x68], 2
// 0052e325  750e                 jne 0x52e335
// 0052e327  68f4c38200           push 0x82c3f4
// 0052e32c  56                   push esi
// 0052e32d  e81eb7ffff           call 0x529a50
// 0052e332  83c408               add esp, 8
// 0052e335  0fb78e18010000       movzx ecx, word ptr [esi + 0x118]
// 0052e33c  8bbc2424010000       mov edi, dword ptr [esp + 0x124]
// 0052e343  3bf9                 cmp edi, ecx
// 0052e345  0f877bfeffff         ja 0x52e1c6
// 0052e34b  81ff00010000         cmp edi, 0x100
// 0052e351  0f876ffeffff         ja 0x52e1c6
// 0052e357  85ff                 test edi, edi
// 0052e359  751f                 jne 0x52e37a
// 0052e35b  68dcc38200           push 0x82c3dc
// 0052e360  56                   push esi
// 0052e361  e8eab6ffff           call 0x529a50
// 0052e366  57                   push edi
// 0052e367  56                   push esi
// 0052e368  e873ebffff           call 0x52cee0
// 0052e36d  83c410               add esp, 0x10
// 0052e370  5f                   pop edi
// 0052e371  5e                   pop esi
// 0052e372  5b                   pop ebx
// 0052e373  81c40c010000         add esp, 0x10c
// 0052e379  c3                   ret 
// 0052e37a  57                   push edi
// 0052e37b  8d54241c             lea edx, [esp + 0x1c]
// 0052e37f  52                   push edx
// 0052e380  56                   push esi
// 0052e381  e81adbffff           call 0x52bea0
// 0052e386  83c40c               add esp, 0xc
// 0052e389  6689be1a010000       mov word ptr [esi + 0x11a], di
// 0052e390  6a00                 push 0
// 0052e392  56                   push esi
// 0052e393  e848ebffff           call 0x52cee0
// 0052e398  83c408               add esp, 8
// 0052e39b  85c0                 test eax, eax
// 0052e39d  7544                 jne 0x52e3e3
// 0052e39f  0fb78e1a010000       movzx ecx, word ptr [esi + 0x11a]
// 0052e3a6  8d868c010000         lea eax, [esi + 0x18c]
// 0052e3ac  50                   push eax
// 0052e3ad  51                   push ecx
// 0052e3ae  8d542420             lea edx, [esp + 0x20]
// 0052e3b2  52                   push edx
// 0052e3b3  53                   push ebx
// 0052e3b4  56                   push esi
// 0052e3b5  e8f6f3feff           call 0x51d7b0
// 0052e3ba  83c414               add esp, 0x14
// 0052e3bd  5f                   pop edi
// 0052e3be  5e                   pop esi
// 0052e3bf  5b                   pop ebx
// 0052e3c0  81c40c010000         add esp, 0x10c
// 0052e3c6  c3                   ret 
// 0052e3c7  68b0c38200           push 0x82c3b0
// 0052e3cc  56                   push esi
// 0052e3cd  e87eb6ffff           call 0x529a50
// 0052e3d2  8b84242c010000       mov eax, dword ptr [esp + 0x12c]
// 0052e3d9  50                   push eax
// 0052e3da  56                   push esi
// 0052e3db  e800ebffff           call 0x52cee0
// 0052e3e0  83c410               add esp, 0x10
// 0052e3e3  5f                   pop edi
// 0052e3e4  5e                   pop esi
// 0052e3e5  5b                   pop ebx
// 0052e3e6  81c40c010000         add esp, 0x10c
// 0052e3ec  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_handle_tRNS)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
