// roc 2010-06 005620d0  unit: G3D::_internal::DialogTemplate  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005620d0
//
// 005620d0  53                   push ebx
// 005620d1  55                   push ebp
// 005620d2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005620d6  56                   push esi
// 005620d7  8b7518               mov esi, dword ptr [ebp + 0x18]
// 005620da  8b1e                 mov ebx, dword ptr [esi]
// 005620dc  57                   push edi
// 005620dd  8b7e04               mov edi, dword ptr [esi + 4]
// 005620e0  85ff                 test edi, edi
// 005620e2  7519                 jne 0x5620fd
// 005620e4  8b460c               mov eax, dword ptr [esi + 0xc]
// 005620e7  55                   push ebp
// 005620e8  ffd0                 call eax
// 005620ea  83c404               add esp, 4
// 005620ed  84c0                 test al, al
// 005620ef  7507                 jne 0x5620f8
// 005620f1  5f                   pop edi
// 005620f2  5e                   pop esi
// 005620f3  5d                   pop ebp
// 005620f4  32c0                 xor al, al
// 005620f6  5b                   pop ebx
// 005620f7  c3                   ret 
// 005620f8  8b1e                 mov ebx, dword ptr [esi]
// 005620fa  8b7e04               mov edi, dword ptr [esi + 4]
// 005620fd  0fb60b               movzx ecx, byte ptr [ebx]
// 00562100  4f                   dec edi
// 00562101  43                   inc ebx
// 00562102  894c2414             mov dword ptr [esp + 0x14], ecx
// 00562106  85ff                 test edi, edi
// 00562108  7516                 jne 0x562120
// 0056210a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0056210d  55                   push ebp
// 0056210e  ffd1                 call ecx
// 00562110  83c404               add esp, 4
// 00562113  84c0                 test al, al
// 00562115  74da                 je 0x5620f1
// 00562117  8b1e                 mov ebx, dword ptr [esi]
// 00562119  8b7e04               mov edi, dword ptr [esi + 4]
// 0056211c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00562120  0fb603               movzx eax, byte ptr [ebx]
// 00562123  4f                   dec edi
// 00562124  43                   inc ebx
// 00562125  89442414             mov dword ptr [esp + 0x14], eax
// 00562129  81f9ff000000         cmp ecx, 0xff
// 0056212f  7507                 jne 0x562138
// 00562131  3dd8000000           cmp eax, 0xd8
// 00562136  7425                 je 0x56215d
// 00562138  8b5500               mov edx, dword ptr [ebp]
// 0056213b  c7421435000000       mov dword ptr [edx + 0x14], 0x35
// 00562142  8b5500               mov edx, dword ptr [ebp]
// 00562145  894a18               mov dword ptr [edx + 0x18], ecx
// 00562148  8b4d00               mov ecx, dword ptr [ebp]
// 0056214b  89411c               mov dword ptr [ecx + 0x1c], eax
// 0056214e  8b5500               mov edx, dword ptr [ebp]
// 00562151  8b02                 mov eax, dword ptr [edx]
// 00562153  55                   push ebp
// 00562154  ffd0                 call eax
// 00562156  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056215a  83c404               add esp, 4
// 0056215d  89857c010000         mov dword ptr [ebp + 0x17c], eax
// 00562163  897e04               mov dword ptr [esi + 4], edi
// 00562166  5f                   pop edi
// 00562167  891e                 mov dword ptr [esi], ebx
// 00562169  5e                   pop esi
// 0056216a  5d                   pop ebp
// 0056216b  b001                 mov al, 1
// 0056216d  5b                   pop ebx
// 0056216e  c3                   ret 
// library jpeg-6b/jdmarker.c (function _first_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
