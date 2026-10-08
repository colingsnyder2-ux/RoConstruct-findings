// from server: 100% by auto
// roc 2012-06 006551a0  unit: seg_00650000  size: 468 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006551a0
//
// 006551a0  83ec08               sub esp, 8
// 006551a3  53                   push ebx
// 006551a4  56                   push esi
// 006551a5  8bf0                 mov esi, eax
// 006551a7  8b442414             mov eax, dword ptr [esp + 0x14]
// 006551ab  57                   push edi
// 006551ac  8b7c8648             mov edi, dword ptr [esi + eax*4 + 0x48]
// 006551b0  897c2410             mov dword ptr [esp + 0x10], edi
// 006551b4  85ff                 test edi, edi
// 006551b6  7518                 jne 0x6551d0
// 006551b8  8b0e                 mov ecx, dword ptr [esi]
// 006551ba  c7411434000000       mov dword ptr [ecx + 0x14], 0x34
// 006551c1  8b16                 mov edx, dword ptr [esi]
// 006551c3  894218               mov dword ptr [edx + 0x18], eax
// 006551c6  8b06                 mov eax, dword ptr [esi]
// 006551c8  8b08                 mov ecx, dword ptr [eax]
// 006551ca  56                   push esi
// 006551cb  ffd1                 call ecx
// 006551cd  83c404               add esp, 4
// 006551d0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006551d8  8d4704               lea eax, [edi + 4]
// 006551db  ba10000000           mov edx, 0x10
// 006551e0  b9ff000000           mov ecx, 0xff
// 006551e5  663948fc             cmp word ptr [eax - 4], cx
// 006551e9  b901000000           mov ecx, 1
// 006551ee  7604                 jbe 0x6551f4
// 006551f0  894c240c             mov dword ptr [esp + 0xc], ecx
// 006551f4  bbff000000           mov ebx, 0xff
// 006551f9  663958fe             cmp word ptr [eax - 2], bx
// 006551fd  7604                 jbe 0x655203
// 006551ff  894c240c             mov dword ptr [esp + 0xc], ecx
// 00655203  663918               cmp word ptr [eax], bx
// 00655206  7604                 jbe 0x65520c
// 00655208  894c240c             mov dword ptr [esp + 0xc], ecx
// 0065520c  66395802             cmp word ptr [eax + 2], bx
// 00655210  7604                 jbe 0x655216
// 00655212  894c240c             mov dword ptr [esp + 0xc], ecx
// 00655216  83c008               add eax, 8
// 00655219  2bd1                 sub edx, ecx
// 0065521b  75c3                 jne 0x6551e0
// 0065521d  389780000000         cmp byte ptr [edi + 0x80], dl
// 00655223  0f8540010000         jne 0x655369
// 00655229  8b4618               mov eax, dword ptr [esi + 0x18]
// 0065522c  8b10                 mov edx, dword ptr [eax]
// 0065522e  55                   push ebp
// 0065522f  881a                 mov byte ptr [edx], bl
// 00655231  ff00                 inc dword ptr [eax]
// 00655233  83cdff               or ebp, 0xffffffff
// 00655236  016804               add dword ptr [eax + 4], ebp
// 00655239  7523                 jne 0x65525e
// 0065523b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0065523e  56                   push esi
// 0065523f  ffd0                 call eax
// 00655241  83c404               add esp, 4
// 00655244  84c0                 test al, al
// 00655246  7516                 jne 0x65525e
// 00655248  8b0e                 mov ecx, dword ptr [esi]
// 0065524a  bf18000000           mov edi, 0x18
// 0065524f  897914               mov dword ptr [ecx + 0x14], edi
// 00655252  8b16                 mov edx, dword ptr [esi]
// 00655254  8b02                 mov eax, dword ptr [edx]
// 00655256  56                   push esi
// 00655257  ffd0                 call eax
// 00655259  83c404               add esp, 4
// 0065525c  eb05                 jmp 0x655263
// 0065525e  bf18000000           mov edi, 0x18
// 00655263  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655266  8b08                 mov ecx, dword ptr [eax]
// 00655268  c601db               mov byte ptr [ecx], 0xdb
// 0065526b  ff00                 inc dword ptr [eax]
// 0065526d  016804               add dword ptr [eax + 4], ebp
// 00655270  751c                 jne 0x65528e
// 00655272  8b500c               mov edx, dword ptr [eax + 0xc]
// 00655275  56                   push esi
// 00655276  ffd2                 call edx
// 00655278  83c404               add esp, 4
// 0065527b  84c0                 test al, al
// 0065527d  750f                 jne 0x65528e
// 0065527f  8b06                 mov eax, dword ptr [esi]
// 00655281  897814               mov dword ptr [eax + 0x14], edi
// 00655284  8b0e                 mov ecx, dword ptr [esi]
// 00655286  8b11                 mov edx, dword ptr [ecx]
// 00655288  56                   push esi
// 00655289  ffd2                 call edx
// 0065528b  83c404               add esp, 4
// 0065528e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00655292  f7db                 neg ebx
// 00655294  1bdb                 sbb ebx, ebx
// 00655296  83e340               and ebx, 0x40
// 00655299  83c343               add ebx, 0x43
// 0065529c  e88ffeffff           call 0x655130
// 006552a1  8b4618               mov eax, dword ptr [esi + 0x18]
// 006552a4  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 006552a8  8b10                 mov edx, dword ptr [eax]
// 006552aa  c0e104               shl cl, 4
// 006552ad  024c241c             add cl, byte ptr [esp + 0x1c]
// 006552b1  880a                 mov byte ptr [edx], cl
// 006552b3  ff00                 inc dword ptr [eax]
// 006552b5  016804               add dword ptr [eax + 4], ebp
// 006552b8  751c                 jne 0x6552d6
// 006552ba  8b400c               mov eax, dword ptr [eax + 0xc]
// 006552bd  56                   push esi
// 006552be  ffd0                 call eax
// 006552c0  83c404               add esp, 4
// 006552c3  84c0                 test al, al
// 006552c5  750f                 jne 0x6552d6
// 006552c7  8b0e                 mov ecx, dword ptr [esi]
// 006552c9  897914               mov dword ptr [ecx + 0x14], edi
// 006552cc  8b16                 mov edx, dword ptr [esi]
// 006552ce  8b02                 mov eax, dword ptr [edx]
// 006552d0  56                   push esi
// 006552d1  ffd0                 call eax
// 006552d3  83c404               add esp, 4
// 006552d6  bf4097b800           mov edi, 0xb89740
// 006552db  eb03                 jmp 0x6552e0
// 006552dd  8d4900               lea ecx, [ecx]
// 006552e0  837c241000           cmp dword ptr [esp + 0x10], 0
// 006552e5  8b0f                 mov ecx, dword ptr [edi]
// 006552e7  8b542414             mov edx, dword ptr [esp + 0x14]
// 006552eb  0fb71c4a             movzx ebx, word ptr [edx + ecx*2]
// 006552ef  7433                 je 0x655324
// 006552f1  8b4618               mov eax, dword ptr [esi + 0x18]
// 006552f4  8b10                 mov edx, dword ptr [eax]
// 006552f6  8bcb                 mov ecx, ebx
// 006552f8  c1e908               shr ecx, 8
// 006552fb  880a                 mov byte ptr [edx], cl
// 006552fd  ff00                 inc dword ptr [eax]
// 006552ff  016804               add dword ptr [eax + 4], ebp
// 00655302  7520                 jne 0x655324
// 00655304  8b400c               mov eax, dword ptr [eax + 0xc]
// 00655307  56                   push esi
// 00655308  ffd0                 call eax
// 0065530a  83c404               add esp, 4
// 0065530d  84c0                 test al, al
// 0065530f  7513                 jne 0x655324
// 00655311  8b0e                 mov ecx, dword ptr [esi]
// 00655313  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0065531a  8b16                 mov edx, dword ptr [esi]
// 0065531c  8b02                 mov eax, dword ptr [edx]
// 0065531e  56                   push esi
// 0065531f  ffd0                 call eax
// 00655321  83c404               add esp, 4
// 00655324  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655327  8b08                 mov ecx, dword ptr [eax]
// 00655329  8819                 mov byte ptr [ecx], bl
// 0065532b  ff00                 inc dword ptr [eax]
// 0065532d  016804               add dword ptr [eax + 4], ebp
// 00655330  7520                 jne 0x655352
// 00655332  8b500c               mov edx, dword ptr [eax + 0xc]
// 00655335  56                   push esi
// 00655336  ffd2                 call edx
// 00655338  83c404               add esp, 4
// 0065533b  84c0                 test al, al
// 0065533d  7513                 jne 0x655352
// 0065533f  8b06                 mov eax, dword ptr [esi]
// 00655341  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00655348  8b0e                 mov ecx, dword ptr [esi]
// 0065534a  8b11                 mov edx, dword ptr [ecx]
// 0065534c  56                   push esi
// 0065534d  ffd2                 call edx
// 0065534f  83c404               add esp, 4
// 00655352  83c704               add edi, 4
// 00655355  81ff4098b800         cmp edi, 0xb89840
// 0065535b  7c83                 jl 0x6552e0
// 0065535d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00655361  c6808000000001       mov byte ptr [eax + 0x80], 1
// 00655368  5d                   pop ebp
// 00655369  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065536d  5f                   pop edi
// 0065536e  5e                   pop esi
// 0065536f  5b                   pop ebx
// 00655370  83c408               add esp, 8
// 00655373  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_dqt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
