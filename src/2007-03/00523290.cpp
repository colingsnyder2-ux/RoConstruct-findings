// roc 2007-03 00523290  unit: seg_00520000  size: 338 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00523290
//
// 00523290  83ec28               sub esp, 0x28
// 00523293  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00523298  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0052329c  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 0052329f  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 005232a5  891424               mov dword ptr [esp], edx
// 005232a8  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 005232ae  8b4808               mov ecx, dword ptr [eax + 8]
// 005232b1  894c2410             mov dword ptr [esp + 0x10], ecx
// 005232b5  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005232b8  894c2420             mov dword ptr [esp + 0x20], ecx
// 005232bc  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005232bf  8b4014               mov eax, dword ptr [eax + 0x14]
// 005232c2  8954241c             mov dword ptr [esp + 0x1c], edx
// 005232c6  894c2418             mov dword ptr [esp + 0x18], ecx
// 005232ca  89442414             mov dword ptr [esp + 0x14], eax
// 005232ce  0f880a010000         js 0x5233de
// 005232d4  53                   push ebx
// 005232d5  55                   push ebp
// 005232d6  56                   push esi
// 005232d7  8b742440             mov esi, dword ptr [esp + 0x40]
// 005232db  03f6                 add esi, esi
// 005232dd  57                   push edi
// 005232de  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005232e2  03f6                 add esi, esi
// 005232e4  8b0f                 mov ecx, dword ptr [edi]
// 005232e6  8b1c0e               mov ebx, dword ptr [esi + ecx]
// 005232e9  8b4f08               mov ecx, dword ptr [edi + 8]
// 005232ec  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 005232ef  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 005232f3  8b4704               mov eax, dword ptr [edi + 4]
// 005232f6  8b0406               mov eax, dword ptr [esi + eax]
// 005232f9  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005232fd  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00523300  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 00523303  894c2414             mov dword ptr [esp + 0x14], ecx
// 00523307  8b4d00               mov ecx, dword ptr [ebp]
// 0052330a  83c504               add ebp, 4
// 0052330d  896c2448             mov dword ptr [esp + 0x48], ebp
// 00523311  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00523315  83c604               add esi, 4
// 00523318  85ed                 test ebp, ebp
// 0052331a  89742434             mov dword ptr [esp + 0x34], esi
// 0052331e  0f86ab000000         jbe 0x5233cf
// 00523324  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00523328  8bf3                 mov esi, ebx
// 0052332a  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0052332e  2bf0                 sub esi, eax
// 00523330  2bd8                 sub ebx, eax
// 00523332  2bf8                 sub edi, eax
// 00523334  89742418             mov dword ptr [esp + 0x18], esi
// 00523338  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052333c  897c2414             mov dword ptr [esp + 0x14], edi
// 00523340  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00523344  eb12                 jmp 0x523358
// 00523346  eb08                 jmp 0x523350
// 00523348  8da42400000000       lea esp, [esp]
// 0052334f  90                   nop 
// 00523350  8b742418             mov esi, dword ptr [esp + 0x18]
// 00523354  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00523358  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 0052335c  0fb63406             movzx esi, byte ptr [esi + eax]
// 00523360  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00523364  2b14ab               sub edx, dword ptr [ebx + ebp*4]
// 00523367  0fb638               movzx edi, byte ptr [eax]
// 0052336a  2bd6                 sub edx, esi
// 0052336c  8a92ff000000         mov dl, byte ptr [edx + 0xff]
// 00523372  8811                 mov byte ptr [ecx], dl
// 00523374  8b542424             mov edx, dword ptr [esp + 0x24]
// 00523378  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 0052337b  8b542428             mov edx, dword ptr [esp + 0x28]
// 0052337f  031caa               add ebx, dword ptr [edx + ebp*4]
// 00523382  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00523386  c1fb10               sar ebx, 0x10
// 00523389  8bea                 mov ebp, edx
// 0052338b  2beb                 sub ebp, ebx
// 0052338d  2bee                 sub ebp, esi
// 0052338f  0fb69dff000000       movzx ebx, byte ptr [ebp + 0xff]
// 00523396  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0052339a  885901               mov byte ptr [ecx + 1], bl
// 0052339d  8bda                 mov ebx, edx
// 0052339f  2b5cbd00             sub ebx, dword ptr [ebp + edi*4]
// 005233a3  83c104               add ecx, 4
// 005233a6  2bde                 sub ebx, esi
// 005233a8  0fb69bff000000       movzx ebx, byte ptr [ebx + 0xff]
// 005233af  8b742414             mov esi, dword ptr [esp + 0x14]
// 005233b3  8859fe               mov byte ptr [ecx - 2], bl
// 005233b6  0fb61c06             movzx ebx, byte ptr [esi + eax]
// 005233ba  8859ff               mov byte ptr [ecx - 1], bl
// 005233bd  83c001               add eax, 1
// 005233c0  836c243c01           sub dword ptr [esp + 0x3c], 1
// 005233c5  7589                 jne 0x523350
// 005233c7  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005233cb  8b742434             mov esi, dword ptr [esp + 0x34]
// 005233cf  836c244c01           sub dword ptr [esp + 0x4c], 1
// 005233d4  0f890affffff         jns 0x5232e4
// 005233da  5f                   pop edi
// 005233db  5e                   pop esi
// 005233dc  5d                   pop ebp
// 005233dd  5b                   pop ebx
// 005233de  83c428               add esp, 0x28
// 005233e1  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycck_cmyk_convert)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
