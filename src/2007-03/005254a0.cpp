// roc 2007-03 005254a0  unit: seg_00520000  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005254a0
//
// 005254a0  83ec10               sub esp, 0x10
// 005254a3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005254a7  8b81a8010000         mov eax, dword ptr [ecx + 0x1a8]
// 005254ad  8b4018               mov eax, dword ptr [eax + 0x18]
// 005254b0  8b5004               mov edx, dword ptr [eax + 4]
// 005254b3  56                   push esi
// 005254b4  8b715c               mov esi, dword ptr [ecx + 0x5c]
// 005254b7  57                   push edi
// 005254b8  8b38                 mov edi, dword ptr [eax]
// 005254ba  8b4008               mov eax, dword ptr [eax + 8]
// 005254bd  8944240c             mov dword ptr [esp + 0xc], eax
// 005254c1  8b442428             mov eax, dword ptr [esp + 0x28]
// 005254c5  85c0                 test eax, eax
// 005254c7  89542408             mov dword ptr [esp + 8], edx
// 005254cb  89742410             mov dword ptr [esp + 0x10], esi
// 005254cf  0f8e7d000000         jle 0x525552
// 005254d5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005254d9  53                   push ebx
// 005254da  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005254de  2bd9                 sub ebx, ecx
// 005254e0  55                   push ebp
// 005254e1  894c2424             mov dword ptr [esp + 0x24], ecx
// 005254e5  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005254e9  89442430             mov dword ptr [esp + 0x30], eax
// 005254ed  8d4900               lea ecx, [ecx]
// 005254f0  85f6                 test esi, esi
// 005254f2  8b040b               mov eax, dword ptr [ebx + ecx]
// 005254f5  8b11                 mov edx, dword ptr [ecx]
// 005254f7  7649                 jbe 0x525542
// 005254f9  8da42400000000       lea esp, [esp]
// 00525500  0fb608               movzx ecx, byte ptr [eax]
// 00525503  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00525507  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0052550b  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0052550f  0fb60c39             movzx ecx, byte ptr [ecx + edi]
// 00525513  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00525517  83c001               add eax, 1
// 0052551a  03cb                 add ecx, ebx
// 0052551c  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00525520  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00525524  83c001               add eax, 1
// 00525527  03cb                 add ecx, ebx
// 00525529  880a                 mov byte ptr [edx], cl
// 0052552b  83c001               add eax, 1
// 0052552e  83c201               add edx, 1
// 00525531  83ee01               sub esi, 1
// 00525534  75ca                 jne 0x525500
// 00525536  8b742418             mov esi, dword ptr [esp + 0x18]
// 0052553a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0052553e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00525542  83c104               add ecx, 4
// 00525545  836c243001           sub dword ptr [esp + 0x30], 1
// 0052554a  894c2424             mov dword ptr [esp + 0x24], ecx
// 0052554e  75a0                 jne 0x5254f0
// 00525550  5d                   pop ebp
// 00525551  5b                   pop ebx
// 00525552  5f                   pop edi
// 00525553  5e                   pop esi
// 00525554  83c410               add esp, 0x10
// 00525557  c3                   ret 
// library jpeg-6b/jquant1.c (function _color_quantize3)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
