// roc 2009-12 008f0b80  unit: CXTPRibbonControlTab  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0b80
//
// 008f0b80  56                   push esi
// 008f0b81  57                   push edi
// 008f0b82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008f0b86  8bf1                 mov esi, ecx
// 008f0b88  3bbea4000000         cmp edi, dword ptr [esi + 0xa4]
// 008f0b8e  7507                 jne 0x8f0b97
// 008f0b90  5f                   pop edi
// 008f0b91  33c0                 xor eax, eax
// 008f0b93  5e                   pop esi
// 008f0b94  c20400               ret 4
// 008f0b97  83ff02               cmp edi, 2
// 008f0b9a  7405                 je 0x8f0ba1
// 008f0b9c  83ff03               cmp edi, 3
// 008f0b9f  751d                 jne 0x8f0bbe
// 008f0ba1  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008f0ba7  e83446faff           call 0x8951e0
// 008f0bac  85c0                 test eax, eax
// 008f0bae  750e                 jne 0x8f0bbe
// 008f0bb0  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008f0bb6  50                   push eax
// 008f0bb7  6aff                 push -1
// 008f0bb9  e8e259f1ff           call 0x8065a0
// 008f0bbe  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008f0bc4  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 008f0bca  8b01                 mov eax, dword ptr [ecx]
// 008f0bcc  8b9090010000         mov edx, dword ptr [eax + 0x190]
// 008f0bd2  56                   push esi
// 008f0bd3  57                   push edi
// 008f0bd4  ffd2                 call edx
// 008f0bd6  83ff02               cmp edi, 2
// 008f0bd9  7405                 je 0x8f0be0
// 008f0bdb  83ff03               cmp edi, 3
// 008f0bde  750b                 jne 0x8f0beb
// 008f0be0  8b06                 mov eax, dword ptr [esi]
// 008f0be2  8b5070               mov edx, dword ptr [eax + 0x70]
// 008f0be5  6a01                 push 1
// 008f0be7  8bce                 mov ecx, esi
// 008f0be9  ffd2                 call edx
// 008f0beb  85ff                 test edi, edi
// 008f0bed  754c                 jne 0x8f0c3b
// 008f0bef  8b06                 mov eax, dword ptr [esi]
// 008f0bf1  8b5070               mov edx, dword ptr [eax + 0x70]
// 008f0bf4  57                   push edi
// 008f0bf5  8bce                 mov ecx, esi
// 008f0bf7  ffd2                 call edx
// 008f0bf9  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008f0bff  83c9ff               or ecx, 0xffffffff
// 008f0c02  0bd1                 or edx, ecx
// 008f0c04  85c0                 test eax, eax
// 008f0c06  7518                 jne 0x8f0c20
// 008f0c08  52                   push edx
// 008f0c09  51                   push ecx
// 008f0c0a  50                   push eax
// 008f0c0b  8d8e84010000         lea ecx, [esi + 0x184]
// 008f0c11  e82aeefdff           call 0x8cfa40
// 008f0c16  5f                   pop edi
// 008f0c17  b801000000           mov eax, 1
// 008f0c1c  5e                   pop esi
// 008f0c1d  c20400               ret 4
// 008f0c20  8b4020               mov eax, dword ptr [eax + 0x20]
// 008f0c23  52                   push edx
// 008f0c24  51                   push ecx
// 008f0c25  50                   push eax
// 008f0c26  8d8e84010000         lea ecx, [esi + 0x184]
// 008f0c2c  e80feefdff           call 0x8cfa40
// 008f0c31  5f                   pop edi
// 008f0c32  b801000000           mov eax, 1
// 008f0c37  5e                   pop esi
// 008f0c38  c20400               ret 4
// 008f0c3b  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008f0c41  53                   push ebx
// 008f0c42  8b9e84000000         mov ebx, dword ptr [esi + 0x84]
// 008f0c48  85c0                 test eax, eax
// 008f0c4a  7504                 jne 0x8f0c50
// 008f0c4c  33ff                 xor edi, edi
// 008f0c4e  eb03                 jmp 0x8f0c53
// 008f0c50  8b7820               mov edi, dword ptr [eax + 0x20]
// 008f0c53  8d8e84010000         lea ecx, [esi + 0x184]
// 008f0c59  e8c2d6fdff           call 0x8ce320
// 008f0c5e  40                   inc eax
// 008f0c5f  50                   push eax
// 008f0c60  53                   push ebx
// 008f0c61  57                   push edi
// 008f0c62  6805800000           push 0x8005
// 008f0c67  8d4e20               lea ecx, [esi + 0x20]
// 008f0c6a  e821adf4ff           call 0x83b990
// 008f0c6f  5b                   pop ebx
// 008f0c70  5f                   pop edi
// 008f0c71  b801000000           mov eax, 1
// 008f0c76  5e                   pop esi
// 008f0c77  c20400               ret 4
// copied from an identical function in another client (function ?OnSetSelected@CXTPRibbonControlTab@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp