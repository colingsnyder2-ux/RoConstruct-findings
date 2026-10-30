// from server: 100% by auto
// roc 2010-06 00589030  unit: seg_00580000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00589030
//
// 00589030  83ec08               sub esp, 8
// 00589033  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00589038  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0058903c  8b8850010000         mov ecx, dword ptr [eax + 0x150]
// 00589042  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00589045  56                   push esi
// 00589046  8b7108               mov esi, dword ptr [ecx + 8]
// 00589049  89542404             mov dword ptr [esp + 4], edx
// 0058904d  0f887d000000         js 0x5890d0
// 00589053  55                   push ebp
// 00589054  57                   push edi
// 00589055  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00589059  03ff                 add edi, edi
// 0058905b  03ff                 add edi, edi
// 0058905d  8d4900               lea ecx, [ecx]
// 00589060  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00589064  8b01                 mov eax, dword ptr [ecx]
// 00589066  83c104               add ecx, 4
// 00589069  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0058906d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00589071  8b09                 mov ecx, dword ptr [ecx]
// 00589073  8b0c0f               mov ecx, dword ptr [edi + ecx]
// 00589076  894c2418             mov dword ptr [esp + 0x18], ecx
// 0058907a  83c704               add edi, 4
// 0058907d  33c9                 xor ecx, ecx
// 0058907f  897c2410             mov dword ptr [esp + 0x10], edi
// 00589083  85d2                 test edx, edx
// 00589085  7640                 jbe 0x5890c7
// 00589087  eb07                 jmp 0x589090
// 00589089  8da42400000000       lea esp, [esp]
// 00589090  0fb65002             movzx edx, byte ptr [eax + 2]
// 00589094  0fb66801             movzx ebp, byte ptr [eax + 1]
// 00589098  8b949600080000       mov edx, dword ptr [esi + edx*4 + 0x800]
// 0058909f  0fb638               movzx edi, byte ptr [eax]
// 005890a2  0394ae00040000       add edx, dword ptr [esi + ebp*4 + 0x400]
// 005890a9  41                   inc ecx
// 005890aa  0314be               add edx, dword ptr [esi + edi*4]
// 005890ad  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005890b1  c1fa10               sar edx, 0x10
// 005890b4  885439ff             mov byte ptr [ecx + edi - 1], dl
// 005890b8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005890bc  83c003               add eax, 3
// 005890bf  3bca                 cmp ecx, edx
// 005890c1  72cd                 jb 0x589090
// 005890c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005890c7  836c242801           sub dword ptr [esp + 0x28], 1
// 005890cc  7992                 jns 0x589060
// 005890ce  5f                   pop edi
// 005890cf  5d                   pop ebp
// 005890d0  5e                   pop esi
// 005890d1  83c408               add esp, 8
// 005890d4  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_gray_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
