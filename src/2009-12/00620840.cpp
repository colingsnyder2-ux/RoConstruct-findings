// roc 2009-12 00620840  unit: seg_00620000  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00620840
//
// 00620840  83ec24               sub esp, 0x24
// 00620843  836c243801           sub dword ptr [esp + 0x38], 1
// 00620848  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0062084c  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 00620852  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 00620858  55                   push ebp
// 00620859  8b695c               mov ebp, dword ptr [ecx + 0x5c]
// 0062085c  8b4808               mov ecx, dword ptr [eax + 8]
// 0062085f  894c240c             mov dword ptr [esp + 0xc], ecx
// 00620863  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00620866  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0062086a  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0062086d  8b4014               mov eax, dword ptr [eax + 0x14]
// 00620870  896c2420             mov dword ptr [esp + 0x20], ebp
// 00620874  89542418             mov dword ptr [esp + 0x18], edx
// 00620878  894c2414             mov dword ptr [esp + 0x14], ecx
// 0062087c  89442410             mov dword ptr [esp + 0x10], eax
// 00620880  0f88d2000000         js 0x620958
// 00620886  53                   push ebx
// 00620887  56                   push esi
// 00620888  8b742438             mov esi, dword ptr [esp + 0x38]
// 0062088c  57                   push edi
// 0062088d  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00620891  03ff                 add edi, edi
// 00620893  03ff                 add edi, edi
// 00620895  8b0e                 mov ecx, dword ptr [esi]
// 00620897  8b040f               mov eax, dword ptr [edi + ecx]
// 0062089a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0062089d  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 006208a1  89442438             mov dword ptr [esp + 0x38], eax
// 006208a5  8b040f               mov eax, dword ptr [edi + ecx]
// 006208a8  8b4e08               mov ecx, dword ptr [esi + 8]
// 006208ab  8b0c0f               mov ecx, dword ptr [edi + ecx]
// 006208ae  894c2410             mov dword ptr [esp + 0x10], ecx
// 006208b2  8b0b                 mov ecx, dword ptr [ebx]
// 006208b4  83c704               add edi, 4
// 006208b7  83c304               add ebx, 4
// 006208ba  897c2430             mov dword ptr [esp + 0x30], edi
// 006208be  895c2444             mov dword ptr [esp + 0x44], ebx
// 006208c2  85ed                 test ebp, ebp
// 006208c4  0f8680000000         jbe 0x62094a
// 006208ca  8b742438             mov esi, dword ptr [esp + 0x38]
// 006208ce  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006208d2  2bf0                 sub esi, eax
// 006208d4  2bd8                 sub ebx, eax
// 006208d6  89742414             mov dword ptr [esp + 0x14], esi
// 006208da  895c2410             mov dword ptr [esp + 0x10], ebx
// 006208de  896c2438             mov dword ptr [esp + 0x38], ebp
// 006208e2  eb08                 jmp 0x6208ec
// 006208e4  8b742414             mov esi, dword ptr [esp + 0x14]
// 006208e8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006208ec  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 006208f0  0fb63406             movzx esi, byte ptr [esi + eax]
// 006208f4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006208f8  8b1cab               mov ebx, dword ptr [ebx + ebp*4]
// 006208fb  0fb638               movzx edi, byte ptr [eax]
// 006208fe  03de                 add ebx, esi
// 00620900  8a1413               mov dl, byte ptr [ebx + edx]
// 00620903  8811                 mov byte ptr [ecx], dl
// 00620905  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00620909  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 0062090c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00620910  031caa               add ebx, dword ptr [edx + ebp*4]
// 00620913  8b542424             mov edx, dword ptr [esp + 0x24]
// 00620917  c1fb10               sar ebx, 0x10
// 0062091a  03de                 add ebx, esi
// 0062091c  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 00620920  885901               mov byte ptr [ecx + 1], bl
// 00620923  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00620927  8b3cbb               mov edi, dword ptr [ebx + edi*4]
// 0062092a  03fe                 add edi, esi
// 0062092c  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 00620930  885902               mov byte ptr [ecx + 2], bl
// 00620933  83c103               add ecx, 3
// 00620936  40                   inc eax
// 00620937  836c243801           sub dword ptr [esp + 0x38], 1
// 0062093c  75a6                 jne 0x6208e4
// 0062093e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00620942  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00620946  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0062094a  836c244801           sub dword ptr [esp + 0x48], 1
// 0062094f  0f8940ffffff         jns 0x620895
// 00620955  5f                   pop edi
// 00620956  5e                   pop esi
// 00620957  5b                   pop ebx
// 00620958  5d                   pop ebp
// 00620959  83c424               add esp, 0x24
// 0062095c  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycc_rgb_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
