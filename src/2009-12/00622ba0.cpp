// roc 2009-12 00622ba0  unit: seg_00620000  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00622ba0
//
// 00622ba0  83ec10               sub esp, 0x10
// 00622ba3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00622ba7  8b81a8010000         mov eax, dword ptr [ecx + 0x1a8]
// 00622bad  8b4018               mov eax, dword ptr [eax + 0x18]
// 00622bb0  8b5004               mov edx, dword ptr [eax + 4]
// 00622bb3  56                   push esi
// 00622bb4  8b715c               mov esi, dword ptr [ecx + 0x5c]
// 00622bb7  57                   push edi
// 00622bb8  8b38                 mov edi, dword ptr [eax]
// 00622bba  8b4008               mov eax, dword ptr [eax + 8]
// 00622bbd  8944240c             mov dword ptr [esp + 0xc], eax
// 00622bc1  8b442428             mov eax, dword ptr [esp + 0x28]
// 00622bc5  89542408             mov dword ptr [esp + 8], edx
// 00622bc9  89742410             mov dword ptr [esp + 0x10], esi
// 00622bcd  85c0                 test eax, eax
// 00622bcf  7e79                 jle 0x622c4a
// 00622bd1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00622bd5  53                   push ebx
// 00622bd6  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00622bda  2bd9                 sub ebx, ecx
// 00622bdc  55                   push ebp
// 00622bdd  894c2424             mov dword ptr [esp + 0x24], ecx
// 00622be1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00622be5  89442430             mov dword ptr [esp + 0x30], eax
// 00622be9  8da42400000000       lea esp, [esp]
// 00622bf0  8b040b               mov eax, dword ptr [ebx + ecx]
// 00622bf3  8b11                 mov edx, dword ptr [ecx]
// 00622bf5  85f6                 test esi, esi
// 00622bf7  7641                 jbe 0x622c3a
// 00622bf9  8da42400000000       lea esp, [esp]
// 00622c00  0fb608               movzx ecx, byte ptr [eax]
// 00622c03  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00622c07  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00622c0b  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00622c0f  0fb60c39             movzx ecx, byte ptr [ecx + edi]
// 00622c13  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00622c17  40                   inc eax
// 00622c18  03cb                 add ecx, ebx
// 00622c1a  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00622c1e  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00622c22  40                   inc eax
// 00622c23  03cb                 add ecx, ebx
// 00622c25  880a                 mov byte ptr [edx], cl
// 00622c27  40                   inc eax
// 00622c28  42                   inc edx
// 00622c29  83ee01               sub esi, 1
// 00622c2c  75d2                 jne 0x622c00
// 00622c2e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00622c32  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00622c36  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00622c3a  83c104               add ecx, 4
// 00622c3d  836c243001           sub dword ptr [esp + 0x30], 1
// 00622c42  894c2424             mov dword ptr [esp + 0x24], ecx
// 00622c46  75a8                 jne 0x622bf0
// 00622c48  5d                   pop ebp
// 00622c49  5b                   pop ebx
// 00622c4a  5f                   pop edi
// 00622c4b  5e                   pop esi
// 00622c4c  83c410               add esp, 0x10
// 00622c4f  c3                   ret 
// library jpeg-6b/jquant1.c (function _color_quantize3)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
