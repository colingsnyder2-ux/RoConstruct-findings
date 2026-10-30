// roc 2009-12 008c53d0  unit: CXTPCustomizeToolbarsPage  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c53d0
//
// 008c53d0  83ec18               sub esp, 0x18
// 008c53d3  53                   push ebx
// 008c53d4  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 008c53da  56                   push esi
// 008c53db  57                   push edi
// 008c53dc  6a00                 push 0
// 008c53de  6a00                 push 0
// 008c53e0  8bf1                 mov esi, ecx
// 008c53e2  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008c53e8  6888010000           push 0x188
// 008c53ed  50                   push eax
// 008c53ee  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008c53f6  ffd3                 call ebx
// 008c53f8  83f8ff               cmp eax, -1
// 008c53fb  7415                 je 0x8c5412
// 008c53fd  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 008c5403  6a00                 push 0
// 008c5405  50                   push eax
// 008c5406  6899010000           push 0x199
// 008c540b  51                   push ecx
// 008c540c  ffd3                 call ebx
// 008c540e  89442410             mov dword ptr [esp + 0x10], eax
// 008c5412  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 008c5418  6a00                 push 0
// 008c541a  6a00                 push 0
// 008c541c  688e010000           push 0x18e
// 008c5421  52                   push edx
// 008c5422  ffd3                 call ebx
// 008c5424  6a00                 push 0
// 008c5426  6a00                 push 0
// 008c5428  8bf8                 mov edi, eax
// 008c542a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008c5430  6884010000           push 0x184
// 008c5435  50                   push eax
// 008c5436  897c2430             mov dword ptr [esp + 0x30], edi
// 008c543a  ffd3                 call ebx
// 008c543c  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 008c5442  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 008c5448  8b9184000000         mov edx, dword ptr [ecx + 0x84]
// 008c544e  33c0                 xor eax, eax
// 008c5450  894c2414             mov dword ptr [esp + 0x14], ecx
// 008c5454  8954241c             mov dword ptr [esp + 0x1c], edx
// 008c5458  8944240c             mov dword ptr [esp + 0xc], eax
// 008c545c  85d2                 test edx, edx
// 008c545e  0f8ecb000000         jle 0x8c552f
// 008c5464  55                   push ebp
// 008c5465  eb0d                 jmp 0x8c5474
// 008c5467  eb07                 jmp 0x8c5470
// 008c5469  8da42400000000       lea esp, [esp]
// 008c5470  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c5474  50                   push eax
// 008c5475  e866f8f4ff           call 0x814ce0
// 008c547a  8bf8                 mov edi, eax
// 008c547c  83bf5801000000       cmp dword ptr [edi + 0x158], 0
// 008c5483  0f848e000000         je 0x8c5517
// 008c5489  83bf3401000000       cmp dword ptr [edi + 0x134], 0
// 008c5490  7510                 jne 0x8c54a2
// 008c5492  8b17                 mov edx, dword ptr [edi]
// 008c5494  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 008c549a  8bcf                 mov ecx, edi
// 008c549c  ffd0                 call eax
// 008c549e  85c0                 test eax, eax
// 008c54a0  7475                 je 0x8c5517
// 008c54a2  8d4c241c             lea ecx, [esp + 0x1c]
// 008c54a6  51                   push ecx
// 008c54a7  8bcf                 mov ecx, edi
// 008c54a9  e8d280f3ff           call 0x7fd580
// 008c54ae  8bc8                 mov ecx, eax
// 008c54b0  ff1580de9800         call dword ptr [0x98de80]
// 008c54b6  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 008c54bc  50                   push eax
// 008c54bd  6a00                 push 0
// 008c54bf  6880010000           push 0x180
// 008c54c4  52                   push edx
// 008c54c5  ffd3                 call ebx
// 008c54c7  8d4c241c             lea ecx, [esp + 0x1c]
// 008c54cb  8be8                 mov ebp, eax
// 008c54cd  ff15c0de9800         call dword ptr [0x98dec0]
// 008c54d3  8b07                 mov eax, dword ptr [edi]
// 008c54d5  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 008c54db  8bcf                 mov ecx, edi
// 008c54dd  ffd2                 call edx
// 008c54df  50                   push eax
// 008c54e0  55                   push ebp
// 008c54e1  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008c54e7  e89e180600           call 0x926d8a
// 008c54ec  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008c54f0  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008c54f6  57                   push edi
// 008c54f7  55                   push ebp
// 008c54f8  689a010000           push 0x19a
// 008c54fd  50                   push eax
// 008c54fe  ffd3                 call ebx
// 008c5500  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 008c5504  7511                 jne 0x8c5517
// 008c5506  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 008c550c  6a00                 push 0
// 008c550e  55                   push ebp
// 008c550f  6886010000           push 0x186
// 008c5514  51                   push ecx
// 008c5515  ffd3                 call ebx
// 008c5517  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c551b  40                   inc eax
// 008c551c  3b442420             cmp eax, dword ptr [esp + 0x20]
// 008c5520  89442410             mov dword ptr [esp + 0x10], eax
// 008c5524  0f8c46ffffff         jl 0x8c5470
// 008c552a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008c552e  5d                   pop ebp
// 008c552f  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 008c5535  6a00                 push 0
// 008c5537  6a00                 push 0
// 008c5539  688e010000           push 0x18e
// 008c553e  52                   push edx
// 008c553f  ffd3                 call ebx
// 008c5541  3bc7                 cmp eax, edi
// 008c5543  7411                 je 0x8c5556
// 008c5545  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008c554b  6a00                 push 0
// 008c554d  57                   push edi
// 008c554e  6897010000           push 0x197
// 008c5553  50                   push eax
// 008c5554  ffd3                 call ebx
// 008c5556  5f                   pop edi
// 008c5557  8bce                 mov ecx, esi
// 008c5559  5e                   pop esi
// 008c555a  5b                   pop ebx
// 008c555b  83c418               add esp, 0x18
// 008c555e  e96dfbffff           jmp 0x8c50d0
// copied from an identical function in another client (function ?RefreshToolbarsList@CXTPCustomizeToolbarsPage@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeToolbarsPage.cpp