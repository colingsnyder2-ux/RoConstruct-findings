// from server: 100% by auto
// roc 2007-08 00615430  unit: seg_00610000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00615430
//
// 00615430  83ec0c               sub esp, 0xc
// 00615433  56                   push esi
// 00615434  8b7030               mov esi, dword ptr [eax + 0x30]
// 00615437  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 0061543f  c644240e00           mov byte ptr [esp + 0xe], 0
// 00615444  8a4e32               mov cl, byte ptr [esi + 0x32]
// 00615447  884c240c             mov byte ptr [esp + 0xc], cl
// 0061544b  c644240d00           mov byte ptr [esp + 0xd], 0
// 00615450  8b5614               mov edx, dword ptr [esi + 0x14]
// 00615453  57                   push edi
// 00615454  8d4c2408             lea ecx, [esp + 8]
// 00615458  89542408             mov dword ptr [esp + 8], edx
// 0061545c  50                   push eax
// 0061545d  894e14               mov dword ptr [esi + 0x14], ecx
// 00615460  e88b130000           call 0x6167f0
// 00615465  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00615468  8b17                 mov edx, dword ptr [edi]
// 0061546a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0061546d  895614               mov dword ptr [esi + 0x14], edx
// 00615470  0fb65708             movzx edx, byte ptr [edi + 8]
// 00615474  83c404               add esp, 4
// 00615477  e884e8ffff           call 0x613d00
// 0061547c  807f0900             cmp byte ptr [edi + 9], 0
// 00615480  7414                 je 0x615496
// 00615482  0fb64708             movzx eax, byte ptr [edi + 8]
// 00615486  6a00                 push 0
// 00615488  6a00                 push 0
// 0061548a  50                   push eax
// 0061548b  6a23                 push 0x23
// 0061548d  56                   push esi
// 0061548e  e8ed380100           call 0x628d80
// 00615493  83c414               add esp, 0x14
// 00615496  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 0061549a  894e24               mov dword ptr [esi + 0x24], ecx
// 0061549d  8b5704               mov edx, dword ptr [edi + 4]
// 006154a0  52                   push edx
// 006154a1  56                   push esi
// 006154a2  e8393b0100           call 0x628fe0
// 006154a7  83c408               add esp, 8
// 006154aa  5f                   pop edi
// 006154ab  5e                   pop esi
// 006154ac  83c40c               add esp, 0xc
// 006154af  c3                   ret 
// library lua-5.1.4/lparser.c (function _block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
