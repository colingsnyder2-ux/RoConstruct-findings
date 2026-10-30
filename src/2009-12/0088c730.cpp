// roc 2009-12 0088c730  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 745 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088c730
//
// 0088c730  6aff                 push -1
// 0088c732  68a98e9500           push 0x958ea9
// 0088c737  64a100000000         mov eax, dword ptr fs:[0]
// 0088c73d  50                   push eax
// 0088c73e  51                   push ecx
// 0088c73f  53                   push ebx
// 0088c740  56                   push esi
// 0088c741  57                   push edi
// 0088c742  a10052b600           mov eax, dword ptr [0xb65200]
// 0088c747  33c4                 xor eax, esp
// 0088c749  50                   push eax
// 0088c74a  8d442414             lea eax, [esp + 0x14]
// 0088c74e  64a300000000         mov dword ptr fs:[0], eax
// 0088c754  8bf1                 mov esi, ecx
// 0088c756  8d442410             lea eax, [esp + 0x10]
// 0088c75a  50                   push eax
// 0088c75b  e890fcffff           call 0x88c3f0
// 0088c760  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 0088c767  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0088c76f  7515                 jne 0x88c786
// 0088c771  8b16                 mov edx, dword ptr [esi]
// 0088c773  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0088c779  8bce                 mov ecx, esi
// 0088c77b  ffd0                 call eax
// 0088c77d  898674010000         mov dword ptr [esi + 0x174], eax
// 0088c783  897060               mov dword ptr [eax + 0x60], esi
// 0088c786  83be8801000000       cmp dword ptr [esi + 0x188], 0
// 0088c78d  7421                 je 0x88c7b0
// 0088c78f  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088c795  85c9                 test ecx, ecx
// 0088c797  7417                 je 0x88c7b0
// 0088c799  83792000             cmp dword ptr [ecx + 0x20], 0
// 0088c79d  7411                 je 0x88c7b0
// 0088c79f  8b11                 mov edx, dword ptr [ecx]
// 0088c7a1  8b4268               mov eax, dword ptr [edx + 0x68]
// 0088c7a4  ffd0                 call eax
// 0088c7a6  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 0088c7b0  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088c7b6  85c9                 test ecx, ecx
// 0088c7b8  741f                 je 0x88c7d9
// 0088c7ba  83792000             cmp dword ptr [ecx + 0x20], 0
// 0088c7be  7419                 je 0x88c7d9
// 0088c7c0  e8b39c0900           call 0x926478
// 0088c7c5  a900004000           test eax, 0x400000
// 0088c7ca  740d                 je 0x88c7d9
// 0088c7cc  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088c7d2  8b11                 mov edx, dword ptr [ecx]
// 0088c7d4  8b4268               mov eax, dword ptr [edx + 0x68]
// 0088c7d7  ffd0                 call eax
// 0088c7d9  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0088c7df  8b1dbccb9800         mov ebx, dword ptr [0x98cbbc]
// 0088c7e5  85c0                 test eax, eax
// 0088c7e7  7427                 je 0x88c810
// 0088c7e9  83782000             cmp dword ptr [eax + 0x20], 0
// 0088c7ed  7421                 je 0x88c810
// 0088c7ef  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0088c7f2  51                   push ecx
// 0088c7f3  ffd3                 call ebx
// 0088c7f5  50                   push eax
// 0088c7f6  e82f73f6ff           call 0x7f3b2a
// 0088c7fb  3b8600010000         cmp eax, dword ptr [esi + 0x100]
// 0088c801  740d                 je 0x88c810
// 0088c803  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088c809  8b11                 mov edx, dword ptr [ecx]
// 0088c80b  8b4268               mov eax, dword ptr [edx + 0x68]
// 0088c80e  ffd0                 call eax
// 0088c810  8d4c2424             lea ecx, [esp + 0x24]
// 0088c814  51                   push ecx
// 0088c815  8dbec0000000         lea edi, [esi + 0xc0]
// 0088c81b  57                   push edi
// 0088c81c  ff15bcca9800         call dword ptr [0x98cabc]
// 0088c822  85c0                 test eax, eax
// 0088c824  7443                 je 0x88c869
// 0088c826  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0088c82c  85c0                 test eax, eax
// 0088c82e  7406                 je 0x88c836
// 0088c830  83782000             cmp dword ptr [eax + 0x20], 0
// 0088c834  7433                 je 0x88c869
// 0088c836  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 0088c83d  752a                 jne 0x88c869
// 0088c83f  85c0                 test eax, eax
// 0088c841  0f84b3010000         je 0x88c9fa
// 0088c847  83782000             cmp dword ptr [eax + 0x20], 0
// 0088c84b  0f84a9010000         je 0x88c9fa
// 0088c851  8b5020               mov edx, dword ptr [eax + 0x20]
// 0088c854  52                   push edx
// 0088c855  ffd3                 call ebx
// 0088c857  50                   push eax
// 0088c858  e8cd72f6ff           call 0x7f3b2a
// 0088c85d  3b8600010000         cmp eax, dword ptr [esi + 0x100]
// 0088c863  0f8491010000         je 0x88c9fa
// 0088c869  8b442424             mov eax, dword ptr [esp + 0x24]
// 0088c86d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088c871  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0088c875  8907                 mov dword ptr [edi], eax
// 0088c877  8b442430             mov eax, dword ptr [esp + 0x30]
// 0088c87b  894f04               mov dword ptr [edi + 4], ecx
// 0088c87e  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088c884  895708               mov dword ptr [edi + 8], edx
// 0088c887  89470c               mov dword ptr [edi + 0xc], eax
// 0088c88a  85c9                 test ecx, ecx
// 0088c88c  0f845e010000         je 0x88c9f0
// 0088c892  83792000             cmp dword ptr [ecx + 0x20], 0
// 0088c896  7559                 jne 0x88c8f1
// 0088c898  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0088c89e  8b11                 mov edx, dword ptr [ecx]
// 0088c8a0  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 0088c8a6  50                   push eax
// 0088c8a7  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 0088c8ad  0d80000040           or eax, 0x40000080
// 0088c8b2  50                   push eax
// 0088c8b3  ffd2                 call edx
// 0088c8b5  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0088c8bb  83f8ff               cmp eax, -1
// 0088c8be  750f                 jne 0x88c8cf
// 0088c8c0  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0088c8c6  85c9                 test ecx, ecx
// 0088c8c8  7405                 je 0x88c8cf
// 0088c8ca  e8e19cf6ff           call 0x7f65b0
// 0088c8cf  85c0                 test eax, eax
// 0088c8d1  750c                 jne 0x88c8df
// 0088c8d3  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088c8d9  50                   push eax
// 0088c8da  e8ff75f6ff           call 0x7f3ede
// 0088c8df  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 0088c8e5  85c0                 test eax, eax
// 0088c8e7  7408                 je 0x88c8f1
// 0088c8e9  50                   push eax
// 0088c8ea  8bce                 mov ecx, esi
// 0088c8ec  e86fedffff           call 0x88b660
// 0088c8f1  8bce                 mov ecx, esi
// 0088c8f3  e84896f6ff           call 0x7f5f40
// 0088c8f8  05a4000000           add eax, 0xa4
// 0088c8fd  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088c903  7504                 jne 0x88c909
// 0088c905  33c0                 xor eax, eax
// 0088c907  eb03                 jmp 0x88c90c
// 0088c909  8b4004               mov eax, dword ptr [eax + 4]
// 0088c90c  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 0088c912  6a00                 push 0
// 0088c914  50                   push eax
// 0088c915  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0088c918  6a30                 push 0x30
// 0088c91a  50                   push eax
// 0088c91b  ffd7                 call edi
// 0088c91d  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088c923  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0088c926  6a00                 push 0
// 0088c928  6a03                 push 3
// 0088c92a  68d3000000           push 0xd3
// 0088c92f  52                   push edx
// 0088c930  ffd7                 call edi
// 0088c932  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088c938  e883eaffff           call 0x88b3c0
// 0088c93d  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0088c943  85c0                 test eax, eax
// 0088c945  7504                 jne 0x88c94b
// 0088c947  33db                 xor ebx, ebx
// 0088c949  eb03                 jmp 0x88c94e
// 0088c94b  8b5820               mov ebx, dword ptr [eax + 0x20]
// 0088c94e  ff15eccb9800         call dword ptr [0x98cbec]
// 0088c954  3bd8                 cmp ebx, eax
// 0088c956  740c                 je 0x88c964
// 0088c958  8d442410             lea eax, [esp + 0x10]
// 0088c95c  50                   push eax
// 0088c95d  8bce                 mov ecx, esi
// 0088c95f  e83cfbffff           call 0x88c4a0
// 0088c964  8bce                 mov ecx, esi
// 0088c966  e85554feff           call 0x871dc0
// 0088c96b  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088c971  894158               mov dword ptr [ecx + 0x58], eax
// 0088c974  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 0088c97a  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0088c980  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0088c983  6a00                 push 0
// 0088c985  52                   push edx
// 0088c986  68cf000000           push 0xcf
// 0088c98b  51                   push ecx
// 0088c98c  ffd7                 call edi
// 0088c98e  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0088c992  8b8eac010000         mov ecx, dword ptr [esi + 0x1ac]
// 0088c998  8b442424             mov eax, dword ptr [esp + 0x24]
// 0088c99c  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 0088c9a2  83c703               add edi, 3
// 0088c9a5  f7d9                 neg ecx
// 0088c9a7  1bc9                 sbb ecx, ecx
// 0088c9a9  83e111               and ecx, 0x11
// 0088c9ac  8d541004             lea edx, [eax + edx + 4]
// 0088c9b0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088c9b4  bbfdffffff           mov ebx, 0xfffffffd
// 0088c9b9  2bd9                 sub ebx, ecx
// 0088c9bb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088c9bf  83e903               sub ecx, 3
// 0088c9c2  6a01                 push 1
// 0088c9c4  03c3                 add eax, ebx
// 0088c9c6  894c2434             mov dword ptr [esp + 0x34], ecx
// 0088c9ca  2bcf                 sub ecx, edi
// 0088c9cc  51                   push ecx
// 0088c9cd  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088c9d3  89442434             mov dword ptr [esp + 0x34], eax
// 0088c9d7  2bc2                 sub eax, edx
// 0088c9d9  50                   push eax
// 0088c9da  57                   push edi
// 0088c9db  52                   push edx
// 0088c9dc  89542438             mov dword ptr [esp + 0x38], edx
// 0088c9e0  897c243c             mov dword ptr [esp + 0x3c], edi
// 0088c9e4  e84972f6ff           call 0x7f3c32
// 0088c9e9  8bce                 mov ecx, esi
// 0088c9eb  e880edffff           call 0x88b770
// 0088c9f0  c7868401000000000000 mov dword ptr [esi + 0x184], 0
// 0088c9fa  8d4c2410             lea ecx, [esp + 0x10]
// 0088c9fe  ff15c0de9800         call dword ptr [0x98dec0]
// 0088ca04  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088ca08  64890d00000000       mov dword ptr fs:[0], ecx
// 0088ca0f  59                   pop ecx
// 0088ca10  5f                   pop edi
// 0088ca11  5e                   pop esi
// 0088ca12  5b                   pop ebx
// 0088ca13  83c410               add esp, 0x10
// 0088ca16  c21000               ret 0x10
// copied from an identical function in another client (function ?SetRect@CXTPControlEdit@@MAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp