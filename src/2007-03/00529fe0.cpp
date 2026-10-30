// roc 2007-03 00529fe0  unit: seg_00520000  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00529fe0
//
// 00529fe0  83ec08               sub esp, 8
// 00529fe3  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00529fe8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00529fec  8b8850010000         mov ecx, dword ptr [eax + 0x150]
// 00529ff2  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00529ff5  56                   push esi
// 00529ff6  8b7108               mov esi, dword ptr [ecx + 8]
// 00529ff9  89542404             mov dword ptr [esp + 4], edx
// 00529ffd  0f887f000000         js 0x52a082
// 0052a003  55                   push ebp
// 0052a004  57                   push edi
// 0052a005  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0052a009  03ff                 add edi, edi
// 0052a00b  03ff                 add edi, edi
// 0052a00d  8d4900               lea ecx, [ecx]
// 0052a010  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052a014  8b01                 mov eax, dword ptr [ecx]
// 0052a016  83c104               add ecx, 4
// 0052a019  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0052a01d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052a021  8b09                 mov ecx, dword ptr [ecx]
// 0052a023  8b0c0f               mov ecx, dword ptr [edi + ecx]
// 0052a026  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052a02a  83c704               add edi, 4
// 0052a02d  33c9                 xor ecx, ecx
// 0052a02f  85d2                 test edx, edx
// 0052a031  897c2410             mov dword ptr [esp + 0x10], edi
// 0052a035  7642                 jbe 0x52a079
// 0052a037  eb07                 jmp 0x52a040
// 0052a039  8da42400000000       lea esp, [esp]
// 0052a040  0fb65002             movzx edx, byte ptr [eax + 2]
// 0052a044  0fb66801             movzx ebp, byte ptr [eax + 1]
// 0052a048  8b949600080000       mov edx, dword ptr [esi + edx*4 + 0x800]
// 0052a04f  0fb638               movzx edi, byte ptr [eax]
// 0052a052  0394ae00040000       add edx, dword ptr [esi + ebp*4 + 0x400]
// 0052a059  83c101               add ecx, 1
// 0052a05c  0314be               add edx, dword ptr [esi + edi*4]
// 0052a05f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0052a063  c1fa10               sar edx, 0x10
// 0052a066  885439ff             mov byte ptr [ecx + edi - 1], dl
// 0052a06a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0052a06e  83c003               add eax, 3
// 0052a071  3bca                 cmp ecx, edx
// 0052a073  72cb                 jb 0x52a040
// 0052a075  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0052a079  836c242801           sub dword ptr [esp + 0x28], 1
// 0052a07e  7990                 jns 0x52a010
// 0052a080  5f                   pop edi
// 0052a081  5d                   pop ebp
// 0052a082  5e                   pop esi
// 0052a083  83c408               add esp, 8
// 0052a086  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_gray_convert)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
