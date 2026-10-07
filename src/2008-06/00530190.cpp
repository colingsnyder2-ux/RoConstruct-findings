// roc 2008-06 00530190  unit: seg_00530000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530190
//
// 00530190  51                   push ecx
// 00530191  53                   push ebx
// 00530192  56                   push esi
// 00530193  8b742410             mov esi, dword ptr [esp + 0x10]
// 00530197  8b4644               mov eax, dword ptr [esi + 0x44]
// 0053019a  33db                 xor ebx, ebx
// 0053019c  57                   push edi
// 0053019d  33ff                 xor edi, edi
// 0053019f  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 005301a2  895c240c             mov dword ptr [esp + 0xc], ebx
// 005301a6  7e26                 jle 0x5301ce
// 005301a8  55                   push ebp
// 005301a9  8d6810               lea ebp, [eax + 0x10]
// 005301ac  8d642400             lea esp, [esp]
// 005301b0  8b4500               mov eax, dword ptr [ebp]
// 005301b3  50                   push eax
// 005301b4  8bc6                 mov eax, esi
// 005301b6  e825f5ffff           call 0x52f6e0
// 005301bb  47                   inc edi
// 005301bc  83c404               add esp, 4
// 005301bf  03d8                 add ebx, eax
// 005301c1  83c554               add ebp, 0x54
// 005301c4  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 005301c7  7ce7                 jl 0x5301b0
// 005301c9  895c2410             mov dword ptr [esp + 0x10], ebx
// 005301cd  5d                   pop ebp
// 005301ce  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 005301d5  7558                 jne 0x53022f
// 005301d7  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 005301de  754f                 jne 0x53022f
// 005301e0  837e3808             cmp dword ptr [esi + 0x38], 8
// 005301e4  7549                 jne 0x53022f
// 005301e6  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005301e9  8b4644               mov eax, dword ptr [esi + 0x44]
// 005301ec  b301                 mov bl, 1
// 005301ee  85c9                 test ecx, ecx
// 005301f0  7e18                 jle 0x53020a
// 005301f2  83c018               add eax, 0x18
// 005301f5  8378fc01             cmp dword ptr [eax - 4], 1
// 005301f9  7f05                 jg 0x530200
// 005301fb  833801               cmp dword ptr [eax], 1
// 005301fe  7e02                 jle 0x530202
// 00530200  32db                 xor bl, bl
// 00530202  83c054               add eax, 0x54
// 00530205  83e901               sub ecx, 1
// 00530208  75eb                 jne 0x5301f5
// 0053020a  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0053020f  7420                 je 0x530231
// 00530211  84db                 test bl, bl
// 00530213  741c                 je 0x530231
// 00530215  8b0e                 mov ecx, dword ptr [esi]
// 00530217  c741144b000000       mov dword ptr [ecx + 0x14], 0x4b
// 0053021e  8b16                 mov edx, dword ptr [esi]
// 00530220  8b4204               mov eax, dword ptr [edx + 4]
// 00530223  6a00                 push 0
// 00530225  56                   push esi
// 00530226  32db                 xor bl, bl
// 00530228  ffd0                 call eax
// 0053022a  83c408               add esp, 8
// 0053022d  eb02                 jmp 0x530231
// 0053022f  32db                 xor bl, bl
// 00530231  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 00530238  8bce                 mov ecx, esi
// 0053023a  5f                   pop edi
// 0053023b  740f                 je 0x53024c
// 0053023d  5e                   pop esi
// 0053023e  b8c9000000           mov eax, 0xc9
// 00530243  5b                   pop ebx
// 00530244  83c404               add esp, 4
// 00530247  e9e4f7ffff           jmp 0x52fa30
// 0053024c  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 00530253  5e                   pop esi
// 00530254  740e                 je 0x530264
// 00530256  b8c2000000           mov eax, 0xc2
// 0053025b  5b                   pop ebx
// 0053025c  83c404               add esp, 4
// 0053025f  e9ccf7ffff           jmp 0x52fa30
// 00530264  84db                 test bl, bl
// 00530266  5b                   pop ebx
// 00530267  740d                 je 0x530276
// 00530269  b8c0000000           mov eax, 0xc0
// 0053026e  83c404               add esp, 4
// 00530271  e9baf7ffff           jmp 0x52fa30
// 00530276  b8c1000000           mov eax, 0xc1
// 0053027b  83c404               add esp, 4
// 0053027e  e9adf7ffff           jmp 0x52fa30
// library jpeg-6b/jcmarker.c (function _write_frame_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
