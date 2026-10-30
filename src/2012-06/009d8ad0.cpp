// roc 2012-06 009d8ad0  unit: CXTPPropExchange  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d8ad0
//
// 009d8ad0  6aff                 push -1
// 009d8ad2  687204ae00           push 0xae0472
// 009d8ad7  64a100000000         mov eax, dword ptr fs:[0]
// 009d8add  50                   push eax
// 009d8ade  51                   push ecx
// 009d8adf  53                   push ebx
// 009d8ae0  55                   push ebp
// 009d8ae1  56                   push esi
// 009d8ae2  57                   push edi
// 009d8ae3  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009d8ae8  33c4                 xor eax, esp
// 009d8aea  50                   push eax
// 009d8aeb  8d442418             lea eax, [esp + 0x18]
// 009d8aef  64a300000000         mov dword ptr fs:[0], eax
// 009d8af5  8be9                 mov ebp, ecx
// 009d8af7  837d2800             cmp dword ptr [ebp + 0x28], 0
// 009d8afb  8d4c2414             lea ecx, [esp + 0x14]
// 009d8aff  0f858c000000         jne 0x9d8b91
// 009d8b05  ff158447b200         call dword ptr [0xb24784]
// 009d8b0b  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 009d8b0f  8b07                 mov eax, dword ptr [edi]
// 009d8b11  c744242000000000     mov dword ptr [esp + 0x20], 0
// 009d8b19  85c0                 test eax, eax
// 009d8b1b  7657                 jbe 0x9d8b74
// 009d8b1d  8d440001             lea eax, [eax + eax + 1]
// 009d8b21  50                   push eax
// 009d8b22  e8c998faff           call 0x9823f0
// 009d8b27  8bf0                 mov esi, eax
// 009d8b29  33c0                 xor eax, eax
// 009d8b2b  83c404               add esp, 4
// 009d8b2e  3907                 cmp dword ptr [edi], eax
// 009d8b30  7628                 jbe 0x9d8b5a
// 009d8b32  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009d8b36  8b11                 mov edx, dword ptr [ecx]
// 009d8b38  0fb61410             movzx edx, byte ptr [eax + edx]
// 009d8b3c  80e20f               and dl, 0xf
// 009d8b3f  80c241               add dl, 0x41
// 009d8b42  881446               mov byte ptr [esi + eax*2], dl
// 009d8b45  8b11                 mov edx, dword ptr [ecx]
// 009d8b47  0fb61410             movzx edx, byte ptr [eax + edx]
// 009d8b4b  c0ea04               shr dl, 4
// 009d8b4e  80c241               add dl, 0x41
// 009d8b51  88544601             mov byte ptr [esi + eax*2 + 1], dl
// 009d8b55  40                   inc eax
// 009d8b56  3b07                 cmp eax, dword ptr [edi]
// 009d8b58  72dc                 jb 0x9d8b36
// 009d8b5a  8b07                 mov eax, dword ptr [edi]
// 009d8b5c  56                   push esi
// 009d8b5d  8d4c2418             lea ecx, [esp + 0x18]
// 009d8b61  c6044600             mov byte ptr [esi + eax*2], 0
// 009d8b65  ff157847b200         call dword ptr [0xb24778]
// 009d8b6b  56                   push esi
// 009d8b6c  e84998faff           call 0x9823ba
// 009d8b71  83c404               add esp, 4
// 009d8b74  8b542428             mov edx, dword ptr [esp + 0x28]
// 009d8b78  68e83bb400           push 0xb43be8
// 009d8b7d  8d4c2418             lea ecx, [esp + 0x18]
// 009d8b81  51                   push ecx
// 009d8b82  52                   push edx
// 009d8b83  55                   push ebp
// 009d8b84  e887f8ffff           call 0x9d8410
// 009d8b89  83c410               add esp, 0x10
// 009d8b8c  e9d5000000           jmp 0x9d8c66
// 009d8b91  ff158447b200         call dword ptr [0xb24784]
// 009d8b97  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009d8b9b  8d442414             lea eax, [esp + 0x14]
// 009d8b9f  50                   push eax
// 009d8ba0  51                   push ecx
// 009d8ba1  55                   push ebp
// 009d8ba2  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 009d8baa  e831f8ffff           call 0x9d83e0
// 009d8baf  83c40c               add esp, 0xc
// 009d8bb2  8d4c2414             lea ecx, [esp + 0x14]
// 009d8bb6  85c0                 test eax, eax
// 009d8bb8  745d                 je 0x9d8c17
// 009d8bba  ff155846b200         call dword ptr [0xb24658]
// 009d8bc0  85c0                 test eax, eax
// 009d8bc2  0f8e9e000000         jle 0x9d8c66
// 009d8bc8  8d4c2414             lea ecx, [esp + 0x14]
// 009d8bcc  ff155846b200         call dword ptr [0xb24658]
// 009d8bd2  8bf8                 mov edi, eax
// 009d8bd4  85ff                 test edi, edi
// 009d8bd6  743b                 je 0x9d8c13
// 009d8bd8  8bd7                 mov edx, edi
// 009d8bda  81e201000080         and edx, 0x80000001
// 009d8be0  7905                 jns 0x9d8be7
// 009d8be2  4a                   dec edx
// 009d8be3  83cafe               or edx, 0xfffffffe
// 009d8be6  42                   inc edx
// 009d8be7  752a                 jne 0x9d8c13
// 009d8be9  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 009d8bed  99                   cdq 
// 009d8bee  2bc2                 sub eax, edx
// 009d8bf0  8bf0                 mov esi, eax
// 009d8bf2  d1fe                 sar esi, 1
// 009d8bf4  837d0000             cmp dword ptr [ebp], 0
// 009d8bf8  7527                 jne 0x9d8c21
// 009d8bfa  56                   push esi
// 009d8bfb  ff15f829b200         call dword ptr [0xb229f8]
// 009d8c01  894500               mov dword ptr [ebp], eax
// 009d8c04  8b442434             mov eax, dword ptr [esp + 0x34]
// 009d8c08  83c404               add esp, 4
// 009d8c0b  8930                 mov dword ptr [eax], esi
// 009d8c0d  837d0000             cmp dword ptr [ebp], 0
// 009d8c11  7516                 jne 0x9d8c29
// 009d8c13  8d4c2414             lea ecx, [esp + 0x14]
// 009d8c17  ff15d047b200         call dword ptr [0xb247d0]
// 009d8c1d  33c0                 xor eax, eax
// 009d8c1f  eb54                 jmp 0x9d8c75
// 009d8c21  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009d8c25  3931                 cmp dword ptr [ecx], esi
// 009d8c27  72ea                 jb 0x9d8c13
// 009d8c29  33f6                 xor esi, esi
// 009d8c2b  85ff                 test edi, edi
// 009d8c2d  7e37                 jle 0x9d8c66
// 009d8c2f  90                   nop 
// 009d8c30  8d5601               lea edx, [esi + 1]
// 009d8c33  52                   push edx
// 009d8c34  8d4c2418             lea ecx, [esp + 0x18]
// 009d8c38  ff15e844b200         call dword ptr [0xb244e8]
// 009d8c3e  8ad8                 mov bl, al
// 009d8c40  fecb                 dec bl
// 009d8c42  c0e304               shl bl, 4
// 009d8c45  56                   push esi
// 009d8c46  8d4c2418             lea ecx, [esp + 0x18]
// 009d8c4a  80eb41               sub bl, 0x41
// 009d8c4d  ff15e844b200         call dword ptr [0xb244e8]
// 009d8c53  8b5500               mov edx, dword ptr [ebp]
// 009d8c56  8bce                 mov ecx, esi
// 009d8c58  02c3                 add al, bl
// 009d8c5a  d1e9                 shr ecx, 1
// 009d8c5c  83c602               add esi, 2
// 009d8c5f  3bf7                 cmp esi, edi
// 009d8c61  880411               mov byte ptr [ecx + edx], al
// 009d8c64  7cca                 jl 0x9d8c30
// 009d8c66  8d4c2414             lea ecx, [esp + 0x14]
// 009d8c6a  ff15d047b200         call dword ptr [0xb247d0]
// 009d8c70  b801000000           mov eax, 1
// 009d8c75  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009d8c79  64890d00000000       mov dword ptr fs:[0], ecx
// 009d8c80  59                   pop ecx
// 009d8c81  5f                   pop edi
// 009d8c82  5e                   pop esi
// 009d8c83  5d                   pop ebp
// 009d8c84  5b                   pop ebx
// 009d8c85  83c410               add esp, 0x10
// 009d8c88  c20c00               ret 0xc
// copied from an identical function in another client (function ?ExchangeBlobProp@CXTPPropExchange@@UAEHPBDAAPAEAAK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPPropExchange.cpp