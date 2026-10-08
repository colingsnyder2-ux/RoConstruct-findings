// roc 2009-12 007502c0  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007502c0
//
// 007502c0  55                   push ebp
// 007502c1  8bec                 mov ebp, esp
// 007502c3  6aff                 push -1
// 007502c5  68b00c9500           push 0x950cb0
// 007502ca  64a100000000         mov eax, dword ptr fs:[0]
// 007502d0  50                   push eax
// 007502d1  64892500000000       mov dword ptr fs:[0], esp
// 007502d8  83ec1c               sub esp, 0x1c
// 007502db  53                   push ebx
// 007502dc  56                   push esi
// 007502dd  8bf1                 mov esi, ecx
// 007502df  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 007502e2  57                   push edi
// 007502e3  8965f0               mov dword ptr [ebp - 0x10], esp
// 007502e6  8975e0               mov dword ptr [ebp - 0x20], esi
// 007502e9  85db                 test ebx, ebx
// 007502eb  7504                 jne 0x7502f1
// 007502ed  33c9                 xor ecx, ecx
// 007502ef  eb0a                 jmp 0x7502fb
// 007502f1  8b4614               mov eax, dword ptr [esi + 0x14]
// 007502f4  2bc3                 sub eax, ebx
// 007502f6  c1f803               sar eax, 3
// 007502f9  8bc8                 mov ecx, eax
// 007502fb  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 007502fe  85ff                 test edi, edi
// 00750300  0f8480020000         je 0x750586
// 00750306  8b5610               mov edx, dword ptr [esi + 0x10]
// 00750309  8bc2                 mov eax, edx
// 0075030b  2bc3                 sub eax, ebx
// 0075030d  c1f803               sar eax, 3
// 00750310  bbffffff1f           mov ebx, 0x1fffffff
// 00750315  2bd8                 sub ebx, eax
// 00750317  3bdf                 cmp ebx, edi
// 00750319  7305                 jae 0x750320
// 0075031b  e8401ecfff           call 0x442160
// 00750320  8d1c38               lea ebx, [eax + edi]
// 00750323  3bcb                 cmp ecx, ebx
// 00750325  0f8358010000         jae 0x750483
// 0075032b  8bc1                 mov eax, ecx
// 0075032d  d1e8                 shr eax, 1
// 0075032f  baffffff1f           mov edx, 0x1fffffff
// 00750334  2bd0                 sub edx, eax
// 00750336  3bd1                 cmp edx, ecx
// 00750338  730c                 jae 0x750346
// 0075033a  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 00750341  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00750344  eb05                 jmp 0x75034b
// 00750346  03c8                 add ecx, eax
// 00750348  894dec               mov dword ptr [ebp - 0x14], ecx
// 0075034b  3bcb                 cmp ecx, ebx
// 0075034d  7305                 jae 0x750354
// 0075034f  895dec               mov dword ptr [ebp - 0x14], ebx
// 00750352  8bcb                 mov ecx, ebx
// 00750354  6a00                 push 0
// 00750356  51                   push ecx
// 00750357  e874b7e2ff           call 0x57bad0
// 0075035c  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0075035f  2b5e0c               sub ebx, dword ptr [esi + 0xc]
// 00750362  33c9                 xor ecx, ecx
// 00750364  83c408               add esp, 8
// 00750367  894de4               mov dword ptr [ebp - 0x1c], ecx
// 0075036a  894dfc               mov dword ptr [ebp - 4], ecx
// 0075036d  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00750370  51                   push ecx
// 00750371  c1fb03               sar ebx, 3
// 00750374  57                   push edi
// 00750375  8d14d8               lea edx, [eax + ebx*8]
// 00750378  52                   push edx
// 00750379  8bce                 mov ecx, esi
// 0075037b  8945e8               mov dword ptr [ebp - 0x18], eax
// 0075037e  895ddc               mov dword ptr [ebp - 0x24], ebx
// 00750381  e8ba7e0900           call 0x7e8240
// 00750386  8b460c               mov eax, dword ptr [esi + 0xc]
// 00750389  c6451400             mov byte ptr [ebp + 0x14], 0
// 0075038d  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00750390  52                   push edx
// 00750391  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00750394  52                   push edx
// 00750395  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00750398  8d4e08               lea ecx, [esi + 8]
// 0075039b  51                   push ecx
// 0075039c  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0075039f  51                   push ecx
// 007503a0  52                   push edx
// 007503a1  50                   push eax
// 007503a2  c745e401000000       mov dword ptr [ebp - 0x1c], 1
// 007503a9  e8d2faffff           call 0x74fe80
// 007503ae  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 007503b1  8b4610               mov eax, dword ptr [esi + 0x10]
// 007503b4  83c418               add esp, 0x18
// 007503b7  c6451400             mov byte ptr [ebp + 0x14], 0
// 007503bb  8b5514               mov edx, dword ptr [ebp + 0x14]
// 007503be  52                   push edx
// 007503bf  8b5510               mov edx, dword ptr [ebp + 0x10]
// 007503c2  03df                 add ebx, edi
// 007503c4  52                   push edx
// 007503c5  8d0cd9               lea ecx, [ecx + ebx*8]
// 007503c8  8d5e08               lea ebx, [esi + 8]
// 007503cb  53                   push ebx
// 007503cc  51                   push ecx
// 007503cd  50                   push eax
// 007503ce  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007503d1  50                   push eax
// 007503d2  c745e402000000       mov dword ptr [ebp - 0x1c], 2
// 007503d9  e8a2faffff           call 0x74fe80
// 007503de  8b460c               mov eax, dword ptr [esi + 0xc]
// 007503e1  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007503e4  2bc8                 sub ecx, eax
// 007503e6  c1f903               sar ecx, 3
// 007503e9  83c418               add esp, 0x18
// 007503ec  03f9                 add edi, ecx
// 007503ee  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 007503f5  85c0                 test eax, eax
// 007503f7  741b                 je 0x750414
// 007503f9  8b5510               mov edx, dword ptr [ebp + 0x10]
// 007503fc  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007503ff  52                   push edx
// 00750400  53                   push ebx
// 00750401  51                   push ecx
// 00750402  50                   push eax
// 00750403  e89832d7ff           call 0x4c36a0
// 00750408  8b560c               mov edx, dword ptr [esi + 0xc]
// 0075040b  52                   push edx
// 0075040c  e849340a00           call 0x7f385a
// 00750411  83c414               add esp, 0x14
// 00750414  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00750417  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0075041a  8d14c8               lea edx, [eax + ecx*8]
// 0075041d  8d0cf8               lea ecx, [eax + edi*8]
// 00750420  895614               mov dword ptr [esi + 0x14], edx
// 00750423  894e10               mov dword ptr [esi + 0x10], ecx
// 00750426  89460c               mov dword ptr [esi + 0xc], eax
// 00750429  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0075042c  64890d00000000       mov dword ptr fs:[0], ecx
// 00750433  5f                   pop edi
// 00750434  5e                   pop esi
// 00750435  5b                   pop ebx
// 00750436  8be5                 mov esp, ebp
// 00750438  5d                   pop ebp
// 00750439  c21000               ret 0x10
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Insert_n@?$vector@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@IAEXV?$_Vector_const_iterator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@2@IABV?$shared_ptr@Voption_description@program_options@boost@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
