// roc 2011-06 005566d0  unit: G3D::LineSegment  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005566d0
//
// 005566d0  53                   push ebx
// 005566d1  55                   push ebp
// 005566d2  56                   push esi
// 005566d3  8b742410             mov esi, dword ptr [esp + 0x10]
// 005566d7  57                   push edi
// 005566d8  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005566db  8b6f04               mov ebp, dword ptr [edi + 4]
// 005566de  8b1f                 mov ebx, dword ptr [edi]
// 005566e0  85ed                 test ebp, ebp
// 005566e2  7519                 jne 0x5566fd
// 005566e4  8b470c               mov eax, dword ptr [edi + 0xc]
// 005566e7  56                   push esi
// 005566e8  ffd0                 call eax
// 005566ea  83c404               add esp, 4
// 005566ed  84c0                 test al, al
// 005566ef  7507                 jne 0x5566f8
// 005566f1  5f                   pop edi
// 005566f2  5e                   pop esi
// 005566f3  5d                   pop ebp
// 005566f4  32c0                 xor al, al
// 005566f6  5b                   pop ebx
// 005566f7  c3                   ret 
// 005566f8  8b1f                 mov ebx, dword ptr [edi]
// 005566fa  8b6f04               mov ebp, dword ptr [edi + 4]
// 005566fd  0fb603               movzx eax, byte ptr [ebx]
// 00556700  4d                   dec ebp
// 00556701  c1e008               shl eax, 8
// 00556704  43                   inc ebx
// 00556705  89442414             mov dword ptr [esp + 0x14], eax
// 00556709  85ed                 test ebp, ebp
// 0055670b  7516                 jne 0x556723
// 0055670d  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00556710  56                   push esi
// 00556711  ffd1                 call ecx
// 00556713  83c404               add esp, 4
// 00556716  84c0                 test al, al
// 00556718  74d7                 je 0x5566f1
// 0055671a  8b1f                 mov ebx, dword ptr [edi]
// 0055671c  8b6f04               mov ebp, dword ptr [edi + 4]
// 0055671f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00556723  0fb613               movzx edx, byte ptr [ebx]
// 00556726  8b0e                 mov ecx, dword ptr [esi]
// 00556728  c741145b000000       mov dword ptr [ecx + 0x14], 0x5b
// 0055672f  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 00556735  8d4410fe             lea eax, [eax + edx - 2]
// 00556739  8b16                 mov edx, dword ptr [esi]
// 0055673b  894a18               mov dword ptr [edx + 0x18], ecx
// 0055673e  8b16                 mov edx, dword ptr [esi]
// 00556740  89421c               mov dword ptr [edx + 0x1c], eax
// 00556743  89442414             mov dword ptr [esp + 0x14], eax
// 00556747  8b06                 mov eax, dword ptr [esi]
// 00556749  8b4804               mov ecx, dword ptr [eax + 4]
// 0055674c  6a01                 push 1
// 0055674e  56                   push esi
// 0055674f  ffd1                 call ecx
// 00556751  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00556755  43                   inc ebx
// 00556756  4d                   dec ebp
// 00556757  83c408               add esp, 8
// 0055675a  891f                 mov dword ptr [edi], ebx
// 0055675c  896f04               mov dword ptr [edi + 4], ebp
// 0055675f  85c0                 test eax, eax
// 00556761  7e0d                 jle 0x556770
// 00556763  8b5618               mov edx, dword ptr [esi + 0x18]
// 00556766  50                   push eax
// 00556767  8b4210               mov eax, dword ptr [edx + 0x10]
// 0055676a  56                   push esi
// 0055676b  ffd0                 call eax
// 0055676d  83c408               add esp, 8
// 00556770  5f                   pop edi
// 00556771  5e                   pop esi
// 00556772  5d                   pop ebp
// 00556773  b001                 mov al, 1
// 00556775  5b                   pop ebx
// 00556776  c3                   ret 
// library jpeg-6b/jdmarker.c (function _skip_variable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
