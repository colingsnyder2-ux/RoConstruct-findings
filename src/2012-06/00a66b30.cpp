// roc 2012-06 00a66b30  unit: CXTColorSelectorCtrl  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a66b30
//
// 00a66b30  6aff                 push -1
// 00a66b32  688983ae00           push 0xae8389
// 00a66b37  64a100000000         mov eax, dword ptr fs:[0]
// 00a66b3d  50                   push eax
// 00a66b3e  83ec10               sub esp, 0x10
// 00a66b41  53                   push ebx
// 00a66b42  55                   push ebp
// 00a66b43  56                   push esi
// 00a66b44  57                   push edi
// 00a66b45  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a66b4a  33c4                 xor eax, esp
// 00a66b4c  50                   push eax
// 00a66b4d  8d442424             lea eax, [esp + 0x24]
// 00a66b51  64a300000000         mov dword ptr fs:[0], eax
// 00a66b57  8bf9                 mov edi, ecx
// 00a66b59  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00a66b5d  6a01                 push 1
// 00a66b5f  8bcd                 mov ecx, ebp
// 00a66b61  e8422a0300           call 0xa995a8
// 00a66b66  8b7500               mov esi, dword ptr [ebp]
// 00a66b69  83c630               add esi, 0x30
// 00a66b6c  e8df76f8ff           call 0x9ee250
// 00a66b71  05dc000000           add eax, 0xdc
// 00a66b76  50                   push eax
// 00a66b77  8b06                 mov eax, dword ptr [esi]
// 00a66b79  8bcd                 mov ecx, ebp
// 00a66b7b  ffd0                 call eax
// 00a66b7d  f687a400000002       test byte ptr [edi + 0xa4], 2
// 00a66b84  89442420             mov dword ptr [esp + 0x20], eax
// 00a66b88  7579                 jne 0xa66c03
// 00a66b8a  8d4c2434             lea ecx, [esp + 0x34]
// 00a66b8e  ff158447b200         call dword ptr [0xb24784]
// 00a66b94  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00a66b9c  e84f19f9ff           call 0x9f84f0
// 00a66ba1  8b10                 mov edx, dword ptr [eax]
// 00a66ba3  8b5208               mov edx, dword ptr [edx + 8]
// 00a66ba6  68d0240000           push 0x24d0
// 00a66bab  8d4c2438             lea ecx, [esp + 0x38]
// 00a66baf  51                   push ecx
// 00a66bb0  8bc8                 mov ecx, eax
// 00a66bb2  ffd2                 call edx
// 00a66bb4  8b87a4000000         mov eax, dword ptr [edi + 0xa4]
// 00a66bba  8b5d00               mov ebx, dword ptr [ebp]
// 00a66bbd  2410                 and al, 0x10
// 00a66bbf  0fb6f0               movzx esi, al
// 00a66bc2  f7de                 neg esi
// 00a66bc4  1bf6                 sbb esi, esi
// 00a66bc6  83e6e5               and esi, 0xffffffe5
// 00a66bc9  8d4c2434             lea ecx, [esp + 0x34]
// 00a66bcd  83c61b               add esi, 0x1b
// 00a66bd0  83c364               add ebx, 0x64
// 00a66bd3  ff155846b200         call dword ptr [0xb24658]
// 00a66bd9  50                   push eax
// 00a66bda  8d4c2438             lea ecx, [esp + 0x38]
// 00a66bde  ff159847b200         call dword ptr [0xb24798]
// 00a66be4  8b13                 mov edx, dword ptr [ebx]
// 00a66be6  50                   push eax
// 00a66be7  83c604               add esi, 4
// 00a66bea  56                   push esi
// 00a66beb  6a06                 push 6
// 00a66bed  8bcd                 mov ecx, ebp
// 00a66bef  ffd2                 call edx
// 00a66bf1  8d4c2434             lea ecx, [esp + 0x34]
// 00a66bf5  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00a66bfd  ff15d047b200         call dword ptr [0xb247d0]
// 00a66c03  8bb740010000         mov esi, dword ptr [edi + 0x140]
// 00a66c09  33d2                 xor edx, edx
// 00a66c0b  33db                 xor ebx, ebx
// 00a66c0d  3bf2                 cmp esi, edx
// 00a66c0f  7468                 je 0xa66c79
// 00a66c11  eb02                 jmp 0xa66c15
// 00a66c13  33d2                 xor edx, edx
// 00a66c15  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 00a66c18  8b4608               mov eax, dword ptr [esi + 8]
// 00a66c1b  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a66c1f  3bd9                 cmp ebx, ecx
// 00a66c21  7508                 jne 0xa66c2b
// 00a66c23  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a66c26  83f8ff               cmp eax, -1
// 00a66c29  740b                 je 0xa66c36
// 00a66c2b  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a66c2e  89542418             mov dword ptr [esp + 0x18], edx
// 00a66c32  3bd8                 cmp ebx, eax
// 00a66c34  7518                 jne 0xa66c4e
// 00a66c36  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00a66c3e  3bd8                 cmp ebx, eax
// 00a66c40  750c                 jne 0xa66c4e
// 00a66c42  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00a66c4a  3bd9                 cmp ebx, ecx
// 00a66c4c  7404                 je 0xa66c52
// 00a66c4e  89542414             mov dword ptr [esp + 0x14], edx
// 00a66c52  8bcf                 mov ecx, edi
// 00a66c54  e847feffff           call 0xa66aa0
// 00a66c59  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a66c5d  8b10                 mov edx, dword ptr [eax]
// 00a66c5f  8b5214               mov edx, dword ptr [edx + 0x14]
// 00a66c62  51                   push ecx
// 00a66c63  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a66c67  51                   push ecx
// 00a66c68  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a66c6c  55                   push ebp
// 00a66c6d  51                   push ecx
// 00a66c6e  8bc8                 mov ecx, eax
// 00a66c70  ffd2                 call edx
// 00a66c72  8b36                 mov esi, dword ptr [esi]
// 00a66c74  43                   inc ebx
// 00a66c75  85f6                 test esi, esi
// 00a66c77  759a                 jne 0xa66c13
// 00a66c79  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a66c7d  8b4500               mov eax, dword ptr [ebp]
// 00a66c80  8b5030               mov edx, dword ptr [eax + 0x30]
// 00a66c83  51                   push ecx
// 00a66c84  8bcd                 mov ecx, ebp
// 00a66c86  ffd2                 call edx
// 00a66c88  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a66c8c  64890d00000000       mov dword ptr fs:[0], ecx
// 00a66c93  59                   pop ecx
// 00a66c94  5f                   pop edi
// 00a66c95  5e                   pop esi
// 00a66c96  5d                   pop ebp
// 00a66c97  5b                   pop ebx
// 00a66c98  83c41c               add esp, 0x1c
// 00a66c9b  c20400               ret 4
// copied from an identical function in another client (function ?DrawColorSelector@CXTColorSelectorCtrl@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTColorSelectorCtrl.cpp