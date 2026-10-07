// roc 2008-06 00532f30  unit: seg_00530000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00532f30
//
// 00532f30  83ec18               sub esp, 0x18
// 00532f33  56                   push esi
// 00532f34  8b742420             mov esi, dword ptr [esp + 0x20]
// 00532f38  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00532f3e  b801000000           mov eax, 1
// 00532f43  d3e0                 shl eax, cl
// 00532f45  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 00532f4c  57                   push edi
// 00532f4d  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00532f53  89442408             mov dword ptr [esp + 8], eax
// 00532f57  7415                 je 0x532f6e
// 00532f59  837f2800             cmp dword ptr [edi + 0x28], 0
// 00532f5d  750f                 jne 0x532f6e
// 00532f5f  e8ccfaffff           call 0x532a30
// 00532f64  84c0                 test al, al
// 00532f66  7506                 jne 0x532f6e
// 00532f68  5f                   pop edi
// 00532f69  5e                   pop esi
// 00532f6a  83c418               add esp, 0x18
// 00532f6d  c3                   ret 
// 00532f6e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00532f71  8974241c             mov dword ptr [esp + 0x1c], esi
// 00532f75  8b08                 mov ecx, dword ptr [eax]
// 00532f77  894c240c             mov dword ptr [esp + 0xc], ecx
// 00532f7b  8b5004               mov edx, dword ptr [eax + 4]
// 00532f7e  53                   push ebx
// 00532f7f  33db                 xor ebx, ebx
// 00532f81  399e40010000         cmp dword ptr [esi + 0x140], ebx
// 00532f87  89542414             mov dword ptr [esp + 0x14], edx
// 00532f8b  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00532f8e  55                   push ebp
// 00532f8f  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00532f92  7e4c                 jle 0x532fe0
// 00532f94  83f901               cmp ecx, 1
// 00532f97  8b442430             mov eax, dword ptr [esp + 0x30]
// 00532f9b  8b0498               mov eax, dword ptr [eax + ebx*4]
// 00532f9e  8944242c             mov dword ptr [esp + 0x2c], eax
// 00532fa2  7d21                 jge 0x532fc5
// 00532fa4  6a01                 push 1
// 00532fa6  51                   push ecx
// 00532fa7  8d4c241c             lea ecx, [esp + 0x1c]
// 00532fab  55                   push ebp
// 00532fac  51                   push ecx
// 00532fad  e83ef2ffff           call 0x5321f0
// 00532fb2  83c410               add esp, 0x10
// 00532fb5  84c0                 test al, al
// 00532fb7  744d                 je 0x533006
// 00532fb9  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00532fbd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00532fc1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00532fc5  49                   dec ecx
// 00532fc6  8bd5                 mov edx, ebp
// 00532fc8  d3fa                 sar edx, cl
// 00532fca  f6c201               test dl, 1
// 00532fcd  7408                 je 0x532fd7
// 00532fcf  668b542410           mov dx, word ptr [esp + 0x10]
// 00532fd4  660910               or word ptr [eax], dx
// 00532fd7  43                   inc ebx
// 00532fd8  3b9e40010000         cmp ebx, dword ptr [esi + 0x140]
// 00532fde  7cb4                 jl 0x532f94
// 00532fe0  8b4618               mov eax, dword ptr [esi + 0x18]
// 00532fe3  8b542414             mov edx, dword ptr [esp + 0x14]
// 00532fe7  8910                 mov dword ptr [eax], edx
// 00532fe9  8b4618               mov eax, dword ptr [esi + 0x18]
// 00532fec  8b542418             mov edx, dword ptr [esp + 0x18]
// 00532ff0  895004               mov dword ptr [eax + 4], edx
// 00532ff3  ff4f28               dec dword ptr [edi + 0x28]
// 00532ff6  896f0c               mov dword ptr [edi + 0xc], ebp
// 00532ff9  5d                   pop ebp
// 00532ffa  5b                   pop ebx
// 00532ffb  894f10               mov dword ptr [edi + 0x10], ecx
// 00532ffe  5f                   pop edi
// 00532fff  b001                 mov al, 1
// 00533001  5e                   pop esi
// 00533002  83c418               add esp, 0x18
// 00533005  c3                   ret 
// 00533006  5d                   pop ebp
// 00533007  5b                   pop ebx
// 00533008  5f                   pop edi
// 00533009  32c0                 xor al, al
// 0053300b  5e                   pop esi
// 0053300c  83c418               add esp, 0x18
// 0053300f  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
