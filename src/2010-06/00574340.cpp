// roc 2010-06 00574340  unit: seg_00570000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00574340
//
// 00574340  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00574344  57                   push edi
// 00574345  33ff                 xor edi, edi
// 00574347  3bc7                 cmp eax, edi
// 00574349  0f84b3000000         je 0x574402
// 0057434f  803831               cmp byte ptr [eax], 0x31
// 00574352  0f85aa000000         jne 0x574402
// 00574358  837c241438           cmp dword ptr [esp + 0x14], 0x38
// 0057435d  0f859f000000         jne 0x574402
// 00574363  56                   push esi
// 00574364  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00574368  3bf7                 cmp esi, edi
// 0057436a  0f848a000000         je 0x5743fa
// 00574370  897e18               mov dword ptr [esi + 0x18], edi
// 00574373  397e20               cmp dword ptr [esi + 0x20], edi
// 00574376  750a                 jne 0x574382
// 00574378  c7462080dc5700       mov dword ptr [esi + 0x20], 0x57dc80
// 0057437f  897e28               mov dword ptr [esi + 0x28], edi
// 00574382  397e24               cmp dword ptr [esi + 0x24], edi
// 00574385  7507                 jne 0x57438e
// 00574387  c74624e0e55700       mov dword ptr [esi + 0x24], 0x57e5e0
// 0057438e  8b4628               mov eax, dword ptr [esi + 0x28]
// 00574391  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00574394  6830250000           push 0x2530
// 00574399  6a01                 push 1
// 0057439b  50                   push eax
// 0057439c  ffd1                 call ecx
// 0057439e  83c40c               add esp, 0xc
// 005743a1  3bc7                 cmp eax, edi
// 005743a3  7508                 jne 0x5743ad
// 005743a5  5e                   pop esi
// 005743a6  b8fcffffff           mov eax, 0xfffffffc
// 005743ab  5f                   pop edi
// 005743ac  c3                   ret 
// 005743ad  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005743b1  3bcf                 cmp ecx, edi
// 005743b3  89461c               mov dword ptr [esi + 0x1c], eax
// 005743b6  7d07                 jge 0x5743bf
// 005743b8  897808               mov dword ptr [eax + 8], edi
// 005743bb  f7d9                 neg ecx
// 005743bd  eb11                 jmp 0x5743d0
// 005743bf  8bd1                 mov edx, ecx
// 005743c1  c1fa04               sar edx, 4
// 005743c4  42                   inc edx
// 005743c5  83f930               cmp ecx, 0x30
// 005743c8  895008               mov dword ptr [eax + 8], edx
// 005743cb  7d03                 jge 0x5743d0
// 005743cd  83e10f               and ecx, 0xf
// 005743d0  8d51f8               lea edx, [ecx - 8]
// 005743d3  83fa07               cmp edx, 7
// 005743d6  7712                 ja 0x5743ea
// 005743d8  56                   push esi
// 005743d9  894824               mov dword ptr [eax + 0x24], ecx
// 005743dc  897834               mov dword ptr [eax + 0x34], edi
// 005743df  e8fcfeffff           call 0x5742e0
// 005743e4  83c404               add esp, 4
// 005743e7  5e                   pop esi
// 005743e8  5f                   pop edi
// 005743e9  c3                   ret 
// 005743ea  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005743ed  50                   push eax
// 005743ee  8b4628               mov eax, dword ptr [esi + 0x28]
// 005743f1  50                   push eax
// 005743f2  ffd1                 call ecx
// 005743f4  83c408               add esp, 8
// 005743f7  897e1c               mov dword ptr [esi + 0x1c], edi
// 005743fa  5e                   pop esi
// 005743fb  b8feffffff           mov eax, 0xfffffffe
// 00574400  5f                   pop edi
// 00574401  c3                   ret 
// 00574402  b8faffffff           mov eax, 0xfffffffa
// 00574407  5f                   pop edi
// 00574408  c3                   ret 
// library zlib-1.2.3/inflate.c (function _inflateInit2_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
