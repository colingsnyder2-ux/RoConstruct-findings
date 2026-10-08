// roc 2007-03 005d97b0  unit: seg_005d0000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d97b0
//
// 005d97b0  6aff                 push -1
// 005d97b2  6853b97500           push 0x75b953
// 005d97b7  64a100000000         mov eax, dword ptr fs:[0]
// 005d97bd  50                   push eax
// 005d97be  64892500000000       mov dword ptr fs:[0], esp
// 005d97c5  83ec0c               sub esp, 0xc
// 005d97c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005d97cc  55                   push ebp
// 005d97cd  56                   push esi
// 005d97ce  57                   push edi
// 005d97cf  8bf1                 mov esi, ecx
// 005d97d1  50                   push eax
// 005d97d2  8d4c2414             lea ecx, [esp + 0x14]
// 005d97d6  51                   push ecx
// 005d97d7  89742414             mov dword ptr [esp + 0x14], esi
// 005d97db  e8d036fbff           call 0x58ceb0
// 005d97e0  8b10                 mov edx, dword ptr [eax]
// 005d97e2  8916                 mov dword ptr [esi], edx
// 005d97e4  8b4004               mov eax, dword ptr [eax + 4]
// 005d97e7  33ed                 xor ebp, ebp
// 005d97e9  83c408               add esp, 8
// 005d97ec  3bc5                 cmp eax, ebp
// 005d97ee  894604               mov dword ptr [esi + 4], eax
// 005d97f1  740c                 je 0x5d97ff
// 005d97f3  83c008               add eax, 8
// 005d97f6  b901000000           mov ecx, 1
// 005d97fb  f00fc108             lock xadd dword ptr [eax], ecx
// 005d97ff  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005d9803  3bfd                 cmp edi, ebp
// 005d9805  896c2420             mov dword ptr [esp + 0x20], ebp
// 005d9809  742a                 je 0x5d9835
// 005d980b  8d5704               lea edx, [edi + 4]
// 005d980e  83c8ff               or eax, 0xffffffff
// 005d9811  f00fc102             lock xadd dword ptr [edx], eax
// 005d9815  751e                 jne 0x5d9835
// 005d9817  8b17                 mov edx, dword ptr [edi]
// 005d9819  8b4204               mov eax, dword ptr [edx + 4]
// 005d981c  8bcf                 mov ecx, edi
// 005d981e  ffd0                 call eax
// 005d9820  8d4f08               lea ecx, [edi + 8]
// 005d9823  83caff               or edx, 0xffffffff
// 005d9826  f00fc111             lock xadd dword ptr [ecx], edx
// 005d982a  7509                 jne 0x5d9835
// 005d982c  8b07                 mov eax, dword ptr [edi]
// 005d982e  8b5008               mov edx, dword ptr [eax + 8]
// 005d9831  8bcf                 mov ecx, edi
// 005d9833  ffd2                 call edx
// 005d9835  8d4608               lea eax, [esi + 8]
// 005d9838  896804               mov dword ptr [eax + 4], ebp
// 005d983b  896808               mov dword ptr [eax + 8], ebp
// 005d983e  89680c               mov dword ptr [eax + 0xc], ebp
// 005d9841  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005d9845  c6461801             mov byte ptr [esi + 0x18], 1
// 005d9849  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005d984c  8b8984020000         mov ecx, dword ptr [ecx + 0x284]
// 005d9852  8b5130               mov edx, dword ptr [ecx + 0x30]
// 005d9855  50                   push eax
// 005d9856  8b442430             mov eax, dword ptr [esp + 0x30]
// 005d985a  50                   push eax
// 005d985b  c644242801           mov byte ptr [esp + 0x28], 1
// 005d9860  895620               mov dword ptr [esi + 0x20], edx
// 005d9863  e808b8fdff           call 0x5b5070
// 005d9868  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d986c  83c408               add esp, 8
// 005d986f  5f                   pop edi
// 005d9870  8bc6                 mov eax, esi
// 005d9872  5e                   pop esi
// 005d9873  5d                   pop ebp
// 005d9874  64890d00000000       mov dword ptr fs:[0], ecx
// 005d987b  83c418               add esp, 0x18
// 005d987e  c20c00               ret 0xc
// library rbxgs/tool\MegaDragger.cpp (function ??0MegaDragger@RBX@@QAE@PAVPartInstance@1@ABV?$vector@PAVPVInstance@RBX@@V?$allocator@PAVPVInstance@RBX@@@std@@@std@@PAVRootInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
