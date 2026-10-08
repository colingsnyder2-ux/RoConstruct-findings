// roc 2009-12 00600760  unit: G3D::_internal::DialogTemplate  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600760
//
// 00600760  53                   push ebx
// 00600761  55                   push ebp
// 00600762  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00600766  56                   push esi
// 00600767  8b7518               mov esi, dword ptr [ebp + 0x18]
// 0060076a  8b1e                 mov ebx, dword ptr [esi]
// 0060076c  57                   push edi
// 0060076d  8b7e04               mov edi, dword ptr [esi + 4]
// 00600770  85ff                 test edi, edi
// 00600772  7519                 jne 0x60078d
// 00600774  8b460c               mov eax, dword ptr [esi + 0xc]
// 00600777  55                   push ebp
// 00600778  ffd0                 call eax
// 0060077a  83c404               add esp, 4
// 0060077d  84c0                 test al, al
// 0060077f  7507                 jne 0x600788
// 00600781  5f                   pop edi
// 00600782  5e                   pop esi
// 00600783  5d                   pop ebp
// 00600784  32c0                 xor al, al
// 00600786  5b                   pop ebx
// 00600787  c3                   ret 
// 00600788  8b1e                 mov ebx, dword ptr [esi]
// 0060078a  8b7e04               mov edi, dword ptr [esi + 4]
// 0060078d  0fb60b               movzx ecx, byte ptr [ebx]
// 00600790  4f                   dec edi
// 00600791  43                   inc ebx
// 00600792  894c2414             mov dword ptr [esp + 0x14], ecx
// 00600796  85ff                 test edi, edi
// 00600798  7516                 jne 0x6007b0
// 0060079a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0060079d  55                   push ebp
// 0060079e  ffd1                 call ecx
// 006007a0  83c404               add esp, 4
// 006007a3  84c0                 test al, al
// 006007a5  74da                 je 0x600781
// 006007a7  8b1e                 mov ebx, dword ptr [esi]
// 006007a9  8b7e04               mov edi, dword ptr [esi + 4]
// 006007ac  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006007b0  0fb603               movzx eax, byte ptr [ebx]
// 006007b3  4f                   dec edi
// 006007b4  43                   inc ebx
// 006007b5  89442414             mov dword ptr [esp + 0x14], eax
// 006007b9  81f9ff000000         cmp ecx, 0xff
// 006007bf  7507                 jne 0x6007c8
// 006007c1  3dd8000000           cmp eax, 0xd8
// 006007c6  7425                 je 0x6007ed
// 006007c8  8b5500               mov edx, dword ptr [ebp]
// 006007cb  c7421435000000       mov dword ptr [edx + 0x14], 0x35
// 006007d2  8b5500               mov edx, dword ptr [ebp]
// 006007d5  894a18               mov dword ptr [edx + 0x18], ecx
// 006007d8  8b4d00               mov ecx, dword ptr [ebp]
// 006007db  89411c               mov dword ptr [ecx + 0x1c], eax
// 006007de  8b5500               mov edx, dword ptr [ebp]
// 006007e1  8b02                 mov eax, dword ptr [edx]
// 006007e3  55                   push ebp
// 006007e4  ffd0                 call eax
// 006007e6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006007ea  83c404               add esp, 4
// 006007ed  89857c010000         mov dword ptr [ebp + 0x17c], eax
// 006007f3  897e04               mov dword ptr [esi + 4], edi
// 006007f6  5f                   pop edi
// 006007f7  891e                 mov dword ptr [esi], ebx
// 006007f9  5e                   pop esi
// 006007fa  5d                   pop ebp
// 006007fb  b001                 mov al, 1
// 006007fd  5b                   pop ebx
// 006007fe  c3                   ret 
// library jpeg-6b/jdmarker.c (function _first_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
