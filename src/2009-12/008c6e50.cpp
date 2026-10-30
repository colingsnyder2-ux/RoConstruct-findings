// roc 2009-12 008c6e50  unit: VCEdit::?$CXTMaskEditT  size: 570 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6e50
//
// 008c6e50  6aff                 push -1
// 008c6e52  68d2469600           push 0x9646d2
// 008c6e57  64a100000000         mov eax, dword ptr fs:[0]
// 008c6e5d  50                   push eax
// 008c6e5e  83ec1c               sub esp, 0x1c
// 008c6e61  53                   push ebx
// 008c6e62  55                   push ebp
// 008c6e63  56                   push esi
// 008c6e64  57                   push edi
// 008c6e65  a10052b600           mov eax, dword ptr [0xb65200]
// 008c6e6a  33c4                 xor eax, esp
// 008c6e6c  50                   push eax
// 008c6e6d  8d442430             lea eax, [esp + 0x30]
// 008c6e71  64a300000000         mov dword ptr fs:[0], eax
// 008c6e77  8bf1                 mov esi, ecx
// 008c6e79  33ff                 xor edi, edi
// 008c6e7b  897c241c             mov dword ptr [esp + 0x1c], edi
// 008c6e7f  39bea8000000         cmp dword ptr [esi + 0xa8], edi
// 008c6e85  0f84eb010000         je 0x8c7076
// 008c6e8b  39beb8000000         cmp dword ptr [esi + 0xb8], edi
// 008c6e91  0f85df010000         jne 0x8c7076
// 008c6e97  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008c6e9d  3bcf                 cmp ecx, edi
// 008c6e9f  0f84b7010000         je 0x8c705c
// 008c6ea5  39be9c000000         cmp dword ptr [esi + 0x9c], edi
// 008c6eab  0f84ab010000         je 0x8c705c
// 008c6eb1  8b01                 mov eax, dword ptr [ecx]
// 008c6eb3  8b5058               mov edx, dword ptr [eax + 0x58]
// 008c6eb6  ffd2                 call edx
// 008c6eb8  85c0                 test eax, eax
// 008c6eba  0f859c010000         jne 0x8c705c
// 008c6ec0  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 008c6ec6  39b8c8000000         cmp dword ptr [eax + 0xc8], edi
// 008c6ecc  0f848a010000         je 0x8c705c
// 008c6ed2  39787c               cmp dword ptr [eax + 0x7c], edi
// 008c6ed5  0f8581010000         jne 0x8c705c
// 008c6edb  39beb4000000         cmp dword ptr [esi + 0xb4], edi
// 008c6ee1  0f8475010000         je 0x8c705c
// 008c6ee7  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 008c6eed  8ba8c4000000         mov ebp, dword ptr [eax + 0xc4]
// 008c6ef3  397d28               cmp dword ptr [ebp + 0x28], edi
// 008c6ef6  0f8460010000         je 0x8c705c
// 008c6efc  8d4c2420             lea ecx, [esp + 0x20]
// 008c6f00  ff1574de9800         call dword ptr [0x98de74]
// 008c6f06  8d442420             lea eax, [esp + 0x20]
// 008c6f0a  50                   push eax
// 008c6f0b  8bce                 mov ecx, esi
// 008c6f0d  897c243c             mov dword ptr [esp + 0x3c], edi
// 008c6f11  e832cff2ff           call 0x7f3e48
// 008c6f16  8d4c2420             lea ecx, [esp + 0x20]
// 008c6f1a  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c6f20  8d4c2424             lea ecx, [esp + 0x24]
// 008c6f24  51                   push ecx
// 008c6f25  8d54242c             lea edx, [esp + 0x2c]
// 008c6f29  52                   push edx
// 008c6f2a  8bce                 mov ecx, esi
// 008c6f2c  8bd8                 mov ebx, eax
// 008c6f2e  897c2430             mov dword ptr [esp + 0x30], edi
// 008c6f32  897c242c             mov dword ptr [esp + 0x2c], edi
// 008c6f36  e8452cf3ff           call 0x7f9b80
// 008c6f3b  8b442424             mov eax, dword ptr [esp + 0x24]
// 008c6f3f  39442428             cmp dword ptr [esp + 0x28], eax
// 008c6f43  0f8501010000         jne 0x8c704a
// 008c6f49  3bd8                 cmp ebx, eax
// 008c6f4b  0f85f9000000         jne 0x8c704a
// 008c6f51  3bdf                 cmp ebx, edi
// 008c6f53  0f8ef1000000         jle 0x8c704a
// 008c6f59  397d28               cmp dword ptr [ebp + 0x28], edi
// 008c6f5c  0f8ee6000000         jle 0x8c7048
// 008c6f62  57                   push edi
// 008c6f63  8d44241c             lea eax, [esp + 0x1c]
// 008c6f67  50                   push eax
// 008c6f68  8bcd                 mov ecx, ebp
// 008c6f6a  e8d1edf9ff           call 0x865d40
// 008c6f6f  8d4c2418             lea ecx, [esp + 0x18]
// 008c6f73  c644243801           mov byte ptr [esp + 0x38], 1
// 008c6f78  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c6f7e  3bc3                 cmp eax, ebx
// 008c6f80  7e31                 jle 0x8c6fb3
// 008c6f82  53                   push ebx
// 008c6f83  8d4c2430             lea ecx, [esp + 0x30]
// 008c6f87  51                   push ecx
// 008c6f88  8d4c2420             lea ecx, [esp + 0x20]
// 008c6f8c  ff1544cf9800         call dword ptr [0x98cf44]
// 008c6f92  834c241c01           or dword ptr [esp + 0x1c], 1
// 008c6f97  8bc8                 mov ecx, eax
// 008c6f99  ff1580de9800         call dword ptr [0x98de80]
// 008c6f9f  50                   push eax
// 008c6fa0  8d4c2424             lea ecx, [esp + 0x24]
// 008c6fa4  ff15d4cf9800         call dword ptr [0x98cfd4]
// 008c6faa  c644241701           mov byte ptr [esp + 0x17], 1
// 008c6faf  85c0                 test eax, eax
// 008c6fb1  7405                 je 0x8c6fb8
// 008c6fb3  c644241700           mov byte ptr [esp + 0x17], 0
// 008c6fb8  f644241c01           test byte ptr [esp + 0x1c], 1
// 008c6fbd  740f                 je 0x8c6fce
// 008c6fbf  8364241cfe           and dword ptr [esp + 0x1c], 0xfffffffe
// 008c6fc4  8d4c242c             lea ecx, [esp + 0x2c]
// 008c6fc8  ff15c0de9800         call dword ptr [0x98dec0]
// 008c6fce  807c241700           cmp byte ptr [esp + 0x17], 0
// 008c6fd3  8d4c2418             lea ecx, [esp + 0x18]
// 008c6fd7  7517                 jne 0x8c6ff0
// 008c6fd9  c644243800           mov byte ptr [esp + 0x38], 0
// 008c6fde  ff15c0de9800         call dword ptr [0x98dec0]
// 008c6fe4  47                   inc edi
// 008c6fe5  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 008c6fe8  0f8c74ffffff         jl 0x8c6f62
// 008c6fee  eb58                 jmp 0x8c7048
// 008c6ff0  c786b800000001000000 mov dword ptr [esi + 0xb8], 1
// 008c6ffa  ff1580de9800         call dword ptr [0x98de80]
// 008c7000  50                   push eax
// 008c7001  8bce                 mov ecx, esi
// 008c7003  e80cccf2ff           call 0x7f3c14
// 008c7008  8d4c2418             lea ecx, [esp + 0x18]
// 008c700c  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7012  8b5620               mov edx, dword ptr [esi + 0x20]
// 008c7015  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 008c701b  53                   push ebx
// 008c701c  50                   push eax
// 008c701d  68b1000000           push 0xb1
// 008c7022  52                   push edx
// 008c7023  ffd7                 call edi
// 008c7025  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c7028  6a00                 push 0
// 008c702a  6a00                 push 0
// 008c702c  68b7000000           push 0xb7
// 008c7031  50                   push eax
// 008c7032  ffd7                 call edi
// 008c7034  8d4c2418             lea ecx, [esp + 0x18]
// 008c7038  c786b800000000000000 mov dword ptr [esi + 0xb8], 0
// 008c7042  ff15c0de9800         call dword ptr [0x98dec0]
// 008c7048  33ff                 xor edi, edi
// 008c704a  8d4c2420             lea ecx, [esp + 0x20]
// 008c704e  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008c7056  ff15c0de9800         call dword ptr [0x98dec0]
// 008c705c  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 008c7062  7412                 je 0x8c7076
// 008c7064  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008c706a  3bcf                 cmp ecx, edi
// 008c706c  7408                 je 0x8c7076
// 008c706e  56                   push esi
// 008c706f  6a04                 push 4
// 008c7071  e89a08faff           call 0x867910
// 008c7076  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008c707a  64890d00000000       mov dword ptr fs:[0], ecx
// 008c7081  59                   pop ecx
// 008c7082  5f                   pop edi
// 008c7083  5e                   pop esi
// 008c7084  5d                   pop ebp
// 008c7085  5b                   pop ebx
// 008c7086  83c428               add esp, 0x28
// 008c7089  c3                   ret 
// copied from an identical function in another client (function ?OnEnChange@CXTPPropertyGridInplaceEdit@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridInplaceEdit.cpp