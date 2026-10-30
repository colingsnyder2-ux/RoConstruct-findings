// roc 2009-12 008f2820  unit: CXTPRibbonControlSystemRecentFileList  size: 590 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f2820
//
// 008f2820  6aff                 push -1
// 008f2822  683c6b9600           push 0x966b3c
// 008f2827  64a100000000         mov eax, dword ptr fs:[0]
// 008f282d  50                   push eax
// 008f282e  83ec10               sub esp, 0x10
// 008f2831  53                   push ebx
// 008f2832  55                   push ebp
// 008f2833  56                   push esi
// 008f2834  57                   push edi
// 008f2835  a10052b600           mov eax, dword ptr [0xb65200]
// 008f283a  33c4                 xor eax, esp
// 008f283c  50                   push eax
// 008f283d  8d442424             lea eax, [esp + 0x24]
// 008f2841  64a300000000         mov dword ptr fs:[0], eax
// 008f2847  8bf1                 mov esi, ecx
// 008f2849  8b06                 mov eax, dword ptr [esi]
// 008f284b  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 008f2851  ffd2                 call edx
// 008f2853  8bd8                 mov ebx, eax
// 008f2855  85db                 test ebx, ebx
// 008f2857  0f84fb010000         je 0x8f2a58
// 008f285d  837b0800             cmp dword ptr [ebx + 8], 0
// 008f2861  0f84f1010000         je 0x8f2a58
// 008f2867  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 008f286d  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 008f2873  8b402c               mov eax, dword ptr [eax + 0x2c]
// 008f2876  41                   inc ecx
// 008f2877  3bc8                 cmp ecx, eax
// 008f2879  7d74                 jge 0x8f28ef
// 008f287b  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008f2881  83c001               add eax, 1
// 008f2884  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 008f288a  7810                 js 0x8f289c
// 008f288c  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 008f288f  7d0b                 jge 0x8f289c
// 008f2891  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008f2894  8b3c82               mov edi, dword ptr [edx + eax*4]
// 008f2897  8d0482               lea eax, [edx + eax*4]
// 008f289a  eb02                 jmp 0x8f289e
// 008f289c  33ff                 xor edi, edi
// 008f289e  8b06                 mov eax, dword ptr [esi]
// 008f28a0  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 008f28a6  8baf84000000         mov ebp, dword ptr [edi + 0x84]
// 008f28ac  8bce                 mov ecx, esi
// 008f28ae  ffd2                 call edx
// 008f28b0  3be8                 cmp ebp, eax
// 008f28b2  7c3b                 jl 0x8f28ef
// 008f28b4  8b06                 mov eax, dword ptr [esi]
// 008f28b6  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 008f28bc  8baf84000000         mov ebp, dword ptr [edi + 0x84]
// 008f28c2  8bce                 mov ecx, esi
// 008f28c4  ffd2                 call edx
// 008f28c6  034304               add eax, dword ptr [ebx + 4]
// 008f28c9  3be8                 cmp ebp, eax
// 008f28cb  7f22                 jg 0x8f28ef
// 008f28cd  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 008f28d3  8b01                 mov eax, dword ptr [ecx]
// 008f28d5  8b5058               mov edx, dword ptr [eax + 0x58]
// 008f28d8  57                   push edi
// 008f28d9  ffd2                 call edx
// 008f28db  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 008f28e1  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 008f28e7  8b402c               mov eax, dword ptr [eax + 0x2c]
// 008f28ea  41                   inc ecx
// 008f28eb  3bc8                 cmp ecx, eax
// 008f28ed  7c8c                 jl 0x8f287b
// 008f28ef  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008f28f5  e8061cf1ff           call 0x804500
// 008f28fa  85c0                 test eax, eax
// 008f28fc  741a                 je 0x8f2918
// 008f28fe  8b16                 mov edx, dword ptr [esi]
// 008f2900  8b4268               mov eax, dword ptr [edx + 0x68]
// 008f2903  6a01                 push 1
// 008f2905  8bce                 mov ecx, esi
// 008f2907  c786d000000000000000 mov dword ptr [esi + 0xd0], 0
// 008f2911  ffd0                 call eax
// 008f2913  e940010000           jmp 0x8f2a58
// 008f2918  8d4c2414             lea ecx, [esp + 0x14]
// 008f291c  ff1574de9800         call dword ptr [0x98de74]
// 008f2922  33ed                 xor ebp, ebp
// 008f2924  396b04               cmp dword ptr [ebx + 4], ebp
// 008f2927  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008f292b  0f8e1d010000         jle 0x8f2a4e
// 008f2931  8b4b08               mov ecx, dword ptr [ebx + 8]
// 008f2934  8d3cad00000000       lea edi, [ebp*4]
// 008f293b  03cf                 add ecx, edi
// 008f293d  897c241c             mov dword ptr [esp + 0x1c], edi
// 008f2941  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008f2947  84c0                 test al, al
// 008f2949  0f85ff000000         jne 0x8f2a4e
// 008f294f  6804010000           push 0x104
// 008f2954  6804010000           push 0x104
// 008f2959  8d4c241c             lea ecx, [esp + 0x1c]
// 008f295d  ff155cd29800         call dword ptr [0x98d25c]
// 008f2963  8b4b08               mov ecx, dword ptr [ebx + 8]
// 008f2966  50                   push eax
// 008f2967  03cf                 add ecx, edi
// 008f2969  ff1580de9800         call dword ptr [0x98de80]
// 008f296f  50                   push eax
// 008f2970  e88d440300           call 0x926e02
// 008f2975  6aff                 push -1
// 008f2977  8d4c2418             lea ecx, [esp + 0x18]
// 008f297b  ff1560d29800         call dword ptr [0x98d260]
// 008f2981  6874010000           push 0x174
// 008f2986  e8d50ef0ff           call 0x7f3860
// 008f298b  83c404               add esp, 4
// 008f298e  89442420             mov dword ptr [esp + 0x20], eax
// 008f2992  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008f2997  85c0                 test eax, eax
// 008f2999  740b                 je 0x8f29a6
// 008f299b  8bc8                 mov ecx, eax
// 008f299d  e8eef0ffff           call 0x8f1a90
// 008f29a2  8bf8                 mov edi, eax
// 008f29a4  eb02                 jmp 0x8f29a8
// 008f29a6  33ff                 xor edi, edi
// 008f29a8  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 008f29ae  8b06                 mov eax, dword ptr [esi]
// 008f29b0  8d542901             lea edx, [ecx + ebp + 1]
// 008f29b4  6a01                 push 1
// 008f29b6  52                   push edx
// 008f29b7  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 008f29bd  6856fd9900           push 0x99fd56
// 008f29c2  8bce                 mov ecx, esi
// 008f29c4  c644243800           mov byte ptr [esp + 0x38], 0
// 008f29c9  ffd2                 call edx
// 008f29cb  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 008f29d1  03c5                 add eax, ebp
// 008f29d3  50                   push eax
// 008f29d4  57                   push edi
// 008f29d5  e81656f5ff           call 0x847ff0
// 008f29da  8bf8                 mov edi, eax
// 008f29dc  45                   inc ebp
// 008f29dd  55                   push ebp
// 008f29de  8d442418             lea eax, [esp + 0x18]
// 008f29e2  50                   push eax
// 008f29e3  8d4c2420             lea ecx, [esp + 0x20]
// 008f29e7  51                   push ecx
// 008f29e8  e8935bf5ff           call 0x848580
// 008f29ed  83c40c               add esp, 0xc
// 008f29f0  8bc8                 mov ecx, eax
// 008f29f2  c644242c02           mov byte ptr [esp + 0x2c], 2
// 008f29f7  ff1580de9800         call dword ptr [0x98de80]
// 008f29fd  50                   push eax
// 008f29fe  8bcf                 mov ecx, edi
// 008f2a00  e82b3df0ff           call 0x7f6730
// 008f2a05  8d4c2418             lea ecx, [esp + 0x18]
// 008f2a09  c644242c00           mov byte ptr [esp + 0x2c], 0
// 008f2a0e  ff15c0de9800         call dword ptr [0x98dec0]
// 008f2a14  6a48                 push 0x48
// 008f2a16  8bcf                 mov ecx, edi
// 008f2a18  e84336f0ff           call 0x7f6060
// 008f2a1d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 008f2a20  034c241c             add ecx, dword ptr [esp + 0x1c]
// 008f2a24  ff1580de9800         call dword ptr [0x98de80]
// 008f2a2a  50                   push eax
// 008f2a2b  8d8fe8000000         lea ecx, [edi + 0xe8]
// 008f2a31  ff155cde9800         call dword ptr [0x98de5c]
// 008f2a37  6a00                 push 0
// 008f2a39  8d8fec000000         lea ecx, [edi + 0xec]
// 008f2a3f  ff155cde9800         call dword ptr [0x98de5c]
// 008f2a45  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 008f2a48  0f8ce3feffff         jl 0x8f2931
// 008f2a4e  8d4c2414             lea ecx, [esp + 0x14]
// 008f2a52  ff15c0de9800         call dword ptr [0x98dec0]
// 008f2a58  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008f2a5c  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2a63  59                   pop ecx
// 008f2a64  5f                   pop edi
// 008f2a65  5e                   pop esi
// 008f2a66  5d                   pop ebp
// 008f2a67  5b                   pop ebx
// 008f2a68  83c41c               add esp, 0x1c
// 008f2a6b  c20400               ret 4
// copied from an identical function in another client (function ?OnCalcDynamicSize@CXTPRibbonControlSystemRecentFileList@@MAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonSystemButton.cpp