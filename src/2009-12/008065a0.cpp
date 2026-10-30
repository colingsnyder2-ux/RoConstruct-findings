// roc 2009-12 008065a0  unit: CXTPCommandBar  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008065a0
//
// 008065a0  55                   push ebp
// 008065a1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 008065a5  56                   push esi
// 008065a6  8bf1                 mov esi, ecx
// 008065a8  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 008065ae  3bc5                 cmp eax, ebp
// 008065b0  7507                 jne 0x8065b9
// 008065b2  5e                   pop esi
// 008065b3  33c0                 xor eax, eax
// 008065b5  5d                   pop ebp
// 008065b6  c20800               ret 8
// 008065b9  83f8ff               cmp eax, -1
// 008065bc  741e                 je 0x8065dc
// 008065be  50                   push eax
// 008065bf  e89cecffff           call 0x805260
// 008065c4  c786d0000000ffffffff mov dword ptr [esi + 0xd0], 0xffffffff
// 008065ce  8b10                 mov edx, dword ptr [eax]
// 008065d0  8bc8                 mov ecx, eax
// 008065d2  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 008065d8  6a00                 push 0
// 008065da  ffd0                 call eax
// 008065dc  57                   push edi
// 008065dd  83fdff               cmp ebp, -1
// 008065e0  0f84ab000000         je 0x806691
// 008065e6  55                   push ebp
// 008065e7  8bce                 mov ecx, esi
// 008065e9  e872ecffff           call 0x805260
// 008065ee  8bf8                 mov edi, eax
// 008065f0  85ff                 test edi, edi
// 008065f2  7465                 je 0x806659
// 008065f4  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 008065fa  83f8ff               cmp eax, -1
// 008065fd  750f                 jne 0x80660e
// 008065ff  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 00806605  85c9                 test ecx, ecx
// 00806607  7405                 je 0x80660e
// 00806609  e8a2fffeff           call 0x7f65b0
// 0080660e  85c0                 test eax, eax
// 00806610  7447                 je 0x806659
// 00806612  8b16                 mov edx, dword ptr [esi]
// 00806614  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0080661a  53                   push ebx
// 0080661b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0080661f  53                   push ebx
// 00806620  6a00                 push 0
// 00806622  6a02                 push 2
// 00806624  8bce                 mov ecx, esi
// 00806626  89aed0000000         mov dword ptr [esi + 0xd0], ebp
// 0080662c  ffd0                 call eax
// 0080662e  8b16                 mov edx, dword ptr [esi]
// 00806630  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00806636  53                   push ebx
// 00806637  55                   push ebp
// 00806638  8bce                 mov ecx, esi
// 0080663a  ffd0                 call eax
// 0080663c  8b17                 mov edx, dword ptr [edi]
// 0080663e  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 00806644  6a01                 push 1
// 00806646  8bcf                 mov ecx, edi
// 00806648  ffd0                 call eax
// 0080664a  5b                   pop ebx
// 0080664b  85c0                 test eax, eax
// 0080664d  7512                 jne 0x806661
// 0080664f  c786d0000000ffffffff mov dword ptr [esi + 0xd0], 0xffffffff
// 00806659  5f                   pop edi
// 0080665a  5e                   pop esi
// 0080665b  33c0                 xor eax, eax
// 0080665d  5d                   pop ebp
// 0080665e  c20800               ret 8
// 00806661  8bce                 mov ecx, esi
// 00806663  e868deffff           call 0x8044d0
// 00806668  85c0                 test eax, eax
// 0080666a  7425                 je 0x806691
// 0080666c  8b4874               mov ecx, dword ptr [eax + 0x74]
// 0080666f  83792400             cmp dword ptr [ecx + 0x24], 0
// 00806673  741c                 je 0x806691
// 00806675  8b7620               mov esi, dword ptr [esi + 0x20]
// 00806678  85f6                 test esi, esi
// 0080667a  7415                 je 0x806691
// 0080667c  8b152455b600         mov edx, dword ptr [0xb65524]
// 00806682  6a00                 push 0
// 00806684  52                   push edx
// 00806685  6860b60100           push 0x1b660
// 0080668a  56                   push esi
// 0080668b  ff1558cc9800         call dword ptr [0x98cc58]
// 00806691  5f                   pop edi
// 00806692  5e                   pop esi
// 00806693  b801000000           mov eax, 1
// 00806698  5d                   pop ebp
// 00806699  c20800               ret 8
// copied from an identical function in another client (function ?SetPopuped@CXTPCommandBar@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp