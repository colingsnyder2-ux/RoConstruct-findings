// from server: 100% by auto
// roc 2010-06 00561cf0  unit: G3D::_internal::DialogTemplate  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00561cf0
//
// 00561cf0  83f90c               cmp ecx, 0xc
// 00561cf3  0f8282000000         jb 0x561d7b
// 00561cf9  803841               cmp byte ptr [eax], 0x41
// 00561cfc  757d                 jne 0x561d7b
// 00561cfe  80780164             cmp byte ptr [eax + 1], 0x64
// 00561d02  7577                 jne 0x561d7b
// 00561d04  8078026f             cmp byte ptr [eax + 2], 0x6f
// 00561d08  7571                 jne 0x561d7b
// 00561d0a  80780362             cmp byte ptr [eax + 3], 0x62
// 00561d0e  756b                 jne 0x561d7b
// 00561d10  80780465             cmp byte ptr [eax + 4], 0x65
// 00561d14  7565                 jne 0x561d7b
// 00561d16  0fb65007             movzx edx, byte ptr [eax + 7]
// 00561d1a  0fb64808             movzx ecx, byte ptr [eax + 8]
// 00561d1e  53                   push ebx
// 00561d1f  0fb6580b             movzx ebx, byte ptr [eax + 0xb]
// 00561d23  55                   push ebp
// 00561d24  0fb66805             movzx ebp, byte ptr [eax + 5]
// 00561d28  57                   push edi
// 00561d29  0fb67809             movzx edi, byte ptr [eax + 9]
// 00561d2d  c1e208               shl edx, 8
// 00561d30  03d1                 add edx, ecx
// 00561d32  0fb6480a             movzx ecx, byte ptr [eax + 0xa]
// 00561d36  0fb64006             movzx eax, byte ptr [eax + 6]
// 00561d3a  c1e708               shl edi, 8
// 00561d3d  03f9                 add edi, ecx
// 00561d3f  8b0e                 mov ecx, dword ptr [esi]
// 00561d41  83c118               add ecx, 0x18
// 00561d44  c1e508               shl ebp, 8
// 00561d47  03e8                 add ebp, eax
// 00561d49  8929                 mov dword ptr [ecx], ebp
// 00561d4b  895104               mov dword ptr [ecx + 4], edx
// 00561d4e  897908               mov dword ptr [ecx + 8], edi
// 00561d51  89590c               mov dword ptr [ecx + 0xc], ebx
// 00561d54  8b0e                 mov ecx, dword ptr [esi]
// 00561d56  c741144c000000       mov dword ptr [ecx + 0x14], 0x4c
// 00561d5d  8b16                 mov edx, dword ptr [esi]
// 00561d5f  8b4204               mov eax, dword ptr [edx + 4]
// 00561d62  6a01                 push 1
// 00561d64  56                   push esi
// 00561d65  ffd0                 call eax
// 00561d67  83c408               add esp, 8
// 00561d6a  5f                   pop edi
// 00561d6b  5d                   pop ebp
// 00561d6c  889e09010000         mov byte ptr [esi + 0x109], bl
// 00561d72  c6860801000001       mov byte ptr [esi + 0x108], 1
// 00561d79  5b                   pop ebx
// 00561d7a  c3                   ret 
// 00561d7b  8b16                 mov edx, dword ptr [esi]
// 00561d7d  8b442404             mov eax, dword ptr [esp + 4]
// 00561d81  c742144e000000       mov dword ptr [edx + 0x14], 0x4e
// 00561d88  8b16                 mov edx, dword ptr [esi]
// 00561d8a  03c8                 add ecx, eax
// 00561d8c  894a18               mov dword ptr [edx + 0x18], ecx
// 00561d8f  8b06                 mov eax, dword ptr [esi]
// 00561d91  8b4804               mov ecx, dword ptr [eax + 4]
// 00561d94  6a01                 push 1
// 00561d96  56                   push esi
// 00561d97  ffd1                 call ecx
// 00561d99  83c408               add esp, 8
// 00561d9c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app14)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
