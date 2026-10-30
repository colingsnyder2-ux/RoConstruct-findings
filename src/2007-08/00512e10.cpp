// from server: 100% by auto
// roc 2007-08 00512e10  unit: G3D::_internal::DialogTemplate  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00512e10
//
// 00512e10  83f90c               cmp ecx, 0xc
// 00512e13  0f8282000000         jb 0x512e9b
// 00512e19  803841               cmp byte ptr [eax], 0x41
// 00512e1c  757d                 jne 0x512e9b
// 00512e1e  80780164             cmp byte ptr [eax + 1], 0x64
// 00512e22  7577                 jne 0x512e9b
// 00512e24  8078026f             cmp byte ptr [eax + 2], 0x6f
// 00512e28  7571                 jne 0x512e9b
// 00512e2a  80780362             cmp byte ptr [eax + 3], 0x62
// 00512e2e  756b                 jne 0x512e9b
// 00512e30  80780465             cmp byte ptr [eax + 4], 0x65
// 00512e34  7565                 jne 0x512e9b
// 00512e36  0fb65007             movzx edx, byte ptr [eax + 7]
// 00512e3a  0fb64808             movzx ecx, byte ptr [eax + 8]
// 00512e3e  53                   push ebx
// 00512e3f  0fb6580b             movzx ebx, byte ptr [eax + 0xb]
// 00512e43  55                   push ebp
// 00512e44  0fb66805             movzx ebp, byte ptr [eax + 5]
// 00512e48  57                   push edi
// 00512e49  0fb67809             movzx edi, byte ptr [eax + 9]
// 00512e4d  c1e208               shl edx, 8
// 00512e50  03d1                 add edx, ecx
// 00512e52  0fb6480a             movzx ecx, byte ptr [eax + 0xa]
// 00512e56  0fb64006             movzx eax, byte ptr [eax + 6]
// 00512e5a  c1e708               shl edi, 8
// 00512e5d  03f9                 add edi, ecx
// 00512e5f  8b0e                 mov ecx, dword ptr [esi]
// 00512e61  83c118               add ecx, 0x18
// 00512e64  c1e508               shl ebp, 8
// 00512e67  03e8                 add ebp, eax
// 00512e69  8929                 mov dword ptr [ecx], ebp
// 00512e6b  895104               mov dword ptr [ecx + 4], edx
// 00512e6e  897908               mov dword ptr [ecx + 8], edi
// 00512e71  89590c               mov dword ptr [ecx + 0xc], ebx
// 00512e74  8b0e                 mov ecx, dword ptr [esi]
// 00512e76  c741144c000000       mov dword ptr [ecx + 0x14], 0x4c
// 00512e7d  8b16                 mov edx, dword ptr [esi]
// 00512e7f  8b4204               mov eax, dword ptr [edx + 4]
// 00512e82  6a01                 push 1
// 00512e84  56                   push esi
// 00512e85  ffd0                 call eax
// 00512e87  83c408               add esp, 8
// 00512e8a  5f                   pop edi
// 00512e8b  5d                   pop ebp
// 00512e8c  889e09010000         mov byte ptr [esi + 0x109], bl
// 00512e92  c6860801000001       mov byte ptr [esi + 0x108], 1
// 00512e99  5b                   pop ebx
// 00512e9a  c3                   ret 
// 00512e9b  8b16                 mov edx, dword ptr [esi]
// 00512e9d  8b442404             mov eax, dword ptr [esp + 4]
// 00512ea1  c742144e000000       mov dword ptr [edx + 0x14], 0x4e
// 00512ea8  8b16                 mov edx, dword ptr [esi]
// 00512eaa  03c8                 add ecx, eax
// 00512eac  894a18               mov dword ptr [edx + 0x18], ecx
// 00512eaf  8b06                 mov eax, dword ptr [esi]
// 00512eb1  8b4804               mov ecx, dword ptr [eax + 4]
// 00512eb4  6a01                 push 1
// 00512eb6  56                   push esi
// 00512eb7  ffd1                 call ecx
// 00512eb9  83c408               add esp, 8
// 00512ebc  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app14)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
