// roc 2007-03 00523050  unit: seg_00520000  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00523050
//
// 00523050  83ec24               sub esp, 0x24
// 00523053  836c243801           sub dword ptr [esp + 0x38], 1
// 00523058  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052305c  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 00523062  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 00523068  55                   push ebp
// 00523069  8b695c               mov ebp, dword ptr [ecx + 0x5c]
// 0052306c  8b4808               mov ecx, dword ptr [eax + 8]
// 0052306f  894c240c             mov dword ptr [esp + 0xc], ecx
// 00523073  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00523076  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0052307a  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0052307d  8b4014               mov eax, dword ptr [eax + 0x14]
// 00523080  896c2420             mov dword ptr [esp + 0x20], ebp
// 00523084  89542418             mov dword ptr [esp + 0x18], edx
// 00523088  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052308c  89442410             mov dword ptr [esp + 0x10], eax
// 00523090  0f88d4000000         js 0x52316a
// 00523096  53                   push ebx
// 00523097  56                   push esi
// 00523098  8b742438             mov esi, dword ptr [esp + 0x38]
// 0052309c  57                   push edi
// 0052309d  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005230a1  03ff                 add edi, edi
// 005230a3  03ff                 add edi, edi
// 005230a5  8b0e                 mov ecx, dword ptr [esi]
// 005230a7  8b040f               mov eax, dword ptr [edi + ecx]
// 005230aa  8b4e04               mov ecx, dword ptr [esi + 4]
// 005230ad  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 005230b1  89442438             mov dword ptr [esp + 0x38], eax
// 005230b5  8b040f               mov eax, dword ptr [edi + ecx]
// 005230b8  8b4e08               mov ecx, dword ptr [esi + 8]
// 005230bb  8b0c0f               mov ecx, dword ptr [edi + ecx]
// 005230be  894c2410             mov dword ptr [esp + 0x10], ecx
// 005230c2  8b0b                 mov ecx, dword ptr [ebx]
// 005230c4  83c704               add edi, 4
// 005230c7  83c304               add ebx, 4
// 005230ca  85ed                 test ebp, ebp
// 005230cc  897c2430             mov dword ptr [esp + 0x30], edi
// 005230d0  895c2444             mov dword ptr [esp + 0x44], ebx
// 005230d4  0f8682000000         jbe 0x52315c
// 005230da  8b742438             mov esi, dword ptr [esp + 0x38]
// 005230de  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005230e2  2bf0                 sub esi, eax
// 005230e4  2bd8                 sub ebx, eax
// 005230e6  89742414             mov dword ptr [esp + 0x14], esi
// 005230ea  895c2410             mov dword ptr [esp + 0x10], ebx
// 005230ee  896c2438             mov dword ptr [esp + 0x38], ebp
// 005230f2  eb08                 jmp 0x5230fc
// 005230f4  8b742414             mov esi, dword ptr [esp + 0x14]
// 005230f8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005230fc  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 00523100  0fb63406             movzx esi, byte ptr [esi + eax]
// 00523104  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00523108  8b1cab               mov ebx, dword ptr [ebx + ebp*4]
// 0052310b  0fb638               movzx edi, byte ptr [eax]
// 0052310e  03de                 add ebx, esi
// 00523110  8a1413               mov dl, byte ptr [ebx + edx]
// 00523113  8811                 mov byte ptr [ecx], dl
// 00523115  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00523119  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 0052311c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00523120  031caa               add ebx, dword ptr [edx + ebp*4]
// 00523123  8b542424             mov edx, dword ptr [esp + 0x24]
// 00523127  c1fb10               sar ebx, 0x10
// 0052312a  03de                 add ebx, esi
// 0052312c  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 00523130  885901               mov byte ptr [ecx + 1], bl
// 00523133  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00523137  8b3cbb               mov edi, dword ptr [ebx + edi*4]
// 0052313a  03fe                 add edi, esi
// 0052313c  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 00523140  885902               mov byte ptr [ecx + 2], bl
// 00523143  83c103               add ecx, 3
// 00523146  83c001               add eax, 1
// 00523149  836c243801           sub dword ptr [esp + 0x38], 1
// 0052314e  75a4                 jne 0x5230f4
// 00523150  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00523154  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00523158  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0052315c  836c244801           sub dword ptr [esp + 0x48], 1
// 00523161  0f893effffff         jns 0x5230a5
// 00523167  5f                   pop edi
// 00523168  5e                   pop esi
// 00523169  5b                   pop ebx
// 0052316a  5d                   pop ebp
// 0052316b  83c424               add esp, 0x24
// 0052316e  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycc_rgb_convert)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
