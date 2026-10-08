// roc 2007-08 00625250  unit: RBX::UnlockedPartByLocalCharacter  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00625250
//
// 00625250  6aff                 push -1
// 00625252  6856d17500           push 0x75d156
// 00625257  64a100000000         mov eax, dword ptr fs:[0]
// 0062525d  50                   push eax
// 0062525e  64892500000000       mov dword ptr fs:[0], esp
// 00625265  83ec0c               sub esp, 0xc
// 00625268  55                   push ebp
// 00625269  56                   push esi
// 0062526a  8bf1                 mov esi, ecx
// 0062526c  33ed                 xor ebp, ebp
// 0062526e  c706bc497c00         mov dword ptr [esi], 0x7c49bc
// 00625274  896e04               mov dword ptr [esi + 4], ebp
// 00625277  57                   push edi
// 00625278  8974240c             mov dword ptr [esp + 0xc], esi
// 0062527c  896e08               mov dword ptr [esi + 8], ebp
// 0062527f  896e0c               mov dword ptr [esi + 0xc], ebp
// 00625282  896c2420             mov dword ptr [esp + 0x20], ebp
// 00625286  896e10               mov dword ptr [esi + 0x10], ebp
// 00625289  8b442428             mov eax, dword ptr [esp + 0x28]
// 0062528d  50                   push eax
// 0062528e  c644242401           mov byte ptr [esp + 0x24], 1
// 00625293  e8a805e7ff           call 0x495840
// 00625298  50                   push eax
// 00625299  8d4c2418             lea ecx, [esp + 0x18]
// 0062529d  51                   push ecx
// 0062529e  e8cd83e7ff           call 0x49d670
// 006252a3  83c40c               add esp, 0xc
// 006252a6  8b10                 mov edx, dword ptr [eax]
// 006252a8  83c004               add eax, 4
// 006252ab  50                   push eax
// 006252ac  8d4e08               lea ecx, [esi + 8]
// 006252af  c644242402           mov byte ptr [esp + 0x24], 2
// 006252b4  895604               mov dword ptr [esi + 4], edx
// 006252b7  e8a4d7ddff           call 0x402a60
// 006252bc  8b442414             mov eax, dword ptr [esp + 0x14]
// 006252c0  3bc5                 cmp eax, ebp
// 006252c2  c644242001           mov byte ptr [esp + 0x20], 1
// 006252c7  742c                 je 0x6252f5
// 006252c9  8bf8                 mov edi, eax
// 006252cb  83c004               add eax, 4
// 006252ce  83c9ff               or ecx, 0xffffffff
// 006252d1  f00fc108             lock xadd dword ptr [eax], ecx
// 006252d5  751e                 jne 0x6252f5
// 006252d7  8b17                 mov edx, dword ptr [edi]
// 006252d9  8b4204               mov eax, dword ptr [edx + 4]
// 006252dc  8bcf                 mov ecx, edi
// 006252de  ffd0                 call eax
// 006252e0  8d4f08               lea ecx, [edi + 8]
// 006252e3  83caff               or edx, 0xffffffff
// 006252e6  f00fc111             lock xadd dword ptr [ecx], edx
// 006252ea  7509                 jne 0x6252f5
// 006252ec  8b07                 mov eax, dword ptr [edi]
// 006252ee  8b5008               mov edx, dword ptr [eax + 8]
// 006252f1  8bcf                 mov ecx, edi
// 006252f3  ffd2                 call edx
// 006252f5  8b4604               mov eax, dword ptr [esi + 4]
// 006252f8  50                   push eax
// 006252f9  e852f5f7ff           call 0x5a4850
// 006252fe  50                   push eax
// 006252ff  8d442418             lea eax, [esp + 0x18]
// 00625303  50                   push eax
// 00625304  e8d7f6fbff           call 0x5e49e0
// 00625309  83c40c               add esp, 0xc
// 0062530c  8b08                 mov ecx, dword ptr [eax]
// 0062530e  83c004               add eax, 4
// 00625311  894e0c               mov dword ptr [esi + 0xc], ecx
// 00625314  50                   push eax
// 00625315  8d4e10               lea ecx, [esi + 0x10]
// 00625318  c644242403           mov byte ptr [esp + 0x24], 3
// 0062531d  e83ed7ddff           call 0x402a60
// 00625322  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00625326  3bfd                 cmp edi, ebp
// 00625328  c644242001           mov byte ptr [esp + 0x20], 1
// 0062532d  742a                 je 0x625359
// 0062532f  8d5704               lea edx, [edi + 4]
// 00625332  83c8ff               or eax, 0xffffffff
// 00625335  f00fc102             lock xadd dword ptr [edx], eax
// 00625339  751e                 jne 0x625359
// 0062533b  8b17                 mov edx, dword ptr [edi]
// 0062533d  8b4204               mov eax, dword ptr [edx + 4]
// 00625340  8bcf                 mov ecx, edi
// 00625342  ffd0                 call eax
// 00625344  8d4f08               lea ecx, [edi + 8]
// 00625347  83caff               or edx, 0xffffffff
// 0062534a  f00fc111             lock xadd dword ptr [ecx], edx
// 0062534e  7509                 jne 0x625359
// 00625350  8b07                 mov eax, dword ptr [edi]
// 00625352  8b5008               mov edx, dword ptr [eax + 8]
// 00625355  8bcf                 mov ecx, edi
// 00625357  ffd2                 call edx
// 00625359  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062535d  5f                   pop edi
// 0062535e  8bc6                 mov eax, esi
// 00625360  5e                   pop esi
// 00625361  5d                   pop ebp
// 00625362  64890d00000000       mov dword ptr fs:[0], ecx
// 00625369  83c418               add esp, 0x18
// 0062536c  c20400               ret 4
// library rbxgs/v8datamodel\Filters.cpp (function ??0PartByLocalCharacter@RBX@@QAE@PAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Filters.cpp
