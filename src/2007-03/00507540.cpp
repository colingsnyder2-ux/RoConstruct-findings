// roc 2007-03 00507540  unit: seg_00500000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00507540
//
// 00507540  83f90c               cmp ecx, 0xc
// 00507543  0f8282000000         jb 0x5075cb
// 00507549  803841               cmp byte ptr [eax], 0x41
// 0050754c  757d                 jne 0x5075cb
// 0050754e  80780164             cmp byte ptr [eax + 1], 0x64
// 00507552  7577                 jne 0x5075cb
// 00507554  8078026f             cmp byte ptr [eax + 2], 0x6f
// 00507558  7571                 jne 0x5075cb
// 0050755a  80780362             cmp byte ptr [eax + 3], 0x62
// 0050755e  756b                 jne 0x5075cb
// 00507560  80780465             cmp byte ptr [eax + 4], 0x65
// 00507564  7565                 jne 0x5075cb
// 00507566  0fb65007             movzx edx, byte ptr [eax + 7]
// 0050756a  0fb64808             movzx ecx, byte ptr [eax + 8]
// 0050756e  53                   push ebx
// 0050756f  0fb6580b             movzx ebx, byte ptr [eax + 0xb]
// 00507573  55                   push ebp
// 00507574  0fb66805             movzx ebp, byte ptr [eax + 5]
// 00507578  57                   push edi
// 00507579  0fb67809             movzx edi, byte ptr [eax + 9]
// 0050757d  c1e208               shl edx, 8
// 00507580  03d1                 add edx, ecx
// 00507582  0fb6480a             movzx ecx, byte ptr [eax + 0xa]
// 00507586  0fb64006             movzx eax, byte ptr [eax + 6]
// 0050758a  c1e708               shl edi, 8
// 0050758d  03f9                 add edi, ecx
// 0050758f  8b0e                 mov ecx, dword ptr [esi]
// 00507591  83c118               add ecx, 0x18
// 00507594  c1e508               shl ebp, 8
// 00507597  03e8                 add ebp, eax
// 00507599  8929                 mov dword ptr [ecx], ebp
// 0050759b  895104               mov dword ptr [ecx + 4], edx
// 0050759e  897908               mov dword ptr [ecx + 8], edi
// 005075a1  89590c               mov dword ptr [ecx + 0xc], ebx
// 005075a4  8b0e                 mov ecx, dword ptr [esi]
// 005075a6  c741144c000000       mov dword ptr [ecx + 0x14], 0x4c
// 005075ad  8b16                 mov edx, dword ptr [esi]
// 005075af  8b4204               mov eax, dword ptr [edx + 4]
// 005075b2  6a01                 push 1
// 005075b4  56                   push esi
// 005075b5  ffd0                 call eax
// 005075b7  83c408               add esp, 8
// 005075ba  5f                   pop edi
// 005075bb  5d                   pop ebp
// 005075bc  889e09010000         mov byte ptr [esi + 0x109], bl
// 005075c2  c6860801000001       mov byte ptr [esi + 0x108], 1
// 005075c9  5b                   pop ebx
// 005075ca  c3                   ret 
// 005075cb  8b16                 mov edx, dword ptr [esi]
// 005075cd  8b442404             mov eax, dword ptr [esp + 4]
// 005075d1  c742144e000000       mov dword ptr [edx + 0x14], 0x4e
// 005075d8  8b16                 mov edx, dword ptr [esi]
// 005075da  03c8                 add ecx, eax
// 005075dc  894a18               mov dword ptr [edx + 0x18], ecx
// 005075df  8b06                 mov eax, dword ptr [esi]
// 005075e1  8b4804               mov ecx, dword ptr [eax + 4]
// 005075e4  6a01                 push 1
// 005075e6  56                   push esi
// 005075e7  ffd1                 call ecx
// 005075e9  83c408               add esp, 8
// 005075ec  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app14)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
