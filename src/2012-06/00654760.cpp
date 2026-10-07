// roc 2012-06 00654760  unit: seg_00650000  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00654760
//
// 00654760  53                   push ebx
// 00654761  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00654765  55                   push ebp
// 00654766  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0065476a  56                   push esi
// 0065476b  8b7304               mov esi, dword ptr [ebx + 4]
// 0065476e  57                   push edi
// 0065476f  85ed                 test ebp, ebp
// 00654771  7c05                 jl 0x654778
// 00654773  83fd02               cmp ebp, 2
// 00654776  7c18                 jl 0x654790
// 00654778  8b03                 mov eax, dword ptr [ebx]
// 0065477a  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 00654781  8b0b                 mov ecx, dword ptr [ebx]
// 00654783  896918               mov dword ptr [ecx + 0x18], ebp
// 00654786  8b13                 mov edx, dword ptr [ebx]
// 00654788  8b02                 mov eax, dword ptr [edx]
// 0065478a  53                   push ebx
// 0065478b  ffd0                 call eax
// 0065478d  83c404               add esp, 4
// 00654790  83fd01               cmp ebp, 1
// 00654793  7560                 jne 0x6547f5
// 00654795  8b7e44               mov edi, dword ptr [esi + 0x44]
// 00654798  85ff                 test edi, edi
// 0065479a  7422                 je 0x6547be
// 0065479c  8d642400             lea esp, [esp]
// 006547a0  807f2200             cmp byte ptr [edi + 0x22], 0
// 006547a4  7411                 je 0x6547b7
// 006547a6  8b5730               mov edx, dword ptr [edi + 0x30]
// 006547a9  8d4f28               lea ecx, [edi + 0x28]
// 006547ac  51                   push ecx
// 006547ad  53                   push ebx
// 006547ae  c6472200             mov byte ptr [edi + 0x22], 0
// 006547b2  ffd2                 call edx
// 006547b4  83c408               add esp, 8
// 006547b7  8b7f24               mov edi, dword ptr [edi + 0x24]
// 006547ba  85ff                 test edi, edi
// 006547bc  75e2                 jne 0x6547a0
// 006547be  8b7e48               mov edi, dword ptr [esi + 0x48]
// 006547c1  c7464400000000       mov dword ptr [esi + 0x44], 0
// 006547c8  85ff                 test edi, edi
// 006547ca  7422                 je 0x6547ee
// 006547cc  8d642400             lea esp, [esp]
// 006547d0  807f2200             cmp byte ptr [edi + 0x22], 0
// 006547d4  7411                 je 0x6547e7
// 006547d6  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 006547d9  8d4728               lea eax, [edi + 0x28]
// 006547dc  50                   push eax
// 006547dd  53                   push ebx
// 006547de  c6472200             mov byte ptr [edi + 0x22], 0
// 006547e2  ffd1                 call ecx
// 006547e4  83c408               add esp, 8
// 006547e7  8b7f24               mov edi, dword ptr [edi + 0x24]
// 006547ea  85ff                 test edi, edi
// 006547ec  75e2                 jne 0x6547d0
// 006547ee  c7464800000000       mov dword ptr [esi + 0x48], 0
// 006547f5  8b44ae3c             mov eax, dword ptr [esi + ebp*4 + 0x3c]
// 006547f9  c744ae3c00000000     mov dword ptr [esi + ebp*4 + 0x3c], 0
// 00654801  85c0                 test eax, eax
// 00654803  7424                 je 0x654829
// 00654805  8b5008               mov edx, dword ptr [eax + 8]
// 00654808  8b4804               mov ecx, dword ptr [eax + 4]
// 0065480b  8b38                 mov edi, dword ptr [eax]
// 0065480d  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 00654811  55                   push ebp
// 00654812  50                   push eax
// 00654813  53                   push ebx
// 00654814  e877b70000           call 0x65ff90
// 00654819  296e4c               sub dword ptr [esi + 0x4c], ebp
// 0065481c  83c40c               add esp, 0xc
// 0065481f  8bc7                 mov eax, edi
// 00654821  85ff                 test edi, edi
// 00654823  75e0                 jne 0x654805
// 00654825  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00654829  8b44ae34             mov eax, dword ptr [esi + ebp*4 + 0x34]
// 0065482d  c744ae3400000000     mov dword ptr [esi + ebp*4 + 0x34], 0
// 00654835  85c0                 test eax, eax
// 00654837  7427                 je 0x654860
// 00654839  8da42400000000       lea esp, [esp]
// 00654840  8b5008               mov edx, dword ptr [eax + 8]
// 00654843  8b4804               mov ecx, dword ptr [eax + 4]
// 00654846  8b38                 mov edi, dword ptr [eax]
// 00654848  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 0065484c  55                   push ebp
// 0065484d  50                   push eax
// 0065484e  53                   push ebx
// 0065484f  e83cb70000           call 0x65ff90
// 00654854  296e4c               sub dword ptr [esi + 0x4c], ebp
// 00654857  83c40c               add esp, 0xc
// 0065485a  8bc7                 mov eax, edi
// 0065485c  85ff                 test edi, edi
// 0065485e  75e0                 jne 0x654840
// 00654860  5f                   pop edi
// 00654861  5e                   pop esi
// 00654862  5d                   pop ebp
// 00654863  5b                   pop ebx
// 00654864  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _free_pool)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
