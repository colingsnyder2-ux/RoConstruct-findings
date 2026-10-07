// roc 2008-06 00528580  unit: G3D::Line  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00528580
//
// 00528580  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00528584  83ec08               sub esp, 8
// 00528587  56                   push esi
// 00528588  83f803               cmp eax, 3
// 0052858b  7559                 jne 0x5285e6
// 0052858d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00528591  0fb78818010000       movzx ecx, word ptr [eax + 0x118]
// 00528598  8b542414             mov edx, dword ptr [esp + 0x14]
// 0052859c  6685c9               test cx, cx
// 0052859f  7509                 jne 0x5285aa
// 005285a1  f6803002000001       test byte ptr [eax + 0x230], 1
// 005285a8  751c                 jne 0x5285c6
// 005285aa  660fb632             movzx si, byte ptr [edx]
// 005285ae  663bf1               cmp si, cx
// 005285b1  7613                 jbe 0x5285c6
// 005285b3  6818ba8200           push 0x82ba18
// 005285b8  50                   push eax
// 005285b9  e892140000           call 0x529a50
// 005285be  83c408               add esp, 8
// 005285c1  5e                   pop esi
// 005285c2  83c408               add esp, 8
// 005285c5  c3                   ret 
// 005285c6  8a0a                 mov cl, byte ptr [edx]
// 005285c8  6a01                 push 1
// 005285ca  8d542408             lea edx, [esp + 8]
// 005285ce  52                   push edx
// 005285cf  6864948200           push 0x829464
// 005285d4  50                   push eax
// 005285d5  884c2414             mov byte ptr [esp + 0x14], cl
// 005285d9  e8d2efffff           call 0x5275b0
// 005285de  83c410               add esp, 0x10
// 005285e1  5e                   pop esi
// 005285e2  83c408               add esp, 8
// 005285e5  c3                   ret 
// 005285e6  a802                 test al, 2
// 005285e8  7479                 je 0x528663
// 005285ea  8b742414             mov esi, dword ptr [esp + 0x14]
// 005285ee  0fb74602             movzx eax, word ptr [esi + 2]
// 005285f2  8bc8                 mov ecx, eax
// 005285f4  88442405             mov byte ptr [esp + 5], al
// 005285f8  0fb74604             movzx eax, word ptr [esi + 4]
// 005285fc  53                   push ebx
// 005285fd  0fb75e06             movzx ebx, word ptr [esi + 6]
// 00528601  8b742414             mov esi, dword ptr [esp + 0x14]
// 00528605  8bd0                 mov edx, eax
// 00528607  8844240b             mov byte ptr [esp + 0xb], al
// 0052860b  8bc3                 mov eax, ebx
// 0052860d  c1e908               shr ecx, 8
// 00528610  c1ea08               shr edx, 8
// 00528613  c1e808               shr eax, 8
// 00528616  80be2701000008       cmp byte ptr [esi + 0x127], 8
// 0052861d  885c240d             mov byte ptr [esp + 0xd], bl
// 00528621  884c2408             mov byte ptr [esp + 8], cl
// 00528625  8854240a             mov byte ptr [esp + 0xa], dl
// 00528629  8844240c             mov byte ptr [esp + 0xc], al
// 0052862d  5b                   pop ebx
// 0052862e  7519                 jne 0x528649
// 00528630  0ac2                 or al, dl
// 00528632  0ac1                 or al, cl
// 00528634  7413                 je 0x528649
// 00528636  68d8b98200           push 0x82b9d8
// 0052863b  56                   push esi
// 0052863c  e80f140000           call 0x529a50
// 00528641  83c408               add esp, 8
// 00528644  5e                   pop esi
// 00528645  83c408               add esp, 8
// 00528648  c3                   ret 
// 00528649  6a06                 push 6
// 0052864b  8d442408             lea eax, [esp + 8]
// 0052864f  50                   push eax
// 00528650  6864948200           push 0x829464
// 00528655  56                   push esi
// 00528656  e855efffff           call 0x5275b0
// 0052865b  83c410               add esp, 0x10
// 0052865e  5e                   pop esi
// 0052865f  83c408               add esp, 8
// 00528662  c3                   ret 
// 00528663  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00528667  0fb74108             movzx eax, word ptr [ecx + 8]
// 0052866b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0052866f  8a8a27010000         mov cl, byte ptr [edx + 0x127]
// 00528675  be01000000           mov esi, 1
// 0052867a  d3e6                 shl esi, cl
// 0052867c  3bc6                 cmp eax, esi
// 0052867e  7c13                 jl 0x528693
// 00528680  6898b98200           push 0x82b998
// 00528685  52                   push edx
// 00528686  e8c5130000           call 0x529a50
// 0052868b  83c408               add esp, 8
// 0052868e  5e                   pop esi
// 0052868f  83c408               add esp, 8
// 00528692  c3                   ret 
// 00528693  8bc8                 mov ecx, eax
// 00528695  88442405             mov byte ptr [esp + 5], al
// 00528699  6a02                 push 2
// 0052869b  8d442408             lea eax, [esp + 8]
// 0052869f  50                   push eax
// 005286a0  c1e908               shr ecx, 8
// 005286a3  6864948200           push 0x829464
// 005286a8  52                   push edx
// 005286a9  884c2414             mov byte ptr [esp + 0x14], cl
// 005286ad  e8feeeffff           call 0x5275b0
// 005286b2  83c410               add esp, 0x10
// 005286b5  5e                   pop esi
// 005286b6  83c408               add esp, 8
// 005286b9  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
