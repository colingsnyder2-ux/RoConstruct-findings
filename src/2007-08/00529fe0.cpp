// from server: 100% by auto
// roc 2007-08 00529fe0  unit: seg_00520000  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00529fe0
//
// 00529fe0  56                   push esi
// 00529fe1  8b742408             mov esi, dword ptr [esp + 8]
// 00529fe5  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 00529fe9  57                   push edi
// 00529fea  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 00529ff0  8b4718               mov eax, dword ptr [edi + 0x18]
// 00529ff3  8944240c             mov dword ptr [esp + 0xc], eax
// 00529ff7  7407                 je 0x52a000
// 00529ff9  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 0052a000  807c241000           cmp byte ptr [esp + 0x10], 0
// 0052a005  7417                 je 0x52a01e
// 0052a007  c74704a08e5200       mov dword ptr [edi + 4], 0x528ea0
// 0052a00e  c74708b09f5200       mov dword ptr [edi + 8], 0x529fb0
// 0052a015  c6471c01             mov byte ptr [edi + 0x1c], 1
// 0052a019  e9ae000000           jmp 0x52a0cc
// 0052a01e  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 0052a022  7509                 jne 0x52a02d
// 0052a024  c74704409c5200       mov dword ptr [edi + 4], 0x529c40
// 0052a02b  eb07                 jmp 0x52a034
// 0052a02d  c74704709b5200       mov dword ptr [edi + 4], 0x529b70
// 0052a034  55                   push ebp
// 0052a035  c7470820cc4000       mov dword ptr [edi + 8], 0x40cc20
// 0052a03c  8b6e70               mov ebp, dword ptr [esi + 0x70]
// 0052a03f  83fd01               cmp ebp, 1
// 0052a042  7d1c                 jge 0x52a060
// 0052a044  8b0e                 mov ecx, dword ptr [esi]
// 0052a046  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 0052a04d  8b16                 mov edx, dword ptr [esi]
// 0052a04f  c7421801000000       mov dword ptr [edx + 0x18], 1
// 0052a056  8b06                 mov eax, dword ptr [esi]
// 0052a058  8b08                 mov ecx, dword ptr [eax]
// 0052a05a  56                   push esi
// 0052a05b  ffd1                 call ecx
// 0052a05d  83c404               add esp, 4
// 0052a060  81fd00010000         cmp ebp, 0x100
// 0052a066  7e1c                 jle 0x52a084
// 0052a068  8b16                 mov edx, dword ptr [esi]
// 0052a06a  c7421439000000       mov dword ptr [edx + 0x14], 0x39
// 0052a071  8b06                 mov eax, dword ptr [esi]
// 0052a073  c7401800010000       mov dword ptr [eax + 0x18], 0x100
// 0052a07a  8b0e                 mov ecx, dword ptr [esi]
// 0052a07c  8b11                 mov edx, dword ptr [ecx]
// 0052a07e  56                   push esi
// 0052a07f  ffd2                 call edx
// 0052a081  83c404               add esp, 4
// 0052a084  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 0052a088  7541                 jne 0x52a0cb
// 0052a08a  8b465c               mov eax, dword ptr [esi + 0x5c]
// 0052a08d  83c002               add eax, 2
// 0052a090  8d2c40               lea ebp, [eax + eax*2]
// 0052a093  03ed                 add ebp, ebp
// 0052a095  837f2000             cmp dword ptr [edi + 0x20], 0
// 0052a099  7512                 jne 0x52a0ad
// 0052a09b  8b4604               mov eax, dword ptr [esi + 4]
// 0052a09e  8b4804               mov ecx, dword ptr [eax + 4]
// 0052a0a1  55                   push ebp
// 0052a0a2  6a01                 push 1
// 0052a0a4  56                   push esi
// 0052a0a5  ffd1                 call ecx
// 0052a0a7  83c40c               add esp, 0xc
// 0052a0aa  894720               mov dword ptr [edi + 0x20], eax
// 0052a0ad  8b5720               mov edx, dword ptr [edi + 0x20]
// 0052a0b0  55                   push ebp
// 0052a0b1  52                   push edx
// 0052a0b2  e83942ffff           call 0x51e2f0
// 0052a0b7  83c408               add esp, 8
// 0052a0ba  837f2800             cmp dword ptr [edi + 0x28], 0
// 0052a0be  7507                 jne 0x52a0c7
// 0052a0c0  8bc6                 mov eax, esi
// 0052a0c2  e839feffff           call 0x529f00
// 0052a0c7  c6472400             mov byte ptr [edi + 0x24], 0
// 0052a0cb  5d                   pop ebp
// 0052a0cc  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 0052a0d0  7423                 je 0x52a0f5
// 0052a0d2  33f6                 xor esi, esi
// 0052a0d4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052a0d8  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0052a0db  6800100000           push 0x1000
// 0052a0e0  51                   push ecx
// 0052a0e1  e80a42ffff           call 0x51e2f0
// 0052a0e6  83c601               add esi, 1
// 0052a0e9  83c408               add esp, 8
// 0052a0ec  83fe20               cmp esi, 0x20
// 0052a0ef  7ce3                 jl 0x52a0d4
// 0052a0f1  c6471c00             mov byte ptr [edi + 0x1c], 0
// 0052a0f5  5f                   pop edi
// 0052a0f6  5e                   pop esi
// 0052a0f7  c3                   ret 
// library jpeg-6b/jquant2.c (function _start_pass_2_quant)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
