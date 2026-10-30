// roc 2009-12 0084a490  unit: CXTPControlSelector  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084a490
//
// 0084a490  83ec08               sub esp, 8
// 0084a493  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0084a497  53                   push ebx
// 0084a498  55                   push ebp
// 0084a499  8bd0                 mov edx, eax
// 0084a49b  c1ea08               shr edx, 8
// 0084a49e  56                   push esi
// 0084a49f  0fb6c8               movzx ecx, al
// 0084a4a2  0fb6f2               movzx esi, dl
// 0084a4a5  c1e810               shr eax, 0x10
// 0084a4a8  3bce                 cmp ecx, esi
// 0084a4aa  57                   push edi
// 0084a4ab  894c2414             mov dword ptr [esp + 0x14], ecx
// 0084a4af  8974241c             mov dword ptr [esp + 0x1c], esi
// 0084a4b3  0fb6e8               movzx ebp, al
// 0084a4b6  7c08                 jl 0x84a4c0
// 0084a4b8  3bcd                 cmp ecx, ebp
// 0084a4ba  7c0a                 jl 0x84a4c6
// 0084a4bc  8bd9                 mov ebx, ecx
// 0084a4be  eb08                 jmp 0x84a4c8
// 0084a4c0  3bf5                 cmp esi, ebp
// 0084a4c2  8bde                 mov ebx, esi
// 0084a4c4  7d02                 jge 0x84a4c8
// 0084a4c6  8bdd                 mov ebx, ebp
// 0084a4c8  3bce                 cmp ecx, esi
// 0084a4ca  7f08                 jg 0x84a4d4
// 0084a4cc  3bcd                 cmp ecx, ebp
// 0084a4ce  7f08                 jg 0x84a4d8
// 0084a4d0  8bf1                 mov esi, ecx
// 0084a4d2  eb06                 jmp 0x84a4da
// 0084a4d4  3bf5                 cmp esi, ebp
// 0084a4d6  7e02                 jle 0x84a4da
// 0084a4d8  8bf5                 mov esi, ebp
// 0084a4da  8d041e               lea eax, [esi + ebx]
// 0084a4dd  89442410             mov dword ptr [esp + 0x10], eax
// 0084a4e1  40                   inc eax
// 0084a4e2  99                   cdq 
// 0084a4e3  2bc2                 sub eax, edx
// 0084a4e5  8bf8                 mov edi, eax
// 0084a4e7  d1ff                 sar edi, 1
// 0084a4e9  3bde                 cmp ebx, esi
// 0084a4eb  750c                 jne 0x84a4f9
// 0084a4ed  b8ff000000           mov eax, 0xff
// 0084a4f2  33f6                 xor esi, esi
// 0084a4f4  e984000000           jmp 0x84a57d
// 0084a4f9  8bcb                 mov ecx, ebx
// 0084a4fb  2bce                 sub ecx, esi
// 0084a4fd  83ff7f               cmp edi, 0x7f
// 0084a500  7d0d                 jge 0x84a50f
// 0084a502  8d4101               lea eax, [ecx + 1]
// 0084a505  c1e008               shl eax, 8
// 0084a508  99                   cdq 
// 0084a509  f77c2410             idiv dword ptr [esp + 0x10]
// 0084a50d  eb11                 jmp 0x84a520
// 0084a50f  8bc1                 mov eax, ecx
// 0084a511  c1e008               shl eax, 8
// 0084a514  be00020000           mov esi, 0x200
// 0084a519  2b742410             sub esi, dword ptr [esp + 0x10]
// 0084a51d  99                   cdq 
// 0084a51e  f7fe                 idiv esi
// 0084a520  8b542414             mov edx, dword ptr [esp + 0x14]
// 0084a524  8bf0                 mov esi, eax
// 0084a526  3bd3                 cmp edx, ebx
// 0084a528  7510                 jne 0x84a53a
// 0084a52a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0084a52e  2bc5                 sub eax, ebp
// 0084a530  c1e008               shl eax, 8
// 0084a533  99                   cdq 
// 0084a534  f7f9                 idiv ecx
// 0084a536  8bc8                 mov ecx, eax
// 0084a538  eb2e                 jmp 0x84a568
// 0084a53a  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 0084a53e  7514                 jne 0x84a554
// 0084a540  8bc5                 mov eax, ebp
// 0084a542  2bc2                 sub eax, edx
// 0084a544  c1e008               shl eax, 8
// 0084a547  99                   cdq 
// 0084a548  f7f9                 idiv ecx
// 0084a54a  8bc8                 mov ecx, eax
// 0084a54c  81c100020000         add ecx, 0x200
// 0084a552  eb14                 jmp 0x84a568
// 0084a554  8bc2                 mov eax, edx
// 0084a556  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 0084a55a  c1e008               shl eax, 8
// 0084a55d  99                   cdq 
// 0084a55e  f7f9                 idiv ecx
// 0084a560  8bc8                 mov ecx, eax
// 0084a562  81c100040000         add ecx, 0x400
// 0084a568  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0084a56d  f7e9                 imul ecx
// 0084a56f  8bc2                 mov eax, edx
// 0084a571  c1e81f               shr eax, 0x1f
// 0084a574  03c2                 add eax, edx
// 0084a576  7905                 jns 0x84a57d
// 0084a578  0500010000           add eax, 0x100
// 0084a57d  69c0ef000000         imul eax, eax, 0xef
// 0084a583  69f6f0000000         imul esi, esi, 0xf0
// 0084a589  69fff0000000         imul edi, edi, 0xf0
// 0084a58f  8bc8                 mov ecx, eax
// 0084a591  b881808080           mov eax, 0x80808081
// 0084a596  f7e9                 imul ecx
// 0084a598  03d1                 add edx, ecx
// 0084a59a  c1fa07               sar edx, 7
// 0084a59d  8bca                 mov ecx, edx
// 0084a59f  c1e91f               shr ecx, 0x1f
// 0084a5a2  03ca                 add ecx, edx
// 0084a5a4  b881808080           mov eax, 0x80808081
// 0084a5a9  f7ee                 imul esi
// 0084a5ab  03d6                 add edx, esi
// 0084a5ad  c1fa07               sar edx, 7
// 0084a5b0  8bf2                 mov esi, edx
// 0084a5b2  c1ee1f               shr esi, 0x1f
// 0084a5b5  03f2                 add esi, edx
// 0084a5b7  b881808080           mov eax, 0x80808081
// 0084a5bc  f7ef                 imul edi
// 0084a5be  03d7                 add edx, edi
// 0084a5c0  c1fa07               sar edx, 7
// 0084a5c3  8bc2                 mov eax, edx
// 0084a5c5  c1e81f               shr eax, 0x1f
// 0084a5c8  03c2                 add eax, edx
// 0084a5ca  81f9ef000000         cmp ecx, 0xef
// 0084a5d0  7c05                 jl 0x84a5d7
// 0084a5d2  b9ef000000           mov ecx, 0xef
// 0084a5d7  81fef0000000         cmp esi, 0xf0
// 0084a5dd  8bd6                 mov edx, esi
// 0084a5df  7c05                 jl 0x84a5e6
// 0084a5e1  baf0000000           mov edx, 0xf0
// 0084a5e6  3df0000000           cmp eax, 0xf0
// 0084a5eb  5f                   pop edi
// 0084a5ec  5e                   pop esi
// 0084a5ed  5d                   pop ebp
// 0084a5ee  5b                   pop ebx
// 0084a5ef  7c05                 jl 0x84a5f6
// 0084a5f1  b8f0000000           mov eax, 0xf0
// 0084a5f6  0fb6c0               movzx eax, al
// 0084a5f9  c1e008               shl eax, 8
// 0084a5fc  0fb6d2               movzx edx, dl
// 0084a5ff  0bc2                 or eax, edx
// 0084a601  0fb6c9               movzx ecx, cl
// 0084a604  c1e008               shl eax, 8
// 0084a607  0bc1                 or eax, ecx
// 0084a609  83c408               add esp, 8
// 0084a60c  c3                   ret 
// copied from an identical function in another client (function ?RGBtoHSL@CXTPDrawHelpers@@SAKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp