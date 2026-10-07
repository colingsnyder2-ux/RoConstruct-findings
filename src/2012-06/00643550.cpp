// roc 2012-06 00643550  unit: seg_00640000  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00643550
//
// 00643550  53                   push ebx
// 00643551  55                   push ebp
// 00643552  56                   push esi
// 00643553  8b742410             mov esi, dword ptr [esp + 0x10]
// 00643557  57                   push edi
// 00643558  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0064355b  8b6f04               mov ebp, dword ptr [edi + 4]
// 0064355e  8b1f                 mov ebx, dword ptr [edi]
// 00643560  85ed                 test ebp, ebp
// 00643562  7519                 jne 0x64357d
// 00643564  8b470c               mov eax, dword ptr [edi + 0xc]
// 00643567  56                   push esi
// 00643568  ffd0                 call eax
// 0064356a  83c404               add esp, 4
// 0064356d  84c0                 test al, al
// 0064356f  7507                 jne 0x643578
// 00643571  5f                   pop edi
// 00643572  5e                   pop esi
// 00643573  5d                   pop ebp
// 00643574  32c0                 xor al, al
// 00643576  5b                   pop ebx
// 00643577  c3                   ret 
// 00643578  8b1f                 mov ebx, dword ptr [edi]
// 0064357a  8b6f04               mov ebp, dword ptr [edi + 4]
// 0064357d  0fb603               movzx eax, byte ptr [ebx]
// 00643580  4d                   dec ebp
// 00643581  c1e008               shl eax, 8
// 00643584  43                   inc ebx
// 00643585  89442414             mov dword ptr [esp + 0x14], eax
// 00643589  85ed                 test ebp, ebp
// 0064358b  7516                 jne 0x6435a3
// 0064358d  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00643590  56                   push esi
// 00643591  ffd1                 call ecx
// 00643593  83c404               add esp, 4
// 00643596  84c0                 test al, al
// 00643598  74d7                 je 0x643571
// 0064359a  8b1f                 mov ebx, dword ptr [edi]
// 0064359c  8b6f04               mov ebp, dword ptr [edi + 4]
// 0064359f  8b442414             mov eax, dword ptr [esp + 0x14]
// 006435a3  0fb613               movzx edx, byte ptr [ebx]
// 006435a6  8b0e                 mov ecx, dword ptr [esi]
// 006435a8  c741145b000000       mov dword ptr [ecx + 0x14], 0x5b
// 006435af  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 006435b5  8d4410fe             lea eax, [eax + edx - 2]
// 006435b9  8b16                 mov edx, dword ptr [esi]
// 006435bb  894a18               mov dword ptr [edx + 0x18], ecx
// 006435be  8b16                 mov edx, dword ptr [esi]
// 006435c0  89421c               mov dword ptr [edx + 0x1c], eax
// 006435c3  89442414             mov dword ptr [esp + 0x14], eax
// 006435c7  8b06                 mov eax, dword ptr [esi]
// 006435c9  8b4804               mov ecx, dword ptr [eax + 4]
// 006435cc  6a01                 push 1
// 006435ce  56                   push esi
// 006435cf  ffd1                 call ecx
// 006435d1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006435d5  43                   inc ebx
// 006435d6  4d                   dec ebp
// 006435d7  83c408               add esp, 8
// 006435da  891f                 mov dword ptr [edi], ebx
// 006435dc  896f04               mov dword ptr [edi + 4], ebp
// 006435df  85c0                 test eax, eax
// 006435e1  7e0d                 jle 0x6435f0
// 006435e3  8b5618               mov edx, dword ptr [esi + 0x18]
// 006435e6  50                   push eax
// 006435e7  8b4210               mov eax, dword ptr [edx + 0x10]
// 006435ea  56                   push esi
// 006435eb  ffd0                 call eax
// 006435ed  83c408               add esp, 8
// 006435f0  5f                   pop edi
// 006435f1  5e                   pop esi
// 006435f2  5d                   pop ebp
// 006435f3  b001                 mov al, 1
// 006435f5  5b                   pop ebx
// 006435f6  c3                   ret 
// library jpeg-6b/jdmarker.c (function _skip_variable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
