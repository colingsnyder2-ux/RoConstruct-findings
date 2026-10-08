// roc 2010-06 005410a0  unit: RBX::AggregatingSceneManager  size: 749 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005410a0
//
// 005410a0  6aff                 push -1
// 005410a2  686afa9800           push 0x98fa6a
// 005410a7  64a100000000         mov eax, dword ptr fs:[0]
// 005410ad  50                   push eax
// 005410ae  64892500000000       mov dword ptr fs:[0], esp
// 005410b5  83ec4c               sub esp, 0x4c
// 005410b8  8b442464             mov eax, dword ptr [esp + 0x64]
// 005410bc  80781500             cmp byte ptr [eax + 0x15], 0
// 005410c0  53                   push ebx
// 005410c1  8bd9                 mov ebx, ecx
// 005410c3  895c2404             mov dword ptr [esp + 4], ebx
// 005410c7  7459                 je 0x541122
// 005410c9  688c00a000           push 0xa0008c
// 005410ce  8d4c2410             lea ecx, [esp + 0x10]
// 005410d2  ff1510a49e00         call dword ptr [0x9ea410]
// 005410d8  8d4c2428             lea ecx, [esp + 0x28]
// 005410dc  c744245800000000     mov dword ptr [esp + 0x58], 0
// 005410e4  ff1518a99e00         call dword ptr [0x9ea918]
// 005410ea  8d44240c             lea eax, [esp + 0xc]
// 005410ee  50                   push eax
// 005410ef  8d4c2438             lea ecx, [esp + 0x38]
// 005410f3  c644245c01           mov byte ptr [esp + 0x5c], 1
// 005410f8  c744242c2c00a000     mov dword ptr [esp + 0x2c], 0xa0002c
// 00541100  ff150ca49e00         call dword ptr [0x9ea40c]
// 00541106  68081bb000           push 0xb01b08
// 0054110b  8d4c242c             lea ecx, [esp + 0x2c]
// 0054110f  51                   push ecx
// 00541110  c644246000           mov byte ptr [esp + 0x60], 0
// 00541115  c74424304400a000     mov dword ptr [esp + 0x30], 0xa00044
// 0054111d  e890782600           call 0x7a89b2
// 00541122  55                   push ebp
// 00541123  56                   push esi
// 00541124  57                   push edi
// 00541125  8d4c2470             lea ecx, [esp + 0x70]
// 00541129  8be8                 mov ebp, eax
// 0054112b  e8b0681a00           call 0x6e79e0
// 00541130  8b4d00               mov ecx, dword ptr [ebp]
// 00541133  80791500             cmp byte ptr [ecx + 0x15], 0
// 00541137  7405                 je 0x54113e
// 00541139  8b7d08               mov edi, dword ptr [ebp + 8]
// 0054113c  eb1b                 jmp 0x541159
// 0054113e  8b5508               mov edx, dword ptr [ebp + 8]
// 00541141  807a1500             cmp byte ptr [edx + 0x15], 0
// 00541145  7404                 je 0x54114b
// 00541147  8bf9                 mov edi, ecx
// 00541149  eb0e                 jmp 0x541159
// 0054114b  8b442474             mov eax, dword ptr [esp + 0x74]
// 0054114f  8b7808               mov edi, dword ptr [eax + 8]
// 00541152  8d5008               lea edx, [eax + 8]
// 00541155  3bc5                 cmp eax, ebp
// 00541157  7567                 jne 0x5411c0
// 00541159  807f1500             cmp byte ptr [edi + 0x15], 0
// 0054115d  8b7504               mov esi, dword ptr [ebp + 4]
// 00541160  7503                 jne 0x541165
// 00541162  897704               mov dword ptr [edi + 4], esi
// 00541165  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00541168  396804               cmp dword ptr [eax + 4], ebp
// 0054116b  7505                 jne 0x541172
// 0054116d  897804               mov dword ptr [eax + 4], edi
// 00541170  eb0b                 jmp 0x54117d
// 00541172  392e                 cmp dword ptr [esi], ebp
// 00541174  7504                 jne 0x54117a
// 00541176  893e                 mov dword ptr [esi], edi
// 00541178  eb03                 jmp 0x54117d
// 0054117a  897e08               mov dword ptr [esi + 8], edi
// 0054117d  8b5b18               mov ebx, dword ptr [ebx + 0x18]
// 00541180  392b                 cmp dword ptr [ebx], ebp
// 00541182  7515                 jne 0x541199
// 00541184  807f1500             cmp byte ptr [edi + 0x15], 0
// 00541188  7404                 je 0x54118e
// 0054118a  8bc6                 mov eax, esi
// 0054118c  eb09                 jmp 0x541197
// 0054118e  57                   push edi
// 0054118f  e8acf7f9ff           call 0x4e0940
// 00541194  83c404               add esp, 4
// 00541197  8903                 mov dword ptr [ebx], eax
// 00541199  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054119d  8b5818               mov ebx, dword ptr [eax + 0x18]
// 005411a0  396b08               cmp dword ptr [ebx + 8], ebp
// 005411a3  7578                 jne 0x54121d
// 005411a5  807f1500             cmp byte ptr [edi + 0x15], 0
// 005411a9  7407                 je 0x5411b2
// 005411ab  8bc6                 mov eax, esi
// 005411ad  894308               mov dword ptr [ebx + 8], eax
// 005411b0  eb6b                 jmp 0x54121d
// 005411b2  57                   push edi
// 005411b3  e808970600           call 0x5aa8c0
// 005411b8  83c404               add esp, 4
// 005411bb  894308               mov dword ptr [ebx + 8], eax
// 005411be  eb5d                 jmp 0x54121d
// 005411c0  894104               mov dword ptr [ecx + 4], eax
// 005411c3  8b4d00               mov ecx, dword ptr [ebp]
// 005411c6  8908                 mov dword ptr [eax], ecx
// 005411c8  3b4508               cmp eax, dword ptr [ebp + 8]
// 005411cb  7504                 jne 0x5411d1
// 005411cd  8bf0                 mov esi, eax
// 005411cf  eb19                 jmp 0x5411ea
// 005411d1  807f1500             cmp byte ptr [edi + 0x15], 0
// 005411d5  8b7004               mov esi, dword ptr [eax + 4]
// 005411d8  7503                 jne 0x5411dd
// 005411da  897704               mov dword ptr [edi + 4], esi
// 005411dd  893e                 mov dword ptr [esi], edi
// 005411df  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005411e2  890a                 mov dword ptr [edx], ecx
// 005411e4  8b5508               mov edx, dword ptr [ebp + 8]
// 005411e7  894204               mov dword ptr [edx + 4], eax
// 005411ea  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 005411ed  396904               cmp dword ptr [ecx + 4], ebp
// 005411f0  7505                 jne 0x5411f7
// 005411f2  894104               mov dword ptr [ecx + 4], eax
// 005411f5  eb0e                 jmp 0x541205
// 005411f7  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005411fa  3929                 cmp dword ptr [ecx], ebp
// 005411fc  7504                 jne 0x541202
// 005411fe  8901                 mov dword ptr [ecx], eax
// 00541200  eb03                 jmp 0x541205
// 00541202  894108               mov dword ptr [ecx + 8], eax
// 00541205  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00541208  894804               mov dword ptr [eax + 4], ecx
// 0054120b  8d4d14               lea ecx, [ebp + 0x14]
// 0054120e  83c014               add eax, 0x14
// 00541211  3bc1                 cmp eax, ecx
// 00541213  7408                 je 0x54121d
// 00541215  8a19                 mov bl, byte ptr [ecx]
// 00541217  8a10                 mov dl, byte ptr [eax]
// 00541219  8818                 mov byte ptr [eax], bl
// 0054121b  8811                 mov byte ptr [ecx], dl
// 0054121d  b301                 mov bl, 1
// 0054121f  385d14               cmp byte ptr [ebp + 0x14], bl
// 00541222  0f8507010000         jne 0x54132f
// 00541228  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0054122c  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0054122f  3b7a04               cmp edi, dword ptr [edx + 4]
// 00541232  0f84f4000000         je 0x54132c
// 00541238  eb06                 jmp 0x541240
// 0054123a  8d9b00000000         lea ebx, [ebx]
// 00541240  385f14               cmp byte ptr [edi + 0x14], bl
// 00541243  0f85e3000000         jne 0x54132c
// 00541249  8b06                 mov eax, dword ptr [esi]
// 0054124b  3bf8                 cmp edi, eax
// 0054124d  7567                 jne 0x5412b6
// 0054124f  8b4608               mov eax, dword ptr [esi + 8]
// 00541252  80781400             cmp byte ptr [eax + 0x14], 0
// 00541256  7514                 jne 0x54126c
// 00541258  885814               mov byte ptr [eax + 0x14], bl
// 0054125b  56                   push esi
// 0054125c  c6461400             mov byte ptr [esi + 0x14], 0
// 00541260  e8bbb00600           call 0x5ac320
// 00541265  8b4608               mov eax, dword ptr [esi + 8]
// 00541268  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0054126c  80781500             cmp byte ptr [eax + 0x15], 0
// 00541270  7576                 jne 0x5412e8
// 00541272  8b10                 mov edx, dword ptr [eax]
// 00541274  385a14               cmp byte ptr [edx + 0x14], bl
// 00541277  7508                 jne 0x541281
// 00541279  8b5008               mov edx, dword ptr [eax + 8]
// 0054127c  385a14               cmp byte ptr [edx + 0x14], bl
// 0054127f  7463                 je 0x5412e4
// 00541281  8b5008               mov edx, dword ptr [eax + 8]
// 00541284  385a14               cmp byte ptr [edx + 0x14], bl
// 00541287  7516                 jne 0x54129f
// 00541289  8b10                 mov edx, dword ptr [eax]
// 0054128b  885a14               mov byte ptr [edx + 0x14], bl
// 0054128e  50                   push eax
// 0054128f  c6401400             mov byte ptr [eax + 0x14], 0
// 00541293  e868790800           call 0x5c8c00
// 00541298  8b4608               mov eax, dword ptr [esi + 8]
// 0054129b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0054129f  8a5614               mov dl, byte ptr [esi + 0x14]
// 005412a2  885014               mov byte ptr [eax + 0x14], dl
// 005412a5  885e14               mov byte ptr [esi + 0x14], bl
// 005412a8  8b4008               mov eax, dword ptr [eax + 8]
// 005412ab  56                   push esi
// 005412ac  885814               mov byte ptr [eax + 0x14], bl
// 005412af  e86cb00600           call 0x5ac320
// 005412b4  eb76                 jmp 0x54132c
// 005412b6  80781400             cmp byte ptr [eax + 0x14], 0
// 005412ba  7513                 jne 0x5412cf
// 005412bc  885814               mov byte ptr [eax + 0x14], bl
// 005412bf  56                   push esi
// 005412c0  c6461400             mov byte ptr [esi + 0x14], 0
// 005412c4  e837790800           call 0x5c8c00
// 005412c9  8b06                 mov eax, dword ptr [esi]
// 005412cb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005412cf  80781500             cmp byte ptr [eax + 0x15], 0
// 005412d3  7513                 jne 0x5412e8
// 005412d5  8b5008               mov edx, dword ptr [eax + 8]
// 005412d8  385a14               cmp byte ptr [edx + 0x14], bl
// 005412db  751e                 jne 0x5412fb
// 005412dd  8b10                 mov edx, dword ptr [eax]
// 005412df  385a14               cmp byte ptr [edx + 0x14], bl
// 005412e2  7517                 jne 0x5412fb
// 005412e4  c6401400             mov byte ptr [eax + 0x14], 0
// 005412e8  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005412eb  8bfe                 mov edi, esi
// 005412ed  8b7604               mov esi, dword ptr [esi + 4]
// 005412f0  3b7804               cmp edi, dword ptr [eax + 4]
// 005412f3  0f8547ffffff         jne 0x541240
// 005412f9  eb31                 jmp 0x54132c
// 005412fb  8b10                 mov edx, dword ptr [eax]
// 005412fd  385a14               cmp byte ptr [edx + 0x14], bl
// 00541300  7516                 jne 0x541318
// 00541302  8b5008               mov edx, dword ptr [eax + 8]
// 00541305  885a14               mov byte ptr [edx + 0x14], bl
// 00541308  50                   push eax
// 00541309  c6401400             mov byte ptr [eax + 0x14], 0
// 0054130d  e80eb00600           call 0x5ac320
// 00541312  8b06                 mov eax, dword ptr [esi]
// 00541314  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00541318  8a5614               mov dl, byte ptr [esi + 0x14]
// 0054131b  885014               mov byte ptr [eax + 0x14], dl
// 0054131e  885e14               mov byte ptr [esi + 0x14], bl
// 00541321  8b00                 mov eax, dword ptr [eax]
// 00541323  56                   push esi
// 00541324  885814               mov byte ptr [eax + 0x14], bl
// 00541327  e8d4780800           call 0x5c8c00
// 0054132c  885f14               mov byte ptr [edi + 0x14], bl
// 0054132f  8d750c               lea esi, [ebp + 0xc]
// 00541332  89742414             mov dword ptr [esp + 0x14], esi
// 00541336  c7069cf2a100         mov dword ptr [esi], 0xa1f29c
// 0054133c  8bce                 mov ecx, esi
// 0054133e  c744246402000000     mov dword ptr [esp + 0x64], 2
// 00541346  e8d5e6ffff           call 0x53fa20
// 0054134b  55                   push ebp
// 0054134c  c70638e8a100         mov dword ptr [esi], 0xa1e838
// 00541352  e843662600           call 0x7a799a
// 00541357  8b542414             mov edx, dword ptr [esp + 0x14]
// 0054135b  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0054135e  83c404               add esp, 4
// 00541361  5f                   pop edi
// 00541362  5e                   pop esi
// 00541363  5d                   pop ebp
// 00541364  85c0                 test eax, eax
// 00541366  7604                 jbe 0x54136c
// 00541368  48                   dec eax
// 00541369  89421c               mov dword ptr [edx + 0x1c], eax
// 0054136c  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00541370  8b442460             mov eax, dword ptr [esp + 0x60]
// 00541374  8b12                 mov edx, dword ptr [edx]
// 00541376  894804               mov dword ptr [eax + 4], ecx
// 00541379  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0054137d  8910                 mov dword ptr [eax], edx
// 0054137f  5b                   pop ebx
// 00541380  64890d00000000       mov dword ptr fs:[0], ecx
// 00541387  83c458               add esp, 0x58
// 0054138a  c20c00               ret 0xc
// library rbxgs-render/AggregatingSceneManager.cpp (function ?erase@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
