// roc 2008-06 00591a30  unit: RBX::RootInstance  size: 401 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00591a30
//
// 00591a30  64a100000000         mov eax, dword ptr fs:[0]
// 00591a36  6aff                 push -1
// 00591a38  68be1c7d00           push 0x7d1cbe
// 00591a3d  50                   push eax
// 00591a3e  64892500000000       mov dword ptr fs:[0], esp
// 00591a45  53                   push ebx
// 00591a46  55                   push ebp
// 00591a47  56                   push esi
// 00591a48  57                   push edi
// 00591a49  bb01000000           mov ebx, 1
// 00591a4e  33ff                 xor edi, edi
// 00591a50  841d505c9700         test byte ptr [0x975c50], bl
// 00591a56  7526                 jne 0x591a7e
// 00591a58  091d505c9700         or dword ptr [0x975c50], ebx
// 00591a5e  6aff                 push -1
// 00591a60  68bc1e8300           push 0x831ebc
// 00591a65  897c2420             mov dword ptr [esp + 0x20], edi
// 00591a69  e82225fcff           call 0x553f90
// 00591a6e  83c408               add esp, 8
// 00591a71  a34c5c9700           mov dword ptr [0x975c4c], eax
// 00591a76  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00591a7e  6a28                 push 0x28
// 00591a80  e89bee1000           call 0x6a0920
// 00591a85  83c404               add esp, 4
// 00591a88  3bc7                 cmp eax, edi
// 00591a8a  741e                 je 0x591aaa
// 00591a8c  8b0d74539700         mov ecx, dword ptr [0x975374]
// 00591a92  8938                 mov dword ptr [eax], edi
// 00591a94  897804               mov dword ptr [eax + 4], edi
// 00591a97  897808               mov dword ptr [eax + 8], edi
// 00591a9a  894810               mov dword ptr [eax + 0x10], ecx
// 00591a9d  897814               mov dword ptr [eax + 0x14], edi
// 00591aa0  897820               mov dword ptr [eax + 0x20], edi
// 00591aa3  897824               mov dword ptr [eax + 0x24], edi
// 00591aa6  8bf0                 mov esi, eax
// 00591aa8  eb02                 jmp 0x591aac
// 00591aaa  33f6                 xor esi, esi
// 00591aac  a14c5c9700           mov eax, dword ptr [0x975c4c]
// 00591ab1  68981e8300           push 0x831e98
// 00591ab6  50                   push eax
// 00591ab7  8bce                 mov ecx, esi
// 00591ab9  e8b2feffff           call 0x591970
// 00591abe  8b0dfc529700         mov ecx, dword ptr [0x9752fc]
// 00591ac4  686c1e8300           push 0x831e6c
// 00591ac9  51                   push ecx
// 00591aca  8bce                 mov ecx, esi
// 00591acc  e89ffeffff           call 0x591970
// 00591ad1  8b1530539700         mov edx, dword ptr [0x975330]
// 00591ad7  68481e8300           push 0x831e48
// 00591adc  52                   push edx
// 00591add  8bce                 mov ecx, esi
// 00591adf  e88cfeffff           call 0x591970
// 00591ae4  8b2d60539700         mov ebp, dword ptr [0x975360]
// 00591aea  6a18                 push 0x18
// 00591aec  e82fee1000           call 0x6a0920
// 00591af1  83c404               add esp, 4
// 00591af4  3bc7                 cmp eax, edi
// 00591af6  7415                 je 0x591b0d
// 00591af8  8938                 mov dword ptr [eax], edi
// 00591afa  896808               mov dword ptr [eax + 8], ebp
// 00591afd  c7400c05000000       mov dword ptr [eax + 0xc], 5
// 00591b04  c7401004000000       mov dword ptr [eax + 0x10], 4
// 00591b0b  eb02                 jmp 0x591b0f
// 00591b0d  33c0                 xor eax, eax
// 00591b0f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00591b12  3bcf                 cmp ecx, edi
// 00591b14  7505                 jne 0x591b1b
// 00591b16  894620               mov dword ptr [esi + 0x20], eax
// 00591b19  eb02                 jmp 0x591b1d
// 00591b1b  8901                 mov dword ptr [ecx], eax
// 00591b1d  6a28                 push 0x28
// 00591b1f  894624               mov dword ptr [esi + 0x24], eax
// 00591b22  e8f9ed1000           call 0x6a0920
// 00591b27  83c404               add esp, 4
// 00591b2a  3bc7                 cmp eax, edi
// 00591b2c  7425                 je 0x591b53
// 00591b2e  8b0d1c539700         mov ecx, dword ptr [0x97531c]
// 00591b34  8b1558539700         mov edx, dword ptr [0x975358]
// 00591b3a  8938                 mov dword ptr [eax], edi
// 00591b3c  897804               mov dword ptr [eax + 4], edi
// 00591b3f  897808               mov dword ptr [eax + 8], edi
// 00591b42  895010               mov dword ptr [eax + 0x10], edx
// 00591b45  895814               mov dword ptr [eax + 0x14], ebx
// 00591b48  894818               mov dword ptr [eax + 0x18], ecx
// 00591b4b  897820               mov dword ptr [eax + 0x20], edi
// 00591b4e  897824               mov dword ptr [eax + 0x24], edi
// 00591b51  eb02                 jmp 0x591b55
// 00591b53  33c0                 xor eax, eax
// 00591b55  8b4e08               mov ecx, dword ptr [esi + 8]
// 00591b58  3bcf                 cmp ecx, edi
// 00591b5a  7505                 jne 0x591b61
// 00591b5c  894604               mov dword ptr [esi + 4], eax
// 00591b5f  eb02                 jmp 0x591b63
// 00591b61  8901                 mov dword ptr [ecx], eax
// 00591b63  6a28                 push 0x28
// 00591b65  894608               mov dword ptr [esi + 8], eax
// 00591b68  e8b3ed1000           call 0x6a0920
// 00591b6d  83c404               add esp, 4
// 00591b70  3bc7                 cmp eax, edi
// 00591b72  7425                 je 0x591b99
// 00591b74  8b0d84539700         mov ecx, dword ptr [0x975384]
// 00591b7a  8b1558539700         mov edx, dword ptr [0x975358]
// 00591b80  8938                 mov dword ptr [eax], edi
// 00591b82  897804               mov dword ptr [eax + 4], edi
// 00591b85  897808               mov dword ptr [eax + 8], edi
// 00591b88  895010               mov dword ptr [eax + 0x10], edx
// 00591b8b  895814               mov dword ptr [eax + 0x14], ebx
// 00591b8e  894818               mov dword ptr [eax + 0x18], ecx
// 00591b91  897820               mov dword ptr [eax + 0x20], edi
// 00591b94  897824               mov dword ptr [eax + 0x24], edi
// 00591b97  eb02                 jmp 0x591b9b
// 00591b99  33c0                 xor eax, eax
// 00591b9b  8b4e08               mov ecx, dword ptr [esi + 8]
// 00591b9e  3bcf                 cmp ecx, edi
// 00591ba0  7505                 jne 0x591ba7
// 00591ba2  894604               mov dword ptr [esi + 4], eax
// 00591ba5  eb02                 jmp 0x591ba9
// 00591ba7  8901                 mov dword ptr [ecx], eax
// 00591ba9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00591bad  894608               mov dword ptr [esi + 8], eax
// 00591bb0  5f                   pop edi
// 00591bb1  8bc6                 mov eax, esi
// 00591bb3  5e                   pop esi
// 00591bb4  5d                   pop ebp
// 00591bb5  64890d00000000       mov dword ptr fs:[0], ecx
// 00591bbc  5b                   pop ebx
// 00591bbd  83c40c               add esp, 0xc
// 00591bc0  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?newRootElement@SerializerV2@@SAPAVXmlElement@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
