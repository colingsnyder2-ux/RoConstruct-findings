// roc 2008-06 00534530  unit: seg_00530000  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534530
//
// 00534530  83ec24               sub esp, 0x24
// 00534533  836c243801           sub dword ptr [esp + 0x38], 1
// 00534538  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0053453c  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 00534542  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 00534548  55                   push ebp
// 00534549  8b695c               mov ebp, dword ptr [ecx + 0x5c]
// 0053454c  8b4808               mov ecx, dword ptr [eax + 8]
// 0053454f  894c240c             mov dword ptr [esp + 0xc], ecx
// 00534553  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00534556  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053455a  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0053455d  8b4014               mov eax, dword ptr [eax + 0x14]
// 00534560  896c2420             mov dword ptr [esp + 0x20], ebp
// 00534564  89542418             mov dword ptr [esp + 0x18], edx
// 00534568  894c2414             mov dword ptr [esp + 0x14], ecx
// 0053456c  89442410             mov dword ptr [esp + 0x10], eax
// 00534570  0f88d2000000         js 0x534648
// 00534576  53                   push ebx
// 00534577  56                   push esi
// 00534578  8b742438             mov esi, dword ptr [esp + 0x38]
// 0053457c  57                   push edi
// 0053457d  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00534581  03ff                 add edi, edi
// 00534583  03ff                 add edi, edi
// 00534585  8b0e                 mov ecx, dword ptr [esi]
// 00534587  8b040f               mov eax, dword ptr [edi + ecx]
// 0053458a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0053458d  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00534591  89442438             mov dword ptr [esp + 0x38], eax
// 00534595  8b040f               mov eax, dword ptr [edi + ecx]
// 00534598  8b4e08               mov ecx, dword ptr [esi + 8]
// 0053459b  8b0c0f               mov ecx, dword ptr [edi + ecx]
// 0053459e  894c2410             mov dword ptr [esp + 0x10], ecx
// 005345a2  8b0b                 mov ecx, dword ptr [ebx]
// 005345a4  83c704               add edi, 4
// 005345a7  83c304               add ebx, 4
// 005345aa  897c2430             mov dword ptr [esp + 0x30], edi
// 005345ae  895c2444             mov dword ptr [esp + 0x44], ebx
// 005345b2  85ed                 test ebp, ebp
// 005345b4  0f8680000000         jbe 0x53463a
// 005345ba  8b742438             mov esi, dword ptr [esp + 0x38]
// 005345be  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005345c2  2bf0                 sub esi, eax
// 005345c4  2bd8                 sub ebx, eax
// 005345c6  89742414             mov dword ptr [esp + 0x14], esi
// 005345ca  895c2410             mov dword ptr [esp + 0x10], ebx
// 005345ce  896c2438             mov dword ptr [esp + 0x38], ebp
// 005345d2  eb08                 jmp 0x5345dc
// 005345d4  8b742414             mov esi, dword ptr [esp + 0x14]
// 005345d8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005345dc  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 005345e0  0fb63406             movzx esi, byte ptr [esi + eax]
// 005345e4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005345e8  8b1cab               mov ebx, dword ptr [ebx + ebp*4]
// 005345eb  0fb638               movzx edi, byte ptr [eax]
// 005345ee  03de                 add ebx, esi
// 005345f0  8a1413               mov dl, byte ptr [ebx + edx]
// 005345f3  8811                 mov byte ptr [ecx], dl
// 005345f5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005345f9  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 005345fc  8b542420             mov edx, dword ptr [esp + 0x20]
// 00534600  031caa               add ebx, dword ptr [edx + ebp*4]
// 00534603  8b542424             mov edx, dword ptr [esp + 0x24]
// 00534607  c1fb10               sar ebx, 0x10
// 0053460a  03de                 add ebx, esi
// 0053460c  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 00534610  885901               mov byte ptr [ecx + 1], bl
// 00534613  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00534617  8b3cbb               mov edi, dword ptr [ebx + edi*4]
// 0053461a  03fe                 add edi, esi
// 0053461c  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 00534620  885902               mov byte ptr [ecx + 2], bl
// 00534623  83c103               add ecx, 3
// 00534626  40                   inc eax
// 00534627  836c243801           sub dword ptr [esp + 0x38], 1
// 0053462c  75a6                 jne 0x5345d4
// 0053462e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00534632  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00534636  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0053463a  836c244801           sub dword ptr [esp + 0x48], 1
// 0053463f  0f8940ffffff         jns 0x534585
// 00534645  5f                   pop edi
// 00534646  5e                   pop esi
// 00534647  5b                   pop ebx
// 00534648  5d                   pop ebp
// 00534649  83c424               add esp, 0x24
// 0053464c  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycc_rgb_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
