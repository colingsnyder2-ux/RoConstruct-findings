// roc 2008-06 006dca00  unit: CRobloxTreeCtrl  size: 816 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dca00
//
// 006dca00  83ec78               sub esp, 0x78
// 006dca03  56                   push esi
// 006dca04  57                   push edi
// 006dca05  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 006dca0c  8bf1                 mov esi, ecx
// 006dca0e  85ff                 test edi, edi
// 006dca10  750a                 jne 0x6dca1c
// 006dca12  5f                   pop edi
// 006dca13  33c0                 xor eax, eax
// 006dca15  5e                   pop esi
// 006dca16  83c478               add esp, 0x78
// 006dca19  c20c00               ret 0xc
// 006dca1c  837e0400             cmp dword ptr [esi + 4], 0
// 006dca20  752d                 jne 0x6dca4f
// 006dca22  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 006dca29  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 006dca30  8b7634               mov esi, dword ptr [esi + 0x34]
// 006dca33  6a00                 push 0
// 006dca35  50                   push eax
// 006dca36  51                   push ecx
// 006dca37  6a00                 push 0
// 006dca39  6a00                 push 0
// 006dca3b  6a00                 push 0
// 006dca3d  6a08                 push 8
// 006dca3f  57                   push edi
// 006dca40  8bce                 mov ecx, esi
// 006dca42  e88f46fcff           call 0x6a10d6
// 006dca47  5f                   pop edi
// 006dca48  5e                   pop esi
// 006dca49  83c478               add esp, 0x78
// 006dca4c  c20c00               ret 0xc
// 006dca4f  8b4634               mov eax, dword ptr [esi + 0x34]
// 006dca52  8b5020               mov edx, dword ptr [eax + 0x20]
// 006dca55  55                   push ebp
// 006dca56  6a00                 push 0
// 006dca58  6a09                 push 9
// 006dca5a  680a110000           push 0x110a
// 006dca5f  52                   push edx
// 006dca60  ff15142e8000         call dword ptr [0x802e14]
// 006dca66  8be8                 mov ebp, eax
// 006dca68  33c0                 xor eax, eax
// 006dca6a  3bef                 cmp ebp, edi
// 006dca6c  0f94c0               sete al
// 006dca6f  89442410             mov dword ptr [esp + 0x10], eax
// 006dca73  85ed                 test ebp, ebp
// 006dca75  7417                 je 0x6dca8e
// 006dca77  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dca7a  6a02                 push 2
// 006dca7c  55                   push ebp
// 006dca7d  e89af80d00           call 0x7bc31c
// 006dca82  c744241401000000     mov dword ptr [esp + 0x14], 1
// 006dca8a  a802                 test al, 2
// 006dca8c  7508                 jne 0x6dca96
// 006dca8e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006dca96  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dca99  53                   push ebx
// 006dca9a  6a02                 push 2
// 006dca9c  57                   push edi
// 006dca9d  e87af80d00           call 0x7bc31c
// 006dcaa2  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 006dcaa9  8bf8                 mov edi, eax
// 006dcaab  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 006dcab2  83e0fe               and eax, 0xfffffffe
// 006dcab5  d1ef                 shr edi, 1
// 006dcab7  83e701               and edi, 1
// 006dcaba  89442410             mov dword ptr [esp + 0x10], eax
// 006dcabe  83e3fe               and ebx, 0xfffffffe
// 006dcac1  e86ab50000           call 0x6e8030
// 006dcac6  8bc8                 mov ecx, eax
// 006dcac8  e883be0000           call 0x6e8950
// 006dcacd  f684249400000001     test byte ptr [esp + 0x94], 1
// 006dcad5  0fb6c0               movzx eax, al
// 006dcad8  8944241c             mov dword ptr [esp + 0x1c], eax
// 006dcadc  0f8456010000         je 0x6dcc38
// 006dcae2  f684249000000001     test byte ptr [esp + 0x90], 1
// 006dcaea  0f84e9000000         je 0x6dcbd9
// 006dcaf0  85c0                 test eax, eax
// 006dcaf2  745e                 je 0x6dcb52
// 006dcaf4  837c241400           cmp dword ptr [esp + 0x14], 0
// 006dcaf9  751b                 jne 0x6dcb16
// 006dcafb  85ed                 test ebp, ebp
// 006dcafd  7417                 je 0x6dcb16
// 006dcaff  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dcb02  6a00                 push 0
// 006dcb04  e897f6ffff           call 0x6dc1a0
// 006dcb09  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dcb0c  6a02                 push 2
// 006dcb0e  6a02                 push 2
// 006dcb10  55                   push ebp
// 006dcb11  e8aaf6ffff           call 0x6dc1c0
// 006dcb16  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 006dcb1d  51                   push ecx
// 006dcb1e  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dcb21  e87af6ffff           call 0x6dc1a0
// 006dcb26  85c0                 test eax, eax
// 006dcb28  0f8494010000         je 0x6dccc2
// 006dcb2e  837c241400           cmp dword ptr [esp + 0x14], 0
// 006dcb33  7567                 jne 0x6dcb9c
// 006dcb35  85ed                 test ebp, ebp
// 006dcb37  7463                 je 0x6dcb9c
// 006dcb39  8b542418             mov edx, dword ptr [esp + 0x18]
// 006dcb3d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dcb40  f7da                 neg edx
// 006dcb42  1bd2                 sbb edx, edx
// 006dcb44  6a02                 push 2
// 006dcb46  83e202               and edx, 2
// 006dcb49  52                   push edx
// 006dcb4a  55                   push ebp
// 006dcb4b  e870f6ffff           call 0x6dc1c0
// 006dcb50  eb4a                 jmp 0x6dcb9c
// 006dcb52  837c241400           cmp dword ptr [esp + 0x14], 0
// 006dcb57  752b                 jne 0x6dcb84
// 006dcb59  837c241800           cmp dword ptr [esp + 0x18], 0
// 006dcb5e  7424                 je 0x6dcb84
// 006dcb60  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dcb63  6a00                 push 0
// 006dcb65  e836f6ffff           call 0x6dc1a0
// 006dcb6a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dcb6d  6a02                 push 2
// 006dcb6f  6a02                 push 2
// 006dcb71  55                   push ebp
// 006dcb72  e849f6ffff           call 0x6dc1c0
// 006dcb77  8b4634               mov eax, dword ptr [esi + 0x34]
// 006dcb7a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006dcb7d  51                   push ecx
// 006dcb7e  ff15942c8000         call dword ptr [0x802c94]
// 006dcb84  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 006dcb8b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dcb8e  52                   push edx
// 006dcb8f  e80cf6ffff           call 0x6dc1a0
// 006dcb94  85c0                 test eax, eax
// 006dcb96  0f8426010000         je 0x6dccc2
// 006dcb9c  f684249400000002     test byte ptr [esp + 0x94], 2
// 006dcba4  7425                 je 0x6dcbcb
// 006dcba6  f684249000000002     test byte ptr [esp + 0x90], 2
// 006dcbae  0f8484000000         je 0x6dcc38
// 006dcbb4  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006dcbb9  757d                 jne 0x6dcc38
// 006dcbbb  837c241400           cmp dword ptr [esp + 0x14], 0
// 006dcbc0  746e                 je 0x6dcc30
// 006dcbc2  837c241800           cmp dword ptr [esp + 0x18], 0
// 006dcbc7  746f                 je 0x6dcc38
// 006dcbc9  eb65                 jmp 0x6dcc30
// 006dcbcb  85ff                 test edi, edi
// 006dcbcd  7569                 jne 0x6dcc38
// 006dcbcf  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 006dcbd4  83cb02               or ebx, 2
// 006dcbd7  eb5f                 jmp 0x6dcc38
// 006dcbd9  837c241400           cmp dword ptr [esp + 0x14], 0
// 006dcbde  7458                 je 0x6dcc38
// 006dcbe0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dcbe3  6a00                 push 0
// 006dcbe5  e8b6f5ffff           call 0x6dc1a0
// 006dcbea  f684249400000002     test byte ptr [esp + 0x94], 2
// 006dcbf2  751a                 jne 0x6dcc0e
// 006dcbf4  85ff                 test edi, edi
// 006dcbf6  7440                 je 0x6dcc38
// 006dcbf8  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 006dcbff  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dcc02  6a02                 push 2
// 006dcc04  6a02                 push 2
// 006dcc06  50                   push eax
// 006dcc07  e8b4f5ffff           call 0x6dc1c0
// 006dcc0c  eb2a                 jmp 0x6dcc38
// 006dcc0e  f684249000000002     test byte ptr [esp + 0x90], 2
// 006dcc16  7420                 je 0x6dcc38
// 006dcc18  85ff                 test edi, edi
// 006dcc1a  7414                 je 0x6dcc30
// 006dcc1c  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 006dcc23  6a02                 push 2
// 006dcc25  6a02                 push 2
// 006dcc27  51                   push ecx
// 006dcc28  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dcc2b  e890f5ffff           call 0x6dc1c0
// 006dcc30  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 006dcc35  83e3fd               and ebx, 0xfffffffd
// 006dcc38  85db                 test ebx, ebx
// 006dcc3a  0f84c8000000         je 0x6dcd08
// 006dcc40  f6c302               test bl, 2
// 006dcc43  0f84b4000000         je 0x6dccfd
// 006dcc49  8b4634               mov eax, dword ptr [esi + 0x34]
// 006dcc4c  8b5020               mov edx, dword ptr [eax + 0x20]
// 006dcc4f  89542420             mov dword ptr [esp + 0x20], edx
// 006dcc53  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dcc56  50                   push eax
// 006dcc57  ff15682b8000         call dword ptr [0x802b68]
// 006dcc5d  89442424             mov dword ptr [esp + 0x24], eax
// 006dcc61  33c0                 xor eax, eax
// 006dcc63  f644241002           test byte ptr [esp + 0x10], 2
// 006dcc68  c74424286ffeffff     mov dword ptr [esp + 0x28], 0xfffffe6f
// 006dcc70  89442458             mov dword ptr [esp + 0x58], eax
// 006dcc74  89442430             mov dword ptr [esp + 0x30], eax
// 006dcc78  8944245c             mov dword ptr [esp + 0x5c], eax
// 006dcc7c  89442434             mov dword ptr [esp + 0x34], eax
// 006dcc80  8d7c2458             lea edi, [esp + 0x58]
// 006dcc84  7504                 jne 0x6dcc8a
// 006dcc86  8d7c2430             lea edi, [esp + 0x30]
// 006dcc8a  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 006dcc91  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dcc94  55                   push ebp
// 006dcc95  c70714000000         mov dword ptr [edi], 0x14
// 006dcc9b  896f04               mov dword ptr [edi + 4], ebp
// 006dcc9e  e8b342fcff           call 0x6a0f56
// 006dcca3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006dcca7  8b16                 mov edx, dword ptr [esi]
// 006dcca9  8b524c               mov edx, dword ptr [edx + 0x4c]
// 006dccac  894724               mov dword ptr [edi + 0x24], eax
// 006dccaf  8d442420             lea eax, [esp + 0x20]
// 006dccb3  894f08               mov dword ptr [edi + 8], ecx
// 006dccb6  50                   push eax
// 006dccb7  8bce                 mov ecx, esi
// 006dccb9  895f0c               mov dword ptr [edi + 0xc], ebx
// 006dccbc  ffd2                 call edx
// 006dccbe  85c0                 test eax, eax
// 006dccc0  740c                 je 0x6dccce
// 006dccc2  5b                   pop ebx
// 006dccc3  5d                   pop ebp
// 006dccc4  5f                   pop edi
// 006dccc5  33c0                 xor eax, eax
// 006dccc7  5e                   pop esi
// 006dccc8  83c478               add esp, 0x78
// 006dcccb  c20c00               ret 0xc
// 006dccce  8b442410             mov eax, dword ptr [esp + 0x10]
// 006dccd2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dccd5  53                   push ebx
// 006dccd6  50                   push eax
// 006dccd7  55                   push ebp
// 006dccd8  e8e3f4ffff           call 0x6dc1c0
// 006dccdd  8b16                 mov edx, dword ptr [esi]
// 006dccdf  8b524c               mov edx, dword ptr [edx + 0x4c]
// 006dcce2  8d442420             lea eax, [esp + 0x20]
// 006dcce6  50                   push eax
// 006dcce7  8bce                 mov ecx, esi
// 006dcce9  c744242c6efeffff     mov dword ptr [esp + 0x2c], 0xfffffe6e
// 006dccf1  ffd2                 call edx
// 006dccf3  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 006dccf8  83e3fd               and ebx, 0xfffffffd
// 006dccfb  eb07                 jmp 0x6dcd04
// 006dccfd  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 006dcd04  85db                 test ebx, ebx
// 006dcd06  750f                 jne 0x6dcd17
// 006dcd08  5b                   pop ebx
// 006dcd09  5d                   pop ebp
// 006dcd0a  5f                   pop edi
// 006dcd0b  b801000000           mov eax, 1
// 006dcd10  5e                   pop esi
// 006dcd11  83c478               add esp, 0x78
// 006dcd14  c20c00               ret 0xc
// 006dcd17  8b442410             mov eax, dword ptr [esp + 0x10]
// 006dcd1b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dcd1e  53                   push ebx
// 006dcd1f  50                   push eax
// 006dcd20  55                   push ebp
// 006dcd21  e89af4ffff           call 0x6dc1c0
// 006dcd26  5b                   pop ebx
// 006dcd27  5d                   pop ebp
// 006dcd28  5f                   pop edi
// 006dcd29  5e                   pop esi
// 006dcd2a  83c478               add esp, 0x78
// 006dcd2d  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?SetItemState@CXTTreeBase@@QAEHPAU_TREEITEM@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
