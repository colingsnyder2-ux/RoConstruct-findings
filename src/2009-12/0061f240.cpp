// roc 2009-12 0061f240  unit: seg_00610000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061f240
//
// 0061f240  83ec18               sub esp, 0x18
// 0061f243  56                   push esi
// 0061f244  8b742420             mov esi, dword ptr [esp + 0x20]
// 0061f248  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0061f24e  b801000000           mov eax, 1
// 0061f253  d3e0                 shl eax, cl
// 0061f255  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0061f25c  57                   push edi
// 0061f25d  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0061f263  89442408             mov dword ptr [esp + 8], eax
// 0061f267  7415                 je 0x61f27e
// 0061f269  837f2800             cmp dword ptr [edi + 0x28], 0
// 0061f26d  750f                 jne 0x61f27e
// 0061f26f  e8ccfaffff           call 0x61ed40
// 0061f274  84c0                 test al, al
// 0061f276  7506                 jne 0x61f27e
// 0061f278  5f                   pop edi
// 0061f279  5e                   pop esi
// 0061f27a  83c418               add esp, 0x18
// 0061f27d  c3                   ret 
// 0061f27e  8b4618               mov eax, dword ptr [esi + 0x18]
// 0061f281  8974241c             mov dword ptr [esp + 0x1c], esi
// 0061f285  8b08                 mov ecx, dword ptr [eax]
// 0061f287  894c240c             mov dword ptr [esp + 0xc], ecx
// 0061f28b  8b5004               mov edx, dword ptr [eax + 4]
// 0061f28e  53                   push ebx
// 0061f28f  33db                 xor ebx, ebx
// 0061f291  399e40010000         cmp dword ptr [esi + 0x140], ebx
// 0061f297  89542414             mov dword ptr [esp + 0x14], edx
// 0061f29b  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0061f29e  55                   push ebp
// 0061f29f  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0061f2a2  7e4c                 jle 0x61f2f0
// 0061f2a4  83f901               cmp ecx, 1
// 0061f2a7  8b442430             mov eax, dword ptr [esp + 0x30]
// 0061f2ab  8b0498               mov eax, dword ptr [eax + ebx*4]
// 0061f2ae  8944242c             mov dword ptr [esp + 0x2c], eax
// 0061f2b2  7d21                 jge 0x61f2d5
// 0061f2b4  6a01                 push 1
// 0061f2b6  51                   push ecx
// 0061f2b7  8d4c241c             lea ecx, [esp + 0x1c]
// 0061f2bb  55                   push ebp
// 0061f2bc  51                   push ecx
// 0061f2bd  e83ef2ffff           call 0x61e500
// 0061f2c2  83c410               add esp, 0x10
// 0061f2c5  84c0                 test al, al
// 0061f2c7  744d                 je 0x61f316
// 0061f2c9  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0061f2cd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061f2d1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0061f2d5  49                   dec ecx
// 0061f2d6  8bd5                 mov edx, ebp
// 0061f2d8  d3fa                 sar edx, cl
// 0061f2da  f6c201               test dl, 1
// 0061f2dd  7408                 je 0x61f2e7
// 0061f2df  668b542410           mov dx, word ptr [esp + 0x10]
// 0061f2e4  660910               or word ptr [eax], dx
// 0061f2e7  43                   inc ebx
// 0061f2e8  3b9e40010000         cmp ebx, dword ptr [esi + 0x140]
// 0061f2ee  7cb4                 jl 0x61f2a4
// 0061f2f0  8b4618               mov eax, dword ptr [esi + 0x18]
// 0061f2f3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0061f2f7  8910                 mov dword ptr [eax], edx
// 0061f2f9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0061f2fc  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061f300  895004               mov dword ptr [eax + 4], edx
// 0061f303  ff4f28               dec dword ptr [edi + 0x28]
// 0061f306  896f0c               mov dword ptr [edi + 0xc], ebp
// 0061f309  5d                   pop ebp
// 0061f30a  5b                   pop ebx
// 0061f30b  894f10               mov dword ptr [edi + 0x10], ecx
// 0061f30e  5f                   pop edi
// 0061f30f  b001                 mov al, 1
// 0061f311  5e                   pop esi
// 0061f312  83c418               add esp, 0x18
// 0061f315  c3                   ret 
// 0061f316  5d                   pop ebp
// 0061f317  5b                   pop ebx
// 0061f318  5f                   pop edi
// 0061f319  32c0                 xor al, al
// 0061f31b  5e                   pop esi
// 0061f31c  83c418               add esp, 0x18
// 0061f31f  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
