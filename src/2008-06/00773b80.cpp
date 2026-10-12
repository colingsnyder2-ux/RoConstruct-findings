// from server: 100% by tester
// roc 2008-06 00773b80  unit: VCEdit::?$CXTMaskEditT  size: 570 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773b80
//
// 00773b80  6aff                 push -1
// 00773b82  6832ac7e00           push 0x7eac32
// 00773b87  64a100000000         mov eax, dword ptr fs:[0]
// 00773b8d  50                   push eax
// 00773b8e  83ec1c               sub esp, 0x1c
// 00773b91  53                   push ebx
// 00773b92  55                   push ebp
// 00773b93  56                   push esi
// 00773b94  57                   push edi
// 00773b95  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 00773b9a  33c4                 xor eax, esp
// 00773b9c  50                   push eax
// 00773b9d  8d442430             lea eax, [esp + 0x30]
// 00773ba1  64a300000000         mov dword ptr fs:[0], eax
// 00773ba7  8bf1                 mov esi, ecx
// 00773ba9  33ff                 xor edi, edi
// 00773bab  897c241c             mov dword ptr [esp + 0x1c], edi
// 00773baf  39bea8000000         cmp dword ptr [esi + 0xa8], edi
// 00773bb5  0f84eb010000         je 0x773da6
// 00773bbb  39beb8000000         cmp dword ptr [esi + 0xb8], edi
// 00773bc1  0f85df010000         jne 0x773da6
// 00773bc7  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00773bcd  3bcf                 cmp ecx, edi
// 00773bcf  0f84b7010000         je 0x773d8c
// 00773bd5  39be9c000000         cmp dword ptr [esi + 0x9c], edi
// 00773bdb  0f84ab010000         je 0x773d8c
// 00773be1  8b01                 mov eax, dword ptr [ecx]
// 00773be3  8b5058               mov edx, dword ptr [eax + 0x58]
// 00773be6  ffd2                 call edx
// 00773be8  85c0                 test eax, eax
// 00773bea  0f859c010000         jne 0x773d8c
// 00773bf0  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00773bf6  39b8c8000000         cmp dword ptr [eax + 0xc8], edi
// 00773bfc  0f848a010000         je 0x773d8c
// 00773c02  39787c               cmp dword ptr [eax + 0x7c], edi
// 00773c05  0f8581010000         jne 0x773d8c
// 00773c0b  39beb4000000         cmp dword ptr [esi + 0xb4], edi
// 00773c11  0f8475010000         je 0x773d8c
// 00773c17  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 00773c1d  8ba8c4000000         mov ebp, dword ptr [eax + 0xc4]
// 00773c23  397d28               cmp dword ptr [ebp + 0x28], edi
// 00773c26  0f8460010000         je 0x773d8c
// 00773c2c  8d4c2420             lea ecx, [esp + 0x20]
// 00773c30  ff15043f8000         call dword ptr [0x803f04]
// 00773c36  8d442420             lea eax, [esp + 0x20]
// 00773c3a  50                   push eax
// 00773c3b  8bce                 mov ecx, esi
// 00773c3d  897c243c             mov dword ptr [esp + 0x3c], edi
// 00773c41  e834d0f2ff           call 0x6a0c7a
// 00773c46  8d4c2420             lea ecx, [esp + 0x20]
// 00773c4a  ff15e02f8000         call dword ptr [0x802fe0]
// 00773c50  8d4c2424             lea ecx, [esp + 0x24]
// 00773c54  51                   push ecx
// 00773c55  8d54242c             lea edx, [esp + 0x2c]
// 00773c59  52                   push edx
// 00773c5a  8bce                 mov ecx, esi
// 00773c5c  8bd8                 mov ebx, eax
// 00773c5e  897c2430             mov dword ptr [esp + 0x30], edi
// 00773c62  897c242c             mov dword ptr [esp + 0x2c], edi
// 00773c66  e83537f3ff           call 0x6a73a0
// 00773c6b  8b442424             mov eax, dword ptr [esp + 0x24]
// 00773c6f  39442428             cmp dword ptr [esp + 0x28], eax
// 00773c73  0f8501010000         jne 0x773d7a
// 00773c79  3bd8                 cmp ebx, eax
// 00773c7b  0f85f9000000         jne 0x773d7a
// 00773c81  3bdf                 cmp ebx, edi
// 00773c83  0f8ef1000000         jle 0x773d7a
// 00773c89  397d28               cmp dword ptr [ebp + 0x28], edi
// 00773c8c  0f8ee6000000         jle 0x773d78
// 00773c92  57                   push edi
// 00773c93  8d44241c             lea eax, [esp + 0x1c]
// 00773c97  50                   push eax
// 00773c98  8bcd                 mov ecx, ebp
// 00773c9a  e8a1e8f9ff           call 0x712540
// 00773c9f  8d4c2418             lea ecx, [esp + 0x18]
// 00773ca3  c644243801           mov byte ptr [esp + 0x38], 1
// 00773ca8  ff15e02f8000         call dword ptr [0x802fe0]
// 00773cae  3bc3                 cmp eax, ebx
// 00773cb0  7e31                 jle 0x773ce3
// 00773cb2  53                   push ebx
// 00773cb3  8d4c2430             lea ecx, [esp + 0x30]
// 00773cb7  51                   push ecx
// 00773cb8  8d4c2420             lea ecx, [esp + 0x20]
// 00773cbc  ff1580368000         call dword ptr [0x803680]
// 00773cc2  834c241c01           or dword ptr [esp + 0x1c], 1
// 00773cc7  8bc8                 mov ecx, eax
// 00773cc9  ff15e03e8000         call dword ptr [0x803ee0]
// 00773ccf  50                   push eax
// 00773cd0  8d4c2424             lea ecx, [esp + 0x24]
// 00773cd4  ff1528368000         call dword ptr [0x803628]
// 00773cda  c644241701           mov byte ptr [esp + 0x17], 1
// 00773cdf  85c0                 test eax, eax
// 00773ce1  7405                 je 0x773ce8
// 00773ce3  c644241700           mov byte ptr [esp + 0x17], 0
// 00773ce8  f644241c01           test byte ptr [esp + 0x1c], 1
// 00773ced  740f                 je 0x773cfe
// 00773cef  8364241cfe           and dword ptr [esp + 0x1c], 0xfffffffe
// 00773cf4  8d4c242c             lea ecx, [esp + 0x2c]
// 00773cf8  ff15143f8000         call dword ptr [0x803f14]
// 00773cfe  807c241700           cmp byte ptr [esp + 0x17], 0
// 00773d03  8d4c2418             lea ecx, [esp + 0x18]
// 00773d07  7517                 jne 0x773d20
// 00773d09  c644243800           mov byte ptr [esp + 0x38], 0
// 00773d0e  ff15143f8000         call dword ptr [0x803f14]
// 00773d14  47                   inc edi
// 00773d15  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 00773d18  0f8c74ffffff         jl 0x773c92
// 00773d1e  eb58                 jmp 0x773d78
// 00773d20  c786b800000001000000 mov dword ptr [esi + 0xb8], 1
// 00773d2a  ff15e03e8000         call dword ptr [0x803ee0]
// 00773d30  50                   push eax
// 00773d31  8bce                 mov ecx, esi
// 00773d33  e8e2cef2ff           call 0x6a0c1a
// 00773d38  8d4c2418             lea ecx, [esp + 0x18]
// 00773d3c  ff15e02f8000         call dword ptr [0x802fe0]
// 00773d42  8b5620               mov edx, dword ptr [esi + 0x20]
// 00773d45  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 00773d4b  53                   push ebx
// 00773d4c  50                   push eax
// 00773d4d  68b1000000           push 0xb1
// 00773d52  52                   push edx
// 00773d53  ffd7                 call edi
// 00773d55  8b4620               mov eax, dword ptr [esi + 0x20]
// 00773d58  6a00                 push 0
// 00773d5a  6a00                 push 0
// 00773d5c  68b7000000           push 0xb7
// 00773d61  50                   push eax
// 00773d62  ffd7                 call edi
// 00773d64  8d4c2418             lea ecx, [esp + 0x18]
// 00773d68  c786b800000000000000 mov dword ptr [esi + 0xb8], 0
// 00773d72  ff15143f8000         call dword ptr [0x803f14]
// 00773d78  33ff                 xor edi, edi
// 00773d7a  8d4c2420             lea ecx, [esp + 0x20]
// 00773d7e  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00773d86  ff15143f8000         call dword ptr [0x803f14]
// 00773d8c  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 00773d92  7412                 je 0x773da6
// 00773d94  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00773d9a  3bcf                 cmp ecx, edi
// 00773d9c  7408                 je 0x773da6
// 00773d9e  56                   push esi
// 00773d9f  6a04                 push 4
// 00773da1  e85a03faff           call 0x714100
// 00773da6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00773daa  64890d00000000       mov dword ptr fs:[0], ecx
// 00773db1  59                   pop ecx
// 00773db2  5f                   pop edi
// 00773db3  5e                   pop esi
// 00773db4  5d                   pop ebp
// 00773db5  5b                   pop ebx
// 00773db6  83c428               add esp, 0x28
// 00773db9  c3                   ret 

// RTM desktop manifest: 5f23cab0a07143b351dd962ac48278660cc3d9364f7ff11eb6cdb03260bb4dbc
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridInplaceEdit.cpp
