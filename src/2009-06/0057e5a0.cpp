// from server: 100% by auto
// roc 2009-06 0057e5a0  unit: G3D::_internal::DialogTemplate  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057e5a0
//
// 0057e5a0  83f90c               cmp ecx, 0xc
// 0057e5a3  0f8282000000         jb 0x57e62b
// 0057e5a9  803841               cmp byte ptr [eax], 0x41
// 0057e5ac  757d                 jne 0x57e62b
// 0057e5ae  80780164             cmp byte ptr [eax + 1], 0x64
// 0057e5b2  7577                 jne 0x57e62b
// 0057e5b4  8078026f             cmp byte ptr [eax + 2], 0x6f
// 0057e5b8  7571                 jne 0x57e62b
// 0057e5ba  80780362             cmp byte ptr [eax + 3], 0x62
// 0057e5be  756b                 jne 0x57e62b
// 0057e5c0  80780465             cmp byte ptr [eax + 4], 0x65
// 0057e5c4  7565                 jne 0x57e62b
// 0057e5c6  0fb65007             movzx edx, byte ptr [eax + 7]
// 0057e5ca  0fb64808             movzx ecx, byte ptr [eax + 8]
// 0057e5ce  53                   push ebx
// 0057e5cf  0fb6580b             movzx ebx, byte ptr [eax + 0xb]
// 0057e5d3  55                   push ebp
// 0057e5d4  0fb66805             movzx ebp, byte ptr [eax + 5]
// 0057e5d8  57                   push edi
// 0057e5d9  0fb67809             movzx edi, byte ptr [eax + 9]
// 0057e5dd  c1e208               shl edx, 8
// 0057e5e0  03d1                 add edx, ecx
// 0057e5e2  0fb6480a             movzx ecx, byte ptr [eax + 0xa]
// 0057e5e6  0fb64006             movzx eax, byte ptr [eax + 6]
// 0057e5ea  c1e708               shl edi, 8
// 0057e5ed  03f9                 add edi, ecx
// 0057e5ef  8b0e                 mov ecx, dword ptr [esi]
// 0057e5f1  83c118               add ecx, 0x18
// 0057e5f4  c1e508               shl ebp, 8
// 0057e5f7  03e8                 add ebp, eax
// 0057e5f9  8929                 mov dword ptr [ecx], ebp
// 0057e5fb  895104               mov dword ptr [ecx + 4], edx
// 0057e5fe  897908               mov dword ptr [ecx + 8], edi
// 0057e601  89590c               mov dword ptr [ecx + 0xc], ebx
// 0057e604  8b0e                 mov ecx, dword ptr [esi]
// 0057e606  c741144c000000       mov dword ptr [ecx + 0x14], 0x4c
// 0057e60d  8b16                 mov edx, dword ptr [esi]
// 0057e60f  8b4204               mov eax, dword ptr [edx + 4]
// 0057e612  6a01                 push 1
// 0057e614  56                   push esi
// 0057e615  ffd0                 call eax
// 0057e617  83c408               add esp, 8
// 0057e61a  5f                   pop edi
// 0057e61b  5d                   pop ebp
// 0057e61c  889e09010000         mov byte ptr [esi + 0x109], bl
// 0057e622  c6860801000001       mov byte ptr [esi + 0x108], 1
// 0057e629  5b                   pop ebx
// 0057e62a  c3                   ret 
// 0057e62b  8b16                 mov edx, dword ptr [esi]
// 0057e62d  8b442404             mov eax, dword ptr [esp + 4]
// 0057e631  c742144e000000       mov dword ptr [edx + 0x14], 0x4e
// 0057e638  8b16                 mov edx, dword ptr [esi]
// 0057e63a  03c8                 add ecx, eax
// 0057e63c  894a18               mov dword ptr [edx + 0x18], ecx
// 0057e63f  8b06                 mov eax, dword ptr [esi]
// 0057e641  8b4804               mov ecx, dword ptr [eax + 4]
// 0057e644  6a01                 push 1
// 0057e646  56                   push esi
// 0057e647  ffd1                 call ecx
// 0057e649  83c408               add esp, 8
// 0057e64c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app14)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
