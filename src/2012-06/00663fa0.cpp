// roc 2012-06 00663fa0  unit: seg_00660000  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00663fa0
//
// 00663fa0  83ec28               sub esp, 0x28
// 00663fa3  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00663fa8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00663fac  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 00663faf  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 00663fb5  891424               mov dword ptr [esp], edx
// 00663fb8  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 00663fbe  8b4808               mov ecx, dword ptr [eax + 8]
// 00663fc1  894c2410             mov dword ptr [esp + 0x10], ecx
// 00663fc5  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00663fc8  894c2420             mov dword ptr [esp + 0x20], ecx
// 00663fcc  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00663fcf  8b4014               mov eax, dword ptr [eax + 0x14]
// 00663fd2  8954241c             mov dword ptr [esp + 0x1c], edx
// 00663fd6  894c2418             mov dword ptr [esp + 0x18], ecx
// 00663fda  89442414             mov dword ptr [esp + 0x14], eax
// 00663fde  0f8808010000         js 0x6640ec
// 00663fe4  53                   push ebx
// 00663fe5  55                   push ebp
// 00663fe6  56                   push esi
// 00663fe7  8b742440             mov esi, dword ptr [esp + 0x40]
// 00663feb  03f6                 add esi, esi
// 00663fed  57                   push edi
// 00663fee  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00663ff2  03f6                 add esi, esi
// 00663ff4  8b0f                 mov ecx, dword ptr [edi]
// 00663ff6  8b1c0e               mov ebx, dword ptr [esi + ecx]
// 00663ff9  8b4f08               mov ecx, dword ptr [edi + 8]
// 00663ffc  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 00663fff  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00664003  8b4704               mov eax, dword ptr [edi + 4]
// 00664006  8b0406               mov eax, dword ptr [esi + eax]
// 00664009  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0066400d  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00664010  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 00664013  894c2414             mov dword ptr [esp + 0x14], ecx
// 00664017  8b4d00               mov ecx, dword ptr [ebp]
// 0066401a  83c504               add ebp, 4
// 0066401d  896c2448             mov dword ptr [esp + 0x48], ebp
// 00664021  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00664025  83c604               add esi, 4
// 00664028  89742434             mov dword ptr [esp + 0x34], esi
// 0066402c  85ed                 test ebp, ebp
// 0066402e  0f86a9000000         jbe 0x6640dd
// 00664034  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00664038  8bf3                 mov esi, ebx
// 0066403a  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0066403e  2bf0                 sub esi, eax
// 00664040  2bd8                 sub ebx, eax
// 00664042  2bf8                 sub edi, eax
// 00664044  89742418             mov dword ptr [esp + 0x18], esi
// 00664048  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0066404c  897c2414             mov dword ptr [esp + 0x14], edi
// 00664050  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00664054  eb12                 jmp 0x664068
// 00664056  eb08                 jmp 0x664060
// 00664058  8da42400000000       lea esp, [esp]
// 0066405f  90                   nop 
// 00664060  8b742418             mov esi, dword ptr [esp + 0x18]
// 00664064  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00664068  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 0066406c  0fb63406             movzx esi, byte ptr [esi + eax]
// 00664070  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00664074  2b14ab               sub edx, dword ptr [ebx + ebp*4]
// 00664077  0fb638               movzx edi, byte ptr [eax]
// 0066407a  2bd6                 sub edx, esi
// 0066407c  8a92ff000000         mov dl, byte ptr [edx + 0xff]
// 00664082  8811                 mov byte ptr [ecx], dl
// 00664084  8b542424             mov edx, dword ptr [esp + 0x24]
// 00664088  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 0066408b  8b542428             mov edx, dword ptr [esp + 0x28]
// 0066408f  031caa               add ebx, dword ptr [edx + ebp*4]
// 00664092  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00664096  c1fb10               sar ebx, 0x10
// 00664099  8bea                 mov ebp, edx
// 0066409b  2beb                 sub ebp, ebx
// 0066409d  2bee                 sub ebp, esi
// 0066409f  0fb69dff000000       movzx ebx, byte ptr [ebp + 0xff]
// 006640a6  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 006640aa  885901               mov byte ptr [ecx + 1], bl
// 006640ad  8bda                 mov ebx, edx
// 006640af  2b5cbd00             sub ebx, dword ptr [ebp + edi*4]
// 006640b3  83c104               add ecx, 4
// 006640b6  2bde                 sub ebx, esi
// 006640b8  0fb69bff000000       movzx ebx, byte ptr [ebx + 0xff]
// 006640bf  8b742414             mov esi, dword ptr [esp + 0x14]
// 006640c3  8859fe               mov byte ptr [ecx - 2], bl
// 006640c6  0fb61c06             movzx ebx, byte ptr [esi + eax]
// 006640ca  8859ff               mov byte ptr [ecx - 1], bl
// 006640cd  40                   inc eax
// 006640ce  836c243c01           sub dword ptr [esp + 0x3c], 1
// 006640d3  758b                 jne 0x664060
// 006640d5  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 006640d9  8b742434             mov esi, dword ptr [esp + 0x34]
// 006640dd  836c244c01           sub dword ptr [esp + 0x4c], 1
// 006640e2  0f890cffffff         jns 0x663ff4
// 006640e8  5f                   pop edi
// 006640e9  5e                   pop esi
// 006640ea  5d                   pop ebp
// 006640eb  5b                   pop ebx
// 006640ec  83c428               add esp, 0x28
// 006640ef  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycck_cmyk_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
