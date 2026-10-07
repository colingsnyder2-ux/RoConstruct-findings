// roc 2009-06 005a0b70  unit: seg_005a0000  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a0b70
//
// 005a0b70  83ec10               sub esp, 0x10
// 005a0b73  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a0b77  8b81a8010000         mov eax, dword ptr [ecx + 0x1a8]
// 005a0b7d  8b4018               mov eax, dword ptr [eax + 0x18]
// 005a0b80  8b5004               mov edx, dword ptr [eax + 4]
// 005a0b83  56                   push esi
// 005a0b84  8b715c               mov esi, dword ptr [ecx + 0x5c]
// 005a0b87  57                   push edi
// 005a0b88  8b38                 mov edi, dword ptr [eax]
// 005a0b8a  8b4008               mov eax, dword ptr [eax + 8]
// 005a0b8d  8944240c             mov dword ptr [esp + 0xc], eax
// 005a0b91  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a0b95  89542408             mov dword ptr [esp + 8], edx
// 005a0b99  89742410             mov dword ptr [esp + 0x10], esi
// 005a0b9d  85c0                 test eax, eax
// 005a0b9f  7e79                 jle 0x5a0c1a
// 005a0ba1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a0ba5  53                   push ebx
// 005a0ba6  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005a0baa  2bd9                 sub ebx, ecx
// 005a0bac  55                   push ebp
// 005a0bad  894c2424             mov dword ptr [esp + 0x24], ecx
// 005a0bb1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005a0bb5  89442430             mov dword ptr [esp + 0x30], eax
// 005a0bb9  8da42400000000       lea esp, [esp]
// 005a0bc0  8b040b               mov eax, dword ptr [ebx + ecx]
// 005a0bc3  8b11                 mov edx, dword ptr [ecx]
// 005a0bc5  85f6                 test esi, esi
// 005a0bc7  7641                 jbe 0x5a0c0a
// 005a0bc9  8da42400000000       lea esp, [esp]
// 005a0bd0  0fb608               movzx ecx, byte ptr [eax]
// 005a0bd3  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005a0bd7  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005a0bdb  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 005a0bdf  0fb60c39             movzx ecx, byte ptr [ecx + edi]
// 005a0be3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005a0be7  40                   inc eax
// 005a0be8  03cb                 add ecx, ebx
// 005a0bea  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005a0bee  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 005a0bf2  40                   inc eax
// 005a0bf3  03cb                 add ecx, ebx
// 005a0bf5  880a                 mov byte ptr [edx], cl
// 005a0bf7  40                   inc eax
// 005a0bf8  42                   inc edx
// 005a0bf9  83ee01               sub esi, 1
// 005a0bfc  75d2                 jne 0x5a0bd0
// 005a0bfe  8b742418             mov esi, dword ptr [esp + 0x18]
// 005a0c02  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a0c06  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a0c0a  83c104               add ecx, 4
// 005a0c0d  836c243001           sub dword ptr [esp + 0x30], 1
// 005a0c12  894c2424             mov dword ptr [esp + 0x24], ecx
// 005a0c16  75a8                 jne 0x5a0bc0
// 005a0c18  5d                   pop ebp
// 005a0c19  5b                   pop ebx
// 005a0c1a  5f                   pop edi
// 005a0c1b  5e                   pop esi
// 005a0c1c  83c410               add esp, 0x10
// 005a0c1f  c3                   ret 
// library jpeg-6b/jquant1.c (function _color_quantize3)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
