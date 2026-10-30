// roc 2009-12 0088c530  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 388 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088c530
//
// 0088c530  56                   push esi
// 0088c531  8bf1                 mov esi, ecx
// 0088c533  8b06                 mov eax, dword ptr [esi]
// 0088c535  8b5074               mov edx, dword ptr [eax + 0x74]
// 0088c538  ffd2                 call edx
// 0088c53a  85c0                 test eax, eax
// 0088c53c  0f846c010000         je 0x88c6ae
// 0088c542  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0088c548  85c0                 test eax, eax
// 0088c54a  0f845e010000         je 0x88c6ae
// 0088c550  83782000             cmp dword ptr [eax + 0x20], 0
// 0088c554  0f8454010000         je 0x88c6ae
// 0088c55a  85c0                 test eax, eax
// 0088c55c  740f                 je 0x88c56d
// 0088c55e  83785400             cmp dword ptr [eax + 0x54], 0
// 0088c562  7409                 je 0x88c56d
// 0088c564  b802000000           mov eax, 2
// 0088c569  5e                   pop esi
// 0088c56a  c20800               ret 8
// 0088c56d  53                   push ebx
// 0088c56e  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0088c572  83fb0d               cmp ebx, 0xd
// 0088c575  0f842c010000         je 0x88c6a7
// 0088c57b  83fb09               cmp ebx, 9
// 0088c57e  0f8423010000         je 0x88c6a7
// 0088c584  83fb1b               cmp ebx, 0x1b
// 0088c587  7530                 jne 0x88c5b9
// 0088c589  8d8694010000         lea eax, [esi + 0x194]
// 0088c58f  50                   push eax
// 0088c590  8bce                 mov ecx, esi
// 0088c592  e809ffffff           call 0x88c4a0
// 0088c597  8b16                 mov edx, dword ptr [esi]
// 0088c599  8b4270               mov eax, dword ptr [edx + 0x70]
// 0088c59c  6a00                 push 0
// 0088c59e  8bce                 mov ecx, esi
// 0088c5a0  ffd0                 call eax
// 0088c5a2  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0088c5a8  33c0                 xor eax, eax
// 0088c5aa  83b9f800000002       cmp dword ptr [ecx + 0xf8], 2
// 0088c5b1  5b                   pop ebx
// 0088c5b2  0f94c0               sete al
// 0088c5b5  5e                   pop esi
// 0088c5b6  c20800               ret 8
// 0088c5b9  57                   push edi
// 0088c5ba  85c0                 test eax, eax
// 0088c5bc  743c                 je 0x88c5fa
// 0088c5be  83782000             cmp dword ptr [eax + 0x20], 0
// 0088c5c2  7436                 je 0x88c5fa
// 0088c5c4  8b3d30cc9800         mov edi, dword ptr [0x98cc30]
// 0088c5ca  6a12                 push 0x12
// 0088c5cc  ffd7                 call edi
// 0088c5ce  6685c0               test ax, ax
// 0088c5d1  7d27                 jge 0x88c5fa
// 0088c5d3  6a11                 push 0x11
// 0088c5d5  ffd7                 call edi
// 0088c5d7  6685c0               test ax, ax
// 0088c5da  7c1e                 jl 0x88c5fa
// 0088c5dc  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0088c5e2  e8e97ef7ff           call 0x8044d0
// 0088c5e7  85c0                 test eax, eax
// 0088c5e9  740f                 je 0x88c5fa
// 0088c5eb  0fbed3               movsx edx, bl
// 0088c5ee  52                   push edx
// 0088c5ef  8bc8                 mov ecx, eax
// 0088c5f1  e81a99f8ff           call 0x815f10
// 0088c5f6  85c0                 test eax, eax
// 0088c5f8  756f                 jne 0x88c669
// 0088c5fa  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 0088c601  7471                 je 0x88c674
// 0088c603  83fb26               cmp ebx, 0x26
// 0088c606  7405                 je 0x88c60d
// 0088c608  83fb28               cmp ebx, 0x28
// 0088c60b  7567                 jne 0x88c674
// 0088c60d  8b06                 mov eax, dword ptr [esi]
// 0088c60f  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 0088c615  33c9                 xor ecx, ecx
// 0088c617  83fb26               cmp ebx, 0x26
// 0088c61a  0f94c1               sete cl
// 0088c61d  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 0088c621  51                   push ecx
// 0088c622  6a01                 push 1
// 0088c624  8bce                 mov ecx, esi
// 0088c626  ffd2                 call edx
// 0088c628  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0088c62e  85c0                 test eax, eax
// 0088c630  7437                 je 0x88c669
// 0088c632  8b7820               mov edi, dword ptr [eax + 0x20]
// 0088c635  ff15eccb9800         call dword ptr [0x98cbec]
// 0088c63b  3bc7                 cmp eax, edi
// 0088c63d  752a                 jne 0x88c669
// 0088c63f  8bb674010000         mov esi, dword ptr [esi + 0x174]
// 0088c645  8b4620               mov eax, dword ptr [esi + 0x20]
// 0088c648  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 0088c64e  6aff                 push -1
// 0088c650  6a00                 push 0
// 0088c652  68b1000000           push 0xb1
// 0088c657  50                   push eax
// 0088c658  ffd7                 call edi
// 0088c65a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0088c65d  6a00                 push 0
// 0088c65f  6a00                 push 0
// 0088c661  68b7000000           push 0xb7
// 0088c666  51                   push ecx
// 0088c667  ffd7                 call edi
// 0088c669  5f                   pop edi
// 0088c66a  5b                   pop ebx
// 0088c66b  b801000000           mov eax, 1
// 0088c670  5e                   pop esi
// 0088c671  c20800               ret 8
// 0088c674  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 0088c67a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0088c67e  85c9                 test ecx, ecx
// 0088c680  740b                 je 0x88c68d
// 0088c682  57                   push edi
// 0088c683  53                   push ebx
// 0088c684  e857caf6ff           call 0x7f90e0
// 0088c689  85c0                 test eax, eax
// 0088c68b  75dc                 jne 0x88c669
// 0088c68d  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088c693  57                   push edi
// 0088c694  53                   push ebx
// 0088c695  e886c8f6ff           call 0x7f8f20
// 0088c69a  f7d8                 neg eax
// 0088c69c  5f                   pop edi
// 0088c69d  1bc0                 sbb eax, eax
// 0088c69f  5b                   pop ebx
// 0088c6a0  83c002               add eax, 2
// 0088c6a3  5e                   pop esi
// 0088c6a4  c20800               ret 8
// 0088c6a7  5b                   pop ebx
// 0088c6a8  33c0                 xor eax, eax
// 0088c6aa  5e                   pop esi
// 0088c6ab  c20800               ret 8
// 0088c6ae  33c0                 xor eax, eax
// 0088c6b0  5e                   pop esi
// 0088c6b1  c20800               ret 8
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPControlEdit@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp