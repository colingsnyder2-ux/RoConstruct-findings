// roc 2009-12 008e9d10  unit: CXTPRibbonGroup  size: 469 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9d10
//
// 008e9d10  6aff                 push -1
// 008e9d12  6852649600           push 0x966452
// 008e9d17  64a100000000         mov eax, dword ptr fs:[0]
// 008e9d1d  50                   push eax
// 008e9d1e  83ec0c               sub esp, 0xc
// 008e9d21  53                   push ebx
// 008e9d22  55                   push ebp
// 008e9d23  56                   push esi
// 008e9d24  57                   push edi
// 008e9d25  a10052b600           mov eax, dword ptr [0xb65200]
// 008e9d2a  33c4                 xor eax, esp
// 008e9d2c  50                   push eax
// 008e9d2d  8d442420             lea eax, [esp + 0x20]
// 008e9d31  64a300000000         mov dword ptr fs:[0], eax
// 008e9d37  8bf1                 mov esi, ecx
// 008e9d39  8b6e68               mov ebp, dword ptr [esi + 0x68]
// 008e9d3c  8b4658               mov eax, dword ptr [esi + 0x58]
// 008e9d3f  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 008e9d45  55                   push ebp
// 008e9d46  e855d5f5ff           call 0x8472a0
// 008e9d4b  8b1d0cb29800         mov ebx, dword ptr [0x98b20c]
// 008e9d51  8d4d04               lea ecx, [ebp + 4]
// 008e9d54  51                   push ecx
// 008e9d55  ffd3                 call ebx
// 008e9d57  8bce                 mov ecx, esi
// 008e9d59  e802f8ffff           call 0x8e9560
// 008e9d5e  f7d8                 neg eax
// 008e9d60  1bc0                 sbb eax, eax
// 008e9d62  83c001               add eax, 1
// 008e9d65  7417                 je 0x8e9d7e
// 008e9d67  8b85d0000000         mov eax, dword ptr [ebp + 0xd0]
// 008e9d6d  8b5500               mov edx, dword ptr [ebp]
// 008e9d70  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 008e9d76  0d80000000           or eax, 0x80
// 008e9d7b  50                   push eax
// 008e9d7c  eb16                 jmp 0x8e9d94
// 008e9d7e  8b8dd0000000         mov ecx, dword ptr [ebp + 0xd0]
// 008e9d84  8b4500               mov eax, dword ptr [ebp]
// 008e9d87  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008e9d8d  81e17fffffff         and ecx, 0xffffff7f
// 008e9d93  51                   push ecx
// 008e9d94  8bcd                 mov ecx, ebp
// 008e9d96  ffd2                 call edx
// 008e9d98  8b4660               mov eax, dword ptr [esi + 0x60]
// 008e9d9b  50                   push eax
// 008e9d9c  8bcd                 mov ecx, ebp
// 008e9d9e  e84dc0f0ff           call 0x7f5df0
// 008e9da3  8b7e6c               mov edi, dword ptr [esi + 0x6c]
// 008e9da6  8b4658               mov eax, dword ptr [esi + 0x58]
// 008e9da9  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 008e9daf  57                   push edi
// 008e9db0  e8ebd4f5ff           call 0x8472a0
// 008e9db5  8d4c2418             lea ecx, [esp + 0x18]
// 008e9db9  51                   push ecx
// 008e9dba  8bce                 mov ecx, esi
// 008e9dbc  e8af41feff           call 0x8cdf70
// 008e9dc1  8bc8                 mov ecx, eax
// 008e9dc3  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008e9dcb  ff1580de9800         call dword ptr [0x98de80]
// 008e9dd1  50                   push eax
// 008e9dd2  8bcf                 mov ecx, edi
// 008e9dd4  e857c9f0ff           call 0x7f6730
// 008e9dd9  8d4c2418             lea ecx, [esp + 0x18]
// 008e9ddd  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 008e9de5  ff15c0de9800         call dword ptr [0x98dec0]
// 008e9deb  6a00                 push 0
// 008e9ded  8d8fec000000         lea ecx, [edi + 0xec]
// 008e9df3  ff155cde9800         call dword ptr [0x98de5c]
// 008e9df9  8d5704               lea edx, [edi + 4]
// 008e9dfc  52                   push edx
// 008e9dfd  ffd3                 call ebx
// 008e9dff  8bce                 mov ecx, esi
// 008e9e01  e85af7ffff           call 0x8e9560
// 008e9e06  8b8fd0000000         mov ecx, dword ptr [edi + 0xd0]
// 008e9e0c  f7d8                 neg eax
// 008e9e0e  1bc0                 sbb eax, eax
// 008e9e10  83c001               add eax, 1
// 008e9e13  8b07                 mov eax, dword ptr [edi]
// 008e9e15  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008e9e1b  7408                 je 0x8e9e25
// 008e9e1d  81c980000000         or ecx, 0x80
// 008e9e23  eb06                 jmp 0x8e9e2b
// 008e9e25  81e17fffffff         and ecx, 0xffffff7f
// 008e9e2b  51                   push ecx
// 008e9e2c  8bcf                 mov ecx, edi
// 008e9e2e  ffd2                 call edx
// 008e9e30  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008e9e33  e898a6f1ff           call 0x8044d0
// 008e9e38  85c0                 test eax, eax
// 008e9e3a  0f8491000000         je 0x8e9ed1
// 008e9e40  83786800             cmp dword ptr [eax + 0x68], 0
// 008e9e44  0f8487000000         je 0x8e9ed1
// 008e9e4a  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008e9e4d  51                   push ecx
// 008e9e4e  8bc8                 mov ecx, eax
// 008e9e50  e80ba2f2ff           call 0x814060
// 008e9e55  8bd8                 mov ebx, eax
// 008e9e57  8d442418             lea eax, [esp + 0x18]
// 008e9e5b  50                   push eax
// 008e9e5c  8bcb                 mov ecx, ebx
// 008e9e5e  e89de2b3ff           call 0x428100
// 008e9e63  8bc8                 mov ecx, eax
// 008e9e65  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008e9e6b  8d4c2418             lea ecx, [esp + 0x18]
// 008e9e6f  88442417             mov byte ptr [esp + 0x17], al
// 008e9e73  ff15c0de9800         call dword ptr [0x98dec0]
// 008e9e79  807c241700           cmp byte ptr [esp + 0x17], 0
// 008e9e7e  7436                 je 0x8e9eb6
// 008e9e80  8d4c241c             lea ecx, [esp + 0x1c]
// 008e9e84  51                   push ecx
// 008e9e85  8bce                 mov ecx, esi
// 008e9e87  e8e440feff           call 0x8cdf70
// 008e9e8c  8bc8                 mov ecx, eax
// 008e9e8e  c744242801000000     mov dword ptr [esp + 0x28], 1
// 008e9e96  ff1580de9800         call dword ptr [0x98de80]
// 008e9e9c  50                   push eax
// 008e9e9d  8bcb                 mov ecx, ebx
// 008e9e9f  e86cdef0ff           call 0x7f7d10
// 008e9ea4  8d4c241c             lea ecx, [esp + 0x1c]
// 008e9ea8  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 008e9eb0  ff15c0de9800         call dword ptr [0x98dec0]
// 008e9eb6  8b17                 mov edx, dword ptr [edi]
// 008e9eb8  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 008e9ebe  53                   push ebx
// 008e9ebf  8bcf                 mov ecx, edi
// 008e9ec1  ffd0                 call eax
// 008e9ec3  8b5500               mov edx, dword ptr [ebp]
// 008e9ec6  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 008e9ecc  53                   push ebx
// 008e9ecd  8bcd                 mov ecx, ebp
// 008e9ecf  ffd0                 call eax
// 008e9ed1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008e9ed5  64890d00000000       mov dword ptr fs:[0], ecx
// 008e9edc  59                   pop ecx
// 008e9edd  5f                   pop edi
// 008e9ede  5e                   pop esi
// 008e9edf  5d                   pop ebp
// 008e9ee0  5b                   pop ebx
// 008e9ee1  83c418               add esp, 0x18
// 008e9ee4  c3                   ret 
// copied from an identical function in another client (function ?OnGroupAdded@CXTPRibbonGroup@@MAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Ribbon\XTPRibbonGroup.cpp