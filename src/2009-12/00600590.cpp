// roc 2009-12 00600590  unit: G3D::_internal::DialogTemplate  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600590
//
// 00600590  53                   push ebx
// 00600591  55                   push ebp
// 00600592  56                   push esi
// 00600593  8b742410             mov esi, dword ptr [esp + 0x10]
// 00600597  57                   push edi
// 00600598  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0060059b  8b6f04               mov ebp, dword ptr [edi + 4]
// 0060059e  8b1f                 mov ebx, dword ptr [edi]
// 006005a0  85ed                 test ebp, ebp
// 006005a2  7519                 jne 0x6005bd
// 006005a4  8b470c               mov eax, dword ptr [edi + 0xc]
// 006005a7  56                   push esi
// 006005a8  ffd0                 call eax
// 006005aa  83c404               add esp, 4
// 006005ad  84c0                 test al, al
// 006005af  7507                 jne 0x6005b8
// 006005b1  5f                   pop edi
// 006005b2  5e                   pop esi
// 006005b3  5d                   pop ebp
// 006005b4  32c0                 xor al, al
// 006005b6  5b                   pop ebx
// 006005b7  c3                   ret 
// 006005b8  8b1f                 mov ebx, dword ptr [edi]
// 006005ba  8b6f04               mov ebp, dword ptr [edi + 4]
// 006005bd  0fb603               movzx eax, byte ptr [ebx]
// 006005c0  4d                   dec ebp
// 006005c1  c1e008               shl eax, 8
// 006005c4  43                   inc ebx
// 006005c5  89442414             mov dword ptr [esp + 0x14], eax
// 006005c9  85ed                 test ebp, ebp
// 006005cb  7516                 jne 0x6005e3
// 006005cd  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 006005d0  56                   push esi
// 006005d1  ffd1                 call ecx
// 006005d3  83c404               add esp, 4
// 006005d6  84c0                 test al, al
// 006005d8  74d7                 je 0x6005b1
// 006005da  8b1f                 mov ebx, dword ptr [edi]
// 006005dc  8b6f04               mov ebp, dword ptr [edi + 4]
// 006005df  8b442414             mov eax, dword ptr [esp + 0x14]
// 006005e3  0fb613               movzx edx, byte ptr [ebx]
// 006005e6  8b0e                 mov ecx, dword ptr [esi]
// 006005e8  c741145b000000       mov dword ptr [ecx + 0x14], 0x5b
// 006005ef  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 006005f5  8d4410fe             lea eax, [eax + edx - 2]
// 006005f9  8b16                 mov edx, dword ptr [esi]
// 006005fb  894a18               mov dword ptr [edx + 0x18], ecx
// 006005fe  8b16                 mov edx, dword ptr [esi]
// 00600600  89421c               mov dword ptr [edx + 0x1c], eax
// 00600603  89442414             mov dword ptr [esp + 0x14], eax
// 00600607  8b06                 mov eax, dword ptr [esi]
// 00600609  8b4804               mov ecx, dword ptr [eax + 4]
// 0060060c  6a01                 push 1
// 0060060e  56                   push esi
// 0060060f  ffd1                 call ecx
// 00600611  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00600615  43                   inc ebx
// 00600616  4d                   dec ebp
// 00600617  83c408               add esp, 8
// 0060061a  891f                 mov dword ptr [edi], ebx
// 0060061c  896f04               mov dword ptr [edi + 4], ebp
// 0060061f  85c0                 test eax, eax
// 00600621  7e0d                 jle 0x600630
// 00600623  8b5618               mov edx, dword ptr [esi + 0x18]
// 00600626  50                   push eax
// 00600627  8b4210               mov eax, dword ptr [edx + 0x10]
// 0060062a  56                   push esi
// 0060062b  ffd0                 call eax
// 0060062d  83c408               add esp, 8
// 00600630  5f                   pop edi
// 00600631  5e                   pop esi
// 00600632  5d                   pop ebp
// 00600633  b001                 mov al, 1
// 00600635  5b                   pop ebx
// 00600636  c3                   ret 
// library jpeg-6b/jdmarker.c (function _skip_variable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
