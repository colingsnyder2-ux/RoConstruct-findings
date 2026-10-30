// roc 2009-12 00628250  unit: seg_00620000  size: 416 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00628250
//
// 00628250  56                   push esi
// 00628251  8b742408             mov esi, dword ptr [esp + 8]
// 00628255  57                   push edi
// 00628256  8bbe3c010000         mov edi, dword ptr [esi + 0x13c]
// 0062825c  8b4710               mov eax, dword ptr [edi + 0x10]
// 0062825f  83e800               sub eax, 0
// 00628262  0f84d4000000         je 0x62833c
// 00628268  83e801               sub eax, 1
// 0062826b  741d                 je 0x62828a
// 0062826d  83e801               sub eax, 1
// 00628270  7447                 je 0x6282b9
// 00628272  8b06                 mov eax, dword ptr [esi]
// 00628274  c7401430000000       mov dword ptr [eax + 0x14], 0x30
// 0062827b  8b0e                 mov ecx, dword ptr [esi]
// 0062827d  8b11                 mov edx, dword ptr [ecx]
// 0062827f  56                   push esi
// 00628280  ffd2                 call edx
// 00628282  83c404               add esp, 4
// 00628285  e93f010000           jmp 0x6283c9
// 0062828a  e801fdffff           call 0x627f90
// 0062828f  e8ecfdffff           call 0x628080
// 00628294  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 0062829b  7579                 jne 0x628316
// 0062829d  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 006282a4  7470                 je 0x628316
// 006282a6  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 006282ad  7567                 jne 0x628316
// 006282af  ff4714               inc dword ptr [edi + 0x14]
// 006282b2  c7471002000000       mov dword ptr [edi + 0x10], 2
// 006282b9  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 006282c0  750a                 jne 0x6282cc
// 006282c2  e8c9fcffff           call 0x627f90
// 006282c7  e8b4fdffff           call 0x628080
// 006282cc  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 006282d2  8b08                 mov ecx, dword ptr [eax]
// 006282d4  6a00                 push 0
// 006282d6  56                   push esi
// 006282d7  ffd1                 call ecx
// 006282d9  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 006282df  8b02                 mov eax, dword ptr [edx]
// 006282e1  6a02                 push 2
// 006282e3  56                   push esi
// 006282e4  ffd0                 call eax
// 006282e6  83c410               add esp, 0x10
// 006282e9  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 006282ed  750f                 jne 0x6282fe
// 006282ef  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 006282f5  8b5104               mov edx, dword ptr [ecx + 4]
// 006282f8  56                   push esi
// 006282f9  ffd2                 call edx
// 006282fb  83c404               add esp, 4
// 006282fe  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 00628304  8b4808               mov ecx, dword ptr [eax + 8]
// 00628307  56                   push esi
// 00628308  ffd1                 call ecx
// 0062830a  83c404               add esp, 4
// 0062830d  c6470c00             mov byte ptr [edi + 0xc], 0
// 00628311  e9b3000000           jmp 0x6283c9
// 00628316  8b965c010000         mov edx, dword ptr [esi + 0x15c]
// 0062831c  8b02                 mov eax, dword ptr [edx]
// 0062831e  6a01                 push 1
// 00628320  56                   push esi
// 00628321  ffd0                 call eax
// 00628323  8b8e48010000         mov ecx, dword ptr [esi + 0x148]
// 00628329  8b11                 mov edx, dword ptr [ecx]
// 0062832b  6a02                 push 2
// 0062832d  56                   push esi
// 0062832e  ffd2                 call edx
// 00628330  83c410               add esp, 0x10
// 00628333  c6470c00             mov byte ptr [edi + 0xc], 0
// 00628337  e98d000000           jmp 0x6283c9
// 0062833c  e84ffcffff           call 0x627f90
// 00628341  e83afdffff           call 0x628080
// 00628346  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 0062834d  7526                 jne 0x628375
// 0062834f  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 00628355  8b08                 mov ecx, dword ptr [eax]
// 00628357  56                   push esi
// 00628358  ffd1                 call ecx
// 0062835a  8b9654010000         mov edx, dword ptr [esi + 0x154]
// 00628360  8b02                 mov eax, dword ptr [edx]
// 00628362  56                   push esi
// 00628363  ffd0                 call eax
// 00628365  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 0062836b  8b11                 mov edx, dword ptr [ecx]
// 0062836d  6a00                 push 0
// 0062836f  56                   push esi
// 00628370  ffd2                 call edx
// 00628372  83c410               add esp, 0x10
// 00628375  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 0062837b  8b08                 mov ecx, dword ptr [eax]
// 0062837d  56                   push esi
// 0062837e  ffd1                 call ecx
// 00628380  0fb686b2000000       movzx eax, byte ptr [esi + 0xb2]
// 00628387  8b965c010000         mov edx, dword ptr [esi + 0x15c]
// 0062838d  8b0a                 mov ecx, dword ptr [edx]
// 0062838f  50                   push eax
// 00628390  56                   push esi
// 00628391  ffd1                 call ecx
// 00628393  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 00628399  8b0a                 mov ecx, dword ptr [edx]
// 0062839b  33c0                 xor eax, eax
// 0062839d  837f1801             cmp dword ptr [edi + 0x18], 1
// 006283a1  0f9ec0               setle al
// 006283a4  48                   dec eax
// 006283a5  83e003               and eax, 3
// 006283a8  50                   push eax
// 006283a9  56                   push esi
// 006283aa  ffd1                 call ecx
// 006283ac  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 006283b2  8b02                 mov eax, dword ptr [edx]
// 006283b4  6a00                 push 0
// 006283b6  56                   push esi
// 006283b7  ffd0                 call eax
// 006283b9  83c41c               add esp, 0x1c
// 006283bc  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 006283c3  0f94c1               sete cl
// 006283c6  884f0c               mov byte ptr [edi + 0xc], cl
// 006283c9  8b5718               mov edx, dword ptr [edi + 0x18]
// 006283cc  8b4714               mov eax, dword ptr [edi + 0x14]
// 006283cf  4a                   dec edx
// 006283d0  3bc2                 cmp eax, edx
// 006283d2  0f94c1               sete cl
// 006283d5  884f0d               mov byte ptr [edi + 0xd], cl
// 006283d8  837e0800             cmp dword ptr [esi + 8], 0
// 006283dc  740f                 je 0x6283ed
// 006283de  8b5608               mov edx, dword ptr [esi + 8]
// 006283e1  89420c               mov dword ptr [edx + 0xc], eax
// 006283e4  8b4608               mov eax, dword ptr [esi + 8]
// 006283e7  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006283ea  894810               mov dword ptr [eax + 0x10], ecx
// 006283ed  5f                   pop edi
// 006283ee  5e                   pop esi
// 006283ef  c3                   ret 
// library jpeg-6b/jcmaster.c (function _prepare_for_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
