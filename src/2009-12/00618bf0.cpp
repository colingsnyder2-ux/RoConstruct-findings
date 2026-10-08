// roc 2009-12 00618bf0  unit: seg_00610000  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00618bf0
//
// 00618bf0  83ec10               sub esp, 0x10
// 00618bf3  53                   push ebx
// 00618bf4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00618bf8  56                   push esi
// 00618bf9  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00618bfd  f6466801             test byte ptr [esi + 0x68], 1
// 00618c01  7541                 jne 0x618c44
// 00618c03  68c49a9c00           push 0x9c9ac4
// 00618c08  56                   push esi
// 00618c09  e88275ffff           call 0x610190
// 00618c0e  83c408               add esp, 8
// 00618c11  8b4668               mov eax, dword ptr [esi + 0x68]
// 00618c14  a804                 test al, 4
// 00618c16  7406                 je 0x618c1e
// 00618c18  83c808               or eax, 8
// 00618c1b  894668               mov dword ptr [esi + 0x68], eax
// 00618c1e  57                   push edi
// 00618c1f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00618c23  83ff07               cmp edi, 7
// 00618c26  7448                 je 0x618c70
// 00618c28  68a89a9c00           push 0x9c9aa8
// 00618c2d  56                   push esi
// 00618c2e  e80d76ffff           call 0x610240
// 00618c33  57                   push edi
// 00618c34  56                   push esi
// 00618c35  e8b6dfffff           call 0x616bf0
// 00618c3a  83c410               add esp, 0x10
// 00618c3d  5f                   pop edi
// 00618c3e  5e                   pop esi
// 00618c3f  5b                   pop ebx
// 00618c40  83c410               add esp, 0x10
// 00618c43  c3                   ret 
// 00618c44  85db                 test ebx, ebx
// 00618c46  74c9                 je 0x618c11
// 00618c48  f7430800020000       test dword ptr [ebx + 8], 0x200
// 00618c4f  74c0                 je 0x618c11
// 00618c51  68909a9c00           push 0x9c9a90
// 00618c56  56                   push esi
// 00618c57  e8e475ffff           call 0x610240
// 00618c5c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00618c60  50                   push eax
// 00618c61  56                   push esi
// 00618c62  e889dfffff           call 0x616bf0
// 00618c67  83c410               add esp, 0x10
// 00618c6a  5e                   pop esi
// 00618c6b  5b                   pop ebx
// 00618c6c  83c410               add esp, 0x10
// 00618c6f  c3                   ret 
// 00618c70  6a07                 push 7
// 00618c72  8d4c2410             lea ecx, [esp + 0x10]
// 00618c76  51                   push ecx
// 00618c77  56                   push esi
// 00618c78  e8131effff           call 0x60aa90
// 00618c7d  6a07                 push 7
// 00618c7f  8d54241c             lea edx, [esp + 0x1c]
// 00618c83  52                   push edx
// 00618c84  56                   push esi
// 00618c85  e8e6a9feff           call 0x603670
// 00618c8a  6a00                 push 0
// 00618c8c  56                   push esi
// 00618c8d  e85edfffff           call 0x616bf0
// 00618c92  83c420               add esp, 0x20
// 00618c95  85c0                 test eax, eax
// 00618c97  7558                 jne 0x618cf1
// 00618c99  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 00618c9e  8a542410             mov dl, byte ptr [esp + 0x10]
// 00618ca2  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 00618ca7  8844241a             mov byte ptr [esp + 0x1a], al
// 00618cab  0fb644240f           movzx eax, byte ptr [esp + 0xf]
// 00618cb0  88542418             mov byte ptr [esp + 0x18], dl
// 00618cb4  660fb654240c         movzx dx, byte ptr [esp + 0xc]
// 00618cba  88442417             mov byte ptr [esp + 0x17], al
// 00618cbe  b800010000           mov eax, 0x100
// 00618cc3  660fafd0             imul dx, ax
// 00618cc7  884c2419             mov byte ptr [esp + 0x19], cl
// 00618ccb  0fb64c240e           movzx ecx, byte ptr [esp + 0xe]
// 00618cd0  884c2416             mov byte ptr [esp + 0x16], cl
// 00618cd4  660fb64c240d         movzx cx, byte ptr [esp + 0xd]
// 00618cda  6603d1               add dx, cx
// 00618cdd  6689542414           mov word ptr [esp + 0x14], dx
// 00618ce2  8d542414             lea edx, [esp + 0x14]
// 00618ce6  52                   push edx
// 00618ce7  53                   push ebx
// 00618ce8  56                   push esi
// 00618ce9  e8a2a2feff           call 0x602f90
// 00618cee  83c40c               add esp, 0xc
// 00618cf1  5f                   pop edi
// 00618cf2  5e                   pop esi
// 00618cf3  5b                   pop ebx
// 00618cf4  83c410               add esp, 0x10
// 00618cf7  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_tIME)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
