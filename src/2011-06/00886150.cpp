// roc 2011-06 00886150  unit: CXTPControlGallery  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00886150
//
// 00886150  83ec18               sub esp, 0x18
// 00886153  56                   push esi
// 00886154  57                   push edi
// 00886155  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00886159  8bf1                 mov esi, ecx
// 0088615b  85ff                 test edi, edi
// 0088615d  750d                 jne 0x88616c
// 0088615f  5f                   pop edi
// 00886160  b857000780           mov eax, 0x80070057
// 00886165  5e                   pop esi
// 00886166  83c418               add esp, 0x18
// 00886169  c20c00               ret 0xc
// 0088616c  33c0                 xor eax, eax
// 0088616e  668907               mov word ptr [edi], ax
// 00886171  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00886177  85c0                 test eax, eax
// 00886179  7406                 je 0x886181
// 0088617b  83782000             cmp dword ptr [eax + 0x20], 0
// 0088617f  750d                 jne 0x88618e
// 00886181  5f                   pop edi
// 00886182  b801000000           mov eax, 1
// 00886187  5e                   pop esi
// 00886188  83c418               add esp, 0x18
// 0088618b  c20c00               ret 0xc
// 0088618e  53                   push ebx
// 0088618f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00886193  55                   push ebp
// 00886194  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00886198  50                   push eax
// 00886199  8d4c241c             lea ecx, [esp + 0x1c]
// 0088619d  e88e6bfdff           call 0x85cd30
// 008861a2  55                   push ebp
// 008861a3  53                   push ebx
// 008861a4  50                   push eax
// 008861a5  ff15101ca400         call dword ptr [0xa41c10]
// 008861ab  85c0                 test eax, eax
// 008861ad  746d                 je 0x88621c
// 008861af  b903000000           mov ecx, 3
// 008861b4  66890f               mov word ptr [edi], cx
// 008861b7  c7470800000000       mov dword ptr [edi + 8], 0
// 008861be  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 008861c4  8d542410             lea edx, [esp + 0x10]
// 008861c8  895c2410             mov dword ptr [esp + 0x10], ebx
// 008861cc  896c2414             mov dword ptr [esp + 0x14], ebp
// 008861d0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008861d3  52                   push edx
// 008861d4  51                   push ecx
// 008861d5  ff15f419a400         call dword ptr [0xa419f4]
// 008861db  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 008861e1  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 008861e7  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 008861ed  89542418             mov dword ptr [esp + 0x18], edx
// 008861f1  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 008861f7  8944241c             mov dword ptr [esp + 0x1c], eax
// 008861fb  8b442414             mov eax, dword ptr [esp + 0x14]
// 008861ff  894c2420             mov dword ptr [esp + 0x20], ecx
// 00886203  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00886207  50                   push eax
// 00886208  89542428             mov dword ptr [esp + 0x28], edx
// 0088620c  51                   push ecx
// 0088620d  8d542420             lea edx, [esp + 0x20]
// 00886211  52                   push edx
// 00886212  ff15101ca400         call dword ptr [0xa41c10]
// 00886218  85c0                 test eax, eax
// 0088621a  750f                 jne 0x88622b
// 0088621c  5d                   pop ebp
// 0088621d  5b                   pop ebx
// 0088621e  5f                   pop edi
// 0088621f  b801000000           mov eax, 1
// 00886224  5e                   pop esi
// 00886225  83c418               add esp, 0x18
// 00886228  c20c00               ret 0xc
// 0088622b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088622f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00886233  6a00                 push 0
// 00886235  50                   push eax
// 00886236  51                   push ecx
// 00886237  8d4ee0               lea ecx, [esi - 0x20]
// 0088623a  e801eaffff           call 0x884c40
// 0088623f  83f8ff               cmp eax, -1
// 00886242  7404                 je 0x886248
// 00886244  40                   inc eax
// 00886245  894708               mov dword ptr [edi + 8], eax
// 00886248  5d                   pop ebp
// 00886249  5b                   pop ebx
// 0088624a  5f                   pop edi
// 0088624b  33c0                 xor eax, eax
// 0088624d  5e                   pop esi
// 0088624e  83c418               add esp, 0x18
// 00886251  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?AccessibleHitTest@CXTPControlGallery@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
