// from server: 100% by auto
// roc 2011-06 00578650  unit: seg_00570000  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00578650
//
// 00578650  83ec24               sub esp, 0x24
// 00578653  836c243801           sub dword ptr [esp + 0x38], 1
// 00578658  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057865c  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 00578662  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 00578668  55                   push ebp
// 00578669  8b695c               mov ebp, dword ptr [ecx + 0x5c]
// 0057866c  8b4808               mov ecx, dword ptr [eax + 8]
// 0057866f  894c240c             mov dword ptr [esp + 0xc], ecx
// 00578673  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00578676  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0057867a  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0057867d  8b4014               mov eax, dword ptr [eax + 0x14]
// 00578680  896c2420             mov dword ptr [esp + 0x20], ebp
// 00578684  89542418             mov dword ptr [esp + 0x18], edx
// 00578688  894c2414             mov dword ptr [esp + 0x14], ecx
// 0057868c  89442410             mov dword ptr [esp + 0x10], eax
// 00578690  0f88d2000000         js 0x578768
// 00578696  53                   push ebx
// 00578697  56                   push esi
// 00578698  8b742438             mov esi, dword ptr [esp + 0x38]
// 0057869c  57                   push edi
// 0057869d  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005786a1  03ff                 add edi, edi
// 005786a3  03ff                 add edi, edi
// 005786a5  8b0e                 mov ecx, dword ptr [esi]
// 005786a7  8b040f               mov eax, dword ptr [edi + ecx]
// 005786aa  8b4e04               mov ecx, dword ptr [esi + 4]
// 005786ad  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 005786b1  89442438             mov dword ptr [esp + 0x38], eax
// 005786b5  8b040f               mov eax, dword ptr [edi + ecx]
// 005786b8  8b4e08               mov ecx, dword ptr [esi + 8]
// 005786bb  8b0c0f               mov ecx, dword ptr [edi + ecx]
// 005786be  894c2410             mov dword ptr [esp + 0x10], ecx
// 005786c2  8b0b                 mov ecx, dword ptr [ebx]
// 005786c4  83c704               add edi, 4
// 005786c7  83c304               add ebx, 4
// 005786ca  897c2430             mov dword ptr [esp + 0x30], edi
// 005786ce  895c2444             mov dword ptr [esp + 0x44], ebx
// 005786d2  85ed                 test ebp, ebp
// 005786d4  0f8680000000         jbe 0x57875a
// 005786da  8b742438             mov esi, dword ptr [esp + 0x38]
// 005786de  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005786e2  2bf0                 sub esi, eax
// 005786e4  2bd8                 sub ebx, eax
// 005786e6  89742414             mov dword ptr [esp + 0x14], esi
// 005786ea  895c2410             mov dword ptr [esp + 0x10], ebx
// 005786ee  896c2438             mov dword ptr [esp + 0x38], ebp
// 005786f2  eb08                 jmp 0x5786fc
// 005786f4  8b742414             mov esi, dword ptr [esp + 0x14]
// 005786f8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005786fc  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 00578700  0fb63406             movzx esi, byte ptr [esi + eax]
// 00578704  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00578708  8b1cab               mov ebx, dword ptr [ebx + ebp*4]
// 0057870b  0fb638               movzx edi, byte ptr [eax]
// 0057870e  03de                 add ebx, esi
// 00578710  8a1413               mov dl, byte ptr [ebx + edx]
// 00578713  8811                 mov byte ptr [ecx], dl
// 00578715  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00578719  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 0057871c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00578720  031caa               add ebx, dword ptr [edx + ebp*4]
// 00578723  8b542424             mov edx, dword ptr [esp + 0x24]
// 00578727  c1fb10               sar ebx, 0x10
// 0057872a  03de                 add ebx, esi
// 0057872c  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 00578730  885901               mov byte ptr [ecx + 1], bl
// 00578733  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00578737  8b3cbb               mov edi, dword ptr [ebx + edi*4]
// 0057873a  03fe                 add edi, esi
// 0057873c  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 00578740  885902               mov byte ptr [ecx + 2], bl
// 00578743  83c103               add ecx, 3
// 00578746  40                   inc eax
// 00578747  836c243801           sub dword ptr [esp + 0x38], 1
// 0057874c  75a6                 jne 0x5786f4
// 0057874e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00578752  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00578756  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0057875a  836c244801           sub dword ptr [esp + 0x48], 1
// 0057875f  0f8940ffffff         jns 0x5786a5
// 00578765  5f                   pop edi
// 00578766  5e                   pop esi
// 00578767  5b                   pop ebx
// 00578768  5d                   pop ebp
// 00578769  83c424               add esp, 0x24
// 0057876c  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycc_rgb_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
