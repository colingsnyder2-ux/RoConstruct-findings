// roc 2009-06 006ed400  unit: seg_006e0000  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed400
//
// 006ed400  51                   push ecx
// 006ed401  53                   push ebx
// 006ed402  55                   push ebp
// 006ed403  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006ed407  56                   push esi
// 006ed408  8bf0                 mov esi, eax
// 006ed40a  837e0c00             cmp dword ptr [esi + 0xc], 0
// 006ed40e  57                   push edi
// 006ed40f  7404                 je 0x6ed415
// 006ed411  33ff                 xor edi, edi
// 006ed413  eb03                 jmp 0x6ed418
// 006ed415  8b7d30               mov edi, dword ptr [ebp + 0x30]
// 006ed418  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed41c  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 006ed41f  897c2418             mov dword ptr [esp + 0x18], edi
// 006ed423  7538                 jne 0x6ed45d
// 006ed425  8b4608               mov eax, dword ptr [esi + 8]
// 006ed428  8b16                 mov edx, dword ptr [esi]
// 006ed42a  50                   push eax
// 006ed42b  8b4604               mov eax, dword ptr [esi + 4]
// 006ed42e  6a04                 push 4
// 006ed430  8d4c2420             lea ecx, [esp + 0x20]
// 006ed434  51                   push ecx
// 006ed435  52                   push edx
// 006ed436  ffd0                 call eax
// 006ed438  83c410               add esp, 0x10
// 006ed43b  894610               mov dword ptr [esi + 0x10], eax
// 006ed43e  85c0                 test eax, eax
// 006ed440  751b                 jne 0x6ed45d
// 006ed442  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ed445  8b06                 mov eax, dword ptr [esi]
// 006ed447  51                   push ecx
// 006ed448  8b4e04               mov ecx, dword ptr [esi + 4]
// 006ed44b  8d14bd00000000       lea edx, [edi*4]
// 006ed452  52                   push edx
// 006ed453  53                   push ebx
// 006ed454  50                   push eax
// 006ed455  ffd1                 call ecx
// 006ed457  83c410               add esp, 0x10
// 006ed45a  894610               mov dword ptr [esi + 0x10], eax
// 006ed45d  837e0c00             cmp dword ptr [esi + 0xc], 0
// 006ed461  7404                 je 0x6ed467
// 006ed463  33db                 xor ebx, ebx
// 006ed465  eb03                 jmp 0x6ed46a
// 006ed467  8b5d38               mov ebx, dword ptr [ebp + 0x38]
// 006ed46a  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed46e  895c2418             mov dword ptr [esp + 0x18], ebx
// 006ed472  7519                 jne 0x6ed48d
// 006ed474  8b5608               mov edx, dword ptr [esi + 8]
// 006ed477  8b0e                 mov ecx, dword ptr [esi]
// 006ed479  52                   push edx
// 006ed47a  8b5604               mov edx, dword ptr [esi + 4]
// 006ed47d  6a04                 push 4
// 006ed47f  8d442420             lea eax, [esp + 0x20]
// 006ed483  50                   push eax
// 006ed484  51                   push ecx
// 006ed485  ffd2                 call edx
// 006ed487  83c410               add esp, 0x10
// 006ed48a  894610               mov dword ptr [esi + 0x10], eax
// 006ed48d  85db                 test ebx, ebx
// 006ed48f  7e69                 jle 0x6ed4fa
// 006ed491  33ff                 xor edi, edi
// 006ed493  8b4518               mov eax, dword ptr [ebp + 0x18]
// 006ed496  8b0407               mov eax, dword ptr [edi + eax]
// 006ed499  e8a2fdffff           call 0x6ed240
// 006ed49e  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed4a2  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 006ed4a5  8b540f04             mov edx, dword ptr [edi + ecx + 4]
// 006ed4a9  89542418             mov dword ptr [esp + 0x18], edx
// 006ed4ad  7519                 jne 0x6ed4c8
// 006ed4af  8b4608               mov eax, dword ptr [esi + 8]
// 006ed4b2  8b16                 mov edx, dword ptr [esi]
// 006ed4b4  50                   push eax
// 006ed4b5  8b4604               mov eax, dword ptr [esi + 4]
// 006ed4b8  6a04                 push 4
// 006ed4ba  8d4c2420             lea ecx, [esp + 0x20]
// 006ed4be  51                   push ecx
// 006ed4bf  52                   push edx
// 006ed4c0  ffd0                 call eax
// 006ed4c2  83c410               add esp, 0x10
// 006ed4c5  894610               mov dword ptr [esi + 0x10], eax
// 006ed4c8  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed4cc  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 006ed4cf  8b540f08             mov edx, dword ptr [edi + ecx + 8]
// 006ed4d3  89542410             mov dword ptr [esp + 0x10], edx
// 006ed4d7  7519                 jne 0x6ed4f2
// 006ed4d9  8b4608               mov eax, dword ptr [esi + 8]
// 006ed4dc  8b16                 mov edx, dword ptr [esi]
// 006ed4de  50                   push eax
// 006ed4df  8b4604               mov eax, dword ptr [esi + 4]
// 006ed4e2  6a04                 push 4
// 006ed4e4  8d4c2418             lea ecx, [esp + 0x18]
// 006ed4e8  51                   push ecx
// 006ed4e9  52                   push edx
// 006ed4ea  ffd0                 call eax
// 006ed4ec  83c410               add esp, 0x10
// 006ed4ef  894610               mov dword ptr [esi + 0x10], eax
// 006ed4f2  83c70c               add edi, 0xc
// 006ed4f5  83eb01               sub ebx, 1
// 006ed4f8  7599                 jne 0x6ed493
// 006ed4fa  837e0c00             cmp dword ptr [esi + 0xc], 0
// 006ed4fe  7404                 je 0x6ed504
// 006ed500  33db                 xor ebx, ebx
// 006ed502  eb03                 jmp 0x6ed507
// 006ed504  8b5d24               mov ebx, dword ptr [ebp + 0x24]
// 006ed507  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed50b  895c2418             mov dword ptr [esp + 0x18], ebx
// 006ed50f  7519                 jne 0x6ed52a
// 006ed511  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ed514  8b06                 mov eax, dword ptr [esi]
// 006ed516  51                   push ecx
// 006ed517  8b4e04               mov ecx, dword ptr [esi + 4]
// 006ed51a  6a04                 push 4
// 006ed51c  8d542420             lea edx, [esp + 0x20]
// 006ed520  52                   push edx
// 006ed521  50                   push eax
// 006ed522  ffd1                 call ecx
// 006ed524  83c410               add esp, 0x10
// 006ed527  894610               mov dword ptr [esi + 0x10], eax
// 006ed52a  33ff                 xor edi, edi
// 006ed52c  85db                 test ebx, ebx
// 006ed52e  7e10                 jle 0x6ed540
// 006ed530  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 006ed533  8b04ba               mov eax, dword ptr [edx + edi*4]
// 006ed536  e805fdffff           call 0x6ed240
// 006ed53b  47                   inc edi
// 006ed53c  3bfb                 cmp edi, ebx
// 006ed53e  7cf0                 jl 0x6ed530
// 006ed540  5f                   pop edi
// 006ed541  5e                   pop esi
// 006ed542  5d                   pop ebp
// 006ed543  5b                   pop ebx
// 006ed544  59                   pop ecx
// 006ed545  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpDebug)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
