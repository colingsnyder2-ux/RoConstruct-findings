// roc 2009-12 008a7b90  unit: CXTRegistryManager  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a7b90
//
// 008a7b90  55                   push ebp
// 008a7b91  8be9                 mov ebp, ecx
// 008a7b93  56                   push esi
// 008a7b94  b91cbbb900           mov ecx, 0xb9bb1c
// 008a7b99  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008a7b9f  84c0                 test al, al
// 008a7ba1  7464                 je 0x8a7c07
// 008a7ba3  8bcd                 mov ecx, ebp
// 008a7ba5  e8c6fbffff           call 0x8a7770
// 008a7baa  85c0                 test eax, eax
// 008a7bac  7442                 je 0x8a7bf0
// 008a7bae  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a7bb2  8b4500               mov eax, dword ptr [ebp]
// 008a7bb5  8b5008               mov edx, dword ptr [eax + 8]
// 008a7bb8  681f000200           push 0x2001f
// 008a7bbd  51                   push ecx
// 008a7bbe  8bcd                 mov ecx, ebp
// 008a7bc0  ffd2                 call edx
// 008a7bc2  8bf0                 mov esi, eax
// 008a7bc4  85f6                 test esi, esi
// 008a7bc6  7428                 je 0x8a7bf0
// 008a7bc8  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a7bcc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a7bd0  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a7bd4  50                   push eax
// 008a7bd5  51                   push ecx
// 008a7bd6  6a03                 push 3
// 008a7bd8  6a00                 push 0
// 008a7bda  52                   push edx
// 008a7bdb  56                   push esi
// 008a7bdc  ff1514b09800         call dword ptr [0x98b014]
// 008a7be2  894510               mov dword ptr [ebp + 0x10], eax
// 008a7be5  56                   push esi
// 008a7be6  85c0                 test eax, eax
// 008a7be8  740d                 je 0x8a7bf7
// 008a7bea  ff1508b09800         call dword ptr [0x98b008]
// 008a7bf0  5e                   pop esi
// 008a7bf1  33c0                 xor eax, eax
// 008a7bf3  5d                   pop ebp
// 008a7bf4  c21000               ret 0x10
// 008a7bf7  ff1508b09800         call dword ptr [0x98b008]
// 008a7bfd  5e                   pop esi
// 008a7bfe  b801000000           mov eax, 1
// 008a7c03  5d                   pop ebp
// 008a7c04  c21000               ret 0x10
// 008a7c07  57                   push edi
// 008a7c08  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008a7c0c  8d443f01             lea eax, [edi + edi + 1]
// 008a7c10  50                   push eax
// 008a7c11  e82cbff4ff           call 0x7f3b42
// 008a7c16  8bf0                 mov esi, eax
// 008a7c18  83c404               add esp, 4
// 008a7c1b  33c0                 xor eax, eax
// 008a7c1d  85ff                 test edi, edi
// 008a7c1f  7624                 jbe 0x8a7c45
// 008a7c21  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a7c25  0fb61408             movzx edx, byte ptr [eax + ecx]
// 008a7c29  80e20f               and dl, 0xf
// 008a7c2c  80c241               add dl, 0x41
// 008a7c2f  881446               mov byte ptr [esi + eax*2], dl
// 008a7c32  0fb61408             movzx edx, byte ptr [eax + ecx]
// 008a7c36  c0ea04               shr dl, 4
// 008a7c39  80c241               add dl, 0x41
// 008a7c3c  88544601             mov byte ptr [esi + eax*2 + 1], dl
// 008a7c40  40                   inc eax
// 008a7c41  3bc7                 cmp eax, edi
// 008a7c43  72e0                 jb 0x8a7c25
// 008a7c45  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a7c49  c6044600             mov byte ptr [esi + eax*2], 0
// 008a7c4d  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a7c51  56                   push esi
// 008a7c52  50                   push eax
// 008a7c53  51                   push ecx
// 008a7c54  8bcd                 mov ecx, ebp
// 008a7c56  e875fcffff           call 0x8a78d0
// 008a7c5b  56                   push esi
// 008a7c5c  8bf8                 mov edi, eax
// 008a7c5e  e8a3bef4ff           call 0x7f3b06
// 008a7c63  83c404               add esp, 4
// 008a7c66  8bc7                 mov eax, edi
// 008a7c68  5f                   pop edi
// 008a7c69  5e                   pop esi
// 008a7c6a  5d                   pop ebp
// 008a7c6b  c21000               ret 0x10
// copied from an identical function in another client (function ?WriteProfileBinary@CXTRegistryManager@@QAEHPBD0PAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp