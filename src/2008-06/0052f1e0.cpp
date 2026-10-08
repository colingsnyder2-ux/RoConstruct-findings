// from server: 100% by auto
// roc 2008-06 0052f1e0  unit: seg_00520000  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052f1e0
//
// 0052f1e0  83ec18               sub esp, 0x18
// 0052f1e3  53                   push ebx
// 0052f1e4  56                   push esi
// 0052f1e5  8b742424             mov esi, dword ptr [esp + 0x24]
// 0052f1e9  8b4668               mov eax, dword ptr [esi + 0x68]
// 0052f1ec  c744240800000000     mov dword ptr [esp + 8], 0
// 0052f1f4  a804                 test al, 4
// 0052f1f6  7414                 je 0x52f20c
// 0052f1f8  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 0052f1fe  3b0d4c948200         cmp ecx, dword ptr [0x82944c]
// 0052f204  7406                 je 0x52f20c
// 0052f206  83c808               or eax, 8
// 0052f209  894668               mov dword ptr [esi + 0x68], eax
// 0052f20c  8d9e1c010000         lea ebx, [esi + 0x11c]
// 0052f212  53                   push ebx
// 0052f213  56                   push esi
// 0052f214  e887d0ffff           call 0x52c2a0
// 0052f219  83c408               add esp, 8
// 0052f21c  f60320               test byte ptr [ebx], 0x20
// 0052f21f  7526                 jne 0x52f247
// 0052f221  53                   push ebx
// 0052f222  56                   push esi
// 0052f223  e8a8effeff           call 0x51e1d0
// 0052f228  83c408               add esp, 8
// 0052f22b  83f803               cmp eax, 3
// 0052f22e  7417                 je 0x52f247
// 0052f230  83be1c02000000       cmp dword ptr [esi + 0x21c], 0
// 0052f237  750e                 jne 0x52f247
// 0052f239  68d4c98200           push 0x82c9d4
// 0052f23e  56                   push esi
// 0052f23f  e85ca8ffff           call 0x529aa0
// 0052f244  83c408               add esp, 8
// 0052f247  f7466c00800000       test dword ptr [esi + 0x6c], 0x8000
// 0052f24e  0f84cd000000         je 0x52f321
// 0052f254  8d54240c             lea edx, [esp + 0xc]
// 0052f258  8bc3                 mov eax, ebx
// 0052f25a  2bd3                 sub edx, ebx
// 0052f25c  8d642400             lea esp, [esp]
// 0052f260  8a08                 mov cl, byte ptr [eax]
// 0052f262  880c02               mov byte ptr [edx + eax], cl
// 0052f265  40                   inc eax
// 0052f266  84c9                 test cl, cl
// 0052f268  75f6                 jne 0x52f260
// 0052f26a  55                   push ebp
// 0052f26b  57                   push edi
// 0052f26c  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0052f270  57                   push edi
// 0052f271  56                   push esi
// 0052f272  e829b2ffff           call 0x52a4a0
// 0052f277  57                   push edi
// 0052f278  50                   push eax
// 0052f279  56                   push esi
// 0052f27a  89442430             mov dword ptr [esp + 0x30], eax
// 0052f27e  897c2434             mov dword ptr [esp + 0x34], edi
// 0052f282  8be8                 mov ebp, eax
// 0052f284  e82758ffff           call 0x524ab0
// 0052f289  57                   push edi
// 0052f28a  55                   push ebp
// 0052f28b  56                   push esi
// 0052f28c  e8efeafeff           call 0x51dd80
// 0052f291  8b861c020000         mov eax, dword ptr [esi + 0x21c]
// 0052f297  83c420               add esp, 0x20
// 0052f29a  5f                   pop edi
// 0052f29b  5d                   pop ebp
// 0052f29c  85c0                 test eax, eax
// 0052f29e  744a                 je 0x52f2ea
// 0052f2a0  8d54240c             lea edx, [esp + 0xc]
// 0052f2a4  52                   push edx
// 0052f2a5  56                   push esi
// 0052f2a6  ffd0                 call eax
// 0052f2a8  83c408               add esp, 8
// 0052f2ab  85c0                 test eax, eax
// 0052f2ad  7f50                 jg 0x52f2ff
// 0052f2af  f60320               test byte ptr [ebx], 0x20
// 0052f2b2  7528                 jne 0x52f2dc
// 0052f2b4  53                   push ebx
// 0052f2b5  56                   push esi
// 0052f2b6  e815effeff           call 0x51e1d0
// 0052f2bb  83c408               add esp, 8
// 0052f2be  83f803               cmp eax, 3
// 0052f2c1  7419                 je 0x52f2dc
// 0052f2c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052f2c7  50                   push eax
// 0052f2c8  56                   push esi
// 0052f2c9  e832b2ffff           call 0x52a500
// 0052f2ce  68d4c98200           push 0x82c9d4
// 0052f2d3  56                   push esi
// 0052f2d4  e8c7a7ffff           call 0x529aa0
// 0052f2d9  83c410               add esp, 0x10
// 0052f2dc  8b542428             mov edx, dword ptr [esp + 0x28]
// 0052f2e0  6a01                 push 1
// 0052f2e2  8d4c2410             lea ecx, [esp + 0x10]
// 0052f2e6  51                   push ecx
// 0052f2e7  52                   push edx
// 0052f2e8  eb0c                 jmp 0x52f2f6
// 0052f2ea  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052f2ee  6a01                 push 1
// 0052f2f0  8d442410             lea eax, [esp + 0x10]
// 0052f2f4  50                   push eax
// 0052f2f5  51                   push ecx
// 0052f2f6  56                   push esi
// 0052f2f7  e874e6feff           call 0x51d970
// 0052f2fc  83c410               add esp, 0x10
// 0052f2ff  8b542414             mov edx, dword ptr [esp + 0x14]
// 0052f303  52                   push edx
// 0052f304  56                   push esi
// 0052f305  e8f6b1ffff           call 0x52a500
// 0052f30a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052f30e  83c408               add esp, 8
// 0052f311  50                   push eax
// 0052f312  56                   push esi
// 0052f313  e8c8dbffff           call 0x52cee0
// 0052f318  83c408               add esp, 8
// 0052f31b  5e                   pop esi
// 0052f31c  5b                   pop ebx
// 0052f31d  83c418               add esp, 0x18
// 0052f320  c3                   ret 
// 0052f321  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052f325  50                   push eax
// 0052f326  56                   push esi
// 0052f327  e8b4dbffff           call 0x52cee0
// 0052f32c  83c408               add esp, 8
// 0052f32f  5e                   pop esi
// 0052f330  5b                   pop ebx
// 0052f331  83c418               add esp, 0x18
// 0052f334  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_unknown)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
