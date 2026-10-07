// roc 2008-06 00520230  unit: seg_00520000  size: 402 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00520230
//
// 00520230  8b542404             mov edx, dword ptr [esp + 4]
// 00520234  f7427000100000       test dword ptr [edx + 0x70], 0x1000
// 0052023b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052023f  743d                 je 0x52027e
// 00520241  8a4119               mov al, byte ptr [ecx + 0x19]
// 00520244  3c03                 cmp al, 3
// 00520246  7517                 jne 0x52025f
// 00520248  6683ba1a01000000     cmp word ptr [edx + 0x11a], 0
// 00520250  0f95c0               setne al
// 00520253  8d048502000000       lea eax, [eax*4 + 2]
// 0052025a  884119               mov byte ptr [ecx + 0x19], al
// 0052025d  eb15                 jmp 0x520274
// 0052025f  6683ba1a01000000     cmp word ptr [edx + 0x11a], 0
// 00520267  7405                 je 0x52026e
// 00520269  0c04                 or al, 4
// 0052026b  884119               mov byte ptr [ecx + 0x19], al
// 0052026e  80791808             cmp byte ptr [ecx + 0x18], 8
// 00520272  7304                 jae 0x520278
// 00520274  c6411808             mov byte ptr [ecx + 0x18], 8
// 00520278  33c0                 xor eax, eax
// 0052027a  66894116             mov word ptr [ecx + 0x16], ax
// 0052027e  f6427080             test byte ptr [edx + 0x70], 0x80
// 00520282  7427                 je 0x5202ab
// 00520284  806119fb             and byte ptr [ecx + 0x19], 0xfb
// 00520288  33c0                 xor eax, eax
// 0052028a  66894116             mov word ptr [ecx + 0x16], ax
// 0052028e  8b8238010000         mov eax, dword ptr [edx + 0x138]
// 00520294  89415a               mov dword ptr [ecx + 0x5a], eax
// 00520297  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 0052029d  89415e               mov dword ptr [ecx + 0x5e], eax
// 005202a0  668b8240010000       mov ax, word ptr [edx + 0x140]
// 005202a7  66894162             mov word ptr [ecx + 0x62], ax
// 005202ab  f7427000200000       test dword ptr [edx + 0x70], 0x2000
// 005202b2  7415                 je 0x5202c9
// 005202b4  d9825c010000         fld dword ptr [edx + 0x15c]
// 005202ba  d95928               fstp dword ptr [ecx + 0x28]
// 005202bd  8b8234020000         mov eax, dword ptr [edx + 0x234]
// 005202c3  8981fc000000         mov dword ptr [ecx + 0xfc], eax
// 005202c9  f7427000040000       test dword ptr [edx + 0x70], 0x400
// 005202d0  740a                 je 0x5202dc
// 005202d2  80791810             cmp byte ptr [ecx + 0x18], 0x10
// 005202d6  7504                 jne 0x5202dc
// 005202d8  c6411808             mov byte ptr [ecx + 0x18], 8
// 005202dc  f6427040             test byte ptr [edx + 0x70], 0x40
// 005202e0  741e                 je 0x520300
// 005202e2  8a4119               mov al, byte ptr [ecx + 0x19]
// 005202e5  3c02                 cmp al, 2
// 005202e7  7404                 je 0x5202ed
// 005202e9  3c06                 cmp al, 6
// 005202eb  7513                 jne 0x520300
// 005202ed  83baec01000000       cmp dword ptr [edx + 0x1ec], 0
// 005202f4  740a                 je 0x520300
// 005202f6  80791808             cmp byte ptr [ecx + 0x18], 8
// 005202fa  7504                 jne 0x520300
// 005202fc  c6411903             mov byte ptr [ecx + 0x19], 3
// 00520300  f6427004             test byte ptr [edx + 0x70], 4
// 00520304  740a                 je 0x520310
// 00520306  80791808             cmp byte ptr [ecx + 0x18], 8
// 0052030a  7304                 jae 0x520310
// 0052030c  c6411808             mov byte ptr [ecx + 0x18], 8
// 00520310  f7427000400000       test dword ptr [edx + 0x70], 0x4000
// 00520317  7404                 je 0x52031d
// 00520319  80491902             or byte ptr [ecx + 0x19], 2
// 0052031d  f7427000006000       test dword ptr [edx + 0x70], 0x600000
// 00520324  7404                 je 0x52032a
// 00520326  806119fd             and byte ptr [ecx + 0x19], 0xfd
// 0052032a  8a4119               mov al, byte ptr [ecx + 0x19]
// 0052032d  53                   push ebx
// 0052032e  b301                 mov bl, 1
// 00520330  3c03                 cmp al, 3
// 00520332  740a                 je 0x52033e
// 00520334  a802                 test al, 2
// 00520336  7406                 je 0x52033e
// 00520338  c6411d03             mov byte ptr [ecx + 0x1d], 3
// 0052033c  eb03                 jmp 0x520341
// 0052033e  88591d               mov byte ptr [ecx + 0x1d], bl
// 00520341  f7427000000400       test dword ptr [edx + 0x70], 0x40000
// 00520348  7405                 je 0x52034f
// 0052034a  24fb                 and al, 0xfb
// 0052034c  884119               mov byte ptr [ecx + 0x19], al
// 0052034f  8a4119               mov al, byte ptr [ecx + 0x19]
// 00520352  a804                 test al, 4
// 00520354  7403                 je 0x520359
// 00520356  00591d               add byte ptr [ecx + 0x1d], bl
// 00520359  f7427000800000       test dword ptr [edx + 0x70], 0x8000
// 00520360  7419                 je 0x52037b
// 00520362  3c02                 cmp al, 2
// 00520364  7404                 je 0x52036a
// 00520366  84c0                 test al, al
// 00520368  7511                 jne 0x52037b
// 0052036a  00591d               add byte ptr [ecx + 0x1d], bl
// 0052036d  f7427000000001       test dword ptr [edx + 0x70], 0x1000000
// 00520374  7405                 je 0x52037b
// 00520376  0c04                 or al, 4
// 00520378  884119               mov byte ptr [ecx + 0x19], al
// 0052037b  f7427000001000       test dword ptr [edx + 0x70], 0x100000
// 00520382  5b                   pop ebx
// 00520383  7416                 je 0x52039b
// 00520385  8a4264               mov al, byte ptr [edx + 0x64]
// 00520388  384118               cmp byte ptr [ecx + 0x18], al
// 0052038b  7303                 jae 0x520390
// 0052038d  884118               mov byte ptr [ecx + 0x18], al
// 00520390  8a5265               mov dl, byte ptr [edx + 0x65]
// 00520393  38511d               cmp byte ptr [ecx + 0x1d], dl
// 00520396  7303                 jae 0x52039b
// 00520398  88511d               mov byte ptr [ecx + 0x1d], dl
// 0052039b  8a4118               mov al, byte ptr [ecx + 0x18]
// 0052039e  f6691d               imul byte ptr [ecx + 0x1d]
// 005203a1  88411e               mov byte ptr [ecx + 0x1e], al
// 005203a4  3c08                 cmp al, 8
// 005203a6  0fb6c0               movzx eax, al
// 005203a9  720a                 jb 0x5203b5
// 005203ab  c1e803               shr eax, 3
// 005203ae  0faf01               imul eax, dword ptr [ecx]
// 005203b1  89410c               mov dword ptr [ecx + 0xc], eax
// 005203b4  c3                   ret 
// 005203b5  0faf01               imul eax, dword ptr [ecx]
// 005203b8  83c007               add eax, 7
// 005203bb  c1e803               shr eax, 3
// 005203be  89410c               mov dword ptr [ecx + 0xc], eax
// 005203c1  c3                   ret 
// library libpng-1.2.7/pngrtran.c (function _png_read_transform_info)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.7 pngrtran.c
