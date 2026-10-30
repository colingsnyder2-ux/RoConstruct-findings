// roc 2012-06 009ebe10  unit: CXTPToolTipContextToolTip::PAUTOOLITEM::?$CArray  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ebe10
//
// 009ebe10  51                   push ecx
// 009ebe11  8b442408             mov eax, dword ptr [esp + 8]
// 009ebe15  890c24               mov dword ptr [esp], ecx
// 009ebe18  85c0                 test eax, eax
// 009ebe1a  7444                 je 0x9ebe60
// 009ebe1c  53                   push ebx
// 009ebe1d  56                   push esi
// 009ebe1e  8b715c               mov esi, dword ptr [ecx + 0x5c]
// 009ebe21  33db                 xor ebx, ebx
// 009ebe23  85f6                 test esi, esi
// 009ebe25  7e37                 jle 0x9ebe5e
// 009ebe27  8d5154               lea edx, [ecx + 0x54]
// 009ebe2a  55                   push ebp
// 009ebe2b  89542414             mov dword ptr [esp + 0x14], edx
// 009ebe2f  57                   push edi
// 009ebe30  85db                 test ebx, ebx
// 009ebe32  0f8c03010000         jl 0x9ebf3b
// 009ebe38  3b5a08               cmp ebx, dword ptr [edx + 8]
// 009ebe3b  0f8dfa000000         jge 0x9ebf3b
// 009ebe41  8b7a04               mov edi, dword ptr [edx + 4]
// 009ebe44  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 009ebe47  8b6f24               mov ebp, dword ptr [edi + 0x24]
// 009ebe4a  3b680c               cmp ebp, dword ptr [eax + 0xc]
// 009ebe4d  7508                 jne 0x9ebe57
// 009ebe4f  8b6f20               mov ebp, dword ptr [edi + 0x20]
// 009ebe52  3b6808               cmp ebp, dword ptr [eax + 8]
// 009ebe55  740d                 je 0x9ebe64
// 009ebe57  43                   inc ebx
// 009ebe58  3bde                 cmp ebx, esi
// 009ebe5a  7cd4                 jl 0x9ebe30
// 009ebe5c  5f                   pop edi
// 009ebe5d  5d                   pop ebp
// 009ebe5e  5e                   pop esi
// 009ebe5f  5b                   pop ebx
// 009ebe60  59                   pop ecx
// 009ebe61  c20400               ret 4
// 009ebe64  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 009ebe6a  3bc5                 cmp eax, ebp
// 009ebe6c  751a                 jne 0x9ebe88
// 009ebe6e  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 009ebe74  3b4724               cmp eax, dword ptr [edi + 0x24]
// 009ebe77  750f                 jne 0x9ebe88
// 009ebe79  6a00                 push 0
// 009ebe7b  e880e6ffff           call 0x9ea500
// 009ebe80  8b542418             mov edx, dword ptr [esp + 0x18]
// 009ebe84  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009ebe88  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 009ebe8e  8b2d903ab200         mov ebp, dword ptr [0xb23a90]
// 009ebe94  8db1a8000000         lea esi, [ecx + 0xa8]
// 009ebe9a  3b4720               cmp eax, dword ptr [edi + 0x20]
// 009ebe9d  7536                 jne 0x9ebed5
// 009ebe9f  8b4624               mov eax, dword ptr [esi + 0x24]
// 009ebea2  3b4724               cmp eax, dword ptr [edi + 0x24]
// 009ebea5  752e                 jne 0x9ebed5
// 009ebea7  8bce                 mov ecx, esi
// 009ebea9  ff150448b200         call dword ptr [0xb24804]
// 009ebeaf  33c0                 xor eax, eax
// 009ebeb1  8d4e0c               lea ecx, [esi + 0xc]
// 009ebeb4  51                   push ecx
// 009ebeb5  894608               mov dword ptr [esi + 8], eax
// 009ebeb8  894620               mov dword ptr [esi + 0x20], eax
// 009ebebb  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 009ebec2  89461c               mov dword ptr [esi + 0x1c], eax
// 009ebec5  ffd5                 call ebp
// 009ebec7  83c628               add esi, 0x28
// 009ebeca  56                   push esi
// 009ebecb  ffd5                 call ebp
// 009ebecd  8b542418             mov edx, dword ptr [esp + 0x18]
// 009ebed1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009ebed5  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 009ebedb  8db1e0000000         lea esi, [ecx + 0xe0]
// 009ebee1  3b4720               cmp eax, dword ptr [edi + 0x20]
// 009ebee4  7532                 jne 0x9ebf18
// 009ebee6  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 009ebee9  3b4f24               cmp ecx, dword ptr [edi + 0x24]
// 009ebeec  752a                 jne 0x9ebf18
// 009ebeee  8bce                 mov ecx, esi
// 009ebef0  ff150448b200         call dword ptr [0xb24804]
// 009ebef6  33c0                 xor eax, eax
// 009ebef8  8d560c               lea edx, [esi + 0xc]
// 009ebefb  52                   push edx
// 009ebefc  894608               mov dword ptr [esi + 8], eax
// 009ebeff  894620               mov dword ptr [esi + 0x20], eax
// 009ebf02  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 009ebf09  89461c               mov dword ptr [esi + 0x1c], eax
// 009ebf0c  ffd5                 call ebp
// 009ebf0e  83c628               add esi, 0x28
// 009ebf11  56                   push esi
// 009ebf12  ffd5                 call ebp
// 009ebf14  8b542418             mov edx, dword ptr [esp + 0x18]
// 009ebf18  6a01                 push 1
// 009ebf1a  53                   push ebx
// 009ebf1b  8bca                 mov ecx, edx
// 009ebf1d  e84e72faff           call 0x993170
// 009ebf22  8bcf                 mov ecx, edi
// 009ebf24  ff15d047b200         call dword ptr [0xb247d0]
// 009ebf2a  57                   push edi
// 009ebf2b  e8e461f9ff           call 0x982114
// 009ebf30  83c404               add esp, 4
// 009ebf33  5f                   pop edi
// 009ebf34  5d                   pop ebp
// 009ebf35  5e                   pop esi
// 009ebf36  5b                   pop ebx
// 009ebf37  59                   pop ecx
// 009ebf38  c20400               ret 4
// 009ebf3b  e88064f9ff           call 0x9823c0
// copied from an identical function in another client (function ?DelTool@CXTPToolTipContextToolTip@@QAEXPAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp