// roc 2012-06 00667970  unit: seg_00660000  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00667970
//
// 00667970  51                   push ecx
// 00667971  55                   push ebp
// 00667972  56                   push esi
// 00667973  8b742410             mov esi, dword ptr [esp + 0x10]
// 00667977  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 0066797e  57                   push edi
// 0066797f  8bbe5c010000         mov edi, dword ptr [esi + 0x15c]
// 00667985  7437                 je 0x6679be
// 00667987  837f2400             cmp dword ptr [edi + 0x24], 0
// 0066798b  752e                 jne 0x6679bb
// 0066798d  33c0                 xor eax, eax
// 0066798f  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 00667995  7e1b                 jle 0x6679b2
// 00667997  8d4f14               lea ecx, [edi + 0x14]
// 0066799a  8d9b00000000         lea ebx, [ebx]
// 006679a0  c70100000000         mov dword ptr [ecx], 0
// 006679a6  40                   inc eax
// 006679a7  83c104               add ecx, 4
// 006679aa  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 006679b0  7cee                 jl 0x6679a0
// 006679b2  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 006679b8  894724               mov dword ptr [edi + 0x24], eax
// 006679bb  ff4f24               dec dword ptr [edi + 0x24]
// 006679be  33ed                 xor ebp, ebp
// 006679c0  39ae00010000         cmp dword ptr [esi + 0x100], ebp
// 006679c6  7e61                 jle 0x667a29
// 006679c8  8d8e04010000         lea ecx, [esi + 0x104]
// 006679ce  894c2414             mov dword ptr [esp + 0x14], ecx
// 006679d2  53                   push ebx
// 006679d3  8b542418             mov edx, dword ptr [esp + 0x18]
// 006679d7  8b0a                 mov ecx, dword ptr [edx]
// 006679d9  8b848ee8000000       mov eax, dword ptr [esi + ecx*4 + 0xe8]
// 006679e0  8b5018               mov edx, dword ptr [eax + 0x18]
// 006679e3  8b4014               mov eax, dword ptr [eax + 0x14]
// 006679e6  8b5c975c             mov ebx, dword ptr [edi + edx*4 + 0x5c]
// 006679ea  8b44874c             mov eax, dword ptr [edi + eax*4 + 0x4c]
// 006679ee  894c2410             mov dword ptr [esp + 0x10], ecx
// 006679f2  8b4c8f14             mov ecx, dword ptr [edi + ecx*4 + 0x14]
// 006679f6  51                   push ecx
// 006679f7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006679fb  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 006679fe  51                   push ecx
// 006679ff  56                   push esi
// 00667a00  e88bfeffff           call 0x667890
// 00667a05  8b542428             mov edx, dword ptr [esp + 0x28]
// 00667a09  8b04aa               mov eax, dword ptr [edx + ebp*4]
// 00667a0c  0fbf08               movsx ecx, word ptr [eax]
// 00667a0f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00667a13  8344242404           add dword ptr [esp + 0x24], 4
// 00667a18  45                   inc ebp
// 00667a19  83c40c               add esp, 0xc
// 00667a1c  894c9714             mov dword ptr [edi + edx*4 + 0x14], ecx
// 00667a20  3bae00010000         cmp ebp, dword ptr [esi + 0x100]
// 00667a26  7cab                 jl 0x6679d3
// 00667a28  5b                   pop ebx
// 00667a29  5f                   pop edi
// 00667a2a  5e                   pop esi
// 00667a2b  b001                 mov al, 1
// 00667a2d  5d                   pop ebp
// 00667a2e  59                   pop ecx
// 00667a2f  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_mcu_gather)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
