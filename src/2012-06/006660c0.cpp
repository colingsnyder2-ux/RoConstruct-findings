// from server: 100% by auto
// roc 2012-06 006660c0  unit: seg_00660000  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006660c0
//
// 006660c0  83ec10               sub esp, 0x10
// 006660c3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006660c7  8b81a8010000         mov eax, dword ptr [ecx + 0x1a8]
// 006660cd  8b4018               mov eax, dword ptr [eax + 0x18]
// 006660d0  8b5004               mov edx, dword ptr [eax + 4]
// 006660d3  56                   push esi
// 006660d4  8b715c               mov esi, dword ptr [ecx + 0x5c]
// 006660d7  57                   push edi
// 006660d8  8b38                 mov edi, dword ptr [eax]
// 006660da  8b4008               mov eax, dword ptr [eax + 8]
// 006660dd  8944240c             mov dword ptr [esp + 0xc], eax
// 006660e1  8b442428             mov eax, dword ptr [esp + 0x28]
// 006660e5  89542408             mov dword ptr [esp + 8], edx
// 006660e9  89742410             mov dword ptr [esp + 0x10], esi
// 006660ed  85c0                 test eax, eax
// 006660ef  7e79                 jle 0x66616a
// 006660f1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006660f5  53                   push ebx
// 006660f6  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006660fa  2bd9                 sub ebx, ecx
// 006660fc  55                   push ebp
// 006660fd  894c2424             mov dword ptr [esp + 0x24], ecx
// 00666101  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00666105  89442430             mov dword ptr [esp + 0x30], eax
// 00666109  8da42400000000       lea esp, [esp]
// 00666110  8b040b               mov eax, dword ptr [ebx + ecx]
// 00666113  8b11                 mov edx, dword ptr [ecx]
// 00666115  85f6                 test esi, esi
// 00666117  7641                 jbe 0x66615a
// 00666119  8da42400000000       lea esp, [esp]
// 00666120  0fb608               movzx ecx, byte ptr [eax]
// 00666123  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00666127  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0066612b  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0066612f  0fb60c39             movzx ecx, byte ptr [ecx + edi]
// 00666133  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00666137  40                   inc eax
// 00666138  03cb                 add ecx, ebx
// 0066613a  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0066613e  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00666142  40                   inc eax
// 00666143  03cb                 add ecx, ebx
// 00666145  880a                 mov byte ptr [edx], cl
// 00666147  40                   inc eax
// 00666148  42                   inc edx
// 00666149  83ee01               sub esi, 1
// 0066614c  75d2                 jne 0x666120
// 0066614e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00666152  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00666156  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066615a  83c104               add ecx, 4
// 0066615d  836c243001           sub dword ptr [esp + 0x30], 1
// 00666162  894c2424             mov dword ptr [esp + 0x24], ecx
// 00666166  75a8                 jne 0x666110
// 00666168  5d                   pop ebp
// 00666169  5b                   pop ebx
// 0066616a  5f                   pop edi
// 0066616b  5e                   pop esi
// 0066616c  83c410               add esp, 0x10
// 0066616f  c3                   ret 
// library jpeg-6b/jquant1.c (function _color_quantize3)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
