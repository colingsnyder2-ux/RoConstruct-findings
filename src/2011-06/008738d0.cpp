// roc 2011-06 008738d0  unit: CXTPPropertyGridToolTip  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008738d0
//
// 008738d0  51                   push ecx
// 008738d1  8b442408             mov eax, dword ptr [esp + 8]
// 008738d5  890c24               mov dword ptr [esp], ecx
// 008738d8  85c0                 test eax, eax
// 008738da  7444                 je 0x873920
// 008738dc  53                   push ebx
// 008738dd  56                   push esi
// 008738de  8b715c               mov esi, dword ptr [ecx + 0x5c]
// 008738e1  33db                 xor ebx, ebx
// 008738e3  85f6                 test esi, esi
// 008738e5  7e37                 jle 0x87391e
// 008738e7  8d5154               lea edx, [ecx + 0x54]
// 008738ea  55                   push ebp
// 008738eb  89542414             mov dword ptr [esp + 0x14], edx
// 008738ef  57                   push edi
// 008738f0  85db                 test ebx, ebx
// 008738f2  0f8c03010000         jl 0x8739fb
// 008738f8  3b5a08               cmp ebx, dword ptr [edx + 8]
// 008738fb  0f8dfa000000         jge 0x8739fb
// 00873901  8b7a04               mov edi, dword ptr [edx + 4]
// 00873904  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 00873907  8b6f24               mov ebp, dword ptr [edi + 0x24]
// 0087390a  3b680c               cmp ebp, dword ptr [eax + 0xc]
// 0087390d  7508                 jne 0x873917
// 0087390f  8b6f20               mov ebp, dword ptr [edi + 0x20]
// 00873912  3b6808               cmp ebp, dword ptr [eax + 8]
// 00873915  740d                 je 0x873924
// 00873917  43                   inc ebx
// 00873918  3bde                 cmp ebx, esi
// 0087391a  7cd4                 jl 0x8738f0
// 0087391c  5f                   pop edi
// 0087391d  5d                   pop ebp
// 0087391e  5e                   pop esi
// 0087391f  5b                   pop ebx
// 00873920  59                   pop ecx
// 00873921  c20400               ret 4
// 00873924  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 0087392a  3bc5                 cmp eax, ebp
// 0087392c  751a                 jne 0x873948
// 0087392e  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 00873934  3b4724               cmp eax, dword ptr [edi + 0x24]
// 00873937  750f                 jne 0x873948
// 00873939  6a00                 push 0
// 0087393b  e870e6ffff           call 0x871fb0
// 00873940  8b542418             mov edx, dword ptr [esp + 0x18]
// 00873944  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00873948  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 0087394e  8b2dac19a400         mov ebp, dword ptr [0xa419ac]
// 00873954  8db1a8000000         lea esi, [ecx + 0xa8]
// 0087395a  3b4720               cmp eax, dword ptr [edi + 0x20]
// 0087395d  7536                 jne 0x873995
// 0087395f  8b4624               mov eax, dword ptr [esi + 0x24]
// 00873962  3b4724               cmp eax, dword ptr [edi + 0x24]
// 00873965  752e                 jne 0x873995
// 00873967  8bce                 mov ecx, esi
// 00873969  ff155c27a400         call dword ptr [0xa4275c]
// 0087396f  33c0                 xor eax, eax
// 00873971  8d4e0c               lea ecx, [esi + 0xc]
// 00873974  51                   push ecx
// 00873975  894608               mov dword ptr [esi + 8], eax
// 00873978  894620               mov dword ptr [esi + 0x20], eax
// 0087397b  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 00873982  89461c               mov dword ptr [esi + 0x1c], eax
// 00873985  ffd5                 call ebp
// 00873987  83c628               add esi, 0x28
// 0087398a  56                   push esi
// 0087398b  ffd5                 call ebp
// 0087398d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00873991  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00873995  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0087399b  8db1e0000000         lea esi, [ecx + 0xe0]
// 008739a1  3b4720               cmp eax, dword ptr [edi + 0x20]
// 008739a4  7532                 jne 0x8739d8
// 008739a6  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008739a9  3b4f24               cmp ecx, dword ptr [edi + 0x24]
// 008739ac  752a                 jne 0x8739d8
// 008739ae  8bce                 mov ecx, esi
// 008739b0  ff155c27a400         call dword ptr [0xa4275c]
// 008739b6  33c0                 xor eax, eax
// 008739b8  8d560c               lea edx, [esi + 0xc]
// 008739bb  52                   push edx
// 008739bc  894608               mov dword ptr [esi + 8], eax
// 008739bf  894620               mov dword ptr [esi + 0x20], eax
// 008739c2  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 008739c9  89461c               mov dword ptr [esi + 0x1c], eax
// 008739cc  ffd5                 call ebp
// 008739ce  83c628               add esi, 0x28
// 008739d1  56                   push esi
// 008739d2  ffd5                 call ebp
// 008739d4  8b542418             mov edx, dword ptr [esp + 0x18]
// 008739d8  6a01                 push 1
// 008739da  53                   push ebx
// 008739db  8bca                 mov ecx, edx
// 008739dd  e89e68fbff           call 0x82a280
// 008739e2  8bcf                 mov ecx, edi
// 008739e4  ff15082ea400         call dword ptr [0xa42e08]
// 008739ea  57                   push edi
// 008739eb  e86866f9ff           call 0x80a058
// 008739f0  83c404               add esp, 4
// 008739f3  5f                   pop edi
// 008739f4  5d                   pop ebp
// 008739f5  5e                   pop esi
// 008739f6  5b                   pop ebx
// 008739f7  59                   pop ecx
// 008739f8  c20400               ret 4
// 008739fb  e80a69f9ff           call 0x80a30a
// copied from an identical function in another client (function ?DelTool@CXTPToolTipContextToolTip@@QAEXPAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp