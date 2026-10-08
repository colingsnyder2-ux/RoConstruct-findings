// roc 2009-12 00620a80  unit: seg_00620000  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00620a80
//
// 00620a80  83ec28               sub esp, 0x28
// 00620a83  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00620a88  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00620a8c  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 00620a8f  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 00620a95  891424               mov dword ptr [esp], edx
// 00620a98  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 00620a9e  8b4808               mov ecx, dword ptr [eax + 8]
// 00620aa1  894c2410             mov dword ptr [esp + 0x10], ecx
// 00620aa5  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00620aa8  894c2420             mov dword ptr [esp + 0x20], ecx
// 00620aac  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00620aaf  8b4014               mov eax, dword ptr [eax + 0x14]
// 00620ab2  8954241c             mov dword ptr [esp + 0x1c], edx
// 00620ab6  894c2418             mov dword ptr [esp + 0x18], ecx
// 00620aba  89442414             mov dword ptr [esp + 0x14], eax
// 00620abe  0f8808010000         js 0x620bcc
// 00620ac4  53                   push ebx
// 00620ac5  55                   push ebp
// 00620ac6  56                   push esi
// 00620ac7  8b742440             mov esi, dword ptr [esp + 0x40]
// 00620acb  03f6                 add esi, esi
// 00620acd  57                   push edi
// 00620ace  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00620ad2  03f6                 add esi, esi
// 00620ad4  8b0f                 mov ecx, dword ptr [edi]
// 00620ad6  8b1c0e               mov ebx, dword ptr [esi + ecx]
// 00620ad9  8b4f08               mov ecx, dword ptr [edi + 8]
// 00620adc  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 00620adf  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00620ae3  8b4704               mov eax, dword ptr [edi + 4]
// 00620ae6  8b0406               mov eax, dword ptr [esi + eax]
// 00620ae9  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00620aed  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00620af0  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 00620af3  894c2414             mov dword ptr [esp + 0x14], ecx
// 00620af7  8b4d00               mov ecx, dword ptr [ebp]
// 00620afa  83c504               add ebp, 4
// 00620afd  896c2448             mov dword ptr [esp + 0x48], ebp
// 00620b01  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00620b05  83c604               add esi, 4
// 00620b08  89742434             mov dword ptr [esp + 0x34], esi
// 00620b0c  85ed                 test ebp, ebp
// 00620b0e  0f86a9000000         jbe 0x620bbd
// 00620b14  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00620b18  8bf3                 mov esi, ebx
// 00620b1a  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00620b1e  2bf0                 sub esi, eax
// 00620b20  2bd8                 sub ebx, eax
// 00620b22  2bf8                 sub edi, eax
// 00620b24  89742418             mov dword ptr [esp + 0x18], esi
// 00620b28  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00620b2c  897c2414             mov dword ptr [esp + 0x14], edi
// 00620b30  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00620b34  eb12                 jmp 0x620b48
// 00620b36  eb08                 jmp 0x620b40
// 00620b38  8da42400000000       lea esp, [esp]
// 00620b3f  90                   nop 
// 00620b40  8b742418             mov esi, dword ptr [esp + 0x18]
// 00620b44  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00620b48  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 00620b4c  0fb63406             movzx esi, byte ptr [esi + eax]
// 00620b50  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00620b54  2b14ab               sub edx, dword ptr [ebx + ebp*4]
// 00620b57  0fb638               movzx edi, byte ptr [eax]
// 00620b5a  2bd6                 sub edx, esi
// 00620b5c  8a92ff000000         mov dl, byte ptr [edx + 0xff]
// 00620b62  8811                 mov byte ptr [ecx], dl
// 00620b64  8b542424             mov edx, dword ptr [esp + 0x24]
// 00620b68  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 00620b6b  8b542428             mov edx, dword ptr [esp + 0x28]
// 00620b6f  031caa               add ebx, dword ptr [edx + ebp*4]
// 00620b72  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00620b76  c1fb10               sar ebx, 0x10
// 00620b79  8bea                 mov ebp, edx
// 00620b7b  2beb                 sub ebp, ebx
// 00620b7d  2bee                 sub ebp, esi
// 00620b7f  0fb69dff000000       movzx ebx, byte ptr [ebp + 0xff]
// 00620b86  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00620b8a  885901               mov byte ptr [ecx + 1], bl
// 00620b8d  8bda                 mov ebx, edx
// 00620b8f  2b5cbd00             sub ebx, dword ptr [ebp + edi*4]
// 00620b93  83c104               add ecx, 4
// 00620b96  2bde                 sub ebx, esi
// 00620b98  0fb69bff000000       movzx ebx, byte ptr [ebx + 0xff]
// 00620b9f  8b742414             mov esi, dword ptr [esp + 0x14]
// 00620ba3  8859fe               mov byte ptr [ecx - 2], bl
// 00620ba6  0fb61c06             movzx ebx, byte ptr [esi + eax]
// 00620baa  8859ff               mov byte ptr [ecx - 1], bl
// 00620bad  40                   inc eax
// 00620bae  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00620bb3  758b                 jne 0x620b40
// 00620bb5  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00620bb9  8b742434             mov esi, dword ptr [esp + 0x34]
// 00620bbd  836c244c01           sub dword ptr [esp + 0x4c], 1
// 00620bc2  0f890cffffff         jns 0x620ad4
// 00620bc8  5f                   pop edi
// 00620bc9  5e                   pop esi
// 00620bca  5d                   pop ebp
// 00620bcb  5b                   pop ebx
// 00620bcc  83c428               add esp, 0x28
// 00620bcf  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycck_cmyk_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
