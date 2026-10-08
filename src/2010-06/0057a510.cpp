// from server: 100% by auto
// roc 2010-06 0057a510  unit: seg_00570000  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057a510
//
// 0057a510  83ec10               sub esp, 0x10
// 0057a513  53                   push ebx
// 0057a514  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0057a518  56                   push esi
// 0057a519  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0057a51d  f6466801             test byte ptr [esi + 0x68], 1
// 0057a521  7541                 jne 0x57a564
// 0057a523  683c78a200           push 0xa2783c
// 0057a528  56                   push esi
// 0057a529  e88275ffff           call 0x571ab0
// 0057a52e  83c408               add esp, 8
// 0057a531  8b4668               mov eax, dword ptr [esi + 0x68]
// 0057a534  a804                 test al, 4
// 0057a536  7406                 je 0x57a53e
// 0057a538  83c808               or eax, 8
// 0057a53b  894668               mov dword ptr [esi + 0x68], eax
// 0057a53e  57                   push edi
// 0057a53f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0057a543  83ff07               cmp edi, 7
// 0057a546  7448                 je 0x57a590
// 0057a548  682078a200           push 0xa27820
// 0057a54d  56                   push esi
// 0057a54e  e80d76ffff           call 0x571b60
// 0057a553  57                   push edi
// 0057a554  56                   push esi
// 0057a555  e8b6dfffff           call 0x578510
// 0057a55a  83c410               add esp, 0x10
// 0057a55d  5f                   pop edi
// 0057a55e  5e                   pop esi
// 0057a55f  5b                   pop ebx
// 0057a560  83c410               add esp, 0x10
// 0057a563  c3                   ret 
// 0057a564  85db                 test ebx, ebx
// 0057a566  74c9                 je 0x57a531
// 0057a568  f7430800020000       test dword ptr [ebx + 8], 0x200
// 0057a56f  74c0                 je 0x57a531
// 0057a571  680878a200           push 0xa27808
// 0057a576  56                   push esi
// 0057a577  e8e475ffff           call 0x571b60
// 0057a57c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057a580  50                   push eax
// 0057a581  56                   push esi
// 0057a582  e889dfffff           call 0x578510
// 0057a587  83c410               add esp, 0x10
// 0057a58a  5e                   pop esi
// 0057a58b  5b                   pop ebx
// 0057a58c  83c410               add esp, 0x10
// 0057a58f  c3                   ret 
// 0057a590  6a07                 push 7
// 0057a592  8d4c2410             lea ecx, [esp + 0x10]
// 0057a596  51                   push ecx
// 0057a597  56                   push esi
// 0057a598  e8731effff           call 0x56c410
// 0057a59d  6a07                 push 7
// 0057a59f  8d54241c             lea edx, [esp + 0x1c]
// 0057a5a3  52                   push edx
// 0057a5a4  56                   push esi
// 0057a5a5  e836aafeff           call 0x564fe0
// 0057a5aa  6a00                 push 0
// 0057a5ac  56                   push esi
// 0057a5ad  e85edfffff           call 0x578510
// 0057a5b2  83c420               add esp, 0x20
// 0057a5b5  85c0                 test eax, eax
// 0057a5b7  7558                 jne 0x57a611
// 0057a5b9  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 0057a5be  8a542410             mov dl, byte ptr [esp + 0x10]
// 0057a5c2  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 0057a5c7  8844241a             mov byte ptr [esp + 0x1a], al
// 0057a5cb  0fb644240f           movzx eax, byte ptr [esp + 0xf]
// 0057a5d0  88542418             mov byte ptr [esp + 0x18], dl
// 0057a5d4  660fb654240c         movzx dx, byte ptr [esp + 0xc]
// 0057a5da  88442417             mov byte ptr [esp + 0x17], al
// 0057a5de  b800010000           mov eax, 0x100
// 0057a5e3  660fafd0             imul dx, ax
// 0057a5e7  884c2419             mov byte ptr [esp + 0x19], cl
// 0057a5eb  0fb64c240e           movzx ecx, byte ptr [esp + 0xe]
// 0057a5f0  884c2416             mov byte ptr [esp + 0x16], cl
// 0057a5f4  660fb64c240d         movzx cx, byte ptr [esp + 0xd]
// 0057a5fa  6603d1               add dx, cx
// 0057a5fd  6689542414           mov word ptr [esp + 0x14], dx
// 0057a602  8d542414             lea edx, [esp + 0x14]
// 0057a606  52                   push edx
// 0057a607  53                   push ebx
// 0057a608  56                   push esi
// 0057a609  e8f2a2feff           call 0x564900
// 0057a60e  83c40c               add esp, 0xc
// 0057a611  5f                   pop edi
// 0057a612  5e                   pop esi
// 0057a613  5b                   pop ebx
// 0057a614  83c410               add esp, 0x10
// 0057a617  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_tIME)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
