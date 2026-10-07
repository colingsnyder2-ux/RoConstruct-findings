// roc 2009-06 0059ea50  unit: seg_00590000  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059ea50
//
// 0059ea50  83ec28               sub esp, 0x28
// 0059ea53  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0059ea58  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059ea5c  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 0059ea5f  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 0059ea65  891424               mov dword ptr [esp], edx
// 0059ea68  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 0059ea6e  8b4808               mov ecx, dword ptr [eax + 8]
// 0059ea71  894c2410             mov dword ptr [esp + 0x10], ecx
// 0059ea75  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0059ea78  894c2420             mov dword ptr [esp + 0x20], ecx
// 0059ea7c  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0059ea7f  8b4014               mov eax, dword ptr [eax + 0x14]
// 0059ea82  8954241c             mov dword ptr [esp + 0x1c], edx
// 0059ea86  894c2418             mov dword ptr [esp + 0x18], ecx
// 0059ea8a  89442414             mov dword ptr [esp + 0x14], eax
// 0059ea8e  0f8808010000         js 0x59eb9c
// 0059ea94  53                   push ebx
// 0059ea95  55                   push ebp
// 0059ea96  56                   push esi
// 0059ea97  8b742440             mov esi, dword ptr [esp + 0x40]
// 0059ea9b  03f6                 add esi, esi
// 0059ea9d  57                   push edi
// 0059ea9e  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0059eaa2  03f6                 add esi, esi
// 0059eaa4  8b0f                 mov ecx, dword ptr [edi]
// 0059eaa6  8b1c0e               mov ebx, dword ptr [esi + ecx]
// 0059eaa9  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059eaac  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 0059eaaf  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0059eab3  8b4704               mov eax, dword ptr [edi + 4]
// 0059eab6  8b0406               mov eax, dword ptr [esi + eax]
// 0059eab9  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0059eabd  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0059eac0  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 0059eac3  894c2414             mov dword ptr [esp + 0x14], ecx
// 0059eac7  8b4d00               mov ecx, dword ptr [ebp]
// 0059eaca  83c504               add ebp, 4
// 0059eacd  896c2448             mov dword ptr [esp + 0x48], ebp
// 0059ead1  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0059ead5  83c604               add esi, 4
// 0059ead8  89742434             mov dword ptr [esp + 0x34], esi
// 0059eadc  85ed                 test ebp, ebp
// 0059eade  0f86a9000000         jbe 0x59eb8d
// 0059eae4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059eae8  8bf3                 mov esi, ebx
// 0059eaea  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0059eaee  2bf0                 sub esi, eax
// 0059eaf0  2bd8                 sub ebx, eax
// 0059eaf2  2bf8                 sub edi, eax
// 0059eaf4  89742418             mov dword ptr [esp + 0x18], esi
// 0059eaf8  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0059eafc  897c2414             mov dword ptr [esp + 0x14], edi
// 0059eb00  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0059eb04  eb12                 jmp 0x59eb18
// 0059eb06  eb08                 jmp 0x59eb10
// 0059eb08  8da42400000000       lea esp, [esp]
// 0059eb0f  90                   nop 
// 0059eb10  8b742418             mov esi, dword ptr [esp + 0x18]
// 0059eb14  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0059eb18  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 0059eb1c  0fb63406             movzx esi, byte ptr [esi + eax]
// 0059eb20  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0059eb24  2b14ab               sub edx, dword ptr [ebx + ebp*4]
// 0059eb27  0fb638               movzx edi, byte ptr [eax]
// 0059eb2a  2bd6                 sub edx, esi
// 0059eb2c  8a92ff000000         mov dl, byte ptr [edx + 0xff]
// 0059eb32  8811                 mov byte ptr [ecx], dl
// 0059eb34  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059eb38  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 0059eb3b  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059eb3f  031caa               add ebx, dword ptr [edx + ebp*4]
// 0059eb42  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059eb46  c1fb10               sar ebx, 0x10
// 0059eb49  8bea                 mov ebp, edx
// 0059eb4b  2beb                 sub ebp, ebx
// 0059eb4d  2bee                 sub ebp, esi
// 0059eb4f  0fb69dff000000       movzx ebx, byte ptr [ebp + 0xff]
// 0059eb56  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0059eb5a  885901               mov byte ptr [ecx + 1], bl
// 0059eb5d  8bda                 mov ebx, edx
// 0059eb5f  2b5cbd00             sub ebx, dword ptr [ebp + edi*4]
// 0059eb63  83c104               add ecx, 4
// 0059eb66  2bde                 sub ebx, esi
// 0059eb68  0fb69bff000000       movzx ebx, byte ptr [ebx + 0xff]
// 0059eb6f  8b742414             mov esi, dword ptr [esp + 0x14]
// 0059eb73  8859fe               mov byte ptr [ecx - 2], bl
// 0059eb76  0fb61c06             movzx ebx, byte ptr [esi + eax]
// 0059eb7a  8859ff               mov byte ptr [ecx - 1], bl
// 0059eb7d  40                   inc eax
// 0059eb7e  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0059eb83  758b                 jne 0x59eb10
// 0059eb85  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0059eb89  8b742434             mov esi, dword ptr [esp + 0x34]
// 0059eb8d  836c244c01           sub dword ptr [esp + 0x4c], 1
// 0059eb92  0f890cffffff         jns 0x59eaa4
// 0059eb98  5f                   pop edi
// 0059eb99  5e                   pop esi
// 0059eb9a  5d                   pop ebp
// 0059eb9b  5b                   pop ebx
// 0059eb9c  83c428               add esp, 0x28
// 0059eb9f  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycck_cmyk_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
