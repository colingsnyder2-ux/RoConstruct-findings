// from server: 100% by auto
// roc 2008-06 00534770  unit: seg_00530000  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534770
//
// 00534770  83ec28               sub esp, 0x28
// 00534773  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00534778  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053477c  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 0053477f  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 00534785  891424               mov dword ptr [esp], edx
// 00534788  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 0053478e  8b4808               mov ecx, dword ptr [eax + 8]
// 00534791  894c2410             mov dword ptr [esp + 0x10], ecx
// 00534795  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00534798  894c2420             mov dword ptr [esp + 0x20], ecx
// 0053479c  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0053479f  8b4014               mov eax, dword ptr [eax + 0x14]
// 005347a2  8954241c             mov dword ptr [esp + 0x1c], edx
// 005347a6  894c2418             mov dword ptr [esp + 0x18], ecx
// 005347aa  89442414             mov dword ptr [esp + 0x14], eax
// 005347ae  0f8808010000         js 0x5348bc
// 005347b4  53                   push ebx
// 005347b5  55                   push ebp
// 005347b6  56                   push esi
// 005347b7  8b742440             mov esi, dword ptr [esp + 0x40]
// 005347bb  03f6                 add esi, esi
// 005347bd  57                   push edi
// 005347be  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005347c2  03f6                 add esi, esi
// 005347c4  8b0f                 mov ecx, dword ptr [edi]
// 005347c6  8b1c0e               mov ebx, dword ptr [esi + ecx]
// 005347c9  8b4f08               mov ecx, dword ptr [edi + 8]
// 005347cc  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 005347cf  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 005347d3  8b4704               mov eax, dword ptr [edi + 4]
// 005347d6  8b0406               mov eax, dword ptr [esi + eax]
// 005347d9  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005347dd  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 005347e0  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 005347e3  894c2414             mov dword ptr [esp + 0x14], ecx
// 005347e7  8b4d00               mov ecx, dword ptr [ebp]
// 005347ea  83c504               add ebp, 4
// 005347ed  896c2448             mov dword ptr [esp + 0x48], ebp
// 005347f1  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005347f5  83c604               add esi, 4
// 005347f8  89742434             mov dword ptr [esp + 0x34], esi
// 005347fc  85ed                 test ebp, ebp
// 005347fe  0f86a9000000         jbe 0x5348ad
// 00534804  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00534808  8bf3                 mov esi, ebx
// 0053480a  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0053480e  2bf0                 sub esi, eax
// 00534810  2bd8                 sub ebx, eax
// 00534812  2bf8                 sub edi, eax
// 00534814  89742418             mov dword ptr [esp + 0x18], esi
// 00534818  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0053481c  897c2414             mov dword ptr [esp + 0x14], edi
// 00534820  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00534824  eb12                 jmp 0x534838
// 00534826  eb08                 jmp 0x534830
// 00534828  8da42400000000       lea esp, [esp]
// 0053482f  90                   nop 
// 00534830  8b742418             mov esi, dword ptr [esp + 0x18]
// 00534834  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00534838  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 0053483c  0fb63406             movzx esi, byte ptr [esi + eax]
// 00534840  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00534844  2b14ab               sub edx, dword ptr [ebx + ebp*4]
// 00534847  0fb638               movzx edi, byte ptr [eax]
// 0053484a  2bd6                 sub edx, esi
// 0053484c  8a92ff000000         mov dl, byte ptr [edx + 0xff]
// 00534852  8811                 mov byte ptr [ecx], dl
// 00534854  8b542424             mov edx, dword ptr [esp + 0x24]
// 00534858  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 0053485b  8b542428             mov edx, dword ptr [esp + 0x28]
// 0053485f  031caa               add ebx, dword ptr [edx + ebp*4]
// 00534862  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00534866  c1fb10               sar ebx, 0x10
// 00534869  8bea                 mov ebp, edx
// 0053486b  2beb                 sub ebp, ebx
// 0053486d  2bee                 sub ebp, esi
// 0053486f  0fb69dff000000       movzx ebx, byte ptr [ebp + 0xff]
// 00534876  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0053487a  885901               mov byte ptr [ecx + 1], bl
// 0053487d  8bda                 mov ebx, edx
// 0053487f  2b5cbd00             sub ebx, dword ptr [ebp + edi*4]
// 00534883  83c104               add ecx, 4
// 00534886  2bde                 sub ebx, esi
// 00534888  0fb69bff000000       movzx ebx, byte ptr [ebx + 0xff]
// 0053488f  8b742414             mov esi, dword ptr [esp + 0x14]
// 00534893  8859fe               mov byte ptr [ecx - 2], bl
// 00534896  0fb61c06             movzx ebx, byte ptr [esi + eax]
// 0053489a  8859ff               mov byte ptr [ecx - 1], bl
// 0053489d  40                   inc eax
// 0053489e  836c243c01           sub dword ptr [esp + 0x3c], 1
// 005348a3  758b                 jne 0x534830
// 005348a5  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005348a9  8b742434             mov esi, dword ptr [esp + 0x34]
// 005348ad  836c244c01           sub dword ptr [esp + 0x4c], 1
// 005348b2  0f890cffffff         jns 0x5347c4
// 005348b8  5f                   pop edi
// 005348b9  5e                   pop esi
// 005348ba  5d                   pop ebp
// 005348bb  5b                   pop ebx
// 005348bc  83c428               add esp, 0x28
// 005348bf  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycck_cmyk_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
