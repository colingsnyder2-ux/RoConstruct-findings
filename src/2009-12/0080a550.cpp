// roc 2009-12 0080a550  unit: CXTPImageManagerResource::CBitmapDC  size: 673 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080a550
//
// 0080a550  6aff                 push -1
// 0080a552  68e84d9600           push 0x964de8
// 0080a557  64a100000000         mov eax, dword ptr fs:[0]
// 0080a55d  50                   push eax
// 0080a55e  83ec30               sub esp, 0x30
// 0080a561  53                   push ebx
// 0080a562  55                   push ebp
// 0080a563  56                   push esi
// 0080a564  57                   push edi
// 0080a565  a10052b600           mov eax, dword ptr [0xb65200]
// 0080a56a  33c4                 xor eax, esp
// 0080a56c  50                   push eax
// 0080a56d  8d442444             lea eax, [esp + 0x44]
// 0080a571  64a300000000         mov dword ptr fs:[0], eax
// 0080a577  8b442454             mov eax, dword ptr [esp + 0x54]
// 0080a57b  33ed                 xor ebp, ebp
// 0080a57d  55                   push ebp
// 0080a57e  6880000000           push 0x80
// 0080a583  6a03                 push 3
// 0080a585  55                   push ebp
// 0080a586  55                   push ebp
// 0080a587  6800000080           push 0x80000000
// 0080a58c  50                   push eax
// 0080a58d  ff1574b29800         call dword ptr [0x98b274]
// 0080a593  8bd8                 mov ebx, eax
// 0080a595  895c2420             mov dword ptr [esp + 0x20], ebx
// 0080a599  83fbff               cmp ebx, -1
// 0080a59c  0f8439020000         je 0x80a7db
// 0080a5a2  8b3518b39800         mov esi, dword ptr [0x98b318]
// 0080a5a8  55                   push ebp
// 0080a5a9  8d4c2418             lea ecx, [esp + 0x18]
// 0080a5ad  51                   push ecx
// 0080a5ae  6a06                 push 6
// 0080a5b0  8d542438             lea edx, [esp + 0x38]
// 0080a5b4  52                   push edx
// 0080a5b5  53                   push ebx
// 0080a5b6  896c2428             mov dword ptr [esp + 0x28], ebp
// 0080a5ba  ffd6                 call esi
// 0080a5bc  85c0                 test eax, eax
// 0080a5be  0f8410020000         je 0x80a7d4
// 0080a5c4  837c241406           cmp dword ptr [esp + 0x14], 6
// 0080a5c9  0f8505020000         jne 0x80a7d4
// 0080a5cf  66837c242e01         cmp word ptr [esp + 0x2e], 1
// 0080a5d5  0f85f9010000         jne 0x80a7d4
// 0080a5db  668b442430           mov ax, word ptr [esp + 0x30]
// 0080a5e0  663bc5               cmp ax, bp
// 0080a5e3  0f84eb010000         je 0x80a7d4
// 0080a5e9  0fb7c0               movzx eax, ax
// 0080a5ec  c1e004               shl eax, 4
// 0080a5ef  50                   push eax
// 0080a5f0  ff1578b79800         call dword ptr [0x98b778]
// 0080a5f6  8bf8                 mov edi, eax
// 0080a5f8  83c404               add esp, 4
// 0080a5fb  897c2424             mov dword ptr [esp + 0x24], edi
// 0080a5ff  3bfd                 cmp edi, ebp
// 0080a601  0f84cd010000         je 0x80a7d4
// 0080a607  0fb7542430           movzx edx, word ptr [esp + 0x30]
// 0080a60c  55                   push ebp
// 0080a60d  8d4c2418             lea ecx, [esp + 0x18]
// 0080a611  51                   push ecx
// 0080a612  c1e204               shl edx, 4
// 0080a615  52                   push edx
// 0080a616  57                   push edi
// 0080a617  53                   push ebx
// 0080a618  ffd6                 call esi
// 0080a61a  85c0                 test eax, eax
// 0080a61c  0f84a8010000         je 0x80a7ca
// 0080a622  0fb7442430           movzx eax, word ptr [esp + 0x30]
// 0080a627  8bc8                 mov ecx, eax
// 0080a629  c1e104               shl ecx, 4
// 0080a62c  394c2414             cmp dword ptr [esp + 0x14], ecx
// 0080a630  0f8594010000         jne 0x80a7ca
// 0080a636  3bc5                 cmp eax, ebp
// 0080a638  896c2428             mov dword ptr [esp + 0x28], ebp
// 0080a63c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0080a640  0f8e5b010000         jle 0x80a7a1
// 0080a646  83c708               add edi, 8
// 0080a649  8da42400000000       lea esp, [esp]
// 0080a650  66837ffe20           cmp word ptr [edi - 2], 0x20
// 0080a655  0f85f6000000         jne 0x80a751
// 0080a65b  0fb657f8             movzx edx, byte ptr [edi - 8]
// 0080a65f  8b442458             mov eax, dword ptr [esp + 0x58]
// 0080a663  3bd0                 cmp edx, eax
// 0080a665  7408                 je 0x80a66f
// 0080a667  3bc5                 cmp eax, ebp
// 0080a669  0f85e2000000         jne 0x80a751
// 0080a66f  8b4704               mov eax, dword ptr [edi + 4]
// 0080a672  55                   push ebp
// 0080a673  55                   push ebp
// 0080a674  50                   push eax
// 0080a675  53                   push ebx
// 0080a676  ff151cb39800         call dword ptr [0x98b31c]
// 0080a67c  85c0                 test eax, eax
// 0080a67e  0f84cd000000         je 0x80a751
// 0080a684  8b0f                 mov ecx, dword ptr [edi]
// 0080a686  51                   push ecx
// 0080a687  ff1578b79800         call dword ptr [0x98b778]
// 0080a68d  8bf0                 mov esi, eax
// 0080a68f  83c404               add esp, 4
// 0080a692  3bf5                 cmp esi, ebp
// 0080a694  0f84b7000000         je 0x80a751
// 0080a69a  55                   push ebp
// 0080a69b  8d542418             lea edx, [esp + 0x18]
// 0080a69f  52                   push edx
// 0080a6a0  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0080a6a4  8b07                 mov eax, dword ptr [edi]
// 0080a6a6  50                   push eax
// 0080a6a7  56                   push esi
// 0080a6a8  53                   push ebx
// 0080a6a9  ff1518b39800         call dword ptr [0x98b318]
// 0080a6af  3bc5                 cmp eax, ebp
// 0080a6b1  0f8490000000         je 0x80a747
// 0080a6b7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080a6bb  3b0f                 cmp ecx, dword ptr [edi]
// 0080a6bd  0f8584000000         jne 0x80a747
// 0080a6c3  66837e0e20           cmp word ptr [esi + 0xe], 0x20
// 0080a6c8  757d                 jne 0x80a747
// 0080a6ca  8d4c2434             lea ecx, [esp + 0x34]
// 0080a6ce  e8dbbd1100           call 0x9264ae
// 0080a6d3  55                   push ebp
// 0080a6d4  896c2450             mov dword ptr [esp + 0x50], ebp
// 0080a6d8  ff1554b19800         call dword ptr [0x98b154]
// 0080a6de  50                   push eax
// 0080a6df  8d4c2438             lea ecx, [esp + 0x38]
// 0080a6e3  e8b4bd1100           call 0x92649c
// 0080a6e8  8b4608               mov eax, dword ptr [esi + 8]
// 0080a6eb  99                   cdq 
// 0080a6ec  2bc2                 sub eax, edx
// 0080a6ee  8b5604               mov edx, dword ptr [esi + 4]
// 0080a6f1  d1f8                 sar eax, 1
// 0080a6f3  0fafd0               imul edx, eax
// 0080a6f6  55                   push ebp
// 0080a6f7  894608               mov dword ptr [esi + 8], eax
// 0080a6fa  55                   push ebp
// 0080a6fb  8d442420             lea eax, [esp + 0x20]
// 0080a6ff  50                   push eax
// 0080a700  03d2                 add edx, edx
// 0080a702  03d2                 add edx, edx
// 0080a704  55                   push ebp
// 0080a705  895614               mov dword ptr [esi + 0x14], edx
// 0080a708  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0080a70c  56                   push esi
// 0080a70d  51                   push ecx
// 0080a70e  896c2430             mov dword ptr [esp + 0x30], ebp
// 0080a712  ff1560b19800         call dword ptr [0x98b160]
// 0080a718  8bd8                 mov ebx, eax
// 0080a71a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0080a71e  3bc5                 cmp eax, ebp
// 0080a720  7404                 je 0x80a726
// 0080a722  3bdd                 cmp ebx, ebp
// 0080a724  7546                 jne 0x80a76c
// 0080a726  56                   push esi
// 0080a727  ff1540b79800         call dword ptr [0x98b740]
// 0080a72d  83c404               add esp, 4
// 0080a730  8d4c2434             lea ecx, [esp + 0x34]
// 0080a734  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0080a73c  e867bd1100           call 0x9264a8
// 0080a741  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0080a745  eb0a                 jmp 0x80a751
// 0080a747  56                   push esi
// 0080a748  ff1540b79800         call dword ptr [0x98b740]
// 0080a74e  83c404               add esp, 4
// 0080a751  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0080a755  0fb7542430           movzx edx, word ptr [esp + 0x30]
// 0080a75a  40                   inc eax
// 0080a75b  83c710               add edi, 0x10
// 0080a75e  3bc2                 cmp eax, edx
// 0080a760  8944241c             mov dword ptr [esp + 0x1c], eax
// 0080a764  0f8ce6feffff         jl 0x80a650
// 0080a76a  eb31                 jmp 0x80a79d
// 0080a76c  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0080a76f  51                   push ecx
// 0080a770  8d5628               lea edx, [esi + 0x28]
// 0080a773  52                   push edx
// 0080a774  50                   push eax
// 0080a775  e896deffff           call 0x808610
// 0080a77a  56                   push esi
// 0080a77b  895c2438             mov dword ptr [esp + 0x38], ebx
// 0080a77f  ff1540b79800         call dword ptr [0x98b740]
// 0080a785  83c410               add esp, 0x10
// 0080a788  8d4c2434             lea ecx, [esp + 0x34]
// 0080a78c  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0080a794  e80fbd1100           call 0x9264a8
// 0080a799  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0080a79d  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0080a7a1  57                   push edi
// 0080a7a2  ff1540b79800         call dword ptr [0x98b740]
// 0080a7a8  83c404               add esp, 4
// 0080a7ab  53                   push ebx
// 0080a7ac  ff155cb29800         call dword ptr [0x98b25c]
// 0080a7b2  8b442428             mov eax, dword ptr [esp + 0x28]
// 0080a7b6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0080a7ba  64890d00000000       mov dword ptr fs:[0], ecx
// 0080a7c1  59                   pop ecx
// 0080a7c2  5f                   pop edi
// 0080a7c3  5e                   pop esi
// 0080a7c4  5d                   pop ebp
// 0080a7c5  5b                   pop ebx
// 0080a7c6  83c43c               add esp, 0x3c
// 0080a7c9  c3                   ret 
// 0080a7ca  57                   push edi
// 0080a7cb  ff1540b79800         call dword ptr [0x98b740]
// 0080a7d1  83c404               add esp, 4
// 0080a7d4  53                   push ebx
// 0080a7d5  ff155cb29800         call dword ptr [0x98b25c]
// 0080a7db  33c0                 xor eax, eax
// 0080a7dd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0080a7e1  64890d00000000       mov dword ptr fs:[0], ecx
// 0080a7e8  59                   pop ecx
// 0080a7e9  5f                   pop edi
// 0080a7ea  5e                   pop esi
// 0080a7eb  5d                   pop ebp
// 0080a7ec  5b                   pop ebx
// 0080a7ed  83c43c               add esp, 0x3c
// 0080a7f0  c3                   ret 
// copied from an identical function in another client (function ?LoadAlphaIcon@CXTPImageManagerIcon@@SAPAUHBITMAP__@@PBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp