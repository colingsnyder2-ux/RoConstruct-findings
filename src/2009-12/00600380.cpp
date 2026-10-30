// roc 2009-12 00600380  unit: G3D::_internal::DialogTemplate  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600380
//
// 00600380  83f90c               cmp ecx, 0xc
// 00600383  0f8282000000         jb 0x60040b
// 00600389  803841               cmp byte ptr [eax], 0x41
// 0060038c  757d                 jne 0x60040b
// 0060038e  80780164             cmp byte ptr [eax + 1], 0x64
// 00600392  7577                 jne 0x60040b
// 00600394  8078026f             cmp byte ptr [eax + 2], 0x6f
// 00600398  7571                 jne 0x60040b
// 0060039a  80780362             cmp byte ptr [eax + 3], 0x62
// 0060039e  756b                 jne 0x60040b
// 006003a0  80780465             cmp byte ptr [eax + 4], 0x65
// 006003a4  7565                 jne 0x60040b
// 006003a6  0fb65007             movzx edx, byte ptr [eax + 7]
// 006003aa  0fb64808             movzx ecx, byte ptr [eax + 8]
// 006003ae  53                   push ebx
// 006003af  0fb6580b             movzx ebx, byte ptr [eax + 0xb]
// 006003b3  55                   push ebp
// 006003b4  0fb66805             movzx ebp, byte ptr [eax + 5]
// 006003b8  57                   push edi
// 006003b9  0fb67809             movzx edi, byte ptr [eax + 9]
// 006003bd  c1e208               shl edx, 8
// 006003c0  03d1                 add edx, ecx
// 006003c2  0fb6480a             movzx ecx, byte ptr [eax + 0xa]
// 006003c6  0fb64006             movzx eax, byte ptr [eax + 6]
// 006003ca  c1e708               shl edi, 8
// 006003cd  03f9                 add edi, ecx
// 006003cf  8b0e                 mov ecx, dword ptr [esi]
// 006003d1  83c118               add ecx, 0x18
// 006003d4  c1e508               shl ebp, 8
// 006003d7  03e8                 add ebp, eax
// 006003d9  8929                 mov dword ptr [ecx], ebp
// 006003db  895104               mov dword ptr [ecx + 4], edx
// 006003de  897908               mov dword ptr [ecx + 8], edi
// 006003e1  89590c               mov dword ptr [ecx + 0xc], ebx
// 006003e4  8b0e                 mov ecx, dword ptr [esi]
// 006003e6  c741144c000000       mov dword ptr [ecx + 0x14], 0x4c
// 006003ed  8b16                 mov edx, dword ptr [esi]
// 006003ef  8b4204               mov eax, dword ptr [edx + 4]
// 006003f2  6a01                 push 1
// 006003f4  56                   push esi
// 006003f5  ffd0                 call eax
// 006003f7  83c408               add esp, 8
// 006003fa  5f                   pop edi
// 006003fb  5d                   pop ebp
// 006003fc  889e09010000         mov byte ptr [esi + 0x109], bl
// 00600402  c6860801000001       mov byte ptr [esi + 0x108], 1
// 00600409  5b                   pop ebx
// 0060040a  c3                   ret 
// 0060040b  8b16                 mov edx, dword ptr [esi]
// 0060040d  8b442404             mov eax, dword ptr [esp + 4]
// 00600411  c742144e000000       mov dword ptr [edx + 0x14], 0x4e
// 00600418  8b16                 mov edx, dword ptr [esi]
// 0060041a  03c8                 add ecx, eax
// 0060041c  894a18               mov dword ptr [edx + 0x18], ecx
// 0060041f  8b06                 mov eax, dword ptr [esi]
// 00600421  8b4804               mov ecx, dword ptr [eax + 4]
// 00600424  6a01                 push 1
// 00600426  56                   push esi
// 00600427  ffd1                 call ecx
// 00600429  83c408               add esp, 8
// 0060042c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app14)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
