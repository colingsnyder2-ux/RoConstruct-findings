// roc 2007-03 00507970  unit: seg_00500000  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00507970
//
// 00507970  53                   push ebx
// 00507971  55                   push ebp
// 00507972  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00507976  56                   push esi
// 00507977  8b7518               mov esi, dword ptr [ebp + 0x18]
// 0050797a  8b1e                 mov ebx, dword ptr [esi]
// 0050797c  57                   push edi
// 0050797d  8b7e04               mov edi, dword ptr [esi + 4]
// 00507980  85ff                 test edi, edi
// 00507982  7519                 jne 0x50799d
// 00507984  8b460c               mov eax, dword ptr [esi + 0xc]
// 00507987  55                   push ebp
// 00507988  ffd0                 call eax
// 0050798a  83c404               add esp, 4
// 0050798d  84c0                 test al, al
// 0050798f  7507                 jne 0x507998
// 00507991  5f                   pop edi
// 00507992  5e                   pop esi
// 00507993  5d                   pop ebp
// 00507994  32c0                 xor al, al
// 00507996  5b                   pop ebx
// 00507997  c3                   ret 
// 00507998  8b1e                 mov ebx, dword ptr [esi]
// 0050799a  8b7e04               mov edi, dword ptr [esi + 4]
// 0050799d  0fb60b               movzx ecx, byte ptr [ebx]
// 005079a0  83ef01               sub edi, 1
// 005079a3  83c301               add ebx, 1
// 005079a6  85ff                 test edi, edi
// 005079a8  894c2414             mov dword ptr [esp + 0x14], ecx
// 005079ac  7516                 jne 0x5079c4
// 005079ae  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005079b1  55                   push ebp
// 005079b2  ffd1                 call ecx
// 005079b4  83c404               add esp, 4
// 005079b7  84c0                 test al, al
// 005079b9  74d6                 je 0x507991
// 005079bb  8b1e                 mov ebx, dword ptr [esi]
// 005079bd  8b7e04               mov edi, dword ptr [esi + 4]
// 005079c0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005079c4  0fb603               movzx eax, byte ptr [ebx]
// 005079c7  83ef01               sub edi, 1
// 005079ca  83c301               add ebx, 1
// 005079cd  81f9ff000000         cmp ecx, 0xff
// 005079d3  89442414             mov dword ptr [esp + 0x14], eax
// 005079d7  7507                 jne 0x5079e0
// 005079d9  3dd8000000           cmp eax, 0xd8
// 005079de  7425                 je 0x507a05
// 005079e0  8b5500               mov edx, dword ptr [ebp]
// 005079e3  c7421435000000       mov dword ptr [edx + 0x14], 0x35
// 005079ea  8b5500               mov edx, dword ptr [ebp]
// 005079ed  894a18               mov dword ptr [edx + 0x18], ecx
// 005079f0  8b4d00               mov ecx, dword ptr [ebp]
// 005079f3  89411c               mov dword ptr [ecx + 0x1c], eax
// 005079f6  8b5500               mov edx, dword ptr [ebp]
// 005079f9  8b02                 mov eax, dword ptr [edx]
// 005079fb  55                   push ebp
// 005079fc  ffd0                 call eax
// 005079fe  8b442418             mov eax, dword ptr [esp + 0x18]
// 00507a02  83c404               add esp, 4
// 00507a05  89857c010000         mov dword ptr [ebp + 0x17c], eax
// 00507a0b  897e04               mov dword ptr [esi + 4], edi
// 00507a0e  5f                   pop edi
// 00507a0f  891e                 mov dword ptr [esi], ebx
// 00507a11  5e                   pop esi
// 00507a12  5d                   pop ebp
// 00507a13  b001                 mov al, 1
// 00507a15  5b                   pop ebx
// 00507a16  c3                   ret 
// library jpeg-6b/jdmarker.c (function _first_marker)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
