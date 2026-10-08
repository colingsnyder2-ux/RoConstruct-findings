// from server: 100% by auto
// roc 2009-06 005a5520  unit: seg_005a0000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a5520
//
// 005a5520  83ec08               sub esp, 8
// 005a5523  836c241c01           sub dword ptr [esp + 0x1c], 1
// 005a5528  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a552c  8b8850010000         mov ecx, dword ptr [eax + 0x150]
// 005a5532  8b501c               mov edx, dword ptr [eax + 0x1c]
// 005a5535  56                   push esi
// 005a5536  8b7108               mov esi, dword ptr [ecx + 8]
// 005a5539  89542404             mov dword ptr [esp + 4], edx
// 005a553d  0f887d000000         js 0x5a55c0
// 005a5543  55                   push ebp
// 005a5544  57                   push edi
// 005a5545  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005a5549  03ff                 add edi, edi
// 005a554b  03ff                 add edi, edi
// 005a554d  8d4900               lea ecx, [ecx]
// 005a5550  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a5554  8b01                 mov eax, dword ptr [ecx]
// 005a5556  83c104               add ecx, 4
// 005a5559  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a555d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a5561  8b09                 mov ecx, dword ptr [ecx]
// 005a5563  8b0c0f               mov ecx, dword ptr [edi + ecx]
// 005a5566  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a556a  83c704               add edi, 4
// 005a556d  33c9                 xor ecx, ecx
// 005a556f  897c2410             mov dword ptr [esp + 0x10], edi
// 005a5573  85d2                 test edx, edx
// 005a5575  7640                 jbe 0x5a55b7
// 005a5577  eb07                 jmp 0x5a5580
// 005a5579  8da42400000000       lea esp, [esp]
// 005a5580  0fb65002             movzx edx, byte ptr [eax + 2]
// 005a5584  0fb66801             movzx ebp, byte ptr [eax + 1]
// 005a5588  8b949600080000       mov edx, dword ptr [esi + edx*4 + 0x800]
// 005a558f  0fb638               movzx edi, byte ptr [eax]
// 005a5592  0394ae00040000       add edx, dword ptr [esi + ebp*4 + 0x400]
// 005a5599  41                   inc ecx
// 005a559a  0314be               add edx, dword ptr [esi + edi*4]
// 005a559d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005a55a1  c1fa10               sar edx, 0x10
// 005a55a4  885439ff             mov byte ptr [ecx + edi - 1], dl
// 005a55a8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a55ac  83c003               add eax, 3
// 005a55af  3bca                 cmp ecx, edx
// 005a55b1  72cd                 jb 0x5a5580
// 005a55b3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005a55b7  836c242801           sub dword ptr [esp + 0x28], 1
// 005a55bc  7992                 jns 0x5a5550
// 005a55be  5f                   pop edi
// 005a55bf  5d                   pop ebp
// 005a55c0  5e                   pop esi
// 005a55c1  83c408               add esp, 8
// 005a55c4  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_gray_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
