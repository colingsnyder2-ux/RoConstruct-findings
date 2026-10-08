// roc 2007-03 005ad170  unit: seg_005a0000  size: 696 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ad170
//
// 005ad170  64a100000000         mov eax, dword ptr fs:[0]
// 005ad176  6aff                 push -1
// 005ad178  68926f7500           push 0x756f92
// 005ad17d  50                   push eax
// 005ad17e  64892500000000       mov dword ptr fs:[0], esp
// 005ad185  8b442418             mov eax, dword ptr [esp + 0x18]
// 005ad189  83ec48               sub esp, 0x48
// 005ad18c  80781100             cmp byte ptr [eax + 0x11], 0
// 005ad190  55                   push ebp
// 005ad191  8be9                 mov ebp, ecx
// 005ad193  7459                 je 0x5ad1ee
// 005ad195  68dc3e7800           push 0x783edc
// 005ad19a  8d4c240c             lea ecx, [esp + 0xc]
// 005ad19e  ff1578e77700         call dword ptr [0x77e778]
// 005ad1a4  8d4c2424             lea ecx, [esp + 0x24]
// 005ad1a8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 005ad1b0  ff1560e97700         call dword ptr [0x77e960]
// 005ad1b6  8d442408             lea eax, [esp + 8]
// 005ad1ba  50                   push eax
// 005ad1bb  8d4c2434             lea ecx, [esp + 0x34]
// 005ad1bf  c644245801           mov byte ptr [esp + 0x58], 1
// 005ad1c4  c7442428383e7800     mov dword ptr [esp + 0x28], 0x783e38
// 005ad1cc  ff157ce77700         call dword ptr [0x77e77c]
// 005ad1d2  68ccf38300           push 0x83f3cc
// 005ad1d7  8d4c2428             lea ecx, [esp + 0x28]
// 005ad1db  51                   push ecx
// 005ad1dc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 005ad1e1  c744242c503e7800     mov dword ptr [esp + 0x2c], 0x783e50
// 005ad1e9  e8401e0700           call 0x61f02e
// 005ad1ee  53                   push ebx
// 005ad1ef  56                   push esi
// 005ad1f0  8bd8                 mov ebx, eax
// 005ad1f2  57                   push edi
// 005ad1f3  8d4c246c             lea ecx, [esp + 0x6c]
// 005ad1f7  895c2410             mov dword ptr [esp + 0x10], ebx
// 005ad1fb  e8c0eceeff           call 0x49bec0
// 005ad200  8b03                 mov eax, dword ptr [ebx]
// 005ad202  80781100             cmp byte ptr [eax + 0x11], 0
// 005ad206  7405                 je 0x5ad20d
// 005ad208  8b7b08               mov edi, dword ptr [ebx + 8]
// 005ad20b  eb18                 jmp 0x5ad225
// 005ad20d  8b5308               mov edx, dword ptr [ebx + 8]
// 005ad210  807a1100             cmp byte ptr [edx + 0x11], 0
// 005ad214  7404                 je 0x5ad21a
// 005ad216  8bf8                 mov edi, eax
// 005ad218  eb0b                 jmp 0x5ad225
// 005ad21a  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 005ad21e  3bcb                 cmp ecx, ebx
// 005ad220  8b7908               mov edi, dword ptr [ecx + 8]
// 005ad223  756b                 jne 0x5ad290
// 005ad225  807f1100             cmp byte ptr [edi + 0x11], 0
// 005ad229  8b7304               mov esi, dword ptr [ebx + 4]
// 005ad22c  7503                 jne 0x5ad231
// 005ad22e  897704               mov dword ptr [edi + 4], esi
// 005ad231  8b4504               mov eax, dword ptr [ebp + 4]
// 005ad234  395804               cmp dword ptr [eax + 4], ebx
// 005ad237  7505                 jne 0x5ad23e
// 005ad239  897804               mov dword ptr [eax + 4], edi
// 005ad23c  eb0b                 jmp 0x5ad249
// 005ad23e  391e                 cmp dword ptr [esi], ebx
// 005ad240  7504                 jne 0x5ad246
// 005ad242  893e                 mov dword ptr [esi], edi
// 005ad244  eb03                 jmp 0x5ad249
// 005ad246  897e08               mov dword ptr [esi + 8], edi
// 005ad249  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005ad24c  8b03                 mov eax, dword ptr [ebx]
// 005ad24e  3b442410             cmp eax, dword ptr [esp + 0x10]
// 005ad252  7515                 jne 0x5ad269
// 005ad254  807f1100             cmp byte ptr [edi + 0x11], 0
// 005ad258  7404                 je 0x5ad25e
// 005ad25a  8bc6                 mov eax, esi
// 005ad25c  eb09                 jmp 0x5ad267
// 005ad25e  57                   push edi
// 005ad25f  e86cebffff           call 0x5abdd0
// 005ad264  83c404               add esp, 4
// 005ad267  8903                 mov dword ptr [ebx], eax
// 005ad269  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005ad26c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ad270  394b08               cmp dword ptr [ebx + 8], ecx
// 005ad273  7572                 jne 0x5ad2e7
// 005ad275  807f1100             cmp byte ptr [edi + 0x11], 0
// 005ad279  7407                 je 0x5ad282
// 005ad27b  8bc6                 mov eax, esi
// 005ad27d  894308               mov dword ptr [ebx + 8], eax
// 005ad280  eb65                 jmp 0x5ad2e7
// 005ad282  57                   push edi
// 005ad283  e86846e7ff           call 0x4218f0
// 005ad288  83c404               add esp, 4
// 005ad28b  894308               mov dword ptr [ebx + 8], eax
// 005ad28e  eb57                 jmp 0x5ad2e7
// 005ad290  894804               mov dword ptr [eax + 4], ecx
// 005ad293  8b13                 mov edx, dword ptr [ebx]
// 005ad295  8911                 mov dword ptr [ecx], edx
// 005ad297  3b4b08               cmp ecx, dword ptr [ebx + 8]
// 005ad29a  7504                 jne 0x5ad2a0
// 005ad29c  8bf1                 mov esi, ecx
// 005ad29e  eb1a                 jmp 0x5ad2ba
// 005ad2a0  807f1100             cmp byte ptr [edi + 0x11], 0
// 005ad2a4  8b7104               mov esi, dword ptr [ecx + 4]
// 005ad2a7  7503                 jne 0x5ad2ac
// 005ad2a9  897704               mov dword ptr [edi + 4], esi
// 005ad2ac  893e                 mov dword ptr [esi], edi
// 005ad2ae  8b4308               mov eax, dword ptr [ebx + 8]
// 005ad2b1  894108               mov dword ptr [ecx + 8], eax
// 005ad2b4  8b5308               mov edx, dword ptr [ebx + 8]
// 005ad2b7  894a04               mov dword ptr [edx + 4], ecx
// 005ad2ba  8b4504               mov eax, dword ptr [ebp + 4]
// 005ad2bd  395804               cmp dword ptr [eax + 4], ebx
// 005ad2c0  7505                 jne 0x5ad2c7
// 005ad2c2  894804               mov dword ptr [eax + 4], ecx
// 005ad2c5  eb0e                 jmp 0x5ad2d5
// 005ad2c7  8b4304               mov eax, dword ptr [ebx + 4]
// 005ad2ca  3918                 cmp dword ptr [eax], ebx
// 005ad2cc  7504                 jne 0x5ad2d2
// 005ad2ce  8908                 mov dword ptr [eax], ecx
// 005ad2d0  eb03                 jmp 0x5ad2d5
// 005ad2d2  894808               mov dword ptr [eax + 8], ecx
// 005ad2d5  8b4304               mov eax, dword ptr [ebx + 4]
// 005ad2d8  894104               mov dword ptr [ecx + 4], eax
// 005ad2db  8a5310               mov dl, byte ptr [ebx + 0x10]
// 005ad2de  8a4110               mov al, byte ptr [ecx + 0x10]
// 005ad2e1  885110               mov byte ptr [ecx + 0x10], dl
// 005ad2e4  884310               mov byte ptr [ebx + 0x10], al
// 005ad2e7  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ad2eb  b301                 mov bl, 1
// 005ad2ed  385810               cmp byte ptr [eax + 0x10], bl
// 005ad2f0  0f85f2000000         jne 0x5ad3e8
// 005ad2f6  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005ad2f9  3b7904               cmp edi, dword ptr [ecx + 4]
// 005ad2fc  0f84e3000000         je 0x5ad3e5
// 005ad302  385f10               cmp byte ptr [edi + 0x10], bl
// 005ad305  0f85da000000         jne 0x5ad3e5
// 005ad30b  8b06                 mov eax, dword ptr [esi]
// 005ad30d  3bf8                 cmp edi, eax
// 005ad30f  7563                 jne 0x5ad374
// 005ad311  8b4608               mov eax, dword ptr [esi + 8]
// 005ad314  80781000             cmp byte ptr [eax + 0x10], 0
// 005ad318  7512                 jne 0x5ad32c
// 005ad31a  885810               mov byte ptr [eax + 0x10], bl
// 005ad31d  56                   push esi
// 005ad31e  8bcd                 mov ecx, ebp
// 005ad320  c6461000             mov byte ptr [esi + 0x10], 0
// 005ad324  e8775d0600           call 0x6130a0
// 005ad329  8b4608               mov eax, dword ptr [esi + 8]
// 005ad32c  80781100             cmp byte ptr [eax + 0x11], 0
// 005ad330  7572                 jne 0x5ad3a4
// 005ad332  8b10                 mov edx, dword ptr [eax]
// 005ad334  385a10               cmp byte ptr [edx + 0x10], bl
// 005ad337  7508                 jne 0x5ad341
// 005ad339  8b4808               mov ecx, dword ptr [eax + 8]
// 005ad33c  385910               cmp byte ptr [ecx + 0x10], bl
// 005ad33f  745f                 je 0x5ad3a0
// 005ad341  8b4808               mov ecx, dword ptr [eax + 8]
// 005ad344  385910               cmp byte ptr [ecx + 0x10], bl
// 005ad347  7512                 jne 0x5ad35b
// 005ad349  885a10               mov byte ptr [edx + 0x10], bl
// 005ad34c  50                   push eax
// 005ad34d  8bcd                 mov ecx, ebp
// 005ad34f  c6401000             mov byte ptr [eax + 0x10], 0
// 005ad353  e8a8ebffff           call 0x5abf00
// 005ad358  8b4608               mov eax, dword ptr [esi + 8]
// 005ad35b  8a4e10               mov cl, byte ptr [esi + 0x10]
// 005ad35e  884810               mov byte ptr [eax + 0x10], cl
// 005ad361  885e10               mov byte ptr [esi + 0x10], bl
// 005ad364  8b5008               mov edx, dword ptr [eax + 8]
// 005ad367  56                   push esi
// 005ad368  8bcd                 mov ecx, ebp
// 005ad36a  885a10               mov byte ptr [edx + 0x10], bl
// 005ad36d  e82e5d0600           call 0x6130a0
// 005ad372  eb71                 jmp 0x5ad3e5
// 005ad374  80781000             cmp byte ptr [eax + 0x10], 0
// 005ad378  7511                 jne 0x5ad38b
// 005ad37a  885810               mov byte ptr [eax + 0x10], bl
// 005ad37d  56                   push esi
// 005ad37e  8bcd                 mov ecx, ebp
// 005ad380  c6461000             mov byte ptr [esi + 0x10], 0
// 005ad384  e877ebffff           call 0x5abf00
// 005ad389  8b06                 mov eax, dword ptr [esi]
// 005ad38b  80781100             cmp byte ptr [eax + 0x11], 0
// 005ad38f  7513                 jne 0x5ad3a4
// 005ad391  8b5008               mov edx, dword ptr [eax + 8]
// 005ad394  385a10               cmp byte ptr [edx + 0x10], bl
// 005ad397  751e                 jne 0x5ad3b7
// 005ad399  8b08                 mov ecx, dword ptr [eax]
// 005ad39b  385910               cmp byte ptr [ecx + 0x10], bl
// 005ad39e  7517                 jne 0x5ad3b7
// 005ad3a0  c6401000             mov byte ptr [eax + 0x10], 0
// 005ad3a4  8b5504               mov edx, dword ptr [ebp + 4]
// 005ad3a7  8bfe                 mov edi, esi
// 005ad3a9  3b7a04               cmp edi, dword ptr [edx + 4]
// 005ad3ac  8b7604               mov esi, dword ptr [esi + 4]
// 005ad3af  0f854dffffff         jne 0x5ad302
// 005ad3b5  eb2e                 jmp 0x5ad3e5
// 005ad3b7  8b08                 mov ecx, dword ptr [eax]
// 005ad3b9  385910               cmp byte ptr [ecx + 0x10], bl
// 005ad3bc  7511                 jne 0x5ad3cf
// 005ad3be  885a10               mov byte ptr [edx + 0x10], bl
// 005ad3c1  50                   push eax
// 005ad3c2  8bcd                 mov ecx, ebp
// 005ad3c4  c6401000             mov byte ptr [eax + 0x10], 0
// 005ad3c8  e8d35c0600           call 0x6130a0
// 005ad3cd  8b06                 mov eax, dword ptr [esi]
// 005ad3cf  8a4e10               mov cl, byte ptr [esi + 0x10]
// 005ad3d2  884810               mov byte ptr [eax + 0x10], cl
// 005ad3d5  885e10               mov byte ptr [esi + 0x10], bl
// 005ad3d8  8b10                 mov edx, dword ptr [eax]
// 005ad3da  56                   push esi
// 005ad3db  8bcd                 mov ecx, ebp
// 005ad3dd  885a10               mov byte ptr [edx + 0x10], bl
// 005ad3e0  e81bebffff           call 0x5abf00
// 005ad3e5  885f10               mov byte ptr [edi + 0x10], bl
// 005ad3e8  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ad3ec  50                   push eax
// 005ad3ed  e8fe0c0700           call 0x61e0f0
// 005ad3f2  8b4508               mov eax, dword ptr [ebp + 8]
// 005ad3f5  83c404               add esp, 4
// 005ad3f8  85c0                 test eax, eax
// 005ad3fa  5f                   pop edi
// 005ad3fb  5e                   pop esi
// 005ad3fc  5b                   pop ebx
// 005ad3fd  7606                 jbe 0x5ad405
// 005ad3ff  83c0ff               add eax, -1
// 005ad402  894508               mov dword ptr [ebp + 8], eax
// 005ad405  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005ad409  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 005ad40d  8b542464             mov edx, dword ptr [esp + 0x64]
// 005ad411  8908                 mov dword ptr [eax], ecx
// 005ad413  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005ad417  895004               mov dword ptr [eax + 4], edx
// 005ad41a  5d                   pop ebp
// 005ad41b  64890d00000000       mov dword ptr fs:[0], ecx
// 005ad422  83c454               add esp, 0x54
// 005ad425  c20c00               ret 0xc
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
