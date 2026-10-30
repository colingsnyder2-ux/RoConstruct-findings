// from server: 100% by auto
// roc 2007-08 00528380  unit: seg_00520000  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00528380
//
// 00528380  83ec24               sub esp, 0x24
// 00528383  836c243801           sub dword ptr [esp + 0x38], 1
// 00528388  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052838c  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 00528392  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 00528398  55                   push ebp
// 00528399  8b695c               mov ebp, dword ptr [ecx + 0x5c]
// 0052839c  8b4808               mov ecx, dword ptr [eax + 8]
// 0052839f  894c240c             mov dword ptr [esp + 0xc], ecx
// 005283a3  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005283a6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005283aa  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005283ad  8b4014               mov eax, dword ptr [eax + 0x14]
// 005283b0  896c2420             mov dword ptr [esp + 0x20], ebp
// 005283b4  89542418             mov dword ptr [esp + 0x18], edx
// 005283b8  894c2414             mov dword ptr [esp + 0x14], ecx
// 005283bc  89442410             mov dword ptr [esp + 0x10], eax
// 005283c0  0f88d4000000         js 0x52849a
// 005283c6  53                   push ebx
// 005283c7  56                   push esi
// 005283c8  8b742438             mov esi, dword ptr [esp + 0x38]
// 005283cc  57                   push edi
// 005283cd  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005283d1  03ff                 add edi, edi
// 005283d3  03ff                 add edi, edi
// 005283d5  8b0e                 mov ecx, dword ptr [esi]
// 005283d7  8b040f               mov eax, dword ptr [edi + ecx]
// 005283da  8b4e04               mov ecx, dword ptr [esi + 4]
// 005283dd  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 005283e1  89442438             mov dword ptr [esp + 0x38], eax
// 005283e5  8b040f               mov eax, dword ptr [edi + ecx]
// 005283e8  8b4e08               mov ecx, dword ptr [esi + 8]
// 005283eb  8b0c0f               mov ecx, dword ptr [edi + ecx]
// 005283ee  894c2410             mov dword ptr [esp + 0x10], ecx
// 005283f2  8b0b                 mov ecx, dword ptr [ebx]
// 005283f4  83c704               add edi, 4
// 005283f7  83c304               add ebx, 4
// 005283fa  85ed                 test ebp, ebp
// 005283fc  897c2430             mov dword ptr [esp + 0x30], edi
// 00528400  895c2444             mov dword ptr [esp + 0x44], ebx
// 00528404  0f8682000000         jbe 0x52848c
// 0052840a  8b742438             mov esi, dword ptr [esp + 0x38]
// 0052840e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00528412  2bf0                 sub esi, eax
// 00528414  2bd8                 sub ebx, eax
// 00528416  89742414             mov dword ptr [esp + 0x14], esi
// 0052841a  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052841e  896c2438             mov dword ptr [esp + 0x38], ebp
// 00528422  eb08                 jmp 0x52842c
// 00528424  8b742414             mov esi, dword ptr [esp + 0x14]
// 00528428  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052842c  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 00528430  0fb63406             movzx esi, byte ptr [esi + eax]
// 00528434  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00528438  8b1cab               mov ebx, dword ptr [ebx + ebp*4]
// 0052843b  0fb638               movzx edi, byte ptr [eax]
// 0052843e  03de                 add ebx, esi
// 00528440  8a1413               mov dl, byte ptr [ebx + edx]
// 00528443  8811                 mov byte ptr [ecx], dl
// 00528445  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00528449  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 0052844c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00528450  031caa               add ebx, dword ptr [edx + ebp*4]
// 00528453  8b542424             mov edx, dword ptr [esp + 0x24]
// 00528457  c1fb10               sar ebx, 0x10
// 0052845a  03de                 add ebx, esi
// 0052845c  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 00528460  885901               mov byte ptr [ecx + 1], bl
// 00528463  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00528467  8b3cbb               mov edi, dword ptr [ebx + edi*4]
// 0052846a  03fe                 add edi, esi
// 0052846c  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 00528470  885902               mov byte ptr [ecx + 2], bl
// 00528473  83c103               add ecx, 3
// 00528476  83c001               add eax, 1
// 00528479  836c243801           sub dword ptr [esp + 0x38], 1
// 0052847e  75a4                 jne 0x528424
// 00528480  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00528484  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00528488  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0052848c  836c244801           sub dword ptr [esp + 0x48], 1
// 00528491  0f893effffff         jns 0x5283d5
// 00528497  5f                   pop edi
// 00528498  5e                   pop esi
// 00528499  5b                   pop ebx
// 0052849a  5d                   pop ebp
// 0052849b  83c424               add esp, 0x24
// 0052849e  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycc_rgb_convert)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
