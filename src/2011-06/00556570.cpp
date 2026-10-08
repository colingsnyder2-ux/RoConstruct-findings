// from server: 100% by auto
// roc 2011-06 00556570  unit: G3D::LineSegment  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00556570
//
// 00556570  83ec1c               sub esp, 0x1c
// 00556573  8b442420             mov eax, dword ptr [esp + 0x20]
// 00556577  53                   push ebx
// 00556578  55                   push ebp
// 00556579  56                   push esi
// 0055657a  8b7018               mov esi, dword ptr [eax + 0x18]
// 0055657d  8b6e04               mov ebp, dword ptr [esi + 4]
// 00556580  8b1e                 mov ebx, dword ptr [esi]
// 00556582  89742414             mov dword ptr [esp + 0x14], esi
// 00556586  85ed                 test ebp, ebp
// 00556588  7519                 jne 0x5565a3
// 0055658a  50                   push eax
// 0055658b  8b460c               mov eax, dword ptr [esi + 0xc]
// 0055658e  ffd0                 call eax
// 00556590  83c404               add esp, 4
// 00556593  84c0                 test al, al
// 00556595  7507                 jne 0x55659e
// 00556597  5e                   pop esi
// 00556598  5d                   pop ebp
// 00556599  5b                   pop ebx
// 0055659a  83c41c               add esp, 0x1c
// 0055659d  c3                   ret 
// 0055659e  8b1e                 mov ebx, dword ptr [esi]
// 005565a0  8b6e04               mov ebp, dword ptr [esi + 4]
// 005565a3  57                   push edi
// 005565a4  0fb63b               movzx edi, byte ptr [ebx]
// 005565a7  4d                   dec ebp
// 005565a8  c1e708               shl edi, 8
// 005565ab  43                   inc ebx
// 005565ac  85ed                 test ebp, ebp
// 005565ae  751a                 jne 0x5565ca
// 005565b0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005565b4  8b560c               mov edx, dword ptr [esi + 0xc]
// 005565b7  51                   push ecx
// 005565b8  ffd2                 call edx
// 005565ba  83c404               add esp, 4
// 005565bd  84c0                 test al, al
// 005565bf  0f84ab000000         je 0x556670
// 005565c5  8b1e                 mov ebx, dword ptr [esi]
// 005565c7  8b6e04               mov ebp, dword ptr [esi + 4]
// 005565ca  0fb603               movzx eax, byte ptr [ebx]
// 005565cd  03f8                 add edi, eax
// 005565cf  83ef02               sub edi, 2
// 005565d2  4d                   dec ebp
// 005565d3  43                   inc ebx
// 005565d4  83ff0e               cmp edi, 0xe
// 005565d7  7c0b                 jl 0x5565e4
// 005565d9  b80e000000           mov eax, 0xe
// 005565de  89442410             mov dword ptr [esp + 0x10], eax
// 005565e2  eb10                 jmp 0x5565f4
// 005565e4  33c9                 xor ecx, ecx
// 005565e6  85ff                 test edi, edi
// 005565e8  0f9ec1               setle cl
// 005565eb  49                   dec ecx
// 005565ec  23cf                 and ecx, edi
// 005565ee  894c2410             mov dword ptr [esp + 0x10], ecx
// 005565f2  8bc1                 mov eax, ecx
// 005565f4  33c9                 xor ecx, ecx
// 005565f6  894c2414             mov dword ptr [esp + 0x14], ecx
// 005565fa  85c0                 test eax, eax
// 005565fc  7635                 jbe 0x556633
// 005565fe  8bff                 mov edi, edi
// 00556600  85ed                 test ebp, ebp
// 00556602  751e                 jne 0x556622
// 00556604  8b542430             mov edx, dword ptr [esp + 0x30]
// 00556608  8b460c               mov eax, dword ptr [esi + 0xc]
// 0055660b  52                   push edx
// 0055660c  ffd0                 call eax
// 0055660e  83c404               add esp, 4
// 00556611  84c0                 test al, al
// 00556613  745b                 je 0x556670
// 00556615  8b1e                 mov ebx, dword ptr [esi]
// 00556617  8b6e04               mov ebp, dword ptr [esi + 4]
// 0055661a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055661e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00556622  8a13                 mov dl, byte ptr [ebx]
// 00556624  88540c1c             mov byte ptr [esp + ecx + 0x1c], dl
// 00556628  41                   inc ecx
// 00556629  4d                   dec ebp
// 0055662a  43                   inc ebx
// 0055662b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0055662f  3bc8                 cmp ecx, eax
// 00556631  72cd                 jb 0x556600
// 00556633  8b542430             mov edx, dword ptr [esp + 0x30]
// 00556637  8b8a7c010000         mov ecx, dword ptr [edx + 0x17c]
// 0055663d  2bf8                 sub edi, eax
// 0055663f  81e9e0000000         sub ecx, 0xe0
// 00556645  897c2414             mov dword ptr [esp + 0x14], edi
// 00556649  7442                 je 0x55668d
// 0055664b  83e90e               sub ecx, 0xe
// 0055664e  742a                 je 0x55667a
// 00556650  8b02                 mov eax, dword ptr [edx]
// 00556652  c7401444000000       mov dword ptr [eax + 0x14], 0x44
// 00556659  8b0a                 mov ecx, dword ptr [edx]
// 0055665b  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 00556661  894118               mov dword ptr [ecx + 0x18], eax
// 00556664  8b0a                 mov ecx, dword ptr [edx]
// 00556666  52                   push edx
// 00556667  8b11                 mov edx, dword ptr [ecx]
// 00556669  ffd2                 call edx
// 0055666b  83c404               add esp, 4
// 0055666e  eb32                 jmp 0x5566a2
// 00556670  5f                   pop edi
// 00556671  5e                   pop esi
// 00556672  5d                   pop ebp
// 00556673  32c0                 xor al, al
// 00556675  5b                   pop ebx
// 00556676  83c41c               add esp, 0x1c
// 00556679  c3                   ret 
// 0055667a  8bc8                 mov ecx, eax
// 0055667c  57                   push edi
// 0055667d  8d442420             lea eax, [esp + 0x20]
// 00556681  8bf2                 mov esi, edx
// 00556683  e838feffff           call 0x5564c0
// 00556688  83c404               add esp, 4
// 0055668b  eb11                 jmp 0x55669e
// 0055668d  8bcf                 mov ecx, edi
// 0055668f  8d7c241c             lea edi, [esp + 0x1c]
// 00556693  8bf2                 mov esi, edx
// 00556695  e8c6fbffff           call 0x556260
// 0055669a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0055669e  8b742418             mov esi, dword ptr [esp + 0x18]
// 005566a2  891e                 mov dword ptr [esi], ebx
// 005566a4  896e04               mov dword ptr [esi + 4], ebp
// 005566a7  85ff                 test edi, edi
// 005566a9  7e11                 jle 0x5566bc
// 005566ab  8b442430             mov eax, dword ptr [esp + 0x30]
// 005566af  8b4818               mov ecx, dword ptr [eax + 0x18]
// 005566b2  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005566b5  57                   push edi
// 005566b6  50                   push eax
// 005566b7  ffd2                 call edx
// 005566b9  83c408               add esp, 8
// 005566bc  5f                   pop edi
// 005566bd  5e                   pop esi
// 005566be  5d                   pop ebp
// 005566bf  b001                 mov al, 1
// 005566c1  5b                   pop ebx
// 005566c2  83c41c               add esp, 0x1c
// 005566c5  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_interesting_appn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
