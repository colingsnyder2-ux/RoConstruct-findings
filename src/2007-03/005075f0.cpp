// roc 2007-03 005075f0  unit: seg_00500000  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005075f0
//
// 005075f0  83ec24               sub esp, 0x24
// 005075f3  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 005075f8  33c4                 xor eax, esp
// 005075fa  89442420             mov dword ptr [esp + 0x20], eax
// 005075fe  8b442428             mov eax, dword ptr [esp + 0x28]
// 00507602  53                   push ebx
// 00507603  55                   push ebp
// 00507604  57                   push edi
// 00507605  8b7818               mov edi, dword ptr [eax + 0x18]
// 00507608  8b6f04               mov ebp, dword ptr [edi + 4]
// 0050760b  85ed                 test ebp, ebp
// 0050760d  8b1f                 mov ebx, dword ptr [edi]
// 0050760f  89442410             mov dword ptr [esp + 0x10], eax
// 00507613  897c2418             mov dword ptr [esp + 0x18], edi
// 00507617  7524                 jne 0x50763d
// 00507619  50                   push eax
// 0050761a  8b470c               mov eax, dword ptr [edi + 0xc]
// 0050761d  ffd0                 call eax
// 0050761f  83c404               add esp, 4
// 00507622  84c0                 test al, al
// 00507624  7512                 jne 0x507638
// 00507626  5f                   pop edi
// 00507627  5d                   pop ebp
// 00507628  5b                   pop ebx
// 00507629  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050762d  33cc                 xor ecx, esp
// 0050762f  e872781100           call 0x61eea6
// 00507634  83c424               add esp, 0x24
// 00507637  c3                   ret 
// 00507638  8b1f                 mov ebx, dword ptr [edi]
// 0050763a  8b6f04               mov ebp, dword ptr [edi + 4]
// 0050763d  33c9                 xor ecx, ecx
// 0050763f  8a2b                 mov ch, byte ptr [ebx]
// 00507641  83ed01               sub ebp, 1
// 00507644  83c301               add ebx, 1
// 00507647  85ed                 test ebp, ebp
// 00507649  56                   push esi
// 0050764a  8bf1                 mov esi, ecx
// 0050764c  751a                 jne 0x507668
// 0050764e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00507652  8b470c               mov eax, dword ptr [edi + 0xc]
// 00507655  52                   push edx
// 00507656  ffd0                 call eax
// 00507658  83c404               add esp, 4
// 0050765b  84c0                 test al, al
// 0050765d  0f84b5000000         je 0x507718
// 00507663  8b1f                 mov ebx, dword ptr [edi]
// 00507665  8b6f04               mov ebp, dword ptr [edi + 4]
// 00507668  0fb60b               movzx ecx, byte ptr [ebx]
// 0050766b  03f1                 add esi, ecx
// 0050766d  83ee02               sub esi, 2
// 00507670  83ed01               sub ebp, 1
// 00507673  83c301               add ebx, 1
// 00507676  83fe0e               cmp esi, 0xe
// 00507679  7c0b                 jl 0x507686
// 0050767b  b80e000000           mov eax, 0xe
// 00507680  89442418             mov dword ptr [esp + 0x18], eax
// 00507684  eb12                 jmp 0x507698
// 00507686  33d2                 xor edx, edx
// 00507688  85f6                 test esi, esi
// 0050768a  0f9ec2               setle dl
// 0050768d  83ea01               sub edx, 1
// 00507690  23d6                 and edx, esi
// 00507692  89542418             mov dword ptr [esp + 0x18], edx
// 00507696  8bc2                 mov eax, edx
// 00507698  33c9                 xor ecx, ecx
// 0050769a  85c0                 test eax, eax
// 0050769c  894c2410             mov dword ptr [esp + 0x10], ecx
// 005076a0  7639                 jbe 0x5076db
// 005076a2  85ed                 test ebp, ebp
// 005076a4  751e                 jne 0x5076c4
// 005076a6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005076aa  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 005076ad  50                   push eax
// 005076ae  ffd1                 call ecx
// 005076b0  83c404               add esp, 4
// 005076b3  84c0                 test al, al
// 005076b5  7461                 je 0x507718
// 005076b7  8b1f                 mov ebx, dword ptr [edi]
// 005076b9  8b6f04               mov ebp, dword ptr [edi + 4]
// 005076bc  8b442418             mov eax, dword ptr [esp + 0x18]
// 005076c0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005076c4  8a13                 mov dl, byte ptr [ebx]
// 005076c6  88540c20             mov byte ptr [esp + ecx + 0x20], dl
// 005076ca  83c101               add ecx, 1
// 005076cd  83ed01               sub ebp, 1
// 005076d0  83c301               add ebx, 1
// 005076d3  3bc8                 cmp ecx, eax
// 005076d5  894c2410             mov dword ptr [esp + 0x10], ecx
// 005076d9  72c7                 jb 0x5076a2
// 005076db  8b542414             mov edx, dword ptr [esp + 0x14]
// 005076df  8b8a7c010000         mov ecx, dword ptr [edx + 0x17c]
// 005076e5  2bf0                 sub esi, eax
// 005076e7  81e9e0000000         sub ecx, 0xe0
// 005076ed  89742410             mov dword ptr [esp + 0x10], esi
// 005076f1  744d                 je 0x507740
// 005076f3  83e90e               sub ecx, 0xe
// 005076f6  7435                 je 0x50772d
// 005076f8  8b02                 mov eax, dword ptr [edx]
// 005076fa  c7401444000000       mov dword ptr [eax + 0x14], 0x44
// 00507701  8b0a                 mov ecx, dword ptr [edx]
// 00507703  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 00507709  894118               mov dword ptr [ecx + 0x18], eax
// 0050770c  8b0a                 mov ecx, dword ptr [edx]
// 0050770e  52                   push edx
// 0050770f  8b11                 mov edx, dword ptr [ecx]
// 00507711  ffd2                 call edx
// 00507713  83c404               add esp, 4
// 00507716  eb3d                 jmp 0x507755
// 00507718  5e                   pop esi
// 00507719  5f                   pop edi
// 0050771a  5d                   pop ebp
// 0050771b  32c0                 xor al, al
// 0050771d  5b                   pop ebx
// 0050771e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00507722  33cc                 xor ecx, esp
// 00507724  e87d771100           call 0x61eea6
// 00507729  83c424               add esp, 0x24
// 0050772c  c3                   ret 
// 0050772d  56                   push esi
// 0050772e  8bc8                 mov ecx, eax
// 00507730  8d442424             lea eax, [esp + 0x24]
// 00507734  8bf2                 mov esi, edx
// 00507736  e805feffff           call 0x507540
// 0050773b  83c404               add esp, 4
// 0050773e  eb11                 jmp 0x507751
// 00507740  8bce                 mov ecx, esi
// 00507742  8d7c2420             lea edi, [esp + 0x20]
// 00507746  8bf2                 mov esi, edx
// 00507748  e893fbffff           call 0x5072e0
// 0050774d  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00507751  8b742410             mov esi, dword ptr [esp + 0x10]
// 00507755  85f6                 test esi, esi
// 00507757  891f                 mov dword ptr [edi], ebx
// 00507759  896f04               mov dword ptr [edi + 4], ebp
// 0050775c  7e11                 jle 0x50776f
// 0050775e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00507762  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00507765  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00507768  56                   push esi
// 00507769  50                   push eax
// 0050776a  ffd2                 call edx
// 0050776c  83c408               add esp, 8
// 0050776f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00507773  5e                   pop esi
// 00507774  5f                   pop edi
// 00507775  5d                   pop ebp
// 00507776  5b                   pop ebx
// 00507777  33cc                 xor ecx, esp
// 00507779  b001                 mov al, 1
// 0050777b  e826771100           call 0x61eea6
// 00507780  83c424               add esp, 0x24
// 00507783  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_interesting_appn)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jdmarker.c
