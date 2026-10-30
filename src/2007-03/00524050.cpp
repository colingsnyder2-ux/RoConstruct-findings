// roc 2007-03 00524050  unit: seg_00520000  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00524050
//
// 00524050  51                   push ecx
// 00524051  8b442414             mov eax, dword ptr [esp + 0x14]
// 00524055  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00524059  57                   push edi
// 0052405a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052405e  3bf8                 cmp edi, eax
// 00524060  0f8d2f010000         jge 0x524195
// 00524066  8d143f               lea edx, [edi + edi]
// 00524069  53                   push ebx
// 0052406a  89542408             mov dword ptr [esp + 8], edx
// 0052406e  8bd7                 mov edx, edi
// 00524070  55                   push ebp
// 00524071  c1e205               shl edx, 5
// 00524074  56                   push esi
// 00524075  8d740a0c             lea esi, [edx + ecx + 0xc]
// 00524079  eb09                 jmp 0x524084
// 0052407b  eb03                 jmp 0x524080
// 0052407d  8d4900               lea ecx, [ecx]
// 00524080  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00524084  39442410             cmp dword ptr [esp + 0x10], eax
// 00524088  8bd7                 mov edx, edi
// 0052408a  7f07                 jg 0x524093
// 0052408c  e85ffbffff           call 0x523bf0
// 00524091  eb05                 jmp 0x524098
// 00524093  e888fbffff           call 0x523c20
// 00524098  8bc8                 mov ecx, eax
// 0052409a  85c9                 test ecx, ecx
// 0052409c  0f84eb000000         je 0x52418d
// 005240a2  8b4104               mov eax, dword ptr [ecx + 4]
// 005240a5  8946f8               mov dword ptr [esi - 8], eax
// 005240a8  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005240ab  8916                 mov dword ptr [esi], edx
// 005240ad  8b4114               mov eax, dword ptr [ecx + 0x14]
// 005240b0  894608               mov dword ptr [esi + 8], eax
// 005240b3  8b11                 mov edx, dword ptr [ecx]
// 005240b5  8956f4               mov dword ptr [esi - 0xc], edx
// 005240b8  8b4108               mov eax, dword ptr [ecx + 8]
// 005240bb  8946fc               mov dword ptr [esi - 4], eax
// 005240be  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005240c1  895604               mov dword ptr [esi + 4], edx
// 005240c4  8b11                 mov edx, dword ptr [ecx]
// 005240c6  8b4104               mov eax, dword ptr [ecx + 4]
// 005240c9  8b7914               mov edi, dword ptr [ecx + 0x14]
// 005240cc  8b6908               mov ebp, dword ptr [ecx + 8]
// 005240cf  8d5ef4               lea ebx, [esi - 0xc]
// 005240d2  2bc2                 sub eax, edx
// 005240d4  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005240d7  2bfa                 sub edi, edx
// 005240d9  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005240dc  2bd5                 sub edx, ebp
// 005240de  03ff                 add edi, edi
// 005240e0  8d1452               lea edx, [edx + edx*2]
// 005240e3  03d2                 add edx, edx
// 005240e5  03ff                 add edi, edi
// 005240e7  c1e004               shl eax, 4
// 005240ea  03d2                 add edx, edx
// 005240ec  03ff                 add edi, edi
// 005240ee  3bc2                 cmp eax, edx
// 005240f0  bd01000000           mov ebp, 1
// 005240f5  7e04                 jle 0x5240fb
// 005240f7  8bd0                 mov edx, eax
// 005240f9  33ed                 xor ebp, ebp
// 005240fb  3bfa                 cmp edi, edx
// 005240fd  7e05                 jle 0x524104
// 005240ff  bd02000000           mov ebp, 2
// 00524104  83ed00               sub ebp, 0
// 00524107  743a                 je 0x524143
// 00524109  83ed01               sub ebp, 1
// 0052410c  741d                 je 0x52412b
// 0052410e  83ed01               sub ebp, 1
// 00524111  7544                 jne 0x524157
// 00524113  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00524116  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00524119  03c2                 add eax, edx
// 0052411b  99                   cdq 
// 0052411c  2bc2                 sub eax, edx
// 0052411e  d1f8                 sar eax, 1
// 00524120  894114               mov dword ptr [ecx + 0x14], eax
// 00524123  83c001               add eax, 1
// 00524126  894604               mov dword ptr [esi + 4], eax
// 00524129  eb2c                 jmp 0x524157
// 0052412b  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0052412e  8b5108               mov edx, dword ptr [ecx + 8]
// 00524131  03c2                 add eax, edx
// 00524133  99                   cdq 
// 00524134  2bc2                 sub eax, edx
// 00524136  d1f8                 sar eax, 1
// 00524138  89410c               mov dword ptr [ecx + 0xc], eax
// 0052413b  83c001               add eax, 1
// 0052413e  8946fc               mov dword ptr [esi - 4], eax
// 00524141  eb14                 jmp 0x524157
// 00524143  8b4104               mov eax, dword ptr [ecx + 4]
// 00524146  8b11                 mov edx, dword ptr [ecx]
// 00524148  03c2                 add eax, edx
// 0052414a  99                   cdq 
// 0052414b  2bc2                 sub eax, edx
// 0052414d  d1f8                 sar eax, 1
// 0052414f  894104               mov dword ptr [ecx + 4], eax
// 00524152  83c001               add eax, 1
// 00524155  8903                 mov dword ptr [ebx], eax
// 00524157  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0052415b  51                   push ecx
// 0052415c  8bcf                 mov ecx, edi
// 0052415e  e8edfaffff           call 0x523c50
// 00524163  53                   push ebx
// 00524164  8bcf                 mov ecx, edi
// 00524166  e8e5faffff           call 0x523c50
// 0052416b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0052416f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00524173  8344241802           add dword ptr [esp + 0x18], 2
// 00524178  83c701               add edi, 1
// 0052417b  83c408               add esp, 8
// 0052417e  83c620               add esi, 0x20
// 00524181  3bf8                 cmp edi, eax
// 00524183  897c2420             mov dword ptr [esp + 0x20], edi
// 00524187  0f8cf3feffff         jl 0x524080
// 0052418d  5e                   pop esi
// 0052418e  5d                   pop ebp
// 0052418f  5b                   pop ebx
// 00524190  8bc7                 mov eax, edi
// 00524192  5f                   pop edi
// 00524193  59                   pop ecx
// 00524194  c3                   ret 
// 00524195  8bc7                 mov eax, edi
// 00524197  5f                   pop edi
// 00524198  59                   pop ecx
// 00524199  c3                   ret 
// library jpeg-6b/jquant2.c (function _median_cut)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
