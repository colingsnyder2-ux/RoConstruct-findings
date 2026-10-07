// roc 2011-06 0052f0b0  unit: RBX::Network::ProfiledRakPeer  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052f0b0
//
// 0052f0b0  56                   push esi
// 0052f0b1  8bf1                 mov esi, ecx
// 0052f0b3  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0052f0b7  0f8489000000         je 0x52f146
// 0052f0bd  53                   push ebx
// 0052f0be  55                   push ebp
// 0052f0bf  bd01000000           mov ebp, 1
// 0052f0c4  e8a715ffff           call 0x520670
// 0052f0c9  3bc5                 cmp eax, ebp
// 0052f0cb  7211                 jb 0x52f0de
// 0052f0cd  8d4900               lea ecx, [ecx]
// 0052f0d0  03ed                 add ebp, ebp
// 0052f0d2  3be8                 cmp ebp, eax
// 0052f0d4  76fa                 jbe 0x52f0d0
// 0052f0d6  85ed                 test ebp, ebp
// 0052f0d8  7504                 jne 0x52f0de
// 0052f0da  33db                 xor ebx, ebx
// 0052f0dc  eb0b                 jmp 0x52f0e9
// 0052f0de  55                   push ebp
// 0052f0df  e85cb22d00           call 0x80a340
// 0052f0e4  83c404               add esp, 4
// 0052f0e7  8bd8                 mov ebx, eax
// 0052f0e9  57                   push edi
// 0052f0ea  8bce                 mov ecx, esi
// 0052f0ec  33ff                 xor edi, edi
// 0052f0ee  e87d15ffff           call 0x520670
// 0052f0f3  85c0                 test eax, eax
// 0052f0f5  761f                 jbe 0x52f116
// 0052f0f7  8b4604               mov eax, dword ptr [esi + 4]
// 0052f0fa  03c7                 add eax, edi
// 0052f0fc  33d2                 xor edx, edx
// 0052f0fe  f7760c               div dword ptr [esi + 0xc]
// 0052f101  8b06                 mov eax, dword ptr [esi]
// 0052f103  47                   inc edi
// 0052f104  8a0c02               mov cl, byte ptr [edx + eax]
// 0052f107  884c1fff             mov byte ptr [edi + ebx - 1], cl
// 0052f10b  8bce                 mov ecx, esi
// 0052f10d  e85e15ffff           call 0x520670
// 0052f112  3bf8                 cmp edi, eax
// 0052f114  72e1                 jb 0x52f0f7
// 0052f116  8b4e04               mov ecx, dword ptr [esi + 4]
// 0052f119  8b4608               mov eax, dword ptr [esi + 8]
// 0052f11c  5f                   pop edi
// 0052f11d  3bc8                 cmp ecx, eax
// 0052f11f  7704                 ja 0x52f125
// 0052f121  2bc1                 sub eax, ecx
// 0052f123  eb05                 jmp 0x52f12a
// 0052f125  2bc1                 sub eax, ecx
// 0052f127  03460c               add eax, dword ptr [esi + 0xc]
// 0052f12a  8b16                 mov edx, dword ptr [esi]
// 0052f12c  52                   push edx
// 0052f12d  894608               mov dword ptr [esi + 8], eax
// 0052f130  896e0c               mov dword ptr [esi + 0xc], ebp
// 0052f133  c7460400000000       mov dword ptr [esi + 4], 0
// 0052f13a  e8c5b12d00           call 0x80a304
// 0052f13f  83c404               add esp, 4
// 0052f142  5d                   pop ebp
// 0052f143  891e                 mov dword ptr [esi], ebx
// 0052f145  5b                   pop ebx
// 0052f146  5e                   pop esi
// 0052f147  c20800               ret 8
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Compress@?$Queue@_N@DataStructures@@QAEXPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
