// from server: 100% by auto
// roc 2011-06 0057a9b0  unit: seg_00570000  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057a9b0
//
// 0057a9b0  83ec10               sub esp, 0x10
// 0057a9b3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057a9b7  8b81a8010000         mov eax, dword ptr [ecx + 0x1a8]
// 0057a9bd  8b4018               mov eax, dword ptr [eax + 0x18]
// 0057a9c0  8b5004               mov edx, dword ptr [eax + 4]
// 0057a9c3  56                   push esi
// 0057a9c4  8b715c               mov esi, dword ptr [ecx + 0x5c]
// 0057a9c7  57                   push edi
// 0057a9c8  8b38                 mov edi, dword ptr [eax]
// 0057a9ca  8b4008               mov eax, dword ptr [eax + 8]
// 0057a9cd  8944240c             mov dword ptr [esp + 0xc], eax
// 0057a9d1  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057a9d5  89542408             mov dword ptr [esp + 8], edx
// 0057a9d9  89742410             mov dword ptr [esp + 0x10], esi
// 0057a9dd  85c0                 test eax, eax
// 0057a9df  7e79                 jle 0x57aa5a
// 0057a9e1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057a9e5  53                   push ebx
// 0057a9e6  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0057a9ea  2bd9                 sub ebx, ecx
// 0057a9ec  55                   push ebp
// 0057a9ed  894c2424             mov dword ptr [esp + 0x24], ecx
// 0057a9f1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0057a9f5  89442430             mov dword ptr [esp + 0x30], eax
// 0057a9f9  8da42400000000       lea esp, [esp]
// 0057aa00  8b040b               mov eax, dword ptr [ebx + ecx]
// 0057aa03  8b11                 mov edx, dword ptr [ecx]
// 0057aa05  85f6                 test esi, esi
// 0057aa07  7641                 jbe 0x57aa4a
// 0057aa09  8da42400000000       lea esp, [esp]
// 0057aa10  0fb608               movzx ecx, byte ptr [eax]
// 0057aa13  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0057aa17  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057aa1b  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0057aa1f  0fb60c39             movzx ecx, byte ptr [ecx + edi]
// 0057aa23  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0057aa27  40                   inc eax
// 0057aa28  03cb                 add ecx, ebx
// 0057aa2a  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0057aa2e  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0057aa32  40                   inc eax
// 0057aa33  03cb                 add ecx, ebx
// 0057aa35  880a                 mov byte ptr [edx], cl
// 0057aa37  40                   inc eax
// 0057aa38  42                   inc edx
// 0057aa39  83ee01               sub esi, 1
// 0057aa3c  75d2                 jne 0x57aa10
// 0057aa3e  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057aa42  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057aa46  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0057aa4a  83c104               add ecx, 4
// 0057aa4d  836c243001           sub dword ptr [esp + 0x30], 1
// 0057aa52  894c2424             mov dword ptr [esp + 0x24], ecx
// 0057aa56  75a8                 jne 0x57aa00
// 0057aa58  5d                   pop ebp
// 0057aa59  5b                   pop ebx
// 0057aa5a  5f                   pop edi
// 0057aa5b  5e                   pop esi
// 0057aa5c  83c410               add esp, 0x10
// 0057aa5f  c3                   ret 
// library jpeg-6b/jquant1.c (function _color_quantize3)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
