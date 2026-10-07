// roc 2009-06 00598020  unit: seg_00590000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00598020
//
// 00598020  51                   push ecx
// 00598021  53                   push ebx
// 00598022  56                   push esi
// 00598023  8b742410             mov esi, dword ptr [esp + 0x10]
// 00598027  8b4644               mov eax, dword ptr [esi + 0x44]
// 0059802a  33db                 xor ebx, ebx
// 0059802c  57                   push edi
// 0059802d  33ff                 xor edi, edi
// 0059802f  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 00598032  895c240c             mov dword ptr [esp + 0xc], ebx
// 00598036  7e26                 jle 0x59805e
// 00598038  55                   push ebp
// 00598039  8d6810               lea ebp, [eax + 0x10]
// 0059803c  8d642400             lea esp, [esp]
// 00598040  8b4500               mov eax, dword ptr [ebp]
// 00598043  50                   push eax
// 00598044  8bc6                 mov eax, esi
// 00598046  e825f5ffff           call 0x597570
// 0059804b  47                   inc edi
// 0059804c  83c404               add esp, 4
// 0059804f  03d8                 add ebx, eax
// 00598051  83c554               add ebp, 0x54
// 00598054  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 00598057  7ce7                 jl 0x598040
// 00598059  895c2410             mov dword ptr [esp + 0x10], ebx
// 0059805d  5d                   pop ebp
// 0059805e  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 00598065  7558                 jne 0x5980bf
// 00598067  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0059806e  754f                 jne 0x5980bf
// 00598070  837e3808             cmp dword ptr [esi + 0x38], 8
// 00598074  7549                 jne 0x5980bf
// 00598076  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00598079  8b4644               mov eax, dword ptr [esi + 0x44]
// 0059807c  b301                 mov bl, 1
// 0059807e  85c9                 test ecx, ecx
// 00598080  7e18                 jle 0x59809a
// 00598082  83c018               add eax, 0x18
// 00598085  8378fc01             cmp dword ptr [eax - 4], 1
// 00598089  7f05                 jg 0x598090
// 0059808b  833801               cmp dword ptr [eax], 1
// 0059808e  7e02                 jle 0x598092
// 00598090  32db                 xor bl, bl
// 00598092  83c054               add eax, 0x54
// 00598095  83e901               sub ecx, 1
// 00598098  75eb                 jne 0x598085
// 0059809a  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0059809f  7420                 je 0x5980c1
// 005980a1  84db                 test bl, bl
// 005980a3  741c                 je 0x5980c1
// 005980a5  8b0e                 mov ecx, dword ptr [esi]
// 005980a7  c741144b000000       mov dword ptr [ecx + 0x14], 0x4b
// 005980ae  8b16                 mov edx, dword ptr [esi]
// 005980b0  8b4204               mov eax, dword ptr [edx + 4]
// 005980b3  6a00                 push 0
// 005980b5  56                   push esi
// 005980b6  32db                 xor bl, bl
// 005980b8  ffd0                 call eax
// 005980ba  83c408               add esp, 8
// 005980bd  eb02                 jmp 0x5980c1
// 005980bf  32db                 xor bl, bl
// 005980c1  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 005980c8  8bce                 mov ecx, esi
// 005980ca  5f                   pop edi
// 005980cb  740f                 je 0x5980dc
// 005980cd  5e                   pop esi
// 005980ce  b8c9000000           mov eax, 0xc9
// 005980d3  5b                   pop ebx
// 005980d4  83c404               add esp, 4
// 005980d7  e9e4f7ffff           jmp 0x5978c0
// 005980dc  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 005980e3  5e                   pop esi
// 005980e4  740e                 je 0x5980f4
// 005980e6  b8c2000000           mov eax, 0xc2
// 005980eb  5b                   pop ebx
// 005980ec  83c404               add esp, 4
// 005980ef  e9ccf7ffff           jmp 0x5978c0
// 005980f4  84db                 test bl, bl
// 005980f6  5b                   pop ebx
// 005980f7  740d                 je 0x598106
// 005980f9  b8c0000000           mov eax, 0xc0
// 005980fe  83c404               add esp, 4
// 00598101  e9baf7ffff           jmp 0x5978c0
// 00598106  b8c1000000           mov eax, 0xc1
// 0059810b  83c404               add esp, 4
// 0059810e  e9adf7ffff           jmp 0x5978c0
// library jpeg-6b/jcmarker.c (function _write_frame_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
