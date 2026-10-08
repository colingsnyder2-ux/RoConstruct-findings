// from server: 100% by auto
// roc 2009-06 00596bc0  unit: seg_00590000  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00596bc0
//
// 00596bc0  83ec10               sub esp, 0x10
// 00596bc3  53                   push ebx
// 00596bc4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00596bc8  56                   push esi
// 00596bc9  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00596bcd  f6466801             test byte ptr [esi + 0x68], 1
// 00596bd1  7541                 jne 0x596c14
// 00596bd3  68342c8d00           push 0x8d2c34
// 00596bd8  56                   push esi
// 00596bd9  e88275ffff           call 0x58e160
// 00596bde  83c408               add esp, 8
// 00596be1  8b4668               mov eax, dword ptr [esi + 0x68]
// 00596be4  a804                 test al, 4
// 00596be6  7406                 je 0x596bee
// 00596be8  83c808               or eax, 8
// 00596beb  894668               mov dword ptr [esi + 0x68], eax
// 00596bee  57                   push edi
// 00596bef  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00596bf3  83ff07               cmp edi, 7
// 00596bf6  7448                 je 0x596c40
// 00596bf8  68182c8d00           push 0x8d2c18
// 00596bfd  56                   push esi
// 00596bfe  e80d76ffff           call 0x58e210
// 00596c03  57                   push edi
// 00596c04  56                   push esi
// 00596c05  e8d6dfffff           call 0x594be0
// 00596c0a  83c410               add esp, 0x10
// 00596c0d  5f                   pop edi
// 00596c0e  5e                   pop esi
// 00596c0f  5b                   pop ebx
// 00596c10  83c410               add esp, 0x10
// 00596c13  c3                   ret 
// 00596c14  85db                 test ebx, ebx
// 00596c16  74c9                 je 0x596be1
// 00596c18  f7430800020000       test dword ptr [ebx + 8], 0x200
// 00596c1f  74c0                 je 0x596be1
// 00596c21  68002c8d00           push 0x8d2c00
// 00596c26  56                   push esi
// 00596c27  e8e475ffff           call 0x58e210
// 00596c2c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00596c30  50                   push eax
// 00596c31  56                   push esi
// 00596c32  e8a9dfffff           call 0x594be0
// 00596c37  83c410               add esp, 0x10
// 00596c3a  5e                   pop esi
// 00596c3b  5b                   pop ebx
// 00596c3c  83c410               add esp, 0x10
// 00596c3f  c3                   ret 
// 00596c40  6a07                 push 7
// 00596c42  8d4c2410             lea ecx, [esp + 0x10]
// 00596c46  51                   push ecx
// 00596c47  56                   push esi
// 00596c48  e8b320ffff           call 0x588d00
// 00596c4d  6a07                 push 7
// 00596c4f  8d54241c             lea edx, [esp + 0x1c]
// 00596c53  52                   push edx
// 00596c54  56                   push esi
// 00596c55  e866acfeff           call 0x5818c0
// 00596c5a  6a00                 push 0
// 00596c5c  56                   push esi
// 00596c5d  e87edfffff           call 0x594be0
// 00596c62  83c420               add esp, 0x20
// 00596c65  85c0                 test eax, eax
// 00596c67  7558                 jne 0x596cc1
// 00596c69  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 00596c6e  8a542410             mov dl, byte ptr [esp + 0x10]
// 00596c72  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 00596c77  8844241a             mov byte ptr [esp + 0x1a], al
// 00596c7b  0fb644240f           movzx eax, byte ptr [esp + 0xf]
// 00596c80  88542418             mov byte ptr [esp + 0x18], dl
// 00596c84  660fb654240c         movzx dx, byte ptr [esp + 0xc]
// 00596c8a  88442417             mov byte ptr [esp + 0x17], al
// 00596c8e  b800010000           mov eax, 0x100
// 00596c93  660fafd0             imul dx, ax
// 00596c97  884c2419             mov byte ptr [esp + 0x19], cl
// 00596c9b  0fb64c240e           movzx ecx, byte ptr [esp + 0xe]
// 00596ca0  884c2416             mov byte ptr [esp + 0x16], cl
// 00596ca4  660fb64c240d         movzx cx, byte ptr [esp + 0xd]
// 00596caa  6603d1               add dx, cx
// 00596cad  6689542414           mov word ptr [esp + 0x14], dx
// 00596cb2  8d542414             lea edx, [esp + 0x14]
// 00596cb6  52                   push edx
// 00596cb7  53                   push ebx
// 00596cb8  56                   push esi
// 00596cb9  e822a5feff           call 0x5811e0
// 00596cbe  83c40c               add esp, 0xc
// 00596cc1  5f                   pop edi
// 00596cc2  5e                   pop esi
// 00596cc3  5b                   pop ebx
// 00596cc4  83c410               add esp, 0x10
// 00596cc7  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_tIME)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
