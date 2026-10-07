// roc 2010-06 00562590  unit: G3D::_internal::DialogTemplate  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00562590
//
// 00562590  53                   push ebx
// 00562591  55                   push ebp
// 00562592  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00562596  56                   push esi
// 00562597  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056259b  8b06                 mov eax, dword ptr [esi]
// 0056259d  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 005625a3  c7401479000000       mov dword ptr [eax + 0x14], 0x79
// 005625aa  8b0e                 mov ecx, dword ptr [esi]
// 005625ac  895918               mov dword ptr [ecx + 0x18], ebx
// 005625af  8b16                 mov edx, dword ptr [esi]
// 005625b1  57                   push edi
// 005625b2  896a1c               mov dword ptr [edx + 0x1c], ebp
// 005625b5  8b06                 mov eax, dword ptr [esi]
// 005625b7  8b4804               mov ecx, dword ptr [eax + 4]
// 005625ba  6aff                 push -1
// 005625bc  56                   push esi
// 005625bd  ffd1                 call ecx
// 005625bf  83c408               add esp, 8
// 005625c2  81fbc0000000         cmp ebx, 0xc0
// 005625c8  7d07                 jge 0x5625d1
// 005625ca  bf02000000           mov edi, 2
// 005625cf  eb55                 jmp 0x562626
// 005625d1  8d9330ffffff         lea edx, [ebx - 0xd0]
// 005625d7  83fa07               cmp edx, 7
// 005625da  7745                 ja 0x562621
// 005625dc  8d4501               lea eax, [ebp + 1]
// 005625df  83e007               and eax, 7
// 005625e2  05d0000000           add eax, 0xd0
// 005625e7  3bd8                 cmp ebx, eax
// 005625e9  7436                 je 0x562621
// 005625eb  8d4d02               lea ecx, [ebp + 2]
// 005625ee  83e107               and ecx, 7
// 005625f1  81c1d0000000         add ecx, 0xd0
// 005625f7  3bd9                 cmp ebx, ecx
// 005625f9  7426                 je 0x562621
// 005625fb  8d55ff               lea edx, [ebp - 1]
// 005625fe  83e207               and edx, 7
// 00562601  81c2d0000000         add edx, 0xd0
// 00562607  3bda                 cmp ebx, edx
// 00562609  74bf                 je 0x5625ca
// 0056260b  8d45fe               lea eax, [ebp - 2]
// 0056260e  83e007               and eax, 7
// 00562611  05d0000000           add eax, 0xd0
// 00562616  3bd8                 cmp ebx, eax
// 00562618  74b0                 je 0x5625ca
// 0056261a  bf01000000           mov edi, 1
// 0056261f  eb05                 jmp 0x562626
// 00562621  bf03000000           mov edi, 3
// 00562626  8b0e                 mov ecx, dword ptr [esi]
// 00562628  c7411461000000       mov dword ptr [ecx + 0x14], 0x61
// 0056262f  8b16                 mov edx, dword ptr [esi]
// 00562631  895a18               mov dword ptr [edx + 0x18], ebx
// 00562634  8b06                 mov eax, dword ptr [esi]
// 00562636  89781c               mov dword ptr [eax + 0x1c], edi
// 00562639  8b0e                 mov ecx, dword ptr [esi]
// 0056263b  8b5104               mov edx, dword ptr [ecx + 4]
// 0056263e  6a04                 push 4
// 00562640  56                   push esi
// 00562641  ffd2                 call edx
// 00562643  83c408               add esp, 8
// 00562646  83ef01               sub edi, 1
// 00562649  7434                 je 0x56267f
// 0056264b  83ef01               sub edi, 1
// 0056264e  7410                 je 0x562660
// 00562650  83ef01               sub edi, 1
// 00562653  0f8569ffffff         jne 0x5625c2
// 00562659  5f                   pop edi
// 0056265a  5e                   pop esi
// 0056265b  5d                   pop ebp
// 0056265c  b001                 mov al, 1
// 0056265e  5b                   pop ebx
// 0056265f  c3                   ret 
// 00562660  56                   push esi
// 00562661  e84af9ffff           call 0x561fb0
// 00562666  83c404               add esp, 4
// 00562669  84c0                 test al, al
// 0056266b  740b                 je 0x562678
// 0056266d  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 00562673  e94affffff           jmp 0x5625c2
// 00562678  5f                   pop edi
// 00562679  5e                   pop esi
// 0056267a  5d                   pop ebp
// 0056267b  32c0                 xor al, al
// 0056267d  5b                   pop ebx
// 0056267e  c3                   ret 
// 0056267f  5f                   pop edi
// 00562680  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 0056268a  5e                   pop esi
// 0056268b  5d                   pop ebp
// 0056268c  b001                 mov al, 1
// 0056268e  5b                   pop ebx
// 0056268f  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jpeg_resync_to_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
