// from server: 100% by auto
// roc 2010-06 005823a0  unit: seg_00580000  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005823a0
//
// 005823a0  83ec24               sub esp, 0x24
// 005823a3  836c243801           sub dword ptr [esp + 0x38], 1
// 005823a8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005823ac  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 005823b2  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 005823b8  55                   push ebp
// 005823b9  8b695c               mov ebp, dword ptr [ecx + 0x5c]
// 005823bc  8b4808               mov ecx, dword ptr [eax + 8]
// 005823bf  894c240c             mov dword ptr [esp + 0xc], ecx
// 005823c3  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005823c6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005823ca  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005823cd  8b4014               mov eax, dword ptr [eax + 0x14]
// 005823d0  896c2420             mov dword ptr [esp + 0x20], ebp
// 005823d4  89542418             mov dword ptr [esp + 0x18], edx
// 005823d8  894c2414             mov dword ptr [esp + 0x14], ecx
// 005823dc  89442410             mov dword ptr [esp + 0x10], eax
// 005823e0  0f88d2000000         js 0x5824b8
// 005823e6  53                   push ebx
// 005823e7  56                   push esi
// 005823e8  8b742438             mov esi, dword ptr [esp + 0x38]
// 005823ec  57                   push edi
// 005823ed  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005823f1  03ff                 add edi, edi
// 005823f3  03ff                 add edi, edi
// 005823f5  8b0e                 mov ecx, dword ptr [esi]
// 005823f7  8b040f               mov eax, dword ptr [edi + ecx]
// 005823fa  8b4e04               mov ecx, dword ptr [esi + 4]
// 005823fd  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00582401  89442438             mov dword ptr [esp + 0x38], eax
// 00582405  8b040f               mov eax, dword ptr [edi + ecx]
// 00582408  8b4e08               mov ecx, dword ptr [esi + 8]
// 0058240b  8b0c0f               mov ecx, dword ptr [edi + ecx]
// 0058240e  894c2410             mov dword ptr [esp + 0x10], ecx
// 00582412  8b0b                 mov ecx, dword ptr [ebx]
// 00582414  83c704               add edi, 4
// 00582417  83c304               add ebx, 4
// 0058241a  897c2430             mov dword ptr [esp + 0x30], edi
// 0058241e  895c2444             mov dword ptr [esp + 0x44], ebx
// 00582422  85ed                 test ebp, ebp
// 00582424  0f8680000000         jbe 0x5824aa
// 0058242a  8b742438             mov esi, dword ptr [esp + 0x38]
// 0058242e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00582432  2bf0                 sub esi, eax
// 00582434  2bd8                 sub ebx, eax
// 00582436  89742414             mov dword ptr [esp + 0x14], esi
// 0058243a  895c2410             mov dword ptr [esp + 0x10], ebx
// 0058243e  896c2438             mov dword ptr [esp + 0x38], ebp
// 00582442  eb08                 jmp 0x58244c
// 00582444  8b742414             mov esi, dword ptr [esp + 0x14]
// 00582448  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0058244c  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 00582450  0fb63406             movzx esi, byte ptr [esi + eax]
// 00582454  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00582458  8b1cab               mov ebx, dword ptr [ebx + ebp*4]
// 0058245b  0fb638               movzx edi, byte ptr [eax]
// 0058245e  03de                 add ebx, esi
// 00582460  8a1413               mov dl, byte ptr [ebx + edx]
// 00582463  8811                 mov byte ptr [ecx], dl
// 00582465  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00582469  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 0058246c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00582470  031caa               add ebx, dword ptr [edx + ebp*4]
// 00582473  8b542424             mov edx, dword ptr [esp + 0x24]
// 00582477  c1fb10               sar ebx, 0x10
// 0058247a  03de                 add ebx, esi
// 0058247c  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 00582480  885901               mov byte ptr [ecx + 1], bl
// 00582483  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00582487  8b3cbb               mov edi, dword ptr [ebx + edi*4]
// 0058248a  03fe                 add edi, esi
// 0058248c  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 00582490  885902               mov byte ptr [ecx + 2], bl
// 00582493  83c103               add ecx, 3
// 00582496  40                   inc eax
// 00582497  836c243801           sub dword ptr [esp + 0x38], 1
// 0058249c  75a6                 jne 0x582444
// 0058249e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005824a2  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 005824a6  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005824aa  836c244801           sub dword ptr [esp + 0x48], 1
// 005824af  0f8940ffffff         jns 0x5823f5
// 005824b5  5f                   pop edi
// 005824b6  5e                   pop esi
// 005824b7  5b                   pop ebx
// 005824b8  5d                   pop ebp
// 005824b9  83c424               add esp, 0x24
// 005824bc  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycc_rgb_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
