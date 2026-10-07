// roc 2009-06 0059e810  unit: seg_00590000  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e810
//
// 0059e810  83ec24               sub esp, 0x24
// 0059e813  836c243801           sub dword ptr [esp + 0x38], 1
// 0059e818  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059e81c  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 0059e822  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 0059e828  55                   push ebp
// 0059e829  8b695c               mov ebp, dword ptr [ecx + 0x5c]
// 0059e82c  8b4808               mov ecx, dword ptr [eax + 8]
// 0059e82f  894c240c             mov dword ptr [esp + 0xc], ecx
// 0059e833  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0059e836  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0059e83a  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0059e83d  8b4014               mov eax, dword ptr [eax + 0x14]
// 0059e840  896c2420             mov dword ptr [esp + 0x20], ebp
// 0059e844  89542418             mov dword ptr [esp + 0x18], edx
// 0059e848  894c2414             mov dword ptr [esp + 0x14], ecx
// 0059e84c  89442410             mov dword ptr [esp + 0x10], eax
// 0059e850  0f88d2000000         js 0x59e928
// 0059e856  53                   push ebx
// 0059e857  56                   push esi
// 0059e858  8b742438             mov esi, dword ptr [esp + 0x38]
// 0059e85c  57                   push edi
// 0059e85d  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0059e861  03ff                 add edi, edi
// 0059e863  03ff                 add edi, edi
// 0059e865  8b0e                 mov ecx, dword ptr [esi]
// 0059e867  8b040f               mov eax, dword ptr [edi + ecx]
// 0059e86a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0059e86d  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 0059e871  89442438             mov dword ptr [esp + 0x38], eax
// 0059e875  8b040f               mov eax, dword ptr [edi + ecx]
// 0059e878  8b4e08               mov ecx, dword ptr [esi + 8]
// 0059e87b  8b0c0f               mov ecx, dword ptr [edi + ecx]
// 0059e87e  894c2410             mov dword ptr [esp + 0x10], ecx
// 0059e882  8b0b                 mov ecx, dword ptr [ebx]
// 0059e884  83c704               add edi, 4
// 0059e887  83c304               add ebx, 4
// 0059e88a  897c2430             mov dword ptr [esp + 0x30], edi
// 0059e88e  895c2444             mov dword ptr [esp + 0x44], ebx
// 0059e892  85ed                 test ebp, ebp
// 0059e894  0f8680000000         jbe 0x59e91a
// 0059e89a  8b742438             mov esi, dword ptr [esp + 0x38]
// 0059e89e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0059e8a2  2bf0                 sub esi, eax
// 0059e8a4  2bd8                 sub ebx, eax
// 0059e8a6  89742414             mov dword ptr [esp + 0x14], esi
// 0059e8aa  895c2410             mov dword ptr [esp + 0x10], ebx
// 0059e8ae  896c2438             mov dword ptr [esp + 0x38], ebp
// 0059e8b2  eb08                 jmp 0x59e8bc
// 0059e8b4  8b742414             mov esi, dword ptr [esp + 0x14]
// 0059e8b8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0059e8bc  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 0059e8c0  0fb63406             movzx esi, byte ptr [esi + eax]
// 0059e8c4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0059e8c8  8b1cab               mov ebx, dword ptr [ebx + ebp*4]
// 0059e8cb  0fb638               movzx edi, byte ptr [eax]
// 0059e8ce  03de                 add ebx, esi
// 0059e8d0  8a1413               mov dl, byte ptr [ebx + edx]
// 0059e8d3  8811                 mov byte ptr [ecx], dl
// 0059e8d5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0059e8d9  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 0059e8dc  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059e8e0  031caa               add ebx, dword ptr [edx + ebp*4]
// 0059e8e3  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059e8e7  c1fb10               sar ebx, 0x10
// 0059e8ea  03de                 add ebx, esi
// 0059e8ec  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0059e8f0  885901               mov byte ptr [ecx + 1], bl
// 0059e8f3  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0059e8f7  8b3cbb               mov edi, dword ptr [ebx + edi*4]
// 0059e8fa  03fe                 add edi, esi
// 0059e8fc  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 0059e900  885902               mov byte ptr [ecx + 2], bl
// 0059e903  83c103               add ecx, 3
// 0059e906  40                   inc eax
// 0059e907  836c243801           sub dword ptr [esp + 0x38], 1
// 0059e90c  75a6                 jne 0x59e8b4
// 0059e90e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0059e912  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0059e916  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0059e91a  836c244801           sub dword ptr [esp + 0x48], 1
// 0059e91f  0f8940ffffff         jns 0x59e865
// 0059e925  5f                   pop edi
// 0059e926  5e                   pop esi
// 0059e927  5b                   pop ebx
// 0059e928  5d                   pop ebp
// 0059e929  83c424               add esp, 0x24
// 0059e92c  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycc_rgb_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
