// roc 2012-06 0066a9f0  unit: seg_00660000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066a9f0
//
// 0066a9f0  83ec08               sub esp, 8
// 0066a9f3  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0066a9f8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066a9fc  8b8850010000         mov ecx, dword ptr [eax + 0x150]
// 0066aa02  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0066aa05  56                   push esi
// 0066aa06  8b7108               mov esi, dword ptr [ecx + 8]
// 0066aa09  89542404             mov dword ptr [esp + 4], edx
// 0066aa0d  0f887d000000         js 0x66aa90
// 0066aa13  55                   push ebp
// 0066aa14  57                   push edi
// 0066aa15  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0066aa19  03ff                 add edi, edi
// 0066aa1b  03ff                 add edi, edi
// 0066aa1d  8d4900               lea ecx, [ecx]
// 0066aa20  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066aa24  8b01                 mov eax, dword ptr [ecx]
// 0066aa26  83c104               add ecx, 4
// 0066aa29  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066aa2d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0066aa31  8b09                 mov ecx, dword ptr [ecx]
// 0066aa33  8b0c0f               mov ecx, dword ptr [edi + ecx]
// 0066aa36  894c2418             mov dword ptr [esp + 0x18], ecx
// 0066aa3a  83c704               add edi, 4
// 0066aa3d  33c9                 xor ecx, ecx
// 0066aa3f  897c2410             mov dword ptr [esp + 0x10], edi
// 0066aa43  85d2                 test edx, edx
// 0066aa45  7640                 jbe 0x66aa87
// 0066aa47  eb07                 jmp 0x66aa50
// 0066aa49  8da42400000000       lea esp, [esp]
// 0066aa50  0fb65002             movzx edx, byte ptr [eax + 2]
// 0066aa54  0fb66801             movzx ebp, byte ptr [eax + 1]
// 0066aa58  8b949600080000       mov edx, dword ptr [esi + edx*4 + 0x800]
// 0066aa5f  0fb638               movzx edi, byte ptr [eax]
// 0066aa62  0394ae00040000       add edx, dword ptr [esi + ebp*4 + 0x400]
// 0066aa69  41                   inc ecx
// 0066aa6a  0314be               add edx, dword ptr [esi + edi*4]
// 0066aa6d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0066aa71  c1fa10               sar edx, 0x10
// 0066aa74  885439ff             mov byte ptr [ecx + edi - 1], dl
// 0066aa78  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0066aa7c  83c003               add eax, 3
// 0066aa7f  3bca                 cmp ecx, edx
// 0066aa81  72cd                 jb 0x66aa50
// 0066aa83  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066aa87  836c242801           sub dword ptr [esp + 0x28], 1
// 0066aa8c  7992                 jns 0x66aa20
// 0066aa8e  5f                   pop edi
// 0066aa8f  5d                   pop ebp
// 0066aa90  5e                   pop esi
// 0066aa91  83c408               add esp, 8
// 0066aa94  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_gray_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
