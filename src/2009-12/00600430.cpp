// roc 2009-12 00600430  unit: G3D::_internal::DialogTemplate  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600430
//
// 00600430  83ec1c               sub esp, 0x1c
// 00600433  8b442420             mov eax, dword ptr [esp + 0x20]
// 00600437  53                   push ebx
// 00600438  55                   push ebp
// 00600439  56                   push esi
// 0060043a  8b7018               mov esi, dword ptr [eax + 0x18]
// 0060043d  8b6e04               mov ebp, dword ptr [esi + 4]
// 00600440  8b1e                 mov ebx, dword ptr [esi]
// 00600442  89742414             mov dword ptr [esp + 0x14], esi
// 00600446  85ed                 test ebp, ebp
// 00600448  7519                 jne 0x600463
// 0060044a  50                   push eax
// 0060044b  8b460c               mov eax, dword ptr [esi + 0xc]
// 0060044e  ffd0                 call eax
// 00600450  83c404               add esp, 4
// 00600453  84c0                 test al, al
// 00600455  7507                 jne 0x60045e
// 00600457  5e                   pop esi
// 00600458  5d                   pop ebp
// 00600459  5b                   pop ebx
// 0060045a  83c41c               add esp, 0x1c
// 0060045d  c3                   ret 
// 0060045e  8b1e                 mov ebx, dword ptr [esi]
// 00600460  8b6e04               mov ebp, dword ptr [esi + 4]
// 00600463  57                   push edi
// 00600464  0fb63b               movzx edi, byte ptr [ebx]
// 00600467  4d                   dec ebp
// 00600468  c1e708               shl edi, 8
// 0060046b  43                   inc ebx
// 0060046c  85ed                 test ebp, ebp
// 0060046e  751a                 jne 0x60048a
// 00600470  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00600474  8b560c               mov edx, dword ptr [esi + 0xc]
// 00600477  51                   push ecx
// 00600478  ffd2                 call edx
// 0060047a  83c404               add esp, 4
// 0060047d  84c0                 test al, al
// 0060047f  0f84ab000000         je 0x600530
// 00600485  8b1e                 mov ebx, dword ptr [esi]
// 00600487  8b6e04               mov ebp, dword ptr [esi + 4]
// 0060048a  0fb603               movzx eax, byte ptr [ebx]
// 0060048d  03f8                 add edi, eax
// 0060048f  83ef02               sub edi, 2
// 00600492  4d                   dec ebp
// 00600493  43                   inc ebx
// 00600494  83ff0e               cmp edi, 0xe
// 00600497  7c0b                 jl 0x6004a4
// 00600499  b80e000000           mov eax, 0xe
// 0060049e  89442410             mov dword ptr [esp + 0x10], eax
// 006004a2  eb10                 jmp 0x6004b4
// 006004a4  33c9                 xor ecx, ecx
// 006004a6  85ff                 test edi, edi
// 006004a8  0f9ec1               setle cl
// 006004ab  49                   dec ecx
// 006004ac  23cf                 and ecx, edi
// 006004ae  894c2410             mov dword ptr [esp + 0x10], ecx
// 006004b2  8bc1                 mov eax, ecx
// 006004b4  33c9                 xor ecx, ecx
// 006004b6  894c2414             mov dword ptr [esp + 0x14], ecx
// 006004ba  85c0                 test eax, eax
// 006004bc  7635                 jbe 0x6004f3
// 006004be  8bff                 mov edi, edi
// 006004c0  85ed                 test ebp, ebp
// 006004c2  751e                 jne 0x6004e2
// 006004c4  8b542430             mov edx, dword ptr [esp + 0x30]
// 006004c8  8b460c               mov eax, dword ptr [esi + 0xc]
// 006004cb  52                   push edx
// 006004cc  ffd0                 call eax
// 006004ce  83c404               add esp, 4
// 006004d1  84c0                 test al, al
// 006004d3  745b                 je 0x600530
// 006004d5  8b1e                 mov ebx, dword ptr [esi]
// 006004d7  8b6e04               mov ebp, dword ptr [esi + 4]
// 006004da  8b442410             mov eax, dword ptr [esp + 0x10]
// 006004de  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006004e2  8a13                 mov dl, byte ptr [ebx]
// 006004e4  88540c1c             mov byte ptr [esp + ecx + 0x1c], dl
// 006004e8  41                   inc ecx
// 006004e9  4d                   dec ebp
// 006004ea  43                   inc ebx
// 006004eb  894c2414             mov dword ptr [esp + 0x14], ecx
// 006004ef  3bc8                 cmp ecx, eax
// 006004f1  72cd                 jb 0x6004c0
// 006004f3  8b542430             mov edx, dword ptr [esp + 0x30]
// 006004f7  8b8a7c010000         mov ecx, dword ptr [edx + 0x17c]
// 006004fd  2bf8                 sub edi, eax
// 006004ff  81e9e0000000         sub ecx, 0xe0
// 00600505  897c2414             mov dword ptr [esp + 0x14], edi
// 00600509  7442                 je 0x60054d
// 0060050b  83e90e               sub ecx, 0xe
// 0060050e  742a                 je 0x60053a
// 00600510  8b02                 mov eax, dword ptr [edx]
// 00600512  c7401444000000       mov dword ptr [eax + 0x14], 0x44
// 00600519  8b0a                 mov ecx, dword ptr [edx]
// 0060051b  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 00600521  894118               mov dword ptr [ecx + 0x18], eax
// 00600524  8b0a                 mov ecx, dword ptr [edx]
// 00600526  52                   push edx
// 00600527  8b11                 mov edx, dword ptr [ecx]
// 00600529  ffd2                 call edx
// 0060052b  83c404               add esp, 4
// 0060052e  eb32                 jmp 0x600562
// 00600530  5f                   pop edi
// 00600531  5e                   pop esi
// 00600532  5d                   pop ebp
// 00600533  32c0                 xor al, al
// 00600535  5b                   pop ebx
// 00600536  83c41c               add esp, 0x1c
// 00600539  c3                   ret 
// 0060053a  8bc8                 mov ecx, eax
// 0060053c  57                   push edi
// 0060053d  8d442420             lea eax, [esp + 0x20]
// 00600541  8bf2                 mov esi, edx
// 00600543  e838feffff           call 0x600380
// 00600548  83c404               add esp, 4
// 0060054b  eb11                 jmp 0x60055e
// 0060054d  8bcf                 mov ecx, edi
// 0060054f  8d7c241c             lea edi, [esp + 0x1c]
// 00600553  8bf2                 mov esi, edx
// 00600555  e8c6fbffff           call 0x600120
// 0060055a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0060055e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00600562  891e                 mov dword ptr [esi], ebx
// 00600564  896e04               mov dword ptr [esi + 4], ebp
// 00600567  85ff                 test edi, edi
// 00600569  7e11                 jle 0x60057c
// 0060056b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0060056f  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00600572  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00600575  57                   push edi
// 00600576  50                   push eax
// 00600577  ffd2                 call edx
// 00600579  83c408               add esp, 8
// 0060057c  5f                   pop edi
// 0060057d  5e                   pop esi
// 0060057e  5d                   pop ebp
// 0060057f  b001                 mov al, 1
// 00600581  5b                   pop ebx
// 00600582  83c41c               add esp, 0x1c
// 00600585  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_interesting_appn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
