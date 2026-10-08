// from server: 100% by auto
// roc 2010-06 00585fb0  unit: seg_00580000  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00585fb0
//
// 00585fb0  51                   push ecx
// 00585fb1  55                   push ebp
// 00585fb2  56                   push esi
// 00585fb3  8b742410             mov esi, dword ptr [esp + 0x10]
// 00585fb7  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 00585fbe  57                   push edi
// 00585fbf  8bbe5c010000         mov edi, dword ptr [esi + 0x15c]
// 00585fc5  7437                 je 0x585ffe
// 00585fc7  837f2400             cmp dword ptr [edi + 0x24], 0
// 00585fcb  752e                 jne 0x585ffb
// 00585fcd  33c0                 xor eax, eax
// 00585fcf  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 00585fd5  7e1b                 jle 0x585ff2
// 00585fd7  8d4f14               lea ecx, [edi + 0x14]
// 00585fda  8d9b00000000         lea ebx, [ebx]
// 00585fe0  c70100000000         mov dword ptr [ecx], 0
// 00585fe6  40                   inc eax
// 00585fe7  83c104               add ecx, 4
// 00585fea  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00585ff0  7cee                 jl 0x585fe0
// 00585ff2  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00585ff8  894724               mov dword ptr [edi + 0x24], eax
// 00585ffb  ff4f24               dec dword ptr [edi + 0x24]
// 00585ffe  33ed                 xor ebp, ebp
// 00586000  39ae00010000         cmp dword ptr [esi + 0x100], ebp
// 00586006  7e61                 jle 0x586069
// 00586008  8d8e04010000         lea ecx, [esi + 0x104]
// 0058600e  894c2414             mov dword ptr [esp + 0x14], ecx
// 00586012  53                   push ebx
// 00586013  8b542418             mov edx, dword ptr [esp + 0x18]
// 00586017  8b0a                 mov ecx, dword ptr [edx]
// 00586019  8b848ee8000000       mov eax, dword ptr [esi + ecx*4 + 0xe8]
// 00586020  8b5018               mov edx, dword ptr [eax + 0x18]
// 00586023  8b4014               mov eax, dword ptr [eax + 0x14]
// 00586026  8b5c975c             mov ebx, dword ptr [edi + edx*4 + 0x5c]
// 0058602a  8b44874c             mov eax, dword ptr [edi + eax*4 + 0x4c]
// 0058602e  894c2410             mov dword ptr [esp + 0x10], ecx
// 00586032  8b4c8f14             mov ecx, dword ptr [edi + ecx*4 + 0x14]
// 00586036  51                   push ecx
// 00586037  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0058603b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0058603e  51                   push ecx
// 0058603f  56                   push esi
// 00586040  e88bfeffff           call 0x585ed0
// 00586045  8b542428             mov edx, dword ptr [esp + 0x28]
// 00586049  8b04aa               mov eax, dword ptr [edx + ebp*4]
// 0058604c  0fbf08               movsx ecx, word ptr [eax]
// 0058604f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00586053  8344242404           add dword ptr [esp + 0x24], 4
// 00586058  45                   inc ebp
// 00586059  83c40c               add esp, 0xc
// 0058605c  894c9714             mov dword ptr [edi + edx*4 + 0x14], ecx
// 00586060  3bae00010000         cmp ebp, dword ptr [esi + 0x100]
// 00586066  7cab                 jl 0x586013
// 00586068  5b                   pop ebx
// 00586069  5f                   pop edi
// 0058606a  5e                   pop esi
// 0058606b  b001                 mov al, 1
// 0058606d  5d                   pop ebp
// 0058606e  59                   pop ecx
// 0058606f  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_mcu_gather)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
