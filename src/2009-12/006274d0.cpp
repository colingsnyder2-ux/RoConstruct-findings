// roc 2009-12 006274d0  unit: seg_00620000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006274d0
//
// 006274d0  83ec08               sub esp, 8
// 006274d3  836c241c01           sub dword ptr [esp + 0x1c], 1
// 006274d8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006274dc  8b8850010000         mov ecx, dword ptr [eax + 0x150]
// 006274e2  8b501c               mov edx, dword ptr [eax + 0x1c]
// 006274e5  56                   push esi
// 006274e6  8b7108               mov esi, dword ptr [ecx + 8]
// 006274e9  89542404             mov dword ptr [esp + 4], edx
// 006274ed  0f887d000000         js 0x627570
// 006274f3  55                   push ebp
// 006274f4  57                   push edi
// 006274f5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006274f9  03ff                 add edi, edi
// 006274fb  03ff                 add edi, edi
// 006274fd  8d4900               lea ecx, [ecx]
// 00627500  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00627504  8b01                 mov eax, dword ptr [ecx]
// 00627506  83c104               add ecx, 4
// 00627509  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0062750d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00627511  8b09                 mov ecx, dword ptr [ecx]
// 00627513  8b0c0f               mov ecx, dword ptr [edi + ecx]
// 00627516  894c2418             mov dword ptr [esp + 0x18], ecx
// 0062751a  83c704               add edi, 4
// 0062751d  33c9                 xor ecx, ecx
// 0062751f  897c2410             mov dword ptr [esp + 0x10], edi
// 00627523  85d2                 test edx, edx
// 00627525  7640                 jbe 0x627567
// 00627527  eb07                 jmp 0x627530
// 00627529  8da42400000000       lea esp, [esp]
// 00627530  0fb65002             movzx edx, byte ptr [eax + 2]
// 00627534  0fb66801             movzx ebp, byte ptr [eax + 1]
// 00627538  8b949600080000       mov edx, dword ptr [esi + edx*4 + 0x800]
// 0062753f  0fb638               movzx edi, byte ptr [eax]
// 00627542  0394ae00040000       add edx, dword ptr [esi + ebp*4 + 0x400]
// 00627549  41                   inc ecx
// 0062754a  0314be               add edx, dword ptr [esi + edi*4]
// 0062754d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00627551  c1fa10               sar edx, 0x10
// 00627554  885439ff             mov byte ptr [ecx + edi - 1], dl
// 00627558  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0062755c  83c003               add eax, 3
// 0062755f  3bca                 cmp ecx, edx
// 00627561  72cd                 jb 0x627530
// 00627563  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00627567  836c242801           sub dword ptr [esp + 0x28], 1
// 0062756c  7992                 jns 0x627500
// 0062756e  5f                   pop edi
// 0062756f  5d                   pop ebp
// 00627570  5e                   pop esi
// 00627571  83c408               add esp, 8
// 00627574  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_gray_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
