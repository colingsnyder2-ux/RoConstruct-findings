// roc 2009-12 00624450  unit: seg_00620000  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00624450
//
// 00624450  51                   push ecx
// 00624451  55                   push ebp
// 00624452  56                   push esi
// 00624453  8b742410             mov esi, dword ptr [esp + 0x10]
// 00624457  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 0062445e  57                   push edi
// 0062445f  8bbe5c010000         mov edi, dword ptr [esi + 0x15c]
// 00624465  7437                 je 0x62449e
// 00624467  837f2400             cmp dword ptr [edi + 0x24], 0
// 0062446b  752e                 jne 0x62449b
// 0062446d  33c0                 xor eax, eax
// 0062446f  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 00624475  7e1b                 jle 0x624492
// 00624477  8d4f14               lea ecx, [edi + 0x14]
// 0062447a  8d9b00000000         lea ebx, [ebx]
// 00624480  c70100000000         mov dword ptr [ecx], 0
// 00624486  40                   inc eax
// 00624487  83c104               add ecx, 4
// 0062448a  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00624490  7cee                 jl 0x624480
// 00624492  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00624498  894724               mov dword ptr [edi + 0x24], eax
// 0062449b  ff4f24               dec dword ptr [edi + 0x24]
// 0062449e  33ed                 xor ebp, ebp
// 006244a0  39ae00010000         cmp dword ptr [esi + 0x100], ebp
// 006244a6  7e61                 jle 0x624509
// 006244a8  8d8e04010000         lea ecx, [esi + 0x104]
// 006244ae  894c2414             mov dword ptr [esp + 0x14], ecx
// 006244b2  53                   push ebx
// 006244b3  8b542418             mov edx, dword ptr [esp + 0x18]
// 006244b7  8b0a                 mov ecx, dword ptr [edx]
// 006244b9  8b848ee8000000       mov eax, dword ptr [esi + ecx*4 + 0xe8]
// 006244c0  8b5018               mov edx, dword ptr [eax + 0x18]
// 006244c3  8b4014               mov eax, dword ptr [eax + 0x14]
// 006244c6  8b5c975c             mov ebx, dword ptr [edi + edx*4 + 0x5c]
// 006244ca  8b44874c             mov eax, dword ptr [edi + eax*4 + 0x4c]
// 006244ce  894c2410             mov dword ptr [esp + 0x10], ecx
// 006244d2  8b4c8f14             mov ecx, dword ptr [edi + ecx*4 + 0x14]
// 006244d6  51                   push ecx
// 006244d7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006244db  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 006244de  51                   push ecx
// 006244df  56                   push esi
// 006244e0  e88bfeffff           call 0x624370
// 006244e5  8b542428             mov edx, dword ptr [esp + 0x28]
// 006244e9  8b04aa               mov eax, dword ptr [edx + ebp*4]
// 006244ec  0fbf08               movsx ecx, word ptr [eax]
// 006244ef  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006244f3  8344242404           add dword ptr [esp + 0x24], 4
// 006244f8  45                   inc ebp
// 006244f9  83c40c               add esp, 0xc
// 006244fc  894c9714             mov dword ptr [edi + edx*4 + 0x14], ecx
// 00624500  3bae00010000         cmp ebp, dword ptr [esi + 0x100]
// 00624506  7cab                 jl 0x6244b3
// 00624508  5b                   pop ebx
// 00624509  5f                   pop edi
// 0062450a  5e                   pop esi
// 0062450b  b001                 mov al, 1
// 0062450d  5d                   pop ebp
// 0062450e  59                   pop ecx
// 0062450f  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_mcu_gather)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
