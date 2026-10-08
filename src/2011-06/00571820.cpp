// from server: 100% by auto
// roc 2011-06 00571820  unit: seg_00570000  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00571820
//
// 00571820  83ec10               sub esp, 0x10
// 00571823  53                   push ebx
// 00571824  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00571828  56                   push esi
// 00571829  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0057182d  f6466801             test byte ptr [esi + 0x68], 1
// 00571831  7541                 jne 0x571874
// 00571833  68bc6ea800           push 0xa86ebc
// 00571838  56                   push esi
// 00571839  e8f2fafeff           call 0x561330
// 0057183e  83c408               add esp, 8
// 00571841  8b4668               mov eax, dword ptr [esi + 0x68]
// 00571844  a804                 test al, 4
// 00571846  7406                 je 0x57184e
// 00571848  83c808               or eax, 8
// 0057184b  894668               mov dword ptr [esi + 0x68], eax
// 0057184e  57                   push edi
// 0057184f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00571853  83ff07               cmp edi, 7
// 00571856  7448                 je 0x5718a0
// 00571858  68a06ea800           push 0xa86ea0
// 0057185d  56                   push esi
// 0057185e  e87dfbfeff           call 0x5613e0
// 00571863  57                   push edi
// 00571864  56                   push esi
// 00571865  e8d6dfffff           call 0x56f840
// 0057186a  83c410               add esp, 0x10
// 0057186d  5f                   pop edi
// 0057186e  5e                   pop esi
// 0057186f  5b                   pop ebx
// 00571870  83c410               add esp, 0x10
// 00571873  c3                   ret 
// 00571874  85db                 test ebx, ebx
// 00571876  74c9                 je 0x571841
// 00571878  f7430800020000       test dword ptr [ebx + 8], 0x200
// 0057187f  74c0                 je 0x571841
// 00571881  68886ea800           push 0xa86e88
// 00571886  56                   push esi
// 00571887  e854fbfeff           call 0x5613e0
// 0057188c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00571890  50                   push eax
// 00571891  56                   push esi
// 00571892  e8a9dfffff           call 0x56f840
// 00571897  83c410               add esp, 0x10
// 0057189a  5e                   pop esi
// 0057189b  5b                   pop ebx
// 0057189c  83c410               add esp, 0x10
// 0057189f  c3                   ret 
// 005718a0  6a07                 push 7
// 005718a2  8d4c2410             lea ecx, [esp + 0x10]
// 005718a6  51                   push ecx
// 005718a7  56                   push esi
// 005718a8  e8c3f6feff           call 0x560f70
// 005718ad  6a07                 push 7
// 005718af  8d54241c             lea edx, [esp + 0x1c]
// 005718b3  52                   push edx
// 005718b4  56                   push esi
// 005718b5  e896effdff           call 0x550850
// 005718ba  6a00                 push 0
// 005718bc  56                   push esi
// 005718bd  e87edfffff           call 0x56f840
// 005718c2  83c420               add esp, 0x20
// 005718c5  85c0                 test eax, eax
// 005718c7  7558                 jne 0x571921
// 005718c9  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 005718ce  8a542410             mov dl, byte ptr [esp + 0x10]
// 005718d2  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 005718d7  8844241a             mov byte ptr [esp + 0x1a], al
// 005718db  0fb644240f           movzx eax, byte ptr [esp + 0xf]
// 005718e0  88542418             mov byte ptr [esp + 0x18], dl
// 005718e4  660fb654240c         movzx dx, byte ptr [esp + 0xc]
// 005718ea  88442417             mov byte ptr [esp + 0x17], al
// 005718ee  b800010000           mov eax, 0x100
// 005718f3  660fafd0             imul dx, ax
// 005718f7  884c2419             mov byte ptr [esp + 0x19], cl
// 005718fb  0fb64c240e           movzx ecx, byte ptr [esp + 0xe]
// 00571900  884c2416             mov byte ptr [esp + 0x16], cl
// 00571904  660fb64c240d         movzx cx, byte ptr [esp + 0xd]
// 0057190a  6603d1               add dx, cx
// 0057190d  6689542414           mov word ptr [esp + 0x14], dx
// 00571912  8d542414             lea edx, [esp + 0x14]
// 00571916  52                   push edx
// 00571917  53                   push ebx
// 00571918  56                   push esi
// 00571919  e8228bfeff           call 0x55a440
// 0057191e  83c40c               add esp, 0xc
// 00571921  5f                   pop edi
// 00571922  5e                   pop esi
// 00571923  5b                   pop ebx
// 00571924  83c410               add esp, 0x10
// 00571927  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_tIME)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
