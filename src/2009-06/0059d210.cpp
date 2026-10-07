// roc 2009-06 0059d210  unit: seg_00590000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059d210
//
// 0059d210  83ec18               sub esp, 0x18
// 0059d213  56                   push esi
// 0059d214  8b742420             mov esi, dword ptr [esp + 0x20]
// 0059d218  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0059d21e  b801000000           mov eax, 1
// 0059d223  d3e0                 shl eax, cl
// 0059d225  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0059d22c  57                   push edi
// 0059d22d  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0059d233  89442408             mov dword ptr [esp + 8], eax
// 0059d237  7415                 je 0x59d24e
// 0059d239  837f2800             cmp dword ptr [edi + 0x28], 0
// 0059d23d  750f                 jne 0x59d24e
// 0059d23f  e8ccfaffff           call 0x59cd10
// 0059d244  84c0                 test al, al
// 0059d246  7506                 jne 0x59d24e
// 0059d248  5f                   pop edi
// 0059d249  5e                   pop esi
// 0059d24a  83c418               add esp, 0x18
// 0059d24d  c3                   ret 
// 0059d24e  8b4618               mov eax, dword ptr [esi + 0x18]
// 0059d251  8974241c             mov dword ptr [esp + 0x1c], esi
// 0059d255  8b08                 mov ecx, dword ptr [eax]
// 0059d257  894c240c             mov dword ptr [esp + 0xc], ecx
// 0059d25b  8b5004               mov edx, dword ptr [eax + 4]
// 0059d25e  53                   push ebx
// 0059d25f  33db                 xor ebx, ebx
// 0059d261  399e40010000         cmp dword ptr [esi + 0x140], ebx
// 0059d267  89542414             mov dword ptr [esp + 0x14], edx
// 0059d26b  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0059d26e  55                   push ebp
// 0059d26f  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0059d272  7e4c                 jle 0x59d2c0
// 0059d274  83f901               cmp ecx, 1
// 0059d277  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059d27b  8b0498               mov eax, dword ptr [eax + ebx*4]
// 0059d27e  8944242c             mov dword ptr [esp + 0x2c], eax
// 0059d282  7d21                 jge 0x59d2a5
// 0059d284  6a01                 push 1
// 0059d286  51                   push ecx
// 0059d287  8d4c241c             lea ecx, [esp + 0x1c]
// 0059d28b  55                   push ebp
// 0059d28c  51                   push ecx
// 0059d28d  e83ef2ffff           call 0x59c4d0
// 0059d292  83c410               add esp, 0x10
// 0059d295  84c0                 test al, al
// 0059d297  744d                 je 0x59d2e6
// 0059d299  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0059d29d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059d2a1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059d2a5  49                   dec ecx
// 0059d2a6  8bd5                 mov edx, ebp
// 0059d2a8  d3fa                 sar edx, cl
// 0059d2aa  f6c201               test dl, 1
// 0059d2ad  7408                 je 0x59d2b7
// 0059d2af  668b542410           mov dx, word ptr [esp + 0x10]
// 0059d2b4  660910               or word ptr [eax], dx
// 0059d2b7  43                   inc ebx
// 0059d2b8  3b9e40010000         cmp ebx, dword ptr [esi + 0x140]
// 0059d2be  7cb4                 jl 0x59d274
// 0059d2c0  8b4618               mov eax, dword ptr [esi + 0x18]
// 0059d2c3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059d2c7  8910                 mov dword ptr [eax], edx
// 0059d2c9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0059d2cc  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059d2d0  895004               mov dword ptr [eax + 4], edx
// 0059d2d3  ff4f28               dec dword ptr [edi + 0x28]
// 0059d2d6  896f0c               mov dword ptr [edi + 0xc], ebp
// 0059d2d9  5d                   pop ebp
// 0059d2da  5b                   pop ebx
// 0059d2db  894f10               mov dword ptr [edi + 0x10], ecx
// 0059d2de  5f                   pop edi
// 0059d2df  b001                 mov al, 1
// 0059d2e1  5e                   pop esi
// 0059d2e2  83c418               add esp, 0x18
// 0059d2e5  c3                   ret 
// 0059d2e6  5d                   pop ebp
// 0059d2e7  5b                   pop ebx
// 0059d2e8  5f                   pop edi
// 0059d2e9  32c0                 xor al, al
// 0059d2eb  5e                   pop esi
// 0059d2ec  83c418               add esp, 0x18
// 0059d2ef  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
