// roc 2010-06 00584700  unit: seg_00580000  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00584700
//
// 00584700  83ec10               sub esp, 0x10
// 00584703  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00584707  8b81a8010000         mov eax, dword ptr [ecx + 0x1a8]
// 0058470d  8b4018               mov eax, dword ptr [eax + 0x18]
// 00584710  8b5004               mov edx, dword ptr [eax + 4]
// 00584713  56                   push esi
// 00584714  8b715c               mov esi, dword ptr [ecx + 0x5c]
// 00584717  57                   push edi
// 00584718  8b38                 mov edi, dword ptr [eax]
// 0058471a  8b4008               mov eax, dword ptr [eax + 8]
// 0058471d  8944240c             mov dword ptr [esp + 0xc], eax
// 00584721  8b442428             mov eax, dword ptr [esp + 0x28]
// 00584725  89542408             mov dword ptr [esp + 8], edx
// 00584729  89742410             mov dword ptr [esp + 0x10], esi
// 0058472d  85c0                 test eax, eax
// 0058472f  7e79                 jle 0x5847aa
// 00584731  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00584735  53                   push ebx
// 00584736  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0058473a  2bd9                 sub ebx, ecx
// 0058473c  55                   push ebp
// 0058473d  894c2424             mov dword ptr [esp + 0x24], ecx
// 00584741  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00584745  89442430             mov dword ptr [esp + 0x30], eax
// 00584749  8da42400000000       lea esp, [esp]
// 00584750  8b040b               mov eax, dword ptr [ebx + ecx]
// 00584753  8b11                 mov edx, dword ptr [ecx]
// 00584755  85f6                 test esi, esi
// 00584757  7641                 jbe 0x58479a
// 00584759  8da42400000000       lea esp, [esp]
// 00584760  0fb608               movzx ecx, byte ptr [eax]
// 00584763  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00584767  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0058476b  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0058476f  0fb60c39             movzx ecx, byte ptr [ecx + edi]
// 00584773  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00584777  40                   inc eax
// 00584778  03cb                 add ecx, ebx
// 0058477a  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0058477e  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00584782  40                   inc eax
// 00584783  03cb                 add ecx, ebx
// 00584785  880a                 mov byte ptr [edx], cl
// 00584787  40                   inc eax
// 00584788  42                   inc edx
// 00584789  83ee01               sub esi, 1
// 0058478c  75d2                 jne 0x584760
// 0058478e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00584792  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00584796  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058479a  83c104               add ecx, 4
// 0058479d  836c243001           sub dword ptr [esp + 0x30], 1
// 005847a2  894c2424             mov dword ptr [esp + 0x24], ecx
// 005847a6  75a8                 jne 0x584750
// 005847a8  5d                   pop ebp
// 005847a9  5b                   pop ebx
// 005847aa  5f                   pop edi
// 005847ab  5e                   pop esi
// 005847ac  83c410               add esp, 0x10
// 005847af  c3                   ret 
// library jpeg-6b/jquant1.c (function _color_quantize3)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
