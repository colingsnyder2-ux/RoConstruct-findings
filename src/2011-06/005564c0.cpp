// from server: 100% by auto
// roc 2011-06 005564c0  unit: G3D::LineSegment  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005564c0
//
// 005564c0  83f90c               cmp ecx, 0xc
// 005564c3  0f8282000000         jb 0x55654b
// 005564c9  803841               cmp byte ptr [eax], 0x41
// 005564cc  757d                 jne 0x55654b
// 005564ce  80780164             cmp byte ptr [eax + 1], 0x64
// 005564d2  7577                 jne 0x55654b
// 005564d4  8078026f             cmp byte ptr [eax + 2], 0x6f
// 005564d8  7571                 jne 0x55654b
// 005564da  80780362             cmp byte ptr [eax + 3], 0x62
// 005564de  756b                 jne 0x55654b
// 005564e0  80780465             cmp byte ptr [eax + 4], 0x65
// 005564e4  7565                 jne 0x55654b
// 005564e6  0fb65007             movzx edx, byte ptr [eax + 7]
// 005564ea  0fb64808             movzx ecx, byte ptr [eax + 8]
// 005564ee  53                   push ebx
// 005564ef  0fb6580b             movzx ebx, byte ptr [eax + 0xb]
// 005564f3  55                   push ebp
// 005564f4  0fb66805             movzx ebp, byte ptr [eax + 5]
// 005564f8  57                   push edi
// 005564f9  0fb67809             movzx edi, byte ptr [eax + 9]
// 005564fd  c1e208               shl edx, 8
// 00556500  03d1                 add edx, ecx
// 00556502  0fb6480a             movzx ecx, byte ptr [eax + 0xa]
// 00556506  0fb64006             movzx eax, byte ptr [eax + 6]
// 0055650a  c1e708               shl edi, 8
// 0055650d  03f9                 add edi, ecx
// 0055650f  8b0e                 mov ecx, dword ptr [esi]
// 00556511  83c118               add ecx, 0x18
// 00556514  c1e508               shl ebp, 8
// 00556517  03e8                 add ebp, eax
// 00556519  8929                 mov dword ptr [ecx], ebp
// 0055651b  895104               mov dword ptr [ecx + 4], edx
// 0055651e  897908               mov dword ptr [ecx + 8], edi
// 00556521  89590c               mov dword ptr [ecx + 0xc], ebx
// 00556524  8b0e                 mov ecx, dword ptr [esi]
// 00556526  c741144c000000       mov dword ptr [ecx + 0x14], 0x4c
// 0055652d  8b16                 mov edx, dword ptr [esi]
// 0055652f  8b4204               mov eax, dword ptr [edx + 4]
// 00556532  6a01                 push 1
// 00556534  56                   push esi
// 00556535  ffd0                 call eax
// 00556537  83c408               add esp, 8
// 0055653a  5f                   pop edi
// 0055653b  5d                   pop ebp
// 0055653c  889e09010000         mov byte ptr [esi + 0x109], bl
// 00556542  c6860801000001       mov byte ptr [esi + 0x108], 1
// 00556549  5b                   pop ebx
// 0055654a  c3                   ret 
// 0055654b  8b16                 mov edx, dword ptr [esi]
// 0055654d  8b442404             mov eax, dword ptr [esp + 4]
// 00556551  c742144e000000       mov dword ptr [edx + 0x14], 0x4e
// 00556558  8b16                 mov edx, dword ptr [esi]
// 0055655a  03c8                 add ecx, eax
// 0055655c  894a18               mov dword ptr [edx + 0x18], ecx
// 0055655f  8b06                 mov eax, dword ptr [esi]
// 00556561  8b4804               mov ecx, dword ptr [eax + 4]
// 00556564  6a01                 push 1
// 00556566  56                   push esi
// 00556567  ffd1                 call ecx
// 00556569  83c408               add esp, 8
// 0055656c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app14)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
