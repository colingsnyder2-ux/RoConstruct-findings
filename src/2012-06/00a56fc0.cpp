// roc 2012-06 00a56fc0  unit: VCEdit::?$CXTMaskEditT  size: 583 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a56fc0
//
// 00a56fc0  6aff                 push -1
// 00a56fc2  683c74ae00           push 0xae743c
// 00a56fc7  64a100000000         mov eax, dword ptr fs:[0]
// 00a56fcd  50                   push eax
// 00a56fce  83ec1c               sub esp, 0x1c
// 00a56fd1  53                   push ebx
// 00a56fd2  55                   push ebp
// 00a56fd3  56                   push esi
// 00a56fd4  57                   push edi
// 00a56fd5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a56fda  33c4                 xor eax, esp
// 00a56fdc  50                   push eax
// 00a56fdd  8d442430             lea eax, [esp + 0x30]
// 00a56fe1  64a300000000         mov dword ptr fs:[0], eax
// 00a56fe7  8bf1                 mov esi, ecx
// 00a56fe9  33ff                 xor edi, edi
// 00a56feb  897c241c             mov dword ptr [esp + 0x1c], edi
// 00a56fef  39bea8000000         cmp dword ptr [esi + 0xa8], edi
// 00a56ff5  0f84f8010000         je 0xa571f3
// 00a56ffb  39beb8000000         cmp dword ptr [esi + 0xb8], edi
// 00a57001  0f85ec010000         jne 0xa571f3
// 00a57007  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00a5700d  3bcf                 cmp ecx, edi
// 00a5700f  0f84c4010000         je 0xa571d9
// 00a57015  39be9c000000         cmp dword ptr [esi + 0x9c], edi
// 00a5701b  0f84b8010000         je 0xa571d9
// 00a57021  8b01                 mov eax, dword ptr [ecx]
// 00a57023  8b5058               mov edx, dword ptr [eax + 0x58]
// 00a57026  ffd2                 call edx
// 00a57028  85c0                 test eax, eax
// 00a5702a  0f85a9010000         jne 0xa571d9
// 00a57030  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00a57036  39b8c8000000         cmp dword ptr [eax + 0xc8], edi
// 00a5703c  0f8497010000         je 0xa571d9
// 00a57042  39787c               cmp dword ptr [eax + 0x7c], edi
// 00a57045  0f858e010000         jne 0xa571d9
// 00a5704b  39beb4000000         cmp dword ptr [esi + 0xb4], edi
// 00a57051  0f8482010000         je 0xa571d9
// 00a57057  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 00a5705d  8b98c4000000         mov ebx, dword ptr [eax + 0xc4]
// 00a57063  397b28               cmp dword ptr [ebx + 0x28], edi
// 00a57066  0f846d010000         je 0xa571d9
// 00a5706c  8d4c2420             lea ecx, [esp + 0x20]
// 00a57070  ff158447b200         call dword ptr [0xb24784]
// 00a57076  8d442420             lea eax, [esp + 0x20]
// 00a5707a  50                   push eax
// 00a5707b  8bce                 mov ecx, esi
// 00a5707d  897c243c             mov dword ptr [esp + 0x3c], edi
// 00a57081  e870b6f2ff           call 0x9826f6
// 00a57086  8d4c2420             lea ecx, [esp + 0x20]
// 00a5708a  ff155846b200         call dword ptr [0xb24658]
// 00a57090  8d4c2424             lea ecx, [esp + 0x24]
// 00a57094  51                   push ecx
// 00a57095  8d54242c             lea edx, [esp + 0x2c]
// 00a57099  52                   push edx
// 00a5709a  8bce                 mov ecx, esi
// 00a5709c  8be8                 mov ebp, eax
// 00a5709e  897c2430             mov dword ptr [esp + 0x30], edi
// 00a570a2  897c242c             mov dword ptr [esp + 0x2c], edi
// 00a570a6  e8b57ef3ff           call 0x98ef60
// 00a570ab  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a570af  39442428             cmp dword ptr [esp + 0x28], eax
// 00a570b3  0f850e010000         jne 0xa571c7
// 00a570b9  3be8                 cmp ebp, eax
// 00a570bb  0f8506010000         jne 0xa571c7
// 00a570c1  3bef                 cmp ebp, edi
// 00a570c3  0f8efe000000         jle 0xa571c7
// 00a570c9  397b28               cmp dword ptr [ebx + 0x28], edi
// 00a570cc  0f8ef3000000         jle 0xa571c5
// 00a570d2  57                   push edi
// 00a570d3  8d44241c             lea eax, [esp + 0x1c]
// 00a570d7  50                   push eax
// 00a570d8  8bcb                 mov ecx, ebx
// 00a570da  e801b9f9ff           call 0x9f29e0
// 00a570df  8d4c2418             lea ecx, [esp + 0x18]
// 00a570e3  c644243801           mov byte ptr [esp + 0x38], 1
// 00a570e8  ff155846b200         call dword ptr [0xb24658]
// 00a570ee  3bc5                 cmp eax, ebp
// 00a570f0  7e36                 jle 0xa57128
// 00a570f2  55                   push ebp
// 00a570f3  8d4c2430             lea ecx, [esp + 0x30]
// 00a570f7  51                   push ecx
// 00a570f8  8d4c2420             lea ecx, [esp + 0x20]
// 00a570fc  ff152850b200         call dword ptr [0xb25028]
// 00a57102  834c241c01           or dword ptr [esp + 0x1c], 1
// 00a57107  8bc8                 mov ecx, eax
// 00a57109  c644243802           mov byte ptr [esp + 0x38], 2
// 00a5710e  ff159847b200         call dword ptr [0xb24798]
// 00a57114  50                   push eax
// 00a57115  8d4c2424             lea ecx, [esp + 0x24]
// 00a57119  ff151c40b200         call dword ptr [0xb2401c]
// 00a5711f  c644241701           mov byte ptr [esp + 0x17], 1
// 00a57124  85c0                 test eax, eax
// 00a57126  7405                 je 0xa5712d
// 00a57128  c644241700           mov byte ptr [esp + 0x17], 0
// 00a5712d  f644241c01           test byte ptr [esp + 0x1c], 1
// 00a57132  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00a5713a  740f                 je 0xa5714b
// 00a5713c  8364241cfe           and dword ptr [esp + 0x1c], 0xfffffffe
// 00a57141  8d4c242c             lea ecx, [esp + 0x2c]
// 00a57145  ff15d047b200         call dword ptr [0xb247d0]
// 00a5714b  807c241700           cmp byte ptr [esp + 0x17], 0
// 00a57150  8d4c2418             lea ecx, [esp + 0x18]
// 00a57154  7517                 jne 0xa5716d
// 00a57156  c644243800           mov byte ptr [esp + 0x38], 0
// 00a5715b  ff15d047b200         call dword ptr [0xb247d0]
// 00a57161  47                   inc edi
// 00a57162  3b7b28               cmp edi, dword ptr [ebx + 0x28]
// 00a57165  0f8c67ffffff         jl 0xa570d2
// 00a5716b  eb58                 jmp 0xa571c5
// 00a5716d  c786b800000001000000 mov dword ptr [esi + 0xb8], 1
// 00a57177  ff159847b200         call dword ptr [0xb24798]
// 00a5717d  50                   push eax
// 00a5717e  8bce                 mov ecx, esi
// 00a57180  e837b3f2ff           call 0x9824bc
// 00a57185  8d4c2418             lea ecx, [esp + 0x18]
// 00a57189  ff155846b200         call dword ptr [0xb24658]
// 00a5718f  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a57192  8b3d043cb200         mov edi, dword ptr [0xb23c04]
// 00a57198  55                   push ebp
// 00a57199  50                   push eax
// 00a5719a  68b1000000           push 0xb1
// 00a5719f  52                   push edx
// 00a571a0  ffd7                 call edi
// 00a571a2  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a571a5  6a00                 push 0
// 00a571a7  6a00                 push 0
// 00a571a9  68b7000000           push 0xb7
// 00a571ae  50                   push eax
// 00a571af  ffd7                 call edi
// 00a571b1  8d4c2418             lea ecx, [esp + 0x18]
// 00a571b5  c786b800000000000000 mov dword ptr [esi + 0xb8], 0
// 00a571bf  ff15d047b200         call dword ptr [0xb247d0]
// 00a571c5  33ff                 xor edi, edi
// 00a571c7  8d4c2420             lea ecx, [esp + 0x20]
// 00a571cb  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00a571d3  ff15d047b200         call dword ptr [0xb247d0]
// 00a571d9  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 00a571df  7412                 je 0xa571f3
// 00a571e1  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00a571e7  3bcf                 cmp ecx, edi
// 00a571e9  7408                 je 0xa571f3
// 00a571eb  56                   push esi
// 00a571ec  6a04                 push 4
// 00a571ee  e87d71f9ff           call 0x9ee370
// 00a571f3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a571f7  64890d00000000       mov dword ptr fs:[0], ecx
// 00a571fe  59                   pop ecx
// 00a571ff  5f                   pop edi
// 00a57200  5e                   pop esi
// 00a57201  5d                   pop ebp
// 00a57202  5b                   pop ebx
// 00a57203  83c428               add esp, 0x28
// 00a57206  c3                   ret 
// copied from an identical function in another client (function ?OnEnChange@CXTPPropertyGridInplaceEdit@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridInplaceEdit.cpp