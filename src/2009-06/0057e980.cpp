// roc 2009-06 0057e980  unit: G3D::_internal::DialogTemplate  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057e980
//
// 0057e980  53                   push ebx
// 0057e981  55                   push ebp
// 0057e982  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0057e986  56                   push esi
// 0057e987  8b7518               mov esi, dword ptr [ebp + 0x18]
// 0057e98a  8b1e                 mov ebx, dword ptr [esi]
// 0057e98c  57                   push edi
// 0057e98d  8b7e04               mov edi, dword ptr [esi + 4]
// 0057e990  85ff                 test edi, edi
// 0057e992  7519                 jne 0x57e9ad
// 0057e994  8b460c               mov eax, dword ptr [esi + 0xc]
// 0057e997  55                   push ebp
// 0057e998  ffd0                 call eax
// 0057e99a  83c404               add esp, 4
// 0057e99d  84c0                 test al, al
// 0057e99f  7507                 jne 0x57e9a8
// 0057e9a1  5f                   pop edi
// 0057e9a2  5e                   pop esi
// 0057e9a3  5d                   pop ebp
// 0057e9a4  32c0                 xor al, al
// 0057e9a6  5b                   pop ebx
// 0057e9a7  c3                   ret 
// 0057e9a8  8b1e                 mov ebx, dword ptr [esi]
// 0057e9aa  8b7e04               mov edi, dword ptr [esi + 4]
// 0057e9ad  0fb60b               movzx ecx, byte ptr [ebx]
// 0057e9b0  4f                   dec edi
// 0057e9b1  43                   inc ebx
// 0057e9b2  894c2414             mov dword ptr [esp + 0x14], ecx
// 0057e9b6  85ff                 test edi, edi
// 0057e9b8  7516                 jne 0x57e9d0
// 0057e9ba  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0057e9bd  55                   push ebp
// 0057e9be  ffd1                 call ecx
// 0057e9c0  83c404               add esp, 4
// 0057e9c3  84c0                 test al, al
// 0057e9c5  74da                 je 0x57e9a1
// 0057e9c7  8b1e                 mov ebx, dword ptr [esi]
// 0057e9c9  8b7e04               mov edi, dword ptr [esi + 4]
// 0057e9cc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057e9d0  0fb603               movzx eax, byte ptr [ebx]
// 0057e9d3  4f                   dec edi
// 0057e9d4  43                   inc ebx
// 0057e9d5  89442414             mov dword ptr [esp + 0x14], eax
// 0057e9d9  81f9ff000000         cmp ecx, 0xff
// 0057e9df  7507                 jne 0x57e9e8
// 0057e9e1  3dd8000000           cmp eax, 0xd8
// 0057e9e6  7425                 je 0x57ea0d
// 0057e9e8  8b5500               mov edx, dword ptr [ebp]
// 0057e9eb  c7421435000000       mov dword ptr [edx + 0x14], 0x35
// 0057e9f2  8b5500               mov edx, dword ptr [ebp]
// 0057e9f5  894a18               mov dword ptr [edx + 0x18], ecx
// 0057e9f8  8b4d00               mov ecx, dword ptr [ebp]
// 0057e9fb  89411c               mov dword ptr [ecx + 0x1c], eax
// 0057e9fe  8b5500               mov edx, dword ptr [ebp]
// 0057ea01  8b02                 mov eax, dword ptr [edx]
// 0057ea03  55                   push ebp
// 0057ea04  ffd0                 call eax
// 0057ea06  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057ea0a  83c404               add esp, 4
// 0057ea0d  89857c010000         mov dword ptr [ebp + 0x17c], eax
// 0057ea13  897e04               mov dword ptr [esi + 4], edi
// 0057ea16  5f                   pop edi
// 0057ea17  891e                 mov dword ptr [esi], ebx
// 0057ea19  5e                   pop esi
// 0057ea1a  5d                   pop ebp
// 0057ea1b  b001                 mov al, 1
// 0057ea1d  5b                   pop ebx
// 0057ea1e  c3                   ret 
// library jpeg-6b/jdmarker.c (function _first_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
