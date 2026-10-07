// roc 2008-06 00538140  unit: seg_00530000  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00538140
//
// 00538140  51                   push ecx
// 00538141  55                   push ebp
// 00538142  56                   push esi
// 00538143  8b742410             mov esi, dword ptr [esp + 0x10]
// 00538147  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 0053814e  57                   push edi
// 0053814f  8bbe5c010000         mov edi, dword ptr [esi + 0x15c]
// 00538155  7437                 je 0x53818e
// 00538157  837f2400             cmp dword ptr [edi + 0x24], 0
// 0053815b  752e                 jne 0x53818b
// 0053815d  33c0                 xor eax, eax
// 0053815f  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 00538165  7e1b                 jle 0x538182
// 00538167  8d4f14               lea ecx, [edi + 0x14]
// 0053816a  8d9b00000000         lea ebx, [ebx]
// 00538170  c70100000000         mov dword ptr [ecx], 0
// 00538176  40                   inc eax
// 00538177  83c104               add ecx, 4
// 0053817a  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00538180  7cee                 jl 0x538170
// 00538182  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00538188  894724               mov dword ptr [edi + 0x24], eax
// 0053818b  ff4f24               dec dword ptr [edi + 0x24]
// 0053818e  33ed                 xor ebp, ebp
// 00538190  39ae00010000         cmp dword ptr [esi + 0x100], ebp
// 00538196  7e61                 jle 0x5381f9
// 00538198  8d8e04010000         lea ecx, [esi + 0x104]
// 0053819e  894c2414             mov dword ptr [esp + 0x14], ecx
// 005381a2  53                   push ebx
// 005381a3  8b542418             mov edx, dword ptr [esp + 0x18]
// 005381a7  8b0a                 mov ecx, dword ptr [edx]
// 005381a9  8b848ee8000000       mov eax, dword ptr [esi + ecx*4 + 0xe8]
// 005381b0  8b5018               mov edx, dword ptr [eax + 0x18]
// 005381b3  8b4014               mov eax, dword ptr [eax + 0x14]
// 005381b6  8b5c975c             mov ebx, dword ptr [edi + edx*4 + 0x5c]
// 005381ba  8b44874c             mov eax, dword ptr [edi + eax*4 + 0x4c]
// 005381be  894c2410             mov dword ptr [esp + 0x10], ecx
// 005381c2  8b4c8f14             mov ecx, dword ptr [edi + ecx*4 + 0x14]
// 005381c6  51                   push ecx
// 005381c7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005381cb  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 005381ce  51                   push ecx
// 005381cf  56                   push esi
// 005381d0  e88bfeffff           call 0x538060
// 005381d5  8b542428             mov edx, dword ptr [esp + 0x28]
// 005381d9  8b04aa               mov eax, dword ptr [edx + ebp*4]
// 005381dc  0fbf08               movsx ecx, word ptr [eax]
// 005381df  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005381e3  8344242404           add dword ptr [esp + 0x24], 4
// 005381e8  45                   inc ebp
// 005381e9  83c40c               add esp, 0xc
// 005381ec  894c9714             mov dword ptr [edi + edx*4 + 0x14], ecx
// 005381f0  3bae00010000         cmp ebp, dword ptr [esi + 0x100]
// 005381f6  7cab                 jl 0x5381a3
// 005381f8  5b                   pop ebx
// 005381f9  5f                   pop edi
// 005381fa  5e                   pop esi
// 005381fb  b001                 mov al, 1
// 005381fd  5d                   pop ebp
// 005381fe  59                   pop ecx
// 005381ff  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_mcu_gather)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
