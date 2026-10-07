// roc 2011-06 0057a200  unit: seg_00570000  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057a200
//
// 0057a200  56                   push esi
// 0057a201  8b742408             mov esi, dword ptr [esp + 8]
// 0057a205  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 0057a209  57                   push edi
// 0057a20a  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 0057a210  8b4718               mov eax, dword ptr [edi + 0x18]
// 0057a213  8944240c             mov dword ptr [esp + 0xc], eax
// 0057a217  7407                 je 0x57a220
// 0057a219  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 0057a220  807c241000           cmp byte ptr [esp + 0x10], 0
// 0057a225  7417                 je 0x57a23e
// 0057a227  c7470450915700       mov dword ptr [edi + 4], 0x579150
// 0057a22e  c74708d0a15700       mov dword ptr [edi + 8], 0x57a1d0
// 0057a235  c6471c01             mov byte ptr [edi + 0x1c], 1
// 0057a239  e9ae000000           jmp 0x57a2ec
// 0057a23e  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 0057a242  7509                 jne 0x57a24d
// 0057a244  c74704709e5700       mov dword ptr [edi + 4], 0x579e70
// 0057a24b  eb07                 jmp 0x57a254
// 0057a24d  c74704b09d5700       mov dword ptr [edi + 4], 0x579db0
// 0057a254  55                   push ebp
// 0057a255  c7470840b68600       mov dword ptr [edi + 8], 0x86b640
// 0057a25c  8b6e70               mov ebp, dword ptr [esi + 0x70]
// 0057a25f  83fd01               cmp ebp, 1
// 0057a262  7d1c                 jge 0x57a280
// 0057a264  8b0e                 mov ecx, dword ptr [esi]
// 0057a266  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 0057a26d  8b16                 mov edx, dword ptr [esi]
// 0057a26f  c7421801000000       mov dword ptr [edx + 0x18], 1
// 0057a276  8b06                 mov eax, dword ptr [esi]
// 0057a278  8b08                 mov ecx, dword ptr [eax]
// 0057a27a  56                   push esi
// 0057a27b  ffd1                 call ecx
// 0057a27d  83c404               add esp, 4
// 0057a280  81fd00010000         cmp ebp, 0x100
// 0057a286  7e1c                 jle 0x57a2a4
// 0057a288  8b16                 mov edx, dword ptr [esi]
// 0057a28a  c7421439000000       mov dword ptr [edx + 0x14], 0x39
// 0057a291  8b06                 mov eax, dword ptr [esi]
// 0057a293  c7401800010000       mov dword ptr [eax + 0x18], 0x100
// 0057a29a  8b0e                 mov ecx, dword ptr [esi]
// 0057a29c  8b11                 mov edx, dword ptr [ecx]
// 0057a29e  56                   push esi
// 0057a29f  ffd2                 call edx
// 0057a2a1  83c404               add esp, 4
// 0057a2a4  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 0057a2a8  7541                 jne 0x57a2eb
// 0057a2aa  8b465c               mov eax, dword ptr [esi + 0x5c]
// 0057a2ad  83c002               add eax, 2
// 0057a2b0  8d2c40               lea ebp, [eax + eax*2]
// 0057a2b3  03ed                 add ebp, ebp
// 0057a2b5  837f2000             cmp dword ptr [edi + 0x20], 0
// 0057a2b9  7512                 jne 0x57a2cd
// 0057a2bb  8b4604               mov eax, dword ptr [esi + 4]
// 0057a2be  8b4804               mov ecx, dword ptr [eax + 4]
// 0057a2c1  55                   push ebp
// 0057a2c2  6a01                 push 1
// 0057a2c4  56                   push esi
// 0057a2c5  ffd1                 call ecx
// 0057a2c7  83c40c               add esp, 0xc
// 0057a2ca  894720               mov dword ptr [edi + 0x20], eax
// 0057a2cd  8b5720               mov edx, dword ptr [edi + 0x20]
// 0057a2d0  55                   push ebp
// 0057a2d1  52                   push edx
// 0057a2d2  e869dbfeff           call 0x567e40
// 0057a2d7  83c408               add esp, 8
// 0057a2da  837f2800             cmp dword ptr [edi + 0x28], 0
// 0057a2de  7507                 jne 0x57a2e7
// 0057a2e0  8bc6                 mov eax, esi
// 0057a2e2  e849feffff           call 0x57a130
// 0057a2e7  c6472400             mov byte ptr [edi + 0x24], 0
// 0057a2eb  5d                   pop ebp
// 0057a2ec  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 0057a2f0  7421                 je 0x57a313
// 0057a2f2  33f6                 xor esi, esi
// 0057a2f4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057a2f8  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0057a2fb  6800100000           push 0x1000
// 0057a300  51                   push ecx
// 0057a301  e83adbfeff           call 0x567e40
// 0057a306  46                   inc esi
// 0057a307  83c408               add esp, 8
// 0057a30a  83fe20               cmp esi, 0x20
// 0057a30d  7ce5                 jl 0x57a2f4
// 0057a30f  c6471c00             mov byte ptr [edi + 0x1c], 0
// 0057a313  5f                   pop edi
// 0057a314  5e                   pop esi
// 0057a315  c3                   ret 
// library jpeg-6b/jquant2.c (function _start_pass_2_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
