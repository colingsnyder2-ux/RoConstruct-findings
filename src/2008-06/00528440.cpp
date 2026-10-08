// from server: 100% by auto
// roc 2008-06 00528440  unit: G3D::Line  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00528440
//
// 00528440  8b442414             mov eax, dword ptr [esp + 0x14]
// 00528444  83ec08               sub esp, 8
// 00528447  83f803               cmp eax, 3
// 0052844a  7541                 jne 0x52848d
// 0052844c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00528450  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00528454  85c0                 test eax, eax
// 00528456  7e23                 jle 0x52847b
// 00528458  0fb79118010000       movzx edx, word ptr [ecx + 0x118]
// 0052845f  3bc2                 cmp eax, edx
// 00528461  7f18                 jg 0x52847b
// 00528463  50                   push eax
// 00528464  8b442414             mov eax, dword ptr [esp + 0x14]
// 00528468  50                   push eax
// 00528469  68dc948200           push 0x8294dc
// 0052846e  51                   push ecx
// 0052846f  e83cf1ffff           call 0x5275b0
// 00528474  83c410               add esp, 0x10
// 00528477  83c408               add esp, 8
// 0052847a  c3                   ret 
// 0052847b  6868b98200           push 0x82b968
// 00528480  51                   push ecx
// 00528481  e8ca150000           call 0x529a50
// 00528486  83c408               add esp, 8
// 00528489  83c408               add esp, 8
// 0052848c  c3                   ret 
// 0052848d  56                   push esi
// 0052848e  85c0                 test eax, eax
// 00528490  7557                 jne 0x5284e9
// 00528492  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00528496  0fb74108             movzx eax, word ptr [ecx + 8]
// 0052849a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0052849e  8a8a27010000         mov cl, byte ptr [edx + 0x127]
// 005284a4  be01000000           mov esi, 1
// 005284a9  d3e6                 shl esi, cl
// 005284ab  3bc6                 cmp eax, esi
// 005284ad  7c13                 jl 0x5284c2
// 005284af  6828b98200           push 0x82b928
// 005284b4  52                   push edx
// 005284b5  e896150000           call 0x529a50
// 005284ba  83c408               add esp, 8
// 005284bd  5e                   pop esi
// 005284be  83c408               add esp, 8
// 005284c1  c3                   ret 
// 005284c2  8bc8                 mov ecx, eax
// 005284c4  88442405             mov byte ptr [esp + 5], al
// 005284c8  6a02                 push 2
// 005284ca  8d442408             lea eax, [esp + 8]
// 005284ce  50                   push eax
// 005284cf  c1e908               shr ecx, 8
// 005284d2  68dc948200           push 0x8294dc
// 005284d7  52                   push edx
// 005284d8  884c2414             mov byte ptr [esp + 0x14], cl
// 005284dc  e8cff0ffff           call 0x5275b0
// 005284e1  83c410               add esp, 0x10
// 005284e4  5e                   pop esi
// 005284e5  83c408               add esp, 8
// 005284e8  c3                   ret 
// 005284e9  83f802               cmp eax, 2
// 005284ec  7579                 jne 0x528567
// 005284ee  8b742418             mov esi, dword ptr [esp + 0x18]
// 005284f2  0fb74602             movzx eax, word ptr [esi + 2]
// 005284f6  8bc8                 mov ecx, eax
// 005284f8  88442405             mov byte ptr [esp + 5], al
// 005284fc  0fb74604             movzx eax, word ptr [esi + 4]
// 00528500  53                   push ebx
// 00528501  0fb75e06             movzx ebx, word ptr [esi + 6]
// 00528505  8b742414             mov esi, dword ptr [esp + 0x14]
// 00528509  8bd0                 mov edx, eax
// 0052850b  8844240b             mov byte ptr [esp + 0xb], al
// 0052850f  8bc3                 mov eax, ebx
// 00528511  c1e908               shr ecx, 8
// 00528514  c1ea08               shr edx, 8
// 00528517  c1e808               shr eax, 8
// 0052851a  80be2701000008       cmp byte ptr [esi + 0x127], 8
// 00528521  885c240d             mov byte ptr [esp + 0xd], bl
// 00528525  884c2408             mov byte ptr [esp + 8], cl
// 00528529  8854240a             mov byte ptr [esp + 0xa], dl
// 0052852d  8844240c             mov byte ptr [esp + 0xc], al
// 00528531  5b                   pop ebx
// 00528532  7519                 jne 0x52854d
// 00528534  0ac2                 or al, dl
// 00528536  0ac1                 or al, cl
// 00528538  7413                 je 0x52854d
// 0052853a  68e8b88200           push 0x82b8e8
// 0052853f  56                   push esi
// 00528540  e80b150000           call 0x529a50
// 00528545  83c408               add esp, 8
// 00528548  5e                   pop esi
// 00528549  83c408               add esp, 8
// 0052854c  c3                   ret 
// 0052854d  6a06                 push 6
// 0052854f  8d4c2408             lea ecx, [esp + 8]
// 00528553  51                   push ecx
// 00528554  68dc948200           push 0x8294dc
// 00528559  56                   push esi
// 0052855a  e851f0ffff           call 0x5275b0
// 0052855f  83c410               add esp, 0x10
// 00528562  5e                   pop esi
// 00528563  83c408               add esp, 8
// 00528566  c3                   ret 
// 00528567  8b542410             mov edx, dword ptr [esp + 0x10]
// 0052856b  68bcb88200           push 0x82b8bc
// 00528570  52                   push edx
// 00528571  e8da140000           call 0x529a50
// 00528576  83c408               add esp, 8
// 00528579  5e                   pop esi
// 0052857a  83c408               add esp, 8
// 0052857d  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_tRNS)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
