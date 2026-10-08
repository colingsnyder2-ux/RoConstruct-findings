// roc 2009-12 00620580  unit: seg_00620000  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00620580
//
// 00620580  83ec10               sub esp, 0x10
// 00620583  53                   push ebx
// 00620584  55                   push ebp
// 00620585  56                   push esi
// 00620586  8b742420             mov esi, dword ptr [esp + 0x20]
// 0062058a  8b4604               mov eax, dword ptr [esi + 4]
// 0062058d  8b08                 mov ecx, dword ptr [eax]
// 0062058f  68a0000000           push 0xa0
// 00620594  6a01                 push 1
// 00620596  56                   push esi
// 00620597  ffd1                 call ecx
// 00620599  8be8                 mov ebp, eax
// 0062059b  89aea0010000         mov dword ptr [esi + 0x1a0], ebp
// 006205a1  83c40c               add esp, 0xc
// 006205a4  c74500d0006200       mov dword ptr [ebp], 0x6200d0
// 006205ab  c74504f0006200       mov dword ptr [ebp + 4], 0x6200f0
// 006205b2  c6450800             mov byte ptr [ebp + 8], 0
// 006205b6  80be0a01000000       cmp byte ptr [esi + 0x10a], 0
// 006205bd  896c2418             mov dword ptr [esp + 0x18], ebp
// 006205c1  7413                 je 0x6205d6
// 006205c3  8b16                 mov edx, dword ptr [esi]
// 006205c5  c7421419000000       mov dword ptr [edx + 0x14], 0x19
// 006205cc  8b06                 mov eax, dword ptr [esi]
// 006205ce  8b08                 mov ecx, dword ptr [eax]
// 006205d0  56                   push esi
// 006205d1  ffd1                 call ecx
// 006205d3  83c404               add esp, 4
// 006205d6  807e4800             cmp byte ptr [esi + 0x48], 0
// 006205da  740e                 je 0x6205ea
// 006205dc  83be1801000001       cmp dword ptr [esi + 0x118], 1
// 006205e3  c644242001           mov byte ptr [esp + 0x20], 1
// 006205e8  7f05                 jg 0x6205ef
// 006205ea  c644242000           mov byte ptr [esp + 0x20], 0
// 006205ef  837e2400             cmp dword ptr [esi + 0x24], 0
// 006205f3  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 006205f9  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00620601  0f8e5e010000         jle 0x620765
// 00620607  83c324               add ebx, 0x24
// 0062060a  83c534               add ebp, 0x34
// 0062060d  57                   push edi
// 0062060e  8bff                 mov edi, edi
// 00620610  8b0b                 mov ecx, dword ptr [ebx]
// 00620612  8b43e4               mov eax, dword ptr [ebx - 0x1c]
// 00620615  8bbe18010000         mov edi, dword ptr [esi + 0x118]
// 0062061b  0fafc1               imul eax, ecx
// 0062061e  99                   cdq 
// 0062061f  f7ff                 idiv edi
// 00620621  89442414             mov dword ptr [esp + 0x14], eax
// 00620625  8b43e8               mov eax, dword ptr [ebx - 0x18]
// 00620628  0fafc1               imul eax, ecx
// 0062062b  99                   cdq 
// 0062062c  f7ff                 idiv edi
// 0062062e  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 00620634  89542418             mov dword ptr [esp + 0x18], edx
// 00620638  8bc8                 mov ecx, eax
// 0062063a  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00620640  894d30               mov dword ptr [ebp + 0x30], ecx
// 00620643  807b0c00             cmp byte ptr [ebx + 0xc], 0
// 00620647  750c                 jne 0x620655
// 00620649  c74500d0016200       mov dword ptr [ebp], 0x6201d0
// 00620650  e9f7000000           jmp 0x62074c
// 00620655  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00620659  3bf8                 cmp edi, eax
// 0062065b  7510                 jne 0x62066d
// 0062065d  3bca                 cmp ecx, edx
// 0062065f  750c                 jne 0x62066d
// 00620661  c74500c0016200       mov dword ptr [ebp], 0x6201c0
// 00620668  e9df000000           jmp 0x62074c
// 0062066d  03ff                 add edi, edi
// 0062066f  3bf8                 cmp edi, eax
// 00620671  755d                 jne 0x6206d0
// 00620673  3bca                 cmp ecx, edx
// 00620675  7525                 jne 0x62069c
// 00620677  807c242400           cmp byte ptr [esp + 0x24], 0
// 0062067c  7412                 je 0x620690
// 0062067e  837b0402             cmp dword ptr [ebx + 4], 2
// 00620682  760c                 jbe 0x620690
// 00620684  c7450090036200       mov dword ptr [ebp], 0x620390
// 0062068b  e98e000000           jmp 0x62071e
// 00620690  c74500c0026200       mov dword ptr [ebp], 0x6202c0
// 00620697  e982000000           jmp 0x62071e
// 0062069c  3bf8                 cmp edi, eax
// 0062069e  7530                 jne 0x6206d0
// 006206a0  8d1409               lea edx, [ecx + ecx]
// 006206a3  3b542418             cmp edx, dword ptr [esp + 0x18]
// 006206a7  7527                 jne 0x6206d0
// 006206a9  807c242400           cmp byte ptr [esp + 0x24], 0
// 006206ae  7417                 je 0x6206c7
// 006206b0  837b0402             cmp dword ptr [ebx + 4], 2
// 006206b4  7611                 jbe 0x6206c7
// 006206b6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006206ba  c7450050046200       mov dword ptr [ebp], 0x620450
// 006206c1  c6400801             mov byte ptr [eax + 8], 1
// 006206c5  eb57                 jmp 0x62071e
// 006206c7  c7450020036200       mov dword ptr [ebp], 0x620320
// 006206ce  eb4e                 jmp 0x62071e
// 006206d0  99                   cdq 
// 006206d1  f77c2414             idiv dword ptr [esp + 0x14]
// 006206d5  89442414             mov dword ptr [esp + 0x14], eax
// 006206d9  85d2                 test edx, edx
// 006206db  752e                 jne 0x62070b
// 006206dd  8b442418             mov eax, dword ptr [esp + 0x18]
// 006206e1  99                   cdq 
// 006206e2  f7f9                 idiv ecx
// 006206e4  85d2                 test edx, edx
// 006206e6  7523                 jne 0x62070b
// 006206e8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006206ec  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006206f0  8a542414             mov dl, byte ptr [esp + 0x14]
// 006206f4  c74500e0016200       mov dword ptr [ebp], 0x6201e0
// 006206fb  88940f8c000000       mov byte ptr [edi + ecx + 0x8c], dl
// 00620702  88840f96000000       mov byte ptr [edi + ecx + 0x96], al
// 00620709  eb13                 jmp 0x62071e
// 0062070b  8b06                 mov eax, dword ptr [esi]
// 0062070d  c7401426000000       mov dword ptr [eax + 0x14], 0x26
// 00620714  8b0e                 mov ecx, dword ptr [esi]
// 00620716  8b11                 mov edx, dword ptr [ecx]
// 00620718  56                   push esi
// 00620719  ffd2                 call edx
// 0062071b  83c404               add esp, 4
// 0062071e  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00620724  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 0062072a  8b565c               mov edx, dword ptr [esi + 0x5c]
// 0062072d  8b7e04               mov edi, dword ptr [esi + 4]
// 00620730  50                   push eax
// 00620731  51                   push ecx
// 00620732  52                   push edx
// 00620733  83c708               add edi, 8
// 00620736  e835b5feff           call 0x60bc70
// 0062073b  83c408               add esp, 8
// 0062073e  50                   push eax
// 0062073f  8b07                 mov eax, dword ptr [edi]
// 00620741  6a01                 push 1
// 00620743  56                   push esi
// 00620744  ffd0                 call eax
// 00620746  83c410               add esp, 0x10
// 00620749  8945d8               mov dword ptr [ebp - 0x28], eax
// 0062074c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00620750  40                   inc eax
// 00620751  83c504               add ebp, 4
// 00620754  83c354               add ebx, 0x54
// 00620757  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0062075a  89442410             mov dword ptr [esp + 0x10], eax
// 0062075e  0f8cacfeffff         jl 0x620610
// 00620764  5f                   pop edi
// 00620765  5e                   pop esi
// 00620766  5d                   pop ebp
// 00620767  5b                   pop ebx
// 00620768  83c410               add esp, 0x10
// 0062076b  c3                   ret 
// library jpeg-6b/jdsample.c (function _jinit_upsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
