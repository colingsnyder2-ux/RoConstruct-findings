// roc 2011-06 00577770  unit: seg_00570000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00577770
//
// 00577770  53                   push ebx
// 00577771  56                   push esi
// 00577772  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00577776  8b4604               mov eax, dword ptr [esi + 4]
// 00577779  8b08                 mov ecx, dword ptr [eax]
// 0057777b  6a40                 push 0x40
// 0057777d  6a01                 push 1
// 0057777f  56                   push esi
// 00577780  ffd1                 call ecx
// 00577782  898698010000         mov dword ptr [esi + 0x198], eax
// 00577788  c70010755700         mov dword ptr [eax], 0x577510
// 0057778e  33db                 xor ebx, ebx
// 00577790  89582c               mov dword ptr [eax + 0x2c], ebx
// 00577793  895830               mov dword ptr [eax + 0x30], ebx
// 00577796  895834               mov dword ptr [eax + 0x34], ebx
// 00577799  895838               mov dword ptr [eax + 0x38], ebx
// 0057779c  8b4624               mov eax, dword ptr [esi + 0x24]
// 0057779f  8b5604               mov edx, dword ptr [esi + 4]
// 005777a2  8b0a                 mov ecx, dword ptr [edx]
// 005777a4  c1e008               shl eax, 8
// 005777a7  50                   push eax
// 005777a8  6a01                 push 1
// 005777aa  56                   push esi
// 005777ab  ffd1                 call ecx
// 005777ad  83c418               add esp, 0x18
// 005777b0  395e24               cmp dword ptr [esi + 0x24], ebx
// 005777b3  89868c000000         mov dword ptr [esi + 0x8c], eax
// 005777b9  8bd0                 mov edx, eax
// 005777bb  7e1c                 jle 0x5777d9
// 005777bd  57                   push edi
// 005777be  8bff                 mov edi, edi
// 005777c0  83c8ff               or eax, 0xffffffff
// 005777c3  8bfa                 mov edi, edx
// 005777c5  b940000000           mov ecx, 0x40
// 005777ca  43                   inc ebx
// 005777cb  f3ab                 rep stosd dword ptr es:[edi], eax
// 005777cd  81c200010000         add edx, 0x100
// 005777d3  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 005777d6  7ce8                 jl 0x5777c0
// 005777d8  5f                   pop edi
// 005777d9  5e                   pop esi
// 005777da  5b                   pop ebx
// 005777db  c3                   ret 
// library jpeg-6b/jdphuff.c (function _jinit_phuff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
