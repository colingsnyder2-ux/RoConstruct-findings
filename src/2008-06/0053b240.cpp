// from server: 100% by auto
// roc 2008-06 0053b240  unit: seg_00530000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053b240
//
// 0053b240  83ec08               sub esp, 8
// 0053b243  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0053b248  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053b24c  8b8850010000         mov ecx, dword ptr [eax + 0x150]
// 0053b252  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0053b255  56                   push esi
// 0053b256  8b7108               mov esi, dword ptr [ecx + 8]
// 0053b259  89542404             mov dword ptr [esp + 4], edx
// 0053b25d  0f887d000000         js 0x53b2e0
// 0053b263  55                   push ebp
// 0053b264  57                   push edi
// 0053b265  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0053b269  03ff                 add edi, edi
// 0053b26b  03ff                 add edi, edi
// 0053b26d  8d4900               lea ecx, [ecx]
// 0053b270  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053b274  8b01                 mov eax, dword ptr [ecx]
// 0053b276  83c104               add ecx, 4
// 0053b279  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053b27d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053b281  8b09                 mov ecx, dword ptr [ecx]
// 0053b283  8b0c0f               mov ecx, dword ptr [edi + ecx]
// 0053b286  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053b28a  83c704               add edi, 4
// 0053b28d  33c9                 xor ecx, ecx
// 0053b28f  897c2410             mov dword ptr [esp + 0x10], edi
// 0053b293  85d2                 test edx, edx
// 0053b295  7640                 jbe 0x53b2d7
// 0053b297  eb07                 jmp 0x53b2a0
// 0053b299  8da42400000000       lea esp, [esp]
// 0053b2a0  0fb65002             movzx edx, byte ptr [eax + 2]
// 0053b2a4  0fb66801             movzx ebp, byte ptr [eax + 1]
// 0053b2a8  8b949600080000       mov edx, dword ptr [esi + edx*4 + 0x800]
// 0053b2af  0fb638               movzx edi, byte ptr [eax]
// 0053b2b2  0394ae00040000       add edx, dword ptr [esi + ebp*4 + 0x400]
// 0053b2b9  41                   inc ecx
// 0053b2ba  0314be               add edx, dword ptr [esi + edi*4]
// 0053b2bd  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0053b2c1  c1fa10               sar edx, 0x10
// 0053b2c4  885439ff             mov byte ptr [ecx + edi - 1], dl
// 0053b2c8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0053b2cc  83c003               add eax, 3
// 0053b2cf  3bca                 cmp ecx, edx
// 0053b2d1  72cd                 jb 0x53b2a0
// 0053b2d3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0053b2d7  836c242801           sub dword ptr [esp + 0x28], 1
// 0053b2dc  7992                 jns 0x53b270
// 0053b2de  5f                   pop edi
// 0053b2df  5d                   pop ebp
// 0053b2e0  5e                   pop esi
// 0053b2e1  83c408               add esp, 8
// 0053b2e4  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_gray_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
