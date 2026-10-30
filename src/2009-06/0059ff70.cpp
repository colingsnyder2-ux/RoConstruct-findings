// from server: 100% by auto
// roc 2009-06 0059ff70  unit: seg_00590000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059ff70
//
// 0059ff70  83ec14               sub esp, 0x14
// 0059ff73  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059ff77  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 0059ff7d  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0059ff80  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 0059ff83  56                   push esi
// 0059ff84  8b742428             mov esi, dword ptr [esp + 0x28]
// 0059ff88  8954240c             mov dword ptr [esp + 0xc], edx
// 0059ff8c  894c2410             mov dword ptr [esp + 0x10], ecx
// 0059ff90  85f6                 test esi, esi
// 0059ff92  0f8e92000000         jle 0x5a002a
// 0059ff98  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059ff9c  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059ffa0  53                   push ebx
// 0059ffa1  2bd0                 sub edx, eax
// 0059ffa3  55                   push ebp
// 0059ffa4  8944240c             mov dword ptr [esp + 0xc], eax
// 0059ffa8  8954241c             mov dword ptr [esp + 0x1c], edx
// 0059ffac  89742410             mov dword ptr [esp + 0x10], esi
// 0059ffb0  57                   push edi
// 0059ffb1  8b3402               mov esi, dword ptr [edx + eax]
// 0059ffb4  8b18                 mov ebx, dword ptr [eax]
// 0059ffb6  894c2434             mov dword ptr [esp + 0x34], ecx
// 0059ffba  85c9                 test ecx, ecx
// 0059ffbc  765b                 jbe 0x5a0019
// 0059ffbe  8bff                 mov edi, edi
// 0059ffc0  0fb60e               movzx ecx, byte ptr [esi]
// 0059ffc3  0fb64601             movzx eax, byte ptr [esi + 1]
// 0059ffc7  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0059ffcb  46                   inc esi
// 0059ffcc  0fb65601             movzx edx, byte ptr [esi + 1]
// 0059ffd0  46                   inc esi
// 0059ffd1  c1e802               shr eax, 2
// 0059ffd4  8bf8                 mov edi, eax
// 0059ffd6  c1e705               shl edi, 5
// 0059ffd9  c1e903               shr ecx, 3
// 0059ffdc  8b6c8d00             mov ebp, dword ptr [ebp + ecx*4]
// 0059ffe0  c1ea03               shr edx, 3
// 0059ffe3  03fa                 add edi, edx
// 0059ffe5  8d7c7d00             lea edi, [ebp + edi*2]
// 0059ffe9  46                   inc esi
// 0059ffea  66833f00             cmp word ptr [edi], 0
// 0059ffee  750f                 jne 0x59ffff
// 0059fff0  52                   push edx
// 0059fff1  51                   push ecx
// 0059fff2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059fff6  51                   push ecx
// 0059fff7  e854feffff           call 0x59fe50
// 0059fffc  83c40c               add esp, 0xc
// 0059ffff  8a17                 mov dl, byte ptr [edi]
// 005a0001  feca                 dec dl
// 005a0003  8813                 mov byte ptr [ebx], dl
// 005a0005  43                   inc ebx
// 005a0006  836c243401           sub dword ptr [esp + 0x34], 1
// 005a000b  75b3                 jne 0x59ffc0
// 005a000d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a0011  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a0015  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a0019  83c004               add eax, 4
// 005a001c  836c241401           sub dword ptr [esp + 0x14], 1
// 005a0021  89442410             mov dword ptr [esp + 0x10], eax
// 005a0025  758a                 jne 0x59ffb1
// 005a0027  5f                   pop edi
// 005a0028  5d                   pop ebp
// 005a0029  5b                   pop ebx
// 005a002a  5e                   pop esi
// 005a002b  83c414               add esp, 0x14
// 005a002e  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_no_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
