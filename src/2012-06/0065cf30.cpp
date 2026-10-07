// roc 2012-06 0065cf30  unit: seg_00650000  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065cf30
//
// 0065cf30  83ec10               sub esp, 0x10
// 0065cf33  53                   push ebx
// 0065cf34  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0065cf38  56                   push esi
// 0065cf39  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0065cf3d  f6466801             test byte ptr [esi + 0x68], 1
// 0065cf41  7541                 jne 0x65cf84
// 0065cf43  680cadb800           push 0xb8ad0c
// 0065cf48  56                   push esi
// 0065cf49  e86212ffff           call 0x64e1b0
// 0065cf4e  83c408               add esp, 8
// 0065cf51  8b4668               mov eax, dword ptr [esi + 0x68]
// 0065cf54  a804                 test al, 4
// 0065cf56  7406                 je 0x65cf5e
// 0065cf58  83c808               or eax, 8
// 0065cf5b  894668               mov dword ptr [esi + 0x68], eax
// 0065cf5e  57                   push edi
// 0065cf5f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0065cf63  83ff07               cmp edi, 7
// 0065cf66  7448                 je 0x65cfb0
// 0065cf68  68f0acb800           push 0xb8acf0
// 0065cf6d  56                   push esi
// 0065cf6e  e8ed12ffff           call 0x64e260
// 0065cf73  57                   push edi
// 0065cf74  56                   push esi
// 0065cf75  e8d6dfffff           call 0x65af50
// 0065cf7a  83c410               add esp, 0x10
// 0065cf7d  5f                   pop edi
// 0065cf7e  5e                   pop esi
// 0065cf7f  5b                   pop ebx
// 0065cf80  83c410               add esp, 0x10
// 0065cf83  c3                   ret 
// 0065cf84  85db                 test ebx, ebx
// 0065cf86  74c9                 je 0x65cf51
// 0065cf88  f7430800020000       test dword ptr [ebx + 8], 0x200
// 0065cf8f  74c0                 je 0x65cf51
// 0065cf91  68d8acb800           push 0xb8acd8
// 0065cf96  56                   push esi
// 0065cf97  e8c412ffff           call 0x64e260
// 0065cf9c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0065cfa0  50                   push eax
// 0065cfa1  56                   push esi
// 0065cfa2  e8a9dfffff           call 0x65af50
// 0065cfa7  83c410               add esp, 0x10
// 0065cfaa  5e                   pop esi
// 0065cfab  5b                   pop ebx
// 0065cfac  83c410               add esp, 0x10
// 0065cfaf  c3                   ret 
// 0065cfb0  6a07                 push 7
// 0065cfb2  8d4c2410             lea ecx, [esp + 0x10]
// 0065cfb6  51                   push ecx
// 0065cfb7  56                   push esi
// 0065cfb8  e8330effff           call 0x64ddf0
// 0065cfbd  6a07                 push 7
// 0065cfbf  8d54241c             lea edx, [esp + 0x1c]
// 0065cfc3  52                   push edx
// 0065cfc4  56                   push esi
// 0065cfc5  e8c60efeff           call 0x63de90
// 0065cfca  6a00                 push 0
// 0065cfcc  56                   push esi
// 0065cfcd  e87edfffff           call 0x65af50
// 0065cfd2  83c420               add esp, 0x20
// 0065cfd5  85c0                 test eax, eax
// 0065cfd7  7558                 jne 0x65d031
// 0065cfd9  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 0065cfde  8a542410             mov dl, byte ptr [esp + 0x10]
// 0065cfe2  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 0065cfe7  8844241a             mov byte ptr [esp + 0x1a], al
// 0065cfeb  0fb644240f           movzx eax, byte ptr [esp + 0xf]
// 0065cff0  88542418             mov byte ptr [esp + 0x18], dl
// 0065cff4  660fb654240c         movzx dx, byte ptr [esp + 0xc]
// 0065cffa  88442417             mov byte ptr [esp + 0x17], al
// 0065cffe  b800010000           mov eax, 0x100
// 0065d003  660fafd0             imul dx, ax
// 0065d007  884c2419             mov byte ptr [esp + 0x19], cl
// 0065d00b  0fb64c240e           movzx ecx, byte ptr [esp + 0xe]
// 0065d010  884c2416             mov byte ptr [esp + 0x16], cl
// 0065d014  660fb64c240d         movzx cx, byte ptr [esp + 0xd]
// 0065d01a  6603d1               add dx, cx
// 0065d01d  6689542414           mov word ptr [esp + 0x14], dx
// 0065d022  8d542414             lea edx, [esp + 0x14]
// 0065d026  52                   push edx
// 0065d027  53                   push ebx
// 0065d028  56                   push esi
// 0065d029  e892a2feff           call 0x6472c0
// 0065d02e  83c40c               add esp, 0xc
// 0065d031  5f                   pop edi
// 0065d032  5e                   pop esi
// 0065d033  5b                   pop ebx
// 0065d034  83c410               add esp, 0x10
// 0065d037  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_tIME)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
