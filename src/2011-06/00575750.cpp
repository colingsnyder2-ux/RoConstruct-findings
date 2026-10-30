// from server: 100% by auto
// roc 2011-06 00575750  unit: seg_00570000  size: 350 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00575750
//
// 00575750  83ec08               sub esp, 8
// 00575753  80bfc800000000       cmp byte ptr [edi + 0xc8], 0
// 0057575a  56                   push esi
// 0057575b  8bb788010000         mov esi, dword ptr [edi + 0x188]
// 00575761  c644240700           mov byte ptr [esp + 7], 0
// 00575766  0f843b010000         je 0x5758a7
// 0057576c  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 00575773  0f842e010000         je 0x5758a7
// 00575779  837e7000             cmp dword ptr [esi + 0x70], 0
// 0057577d  53                   push ebx
// 0057577e  bb01000000           mov ebx, 1
// 00575783  751c                 jne 0x5757a1
// 00575785  8b4724               mov eax, dword ptr [edi + 0x24]
// 00575788  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057578b  8d1440               lea edx, [eax + eax*2]
// 0057578e  8b01                 mov eax, dword ptr [ecx]
// 00575790  03d2                 add edx, edx
// 00575792  03d2                 add edx, edx
// 00575794  03d2                 add edx, edx
// 00575796  52                   push edx
// 00575797  53                   push ebx
// 00575798  57                   push edi
// 00575799  ffd0                 call eax
// 0057579b  83c40c               add esp, 0xc
// 0057579e  894670               mov dword ptr [esi + 0x70], eax
// 005757a1  8b5670               mov edx, dword ptr [esi + 0x70]
// 005757a4  8b87c4000000         mov eax, dword ptr [edi + 0xc4]
// 005757aa  33f6                 xor esi, esi
// 005757ac  397724               cmp dword ptr [edi + 0x24], esi
// 005757af  55                   push ebp
// 005757b0  0f8edd000000         jle 0x575893
// 005757b6  33ed                 xor ebp, ebp
// 005757b8  83c04c               add eax, 0x4c
// 005757bb  89442410             mov dword ptr [esp + 0x10], eax
// 005757bf  90                   nop 
// 005757c0  8b00                 mov eax, dword ptr [eax]
// 005757c2  85c0                 test eax, eax
// 005757c4  0f84d4000000         je 0x57589e
// 005757ca  66833800             cmp word ptr [eax], 0
// 005757ce  0f84ca000000         je 0x57589e
// 005757d4  6683780200           cmp word ptr [eax + 2], 0
// 005757d9  0f84bf000000         je 0x57589e
// 005757df  6683781000           cmp word ptr [eax + 0x10], 0
// 005757e4  0f84b4000000         je 0x57589e
// 005757ea  6683782000           cmp word ptr [eax + 0x20], 0
// 005757ef  0f84a9000000         je 0x57589e
// 005757f5  6683781200           cmp word ptr [eax + 0x12], 0
// 005757fa  0f849e000000         je 0x57589e
// 00575800  6683780400           cmp word ptr [eax + 4], 0
// 00575805  0f8493000000         je 0x57589e
// 0057580b  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 00575811  03c5                 add eax, ebp
// 00575813  833800               cmp dword ptr [eax], 0
// 00575816  0f8c82000000         jl 0x57589e
// 0057581c  8b4804               mov ecx, dword ptr [eax + 4]
// 0057581f  894a04               mov dword ptr [edx + 4], ecx
// 00575822  83780400             cmp dword ptr [eax + 4], 0
// 00575826  7404                 je 0x57582c
// 00575828  885c240f             mov byte ptr [esp + 0xf], bl
// 0057582c  b908000000           mov ecx, 8
// 00575831  8b1c01               mov ebx, dword ptr [ecx + eax]
// 00575834  891c11               mov dword ptr [ecx + edx], ebx
// 00575837  833c0100             cmp dword ptr [ecx + eax], 0
// 0057583b  8d59f9               lea ebx, [ecx - 7]
// 0057583e  7404                 je 0x575844
// 00575840  885c240f             mov byte ptr [esp + 0xf], bl
// 00575844  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00575847  894a0c               mov dword ptr [edx + 0xc], ecx
// 0057584a  83780c00             cmp dword ptr [eax + 0xc], 0
// 0057584e  7404                 je 0x575854
// 00575850  885c240f             mov byte ptr [esp + 0xf], bl
// 00575854  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00575857  894a10               mov dword ptr [edx + 0x10], ecx
// 0057585a  83781000             cmp dword ptr [eax + 0x10], 0
// 0057585e  7404                 je 0x575864
// 00575860  885c240f             mov byte ptr [esp + 0xf], bl
// 00575864  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00575867  894a14               mov dword ptr [edx + 0x14], ecx
// 0057586a  83781400             cmp dword ptr [eax + 0x14], 0
// 0057586e  7404                 je 0x575874
// 00575870  885c240f             mov byte ptr [esp + 0xf], bl
// 00575874  8b442410             mov eax, dword ptr [esp + 0x10]
// 00575878  03f3                 add esi, ebx
// 0057587a  83c054               add eax, 0x54
// 0057587d  83c218               add edx, 0x18
// 00575880  81c500010000         add ebp, 0x100
// 00575886  3b7724               cmp esi, dword ptr [edi + 0x24]
// 00575889  89442410             mov dword ptr [esp + 0x10], eax
// 0057588d  0f8c2dffffff         jl 0x5757c0
// 00575893  8a44240f             mov al, byte ptr [esp + 0xf]
// 00575897  5d                   pop ebp
// 00575898  5b                   pop ebx
// 00575899  5e                   pop esi
// 0057589a  83c408               add esp, 8
// 0057589d  c3                   ret 
// 0057589e  5d                   pop ebp
// 0057589f  5b                   pop ebx
// 005758a0  32c0                 xor al, al
// 005758a2  5e                   pop esi
// 005758a3  83c408               add esp, 8
// 005758a6  c3                   ret 
// 005758a7  32c0                 xor al, al
// 005758a9  5e                   pop esi
// 005758aa  83c408               add esp, 8
// 005758ad  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _smoothing_ok)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
