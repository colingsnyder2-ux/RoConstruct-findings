// roc 2011-06 0057f2e0  unit: seg_00570000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057f2e0
//
// 0057f2e0  83ec08               sub esp, 8
// 0057f2e3  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0057f2e8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057f2ec  8b8850010000         mov ecx, dword ptr [eax + 0x150]
// 0057f2f2  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0057f2f5  56                   push esi
// 0057f2f6  8b7108               mov esi, dword ptr [ecx + 8]
// 0057f2f9  89542404             mov dword ptr [esp + 4], edx
// 0057f2fd  0f887d000000         js 0x57f380
// 0057f303  55                   push ebp
// 0057f304  57                   push edi
// 0057f305  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0057f309  03ff                 add edi, edi
// 0057f30b  03ff                 add edi, edi
// 0057f30d  8d4900               lea ecx, [ecx]
// 0057f310  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057f314  8b01                 mov eax, dword ptr [ecx]
// 0057f316  83c104               add ecx, 4
// 0057f319  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0057f31d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057f321  8b09                 mov ecx, dword ptr [ecx]
// 0057f323  8b0c0f               mov ecx, dword ptr [edi + ecx]
// 0057f326  894c2418             mov dword ptr [esp + 0x18], ecx
// 0057f32a  83c704               add edi, 4
// 0057f32d  33c9                 xor ecx, ecx
// 0057f32f  897c2410             mov dword ptr [esp + 0x10], edi
// 0057f333  85d2                 test edx, edx
// 0057f335  7640                 jbe 0x57f377
// 0057f337  eb07                 jmp 0x57f340
// 0057f339  8da42400000000       lea esp, [esp]
// 0057f340  0fb65002             movzx edx, byte ptr [eax + 2]
// 0057f344  0fb66801             movzx ebp, byte ptr [eax + 1]
// 0057f348  8b949600080000       mov edx, dword ptr [esi + edx*4 + 0x800]
// 0057f34f  0fb638               movzx edi, byte ptr [eax]
// 0057f352  0394ae00040000       add edx, dword ptr [esi + ebp*4 + 0x400]
// 0057f359  41                   inc ecx
// 0057f35a  0314be               add edx, dword ptr [esi + edi*4]
// 0057f35d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0057f361  c1fa10               sar edx, 0x10
// 0057f364  885439ff             mov byte ptr [ecx + edi - 1], dl
// 0057f368  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057f36c  83c003               add eax, 3
// 0057f36f  3bca                 cmp ecx, edx
// 0057f371  72cd                 jb 0x57f340
// 0057f373  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0057f377  836c242801           sub dword ptr [esp + 0x28], 1
// 0057f37c  7992                 jns 0x57f310
// 0057f37e  5f                   pop edi
// 0057f37f  5d                   pop ebp
// 0057f380  5e                   pop esi
// 0057f381  83c408               add esp, 8
// 0057f384  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_gray_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
