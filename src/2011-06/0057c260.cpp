// roc 2011-06 0057c260  unit: seg_00570000  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057c260
//
// 0057c260  51                   push ecx
// 0057c261  55                   push ebp
// 0057c262  56                   push esi
// 0057c263  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057c267  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 0057c26e  57                   push edi
// 0057c26f  8bbe5c010000         mov edi, dword ptr [esi + 0x15c]
// 0057c275  7437                 je 0x57c2ae
// 0057c277  837f2400             cmp dword ptr [edi + 0x24], 0
// 0057c27b  752e                 jne 0x57c2ab
// 0057c27d  33c0                 xor eax, eax
// 0057c27f  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 0057c285  7e1b                 jle 0x57c2a2
// 0057c287  8d4f14               lea ecx, [edi + 0x14]
// 0057c28a  8d9b00000000         lea ebx, [ebx]
// 0057c290  c70100000000         mov dword ptr [ecx], 0
// 0057c296  40                   inc eax
// 0057c297  83c104               add ecx, 4
// 0057c29a  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 0057c2a0  7cee                 jl 0x57c290
// 0057c2a2  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0057c2a8  894724               mov dword ptr [edi + 0x24], eax
// 0057c2ab  ff4f24               dec dword ptr [edi + 0x24]
// 0057c2ae  33ed                 xor ebp, ebp
// 0057c2b0  39ae00010000         cmp dword ptr [esi + 0x100], ebp
// 0057c2b6  7e61                 jle 0x57c319
// 0057c2b8  8d8e04010000         lea ecx, [esi + 0x104]
// 0057c2be  894c2414             mov dword ptr [esp + 0x14], ecx
// 0057c2c2  53                   push ebx
// 0057c2c3  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057c2c7  8b0a                 mov ecx, dword ptr [edx]
// 0057c2c9  8b848ee8000000       mov eax, dword ptr [esi + ecx*4 + 0xe8]
// 0057c2d0  8b5018               mov edx, dword ptr [eax + 0x18]
// 0057c2d3  8b4014               mov eax, dword ptr [eax + 0x14]
// 0057c2d6  8b5c975c             mov ebx, dword ptr [edi + edx*4 + 0x5c]
// 0057c2da  8b44874c             mov eax, dword ptr [edi + eax*4 + 0x4c]
// 0057c2de  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057c2e2  8b4c8f14             mov ecx, dword ptr [edi + ecx*4 + 0x14]
// 0057c2e6  51                   push ecx
// 0057c2e7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057c2eb  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0057c2ee  51                   push ecx
// 0057c2ef  56                   push esi
// 0057c2f0  e88bfeffff           call 0x57c180
// 0057c2f5  8b542428             mov edx, dword ptr [esp + 0x28]
// 0057c2f9  8b04aa               mov eax, dword ptr [edx + ebp*4]
// 0057c2fc  0fbf08               movsx ecx, word ptr [eax]
// 0057c2ff  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057c303  8344242404           add dword ptr [esp + 0x24], 4
// 0057c308  45                   inc ebp
// 0057c309  83c40c               add esp, 0xc
// 0057c30c  894c9714             mov dword ptr [edi + edx*4 + 0x14], ecx
// 0057c310  3bae00010000         cmp ebp, dword ptr [esi + 0x100]
// 0057c316  7cab                 jl 0x57c2c3
// 0057c318  5b                   pop ebx
// 0057c319  5f                   pop edi
// 0057c31a  5e                   pop esi
// 0057c31b  b001                 mov al, 1
// 0057c31d  5d                   pop ebp
// 0057c31e  59                   pop ecx
// 0057c31f  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_mcu_gather)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
