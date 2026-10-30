// roc 2011-06 008a9920  unit: CXTPRibbonBar  size: 689 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a9920
//
// 008a9920  6aff                 push -1
// 008a9922  6839aaa000           push 0xa0aa39
// 008a9927  64a100000000         mov eax, dword ptr fs:[0]
// 008a992d  50                   push eax
// 008a992e  51                   push ecx
// 008a992f  53                   push ebx
// 008a9930  55                   push ebp
// 008a9931  56                   push esi
// 008a9932  57                   push edi
// 008a9933  a12058c900           mov eax, dword ptr [0xc95820]
// 008a9938  33c4                 xor eax, esp
// 008a993a  50                   push eax
// 008a993b  8d442418             lea eax, [esp + 0x18]
// 008a993f  64a300000000         mov dword ptr fs:[0], eax
// 008a9945  8bf1                 mov esi, ecx
// 008a9947  6a11                 push 0x11
// 008a9949  ff15601aa400         call dword ptr [0xa41a60]
// 008a994f  6685c0               test ax, ax
// 008a9952  0f8cd5010000         jl 0x8a9b2d
// 008a9958  8bce                 mov ecx, esi
// 008a995a  e83111f7ff           call 0x81aa90
// 008a995f  8be8                 mov ebp, eax
// 008a9961  8b442428             mov eax, dword ptr [esp + 0x28]
// 008a9965  83f812               cmp eax, 0x12
// 008a9968  0f8587000000         jne 0x8a99f5
// 008a996e  8bce                 mov ecx, esi
// 008a9970  e8fbecffff           call 0x8a8670
// 008a9975  85c0                 test eax, eax
// 008a9977  0f8ef6000000         jle 0x8a9a73
// 008a997d  8bcd                 mov ecx, ebp
// 008a997f  e8dc20f8ff           call 0x82ba60
// 008a9984  6a01                 push 1
// 008a9986  8bcd                 mov ecx, ebp
// 008a9988  e8331df8ff           call 0x82b6c0
// 008a998d  8bce                 mov ecx, esi
// 008a998f  c7454401000000       mov dword ptr [ebp + 0x44], 1
// 008a9996  e815cbffff           call 0x8a64b0
// 008a999b  85c0                 test eax, eax
// 008a999d  8b06                 mov eax, dword ptr [esi]
// 008a999f  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 008a99a5  6a01                 push 1
// 008a99a7  7410                 je 0x8a99b9
// 008a99a9  6a01                 push 1
// 008a99ab  6a01                 push 1
// 008a99ad  ffd2                 call edx
// 008a99af  b801000000           mov eax, 1
// 008a99b4  e976010000           jmp 0x8a9b2f
// 008a99b9  6a00                 push 0
// 008a99bb  6a01                 push 1
// 008a99bd  ffd2                 call edx
// 008a99bf  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008a99c5  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 008a99cb  8b06                 mov eax, dword ptr [esi]
// 008a99cd  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 008a99d3  6a01                 push 1
// 008a99d5  52                   push edx
// 008a99d6  8bce                 mov ecx, esi
// 008a99d8  ffd0                 call eax
// 008a99da  8bb668020000         mov esi, dword ptr [esi + 0x268]
// 008a99e0  8b16                 mov edx, dword ptr [esi]
// 008a99e2  8b4270               mov eax, dword ptr [edx + 0x70]
// 008a99e5  6a01                 push 1
// 008a99e7  8bce                 mov ecx, esi
// 008a99e9  ffd0                 call eax
// 008a99eb  b801000000           mov eax, 1
// 008a99f0  e93a010000           jmp 0x8a9b2f
// 008a99f5  8d48cf               lea ecx, [eax - 0x31]
// 008a99f8  83f908               cmp ecx, 8
// 008a99fb  7776                 ja 0x8a9a73
// 008a99fd  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 008a9a03  83c0cf               add eax, -0x31
// 008a9a06  6a00                 push 0
// 008a9a08  50                   push eax
// 008a9a09  e802e3faff           call 0x857d10
// 008a9a0e  8bf8                 mov edi, eax
// 008a9a10  85ff                 test edi, edi
// 008a9a12  745f                 je 0x8a9a73
// 008a9a14  8bcf                 mov ecx, edi
// 008a9a16  e87534bcff           call 0x46ce90
// 008a9a1b  85c0                 test eax, eax
// 008a9a1d  7454                 je 0x8a9a73
// 008a9a1f  8b9f80000000         mov ebx, dword ptr [edi + 0x80]
// 008a9a25  8bcd                 mov ecx, ebp
// 008a9a27  e83420f8ff           call 0x82ba60
// 008a9a2c  6a01                 push 1
// 008a9a2e  8bcd                 mov ecx, ebp
// 008a9a30  e88b1cf8ff           call 0x82b6c0
// 008a9a35  6a01                 push 1
// 008a9a37  c7454402000000       mov dword ptr [ebp + 0x44], 2
// 008a9a3e  8b16                 mov edx, dword ptr [esi]
// 008a9a40  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008a9a46  6a00                 push 0
// 008a9a48  6a01                 push 1
// 008a9a4a  8bce                 mov ecx, esi
// 008a9a4c  ffd0                 call eax
// 008a9a4e  8b16                 mov edx, dword ptr [esi]
// 008a9a50  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 008a9a56  6a01                 push 1
// 008a9a58  53                   push ebx
// 008a9a59  8bce                 mov ecx, esi
// 008a9a5b  ffd0                 call eax
// 008a9a5d  8b17                 mov edx, dword ptr [edi]
// 008a9a5f  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 008a9a65  8bcf                 mov ecx, edi
// 008a9a67  ffd0                 call eax
// 008a9a69  b801000000           mov eax, 1
// 008a9a6e  e9bc000000           jmp 0x8a9b2f
// 008a9a73  8bce                 mov ecx, esi
// 008a9a75  33db                 xor ebx, ebx
// 008a9a77  e8f4ebffff           call 0x8a8670
// 008a9a7c  85c0                 test eax, eax
// 008a9a7e  0f8ea9000000         jle 0x8a9b2d
// 008a9a84  53                   push ebx
// 008a9a85  8bce                 mov ecx, esi
// 008a9a87  e864feffff           call 0x8a98f0
// 008a9a8c  8d4c2414             lea ecx, [esp + 0x14]
// 008a9a90  8bf8                 mov edi, eax
// 008a9a92  51                   push ecx
// 008a9a93  8bcf                 mov ecx, edi
// 008a9a95  e826960200           call 0x8d30c0
// 008a9a9a  8d4c2414             lea ecx, [esp + 0x14]
// 008a9a9e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008a9aa6  ff15b026a400         call dword ptr [0xa426b0]
// 008a9aac  84c0                 test al, al
// 008a9aae  755b                 jne 0x8a9b0b
// 008a9ab0  8bcf                 mov ecx, edi
// 008a9ab2  e8394ef9ff           call 0x83e8f0
// 008a9ab7  85c0                 test eax, eax
// 008a9ab9  7450                 je 0x8a9b0b
// 008a9abb  8bcf                 mov ecx, edi
// 008a9abd  e85e7ebaff           call 0x451920
// 008a9ac2  85c0                 test eax, eax
// 008a9ac4  7445                 je 0x8a9b0b
// 008a9ac6  6a00                 push 0
// 008a9ac8  6a26                 push 0x26
// 008a9aca  8d4c241c             lea ecx, [esp + 0x1c]
// 008a9ace  ff154c27a400         call dword ptr [0xa4274c]
// 008a9ad4  8bf8                 mov edi, eax
// 008a9ad6  83ffff               cmp edi, -1
// 008a9ad9  7e30                 jle 0x8a9b0b
// 008a9adb  8d4c2414             lea ecx, [esp + 0x14]
// 008a9adf  ff15a826a400         call dword ptr [0xa426a8]
// 008a9ae5  48                   dec eax
// 008a9ae6  3bf8                 cmp edi, eax
// 008a9ae8  7d21                 jge 0x8a9b0b
// 008a9aea  8b542428             mov edx, dword ptr [esp + 0x28]
// 008a9aee  52                   push edx
// 008a9aef  47                   inc edi
// 008a9af0  57                   push edi
// 008a9af1  8d4c241c             lea ecx, [esp + 0x1c]
// 008a9af5  ff153c25a400         call dword ptr [0xa4253c]
// 008a9afb  0fb6c0               movzx eax, al
// 008a9afe  50                   push eax
// 008a9aff  e80c66ffff           call 0x8a0110
// 008a9b04  83c408               add esp, 8
// 008a9b07  85c0                 test eax, eax
// 008a9b09  753a                 jne 0x8a9b45
// 008a9b0b  8d4c2414             lea ecx, [esp + 0x14]
// 008a9b0f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008a9b17  ff15082ea400         call dword ptr [0xa42e08]
// 008a9b1d  8bce                 mov ecx, esi
// 008a9b1f  43                   inc ebx
// 008a9b20  e84bebffff           call 0x8a8670
// 008a9b25  3bd8                 cmp ebx, eax
// 008a9b27  0f8c57ffffff         jl 0x8a9a84
// 008a9b2d  33c0                 xor eax, eax
// 008a9b2f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a9b33  64890d00000000       mov dword ptr fs:[0], ecx
// 008a9b3a  59                   pop ecx
// 008a9b3b  5f                   pop edi
// 008a9b3c  5e                   pop esi
// 008a9b3d  5d                   pop ebp
// 008a9b3e  5b                   pop ebx
// 008a9b3f  83c410               add esp, 0x10
// 008a9b42  c20400               ret 4
// 008a9b45  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 008a9b4c  7507                 jne 0x8a9b55
// 008a9b4e  8bcd                 mov ecx, ebp
// 008a9b50  e80b1ff8ff           call 0x82ba60
// 008a9b55  bf01000000           mov edi, 1
// 008a9b5a  57                   push edi
// 008a9b5b  8bcd                 mov ecx, ebp
// 008a9b5d  e85e1bf8ff           call 0x82b6c0
// 008a9b62  89be30010000         mov dword ptr [esi + 0x130], edi
// 008a9b68  53                   push ebx
// 008a9b69  8bce                 mov ecx, esi
// 008a9b6b  897d44               mov dword ptr [ebp + 0x44], edi
// 008a9b6e  e8bdc4ffff           call 0x8a6030
// 008a9b73  8b16                 mov edx, dword ptr [esi]
// 008a9b75  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008a9b7b  57                   push edi
// 008a9b7c  6a00                 push 0
// 008a9b7e  57                   push edi
// 008a9b7f  8bce                 mov ecx, esi
// 008a9b81  ffd0                 call eax
// 008a9b83  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 008a9b89  8b8880000000         mov ecx, dword ptr [eax + 0x80]
// 008a9b8f  8b16                 mov edx, dword ptr [esi]
// 008a9b91  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 008a9b97  57                   push edi
// 008a9b98  51                   push ecx
// 008a9b99  8bce                 mov ecx, esi
// 008a9b9b  ffd2                 call edx
// 008a9b9d  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008a9ba3  8b01                 mov eax, dword ptr [ecx]
// 008a9ba5  8b5070               mov edx, dword ptr [eax + 0x70]
// 008a9ba8  57                   push edi
// 008a9ba9  ffd2                 call edx
// 008a9bab  8bce                 mov ecx, esi
// 008a9bad  e8fec8ffff           call 0x8a64b0
// 008a9bb2  85c0                 test eax, eax
// 008a9bb4  750a                 jne 0x8a9bc0
// 008a9bb6  6a02                 push 2
// 008a9bb8  56                   push esi
// 008a9bb9  8bcd                 mov ecx, ebp
// 008a9bbb  e8202ef8ff           call 0x82c9e0
// 008a9bc0  8d4c2414             lea ecx, [esp + 0x14]
// 008a9bc4  ff15082ea400         call dword ptr [0xa42e08]
// 008a9bca  8bc7                 mov eax, edi
// 008a9bcc  e95effffff           jmp 0x8a9b2f
// copied from an identical function in another client (function ?PreviewAccel@CXTPRibbonBar@@UAEHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonBar.cpp